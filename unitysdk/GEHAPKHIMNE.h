#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/CMPGEAFHHDC.h"
#include "unitysdk/RPG/GameCore/EventType.h"
class GEHAPKHIMNE;
namespace RPG::GameCore { class BaseModifierInstance; }
namespace RPG::GameCore { class BaseModifierInstance_ModifierEffectData; }
namespace RPG::GameCore { class GameEntity; }
namespace System { class Object; }
namespace System::Collections::Generic { template <typename T> class List_1; }

#define GEHAPKHIMNE_CTOR_OFFSET UNITYSDK_OFFSET(0x159CB370)
#define GEHAPKHIMNE_GETEVENTTYPE_OFFSET UNITYSDK_OFFSET(0x159CB320)
#define GEHAPKHIMNE_GETSOURCERUNTIMEID_OFFSET UNITYSDK_OFFSET(0x159CB2D0)
#define GEHAPKHIMNE_KPJGDHLENIP_1_OFFSET UNITYSDK_OFFSET(0x159CB1D0)
#define GEHAPKHIMNE_KPJGDHLENIP_OFFSET UNITYSDK_OFFSET(0x159CB0F0)

inline static constexpr unsigned int GEHAPKHIMNE_TypeDefinitionIndex = 56599;

	class GEHAPKHIMNE : public ::CMPGEAFHHDC
	{
	public:
		::RPG::GameCore::BaseModifierInstance* CEAGEFBHKDH; // 0x18
		::System::Collections::Generic::List_1<::System::Object*>* MAOOGNLNKIB; // 0x20
		::RPG::GameCore::GameEntity* MCLLALGABAB; // 0x28
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + GEHAPKHIMNE_CTOR_OFFSET))(this);
		}

		::GEHAPKHIMNE* KPJGDHLENIP(::RPG::GameCore::GameEntity* a1, ::System::Collections::Generic::List_1<::System::Object*>* a2, ::RPG::GameCore::BaseModifierInstance* a3)
		{
			return ((::GEHAPKHIMNE*(*)(::PVOID, ::RPG::GameCore::GameEntity*, ::System::Collections::Generic::List_1<::System::Object*>*, ::RPG::GameCore::BaseModifierInstance*))((::PBYTE)hIl2Cpp + GEHAPKHIMNE_KPJGDHLENIP_OFFSET))(this, a1, a2, a3);
		}

		::GEHAPKHIMNE* KPJGDHLENIP_1(::RPG::GameCore::GameEntity* a1, ::RPG::GameCore::BaseModifierInstance_ModifierEffectData* a2, ::RPG::GameCore::BaseModifierInstance* a3)
		{
			return ((::GEHAPKHIMNE*(*)(::PVOID, ::RPG::GameCore::GameEntity*, ::RPG::GameCore::BaseModifierInstance_ModifierEffectData*, ::RPG::GameCore::BaseModifierInstance*))((::PBYTE)hIl2Cpp + GEHAPKHIMNE_KPJGDHLENIP_1_OFFSET))(this, a1, a2, a3);
		}

		::System::UInt32 GetSourceRuntimeID()
		{
			return ((::System::UInt32(*)(::PVOID))((::PBYTE)hIl2Cpp + GEHAPKHIMNE_GETSOURCERUNTIMEID_OFFSET))(this);
		}

		::RPG::GameCore::EventType GetEventType()
		{
			return ((::RPG::GameCore::EventType(*)(::PVOID))((::PBYTE)hIl2Cpp + GEHAPKHIMNE_GETEVENTTYPE_OFFSET))(this);
		}

	};
