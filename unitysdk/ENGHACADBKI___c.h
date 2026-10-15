#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"
class ENGHACADBKI;
namespace System { class Object; }

#define ENGHACADBKI___C_CCTOR_OFFSET UNITYSDK_OFFSET(0x1E2EE280)
#define ENGHACADBKI___C_CTOR_OFFSET UNITYSDK_OFFSET(0x1E2EE2C0)
#define ENGHACADBKI___C___CCTOR_B__43_0_OFFSET UNITYSDK_OFFSET(0x1E2EE2D0)

	class ENGHACADBKI___c : public ::System::Object
	{
	public:
		static ::System::Object** StaticGet___9()
		{
			return (::System::Object**)UnitySDK::FromName("", "<>c")->GetStaticField(0x54670);
		}

		static ::System::Void _cctor()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + ENGHACADBKI___C_CCTOR_OFFSET))();
		}

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + ENGHACADBKI___C_CTOR_OFFSET))(this);
		}

		::ENGHACADBKI* __cctor_b__43_0()
		{
			return ((::ENGHACADBKI*(*)(::PVOID))((::PBYTE)hIl2Cpp + ENGHACADBKI___C___CCTOR_B__43_0_OFFSET))(this);
		}

	};
