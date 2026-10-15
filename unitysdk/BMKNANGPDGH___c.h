#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"
class BMKNANGPDGH;
namespace System { class Object; }

#define BMKNANGPDGH___C_CCTOR_OFFSET UNITYSDK_OFFSET(0x1E02BFC0)
#define BMKNANGPDGH___C_CTOR_OFFSET UNITYSDK_OFFSET(0x1E02C000)
#define BMKNANGPDGH___C___CCTOR_B__43_0_OFFSET UNITYSDK_OFFSET(0x1E02C010)

	class BMKNANGPDGH___c : public ::System::Object
	{
	public:
		static ::System::Object** StaticGet___9()
		{
			return (::System::Object**)UnitySDK::FromName("", "<>c")->GetStaticField(0x515F0);
		}

		static ::System::Void _cctor()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + BMKNANGPDGH___C_CCTOR_OFFSET))();
		}

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + BMKNANGPDGH___C_CTOR_OFFSET))(this);
		}

		::BMKNANGPDGH* __cctor_b__43_0()
		{
			return ((::BMKNANGPDGH*(*)(::PVOID))((::PBYTE)hIl2Cpp + BMKNANGPDGH___C___CCTOR_B__43_0_OFFSET))(this);
		}

	};
