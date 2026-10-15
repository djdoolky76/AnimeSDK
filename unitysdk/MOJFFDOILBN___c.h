#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"
class MOJFFDOILBN;
namespace System { class Object; }

#define MOJFFDOILBN___C_CCTOR_OFFSET UNITYSDK_OFFSET(0x1EAAE260)
#define MOJFFDOILBN___C_CTOR_OFFSET UNITYSDK_OFFSET(0x1EAAE2A0)
#define MOJFFDOILBN___C___CCTOR_B__43_0_OFFSET UNITYSDK_OFFSET(0x1EAAE2B0)

	class MOJFFDOILBN___c : public ::System::Object
	{
	public:
		static ::System::Object** StaticGet___9()
		{
			return (::System::Object**)UnitySDK::FromName("", "<>c")->GetStaticField(0x5A9B0);
		}

		static ::System::Void _cctor()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + MOJFFDOILBN___C_CCTOR_OFFSET))();
		}

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOJFFDOILBN___C_CTOR_OFFSET))(this);
		}

		::MOJFFDOILBN* __cctor_b__43_0()
		{
			return ((::MOJFFDOILBN*(*)(::PVOID))((::PBYTE)hIl2Cpp + MOJFFDOILBN___C___CCTOR_B__43_0_OFFSET))(this);
		}

	};
