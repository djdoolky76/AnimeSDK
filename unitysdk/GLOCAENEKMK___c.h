#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"
namespace System { class Action; }
namespace System { class Object; }

#define GLOCAENEKMK___C_CCTOR_OFFSET UNITYSDK_OFFSET(0x16A44320)
#define GLOCAENEKMK___C_CTOR_OFFSET UNITYSDK_OFFSET(0x16A44360)
#define GLOCAENEKMK___C___CLOSEBGM_B__36_0_OFFSET UNITYSDK_OFFSET(0x16A44380)
#define GLOCAENEKMK___C___HANDLEADVENTUREPHASEENTEREDEVENT_B__32_0_OFFSET UNITYSDK_OFFSET(0x16A44370)

inline static constexpr unsigned int GLOCAENEKMK___c_TypeDefinitionIndex = 80457;

	class GLOCAENEKMK___c : public ::System::Object
	{
	public:
		static ::System::Object** StaticGet___9()
		{
			return (::System::Object**)UnitySDK::FromName("", "<>c")->GetStaticField(0x6CD70);
		}

		static ::System::Action** StaticGet___9__36_0()
		{
			return (::System::Action**)UnitySDK::FromName("", "<>c")->GetStaticField(0x6CD78);
		}

		static ::System::Action** StaticGet___9__32_0()
		{
			return (::System::Action**)UnitySDK::FromName("", "<>c")->GetStaticField(0x6CD80);
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
