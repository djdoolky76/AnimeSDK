#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"
class PIGBCIDLGCA;
namespace System { class Object; }

#define PIGBCIDLGCA___C_CCTOR_OFFSET UNITYSDK_OFFSET(0x1DF45AF0)
#define PIGBCIDLGCA___C_CTOR_OFFSET UNITYSDK_OFFSET(0x1DF45B30)
#define PIGBCIDLGCA___C___CCTOR_B__23_0_OFFSET UNITYSDK_OFFSET(0x1DF45B40)

	class PIGBCIDLGCA___c : public ::System::Object
	{
	public:
		static ::System::Object** StaticGet___9()
		{
			return (::System::Object**)UnitySDK::FromName("", "<>c")->GetStaticField(0x40FA0);
		}

		static ::System::Void _cctor()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + PIGBCIDLGCA___C_CCTOR_OFFSET))();
		}

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + PIGBCIDLGCA___C_CTOR_OFFSET))(this);
		}

		::PIGBCIDLGCA* __cctor_b__23_0()
		{
			return ((::PIGBCIDLGCA*(*)(::PVOID))((::PBYTE)hIl2Cpp + PIGBCIDLGCA___C___CCTOR_B__23_0_OFFSET))(this);
		}

	};
