#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/MEFIOFBDFFL_IECMEECNKCP.h"
#include "unitysdk/System/Object.h"

namespace MoleMole::Battle { class Entity; }
namespace MoleMole::Config { class AnimatorEvent; }
namespace MoleMole::Config { class AnimatorZone; }
namespace System { template <typename T1, typename T2> class Action_2; }
namespace System::Collections::Generic { template <typename T1, typename T2> class Dictionary_2; }

#define NPCCROWD_ANIMATION_NPCANIMATIONTIMELINEEVENTHANDLER_GETZONEHANDLER_OFFSET UNITYSDK_OFFSET(0x1363E0C0)
#define NPCCROWD_ANIMATION_NPCANIMATIONTIMELINEEVENTHANDLER_INITDEFAULTHANDLERS_OFFSET UNITYSDK_OFFSET(0x1363E1B0)
#define NPCCROWD_ANIMATION_NPCANIMATIONTIMELINEEVENTHANDLER_REGISTEREVENTHANDLER_OFFSET UNITYSDK_OFFSET(0x1363DE80)
#define NPCCROWD_ANIMATION_NPCANIMATIONTIMELINEEVENTHANDLER_REGISTERZONEHANDLER_OFFSET UNITYSDK_OFFSET(0x1363DFB0)
#define NPCCROWD_ANIMATION_NPCANIMATIONTIMELINEEVENTHANDLER_TESTAUDIOHANDLER_OFFSET UNITYSDK_OFFSET(0x1363E1F0)
#define NPCCROWD_ANIMATION_NPCANIMATIONTIMELINEEVENTHANDLER__CCTOR_OFFSET UNITYSDK_OFFSET(0x1363E240)

namespace NPCCrowd::Animation
{
	inline static constexpr unsigned int NPCAnimationTimelineEventHandler_TypeDefinitionIndex = 49321;

	class NPCAnimationTimelineEventHandler : public ::System::Object
	{
	public:
		static ::System::Collections::Generic::Dictionary_2<::System::Int32, ::System::Action_2<::MoleMole::Config::AnimatorZone*, ::MoleMole::Battle::Entity*>*>** StaticGet_ZoneUpdateHandler()
		{
			return (::System::Collections::Generic::Dictionary_2<::System::Int32, ::System::Action_2<::MoleMole::Config::AnimatorZone*, ::MoleMole::Battle::Entity*>*>**)Il2CppClass::FromTypeDefinitionIndex(NPCAnimationTimelineEventHandler_TypeDefinitionIndex)->GetStaticField(0x35DC0);
		}
		static ::System::Collections::Generic::Dictionary_2<::System::Int32, ::System::Action_2<::MoleMole::Config::AnimatorZone*, ::MoleMole::Battle::Entity*>*>** StaticGet_ZoneEnterHandler()
		{
			return (::System::Collections::Generic::Dictionary_2<::System::Int32, ::System::Action_2<::MoleMole::Config::AnimatorZone*, ::MoleMole::Battle::Entity*>*>**)Il2CppClass::FromTypeDefinitionIndex(NPCAnimationTimelineEventHandler_TypeDefinitionIndex)->GetStaticField(0x35DC8);
		}
		static ::System::Collections::Generic::Dictionary_2<::System::Int32, ::System::Action_2<::MoleMole::Config::AnimatorZone*, ::MoleMole::Battle::Entity*>*>** StaticGet_ZoneExitHandler()
		{
			return (::System::Collections::Generic::Dictionary_2<::System::Int32, ::System::Action_2<::MoleMole::Config::AnimatorZone*, ::MoleMole::Battle::Entity*>*>**)Il2CppClass::FromTypeDefinitionIndex(NPCAnimationTimelineEventHandler_TypeDefinitionIndex)->GetStaticField(0x35DD0);
		}
		static ::System::Collections::Generic::Dictionary_2<::System::Int32, ::System::Action_2<::MoleMole::Config::AnimatorEvent*, ::MoleMole::Battle::Entity*>*>** StaticGet_EventHandler()
		{
			return (::System::Collections::Generic::Dictionary_2<::System::Int32, ::System::Action_2<::MoleMole::Config::AnimatorEvent*, ::MoleMole::Battle::Entity*>*>**)Il2CppClass::FromTypeDefinitionIndex(NPCAnimationTimelineEventHandler_TypeDefinitionIndex)->GetStaticField(0x35DD8);
		}

		static ::System::Void _cctor()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + NPCCROWD_ANIMATION_NPCANIMATIONTIMELINEEVENTHANDLER__CCTOR_OFFSET))();
		}

		static ::System::Void RegisterEventHandler(::System::Int32 eventHash, ::System::Action_2<::MoleMole::Config::AnimatorEvent*, ::MoleMole::Battle::Entity*>* handler)
		{
			return ((::System::Void(*)(::System::Int32, ::System::Action_2<::MoleMole::Config::AnimatorEvent*, ::MoleMole::Battle::Entity*>*))((::PBYTE)hIl2Cpp + NPCCROWD_ANIMATION_NPCANIMATIONTIMELINEEVENTHANDLER_REGISTEREVENTHANDLER_OFFSET))(eventHash, handler);
		}

		static ::System::Void RegisterZoneHandler(::System::Int32 eventHash, ::System::Action_2<::MoleMole::Config::AnimatorZone*, ::MoleMole::Battle::Entity*>* handler, ::MEFIOFBDFFL_IECMEECNKCP type)
		{
			return ((::System::Void(*)(::System::Int32, ::System::Action_2<::MoleMole::Config::AnimatorZone*, ::MoleMole::Battle::Entity*>*, ::MEFIOFBDFFL_IECMEECNKCP))((::PBYTE)hIl2Cpp + NPCCROWD_ANIMATION_NPCANIMATIONTIMELINEEVENTHANDLER_REGISTERZONEHANDLER_OFFSET))(eventHash, handler, type);
		}

		static ::System::Collections::Generic::Dictionary_2<::System::Int32, ::System::Action_2<::MoleMole::Config::AnimatorZone*, ::MoleMole::Battle::Entity*>*>* GetZoneHandler(::MEFIOFBDFFL_IECMEECNKCP type)
		{
			return ((::System::Collections::Generic::Dictionary_2<::System::Int32, ::System::Action_2<::MoleMole::Config::AnimatorZone*, ::MoleMole::Battle::Entity*>*>*(*)(::MEFIOFBDFFL_IECMEECNKCP))((::PBYTE)hIl2Cpp + NPCCROWD_ANIMATION_NPCANIMATIONTIMELINEEVENTHANDLER_GETZONEHANDLER_OFFSET))(type);
		}

		static ::System::Void InitDefaultHandlers()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + NPCCROWD_ANIMATION_NPCANIMATIONTIMELINEEVENTHANDLER_INITDEFAULTHANDLERS_OFFSET))();
		}

		static ::System::Void TestAudioHandler(::MoleMole::Config::AnimatorEvent* e, ::MoleMole::Battle::Entity* entity)
		{
			return ((::System::Void(*)(::MoleMole::Config::AnimatorEvent*, ::MoleMole::Battle::Entity*))((::PBYTE)hIl2Cpp + NPCCROWD_ANIMATION_NPCANIMATIONTIMELINEEVENTHANDLER_TESTAUDIOHANDLER_OFFSET))(e, entity);
		}
	};
}
