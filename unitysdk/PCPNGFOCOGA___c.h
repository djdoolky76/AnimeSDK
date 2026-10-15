#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"
class PCPNGFOCOGA;
namespace System { class Object; }

#define PCPNGFOCOGA___C_CCTOR_OFFSET UNITYSDK_OFFSET(0x1DF0C6A0)
#define PCPNGFOCOGA___C_CTOR_OFFSET UNITYSDK_OFFSET(0x1DF0C6E0)
#define PCPNGFOCOGA___C___CCTOR_B__33_0_OFFSET UNITYSDK_OFFSET(0x1DF0C6F0)

	class PCPNGFOCOGA___c : public ::System::Object
	{
	public:
		static ::System::Object** StaticGet___9()
		{
			return (::System::Object**)UnitySDK::FromName("", "<>c")->GetStaticField(0x36850);
		}

		static ::System::Void _cctor()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + PCPNGFOCOGA___C_CCTOR_OFFSET))();
		}

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + PCPNGFOCOGA___C_CTOR_OFFSET))(this);
		}

		::PCPNGFOCOGA* __cctor_b__33_0()
		{
			return ((::PCPNGFOCOGA*(*)(::PVOID))((::PBYTE)hIl2Cpp + PCPNGFOCOGA___C___CCTOR_B__33_0_OFFSET))(this);
		}

	};
