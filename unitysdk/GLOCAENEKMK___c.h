#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"
namespace System { class Action; }
namespace System { class Object; }

#define GLOCAENEKMK___C_CCTOR_OFFSET UNITYSDK_OFFSET(0x15AC1C30)
#define GLOCAENEKMK___C_CTOR_OFFSET UNITYSDK_OFFSET(0x15AC1C70)
#define GLOCAENEKMK___C___CLOSEBGM_B__36_0_OFFSET UNITYSDK_OFFSET(0x15AC1C90)
#define GLOCAENEKMK___C___HANDLEADVENTUREPHASEENTEREDEVENT_B__32_0_OFFSET UNITYSDK_OFFSET(0x15AC1C80)

inline static constexpr unsigned int GLOCAENEKMK___c_TypeDefinitionIndex = 77722;

	class GLOCAENEKMK___c : public ::System::Object
	{
	public:
		static ::System::Action** StaticGet___9__36_0()
		{
			return (::System::Action**)UnitySDK::FromName("", "<>c")->GetStaticField(0x65290);
		}

		static ::System::Action** StaticGet___9__32_0()
		{
			return (::System::Action**)UnitySDK::FromName("", "<>c")->GetStaticField(0x65298);
		}

		static ::System::Object** StaticGet___9()
		{
			return (::System::Object**)UnitySDK::FromName("", "<>c")->GetStaticField(0x652A0);
		}

		static ::System::Void _cctor()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + GLOCAENEKMK___C_CCTOR_OFFSET))();
		}

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + GLOCAENEKMK___C_CTOR_OFFSET))(this);
		}

		::System::Void __HandleAdventurePhaseEnteredEvent_b__32_0()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + GLOCAENEKMK___C___HANDLEADVENTUREPHASEENTEREDEVENT_B__32_0_OFFSET))(this);
		}

		::System::Void __CloseBGM_b__36_0()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + GLOCAENEKMK___C___CLOSEBGM_B__36_0_OFFSET))(this);
		}

	};
