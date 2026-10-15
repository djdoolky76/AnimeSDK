#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"
class ALJJJEFJLKA;
namespace System { class Object; }

#define ALJJJEFJLKA___C_CCTOR_OFFSET UNITYSDK_OFFSET(0x1E5106A0)
#define ALJJJEFJLKA___C_CTOR_OFFSET UNITYSDK_OFFSET(0x1E5106E0)
#define ALJJJEFJLKA___C___CCTOR_B__23_0_OFFSET UNITYSDK_OFFSET(0x1E5106F0)

	class ALJJJEFJLKA___c : public ::System::Object
	{
	public:
		static ::System::Object** StaticGet___9()
		{
			return (::System::Object**)UnitySDK::FromName("", "<>c")->GetStaticField(0x394F0);
		}

		static ::System::Void _cctor()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + ALJJJEFJLKA___C_CCTOR_OFFSET))();
		}

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + ALJJJEFJLKA___C_CTOR_OFFSET))(this);
		}

		::ALJJJEFJLKA* __cctor_b__23_0()
		{
			return ((::ALJJJEFJLKA*(*)(::PVOID))((::PBYTE)hIl2Cpp + ALJJJEFJLKA___C___CCTOR_B__23_0_OFFSET))(this);
		}

	};
