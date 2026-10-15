#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"
namespace System { class Action; }
namespace System { class Object; }

#define GLOCAENEKMK___C_CCTOR_OFFSET UNITYSDK_OFFSET(0x15AB60A0)
#define GLOCAENEKMK___C_CTOR_OFFSET UNITYSDK_OFFSET(0x15AB60E0)
#define GLOCAENEKMK___C___CLOSEBGM_B__36_0_OFFSET UNITYSDK_OFFSET(0x15AB6100)
#define GLOCAENEKMK___C___HANDLEADVENTUREPHASEENTEREDEVENT_B__32_0_OFFSET UNITYSDK_OFFSET(0x15AB60F0)

inline static constexpr unsigned int GLOCAENEKMK___c_TypeDefinitionIndex = 77721;

	class GLOCAENEKMK___c : public ::System::Object
	{
	public:
		static ::System::Action** StaticGet___9__32_0()
		{
			return (::System::Action**)UnitySDK::FromName("", "<>c")->GetStaticField(0x6A9C0);
		}

		static ::System::Object** StaticGet___9()
		{
			return (::System::Object**)UnitySDK::FromName("", "<>c")->GetStaticField(0x6A9C8);
		}

		static ::System::Action** StaticGet___9__36_0()
		{
			return (::System::Action**)UnitySDK::FromName("", "<>c")->GetStaticField(0x6A9D0);
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
