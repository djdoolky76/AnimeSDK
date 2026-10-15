#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"
class DFEGGFFOMKI;
namespace System { class Object; }

#define DFEGGFFOMKI___C_CCTOR_OFFSET UNITYSDK_OFFSET(0x1E1A03C0)
#define DFEGGFFOMKI___C_CTOR_OFFSET UNITYSDK_OFFSET(0x1E1A0400)
#define DFEGGFFOMKI___C___CCTOR_B__48_0_OFFSET UNITYSDK_OFFSET(0x1E1A0410)

	class DFEGGFFOMKI___c : public ::System::Object
	{
	public:
		static ::System::Object** StaticGet___9()
		{
			return (::System::Object**)UnitySDK::FromName("", "<>c")->GetStaticField(0x32630);
		}

		static ::System::Void _cctor()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + DFEGGFFOMKI___C_CCTOR_OFFSET))();
		}

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + DFEGGFFOMKI___C_CTOR_OFFSET))(this);
		}

		::DFEGGFFOMKI* __cctor_b__48_0()
		{
			return ((::DFEGGFFOMKI*(*)(::PVOID))((::PBYTE)hIl2Cpp + DFEGGFFOMKI___C___CCTOR_B__48_0_OFFSET))(this);
		}

	};
