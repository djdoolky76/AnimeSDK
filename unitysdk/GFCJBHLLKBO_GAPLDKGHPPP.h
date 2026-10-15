#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"
namespace RPG::Client { class TarotBookInteraction; }
namespace RPG::GameCore { class EntityManager; }
namespace RPG::GameCore { class LevelGraphComponent; }
namespace System { class Action; }

#define GFCJBHLLKBO_GAPLDKGHPPP_CIHFGJDCHIA_OFFSET UNITYSDK_OFFSET(0x159EA1F0)
#define GFCJBHLLKBO_GAPLDKGHPPP_CTOR_OFFSET UNITYSDK_OFFSET(0x159E9F70)
#define GFCJBHLLKBO_GAPLDKGHPPP_GET_COMPONENT_OFFSET UNITYSDK_OFFSET(0x159EA380)
#define GFCJBHLLKBO_GAPLDKGHPPP_GET_HASFINISHED_OFFSET UNITYSDK_OFFSET(0x159EA340)
#define GFCJBHLLKBO_GAPLDKGHPPP_GET_HASSTOPPED_OFFSET UNITYSDK_OFFSET(0x159EA320)
#define GFCJBHLLKBO_GAPLDKGHPPP_GET_INTERACTION_OFFSET UNITYSDK_OFFSET(0x159EA360)
#define GFCJBHLLKBO_GAPLDKGHPPP_GET_MANAGER_OFFSET UNITYSDK_OFFSET(0x159EA390)
#define GFCJBHLLKBO_GAPLDKGHPPP_GET_ONFINISHED_OFFSET UNITYSDK_OFFSET(0x159EA370)
#define GFCJBHLLKBO_GAPLDKGHPPP_HFKFNFKIEON_OFFSET UNITYSDK_OFFSET(0x159EA0F0)
#define GFCJBHLLKBO_GAPLDKGHPPP_NPAFMEBNFOB_OFFSET UNITYSDK_OFFSET(0x159E9F90)
#define GFCJBHLLKBO_GAPLDKGHPPP_SET_HASFINISHED_OFFSET UNITYSDK_OFFSET(0x159EA350)
#define GFCJBHLLKBO_GAPLDKGHPPP_SET_HASSTOPPED_OFFSET UNITYSDK_OFFSET(0x159EA330)

inline static constexpr unsigned int GFCJBHLLKBO_GAPLDKGHPPP_TypeDefinitionIndex = 68065;

	class GFCJBHLLKBO_GAPLDKGHPPP : public ::System::Object
	{
	public:
		::System::Action* _OnFinished_k__BackingField; // 0x10
		::RPG::Client::TarotBookInteraction* _Interaction_k__BackingField; // 0x18
		::RPG::GameCore::EntityManager* _Manager_k__BackingField; // 0x20
		::RPG::GameCore::LevelGraphComponent* _Component_k__BackingField; // 0x28
		::System::Boolean _HasStopped_k__BackingField; // 0x30
		::System::Boolean _HasFinished_k__BackingField; // 0x31
		::System::Void _ctor(::RPG::Client::TarotBookInteraction* a1, ::System::Action* a2, ::RPG::GameCore::LevelGraphComponent* a3, ::RPG::GameCore::EntityManager* a4)
		{
			return ((::System::Void(*)(::PVOID, ::RPG::Client::TarotBookInteraction*, ::System::Action*, ::RPG::GameCore::LevelGraphComponent*, ::RPG::GameCore::EntityManager*))((::PBYTE)hIl2Cpp + GFCJBHLLKBO_GAPLDKGHPPP_CTOR_OFFSET))(this, a1, a2, a3, a4);
		}

		::System::Boolean get_HasStopped()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + GFCJBHLLKBO_GAPLDKGHPPP_GET_HASSTOPPED_OFFSET))(this);
		}

		::System::Void set_HasStopped(::System::Boolean a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::Boolean))((::PBYTE)hIl2Cpp + GFCJBHLLKBO_GAPLDKGHPPP_SET_HASSTOPPED_OFFSET))(this, a1);
		}

		::System::Boolean get_HasFinished()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + GFCJBHLLKBO_GAPLDKGHPPP_GET_HASFINISHED_OFFSET))(this);
		}

		::System::Void set_HasFinished(::System::Boolean a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::Boolean))((::PBYTE)hIl2Cpp + GFCJBHLLKBO_GAPLDKGHPPP_SET_HASFINISHED_OFFSET))(this, a1);
		}

		::RPG::Client::TarotBookInteraction* get_Interaction()
		{
			return ((::RPG::Client::TarotBookInteraction*(*)(::PVOID))((::PBYTE)hIl2Cpp + GFCJBHLLKBO_GAPLDKGHPPP_GET_INTERACTION_OFFSET))(this);
		}

		::System::Action* get_OnFinished()
		{
			return ((::System::Action*(*)(::PVOID))((::PBYTE)hIl2Cpp + GFCJBHLLKBO_GAPLDKGHPPP_GET_ONFINISHED_OFFSET))(this);
		}

		::RPG::GameCore::LevelGraphComponent* get_Component()
		{
			return ((::RPG::GameCore::LevelGraphComponent*(*)(::PVOID))((::PBYTE)hIl2Cpp + GFCJBHLLKBO_GAPLDKGHPPP_GET_COMPONENT_OFFSET))(this);
		}

		::RPG::GameCore::EntityManager* get_Manager()
		{
			return ((::RPG::GameCore::EntityManager*(*)(::PVOID))((::PBYTE)hIl2Cpp + GFCJBHLLKBO_GAPLDKGHPPP_GET_MANAGER_OFFSET))(this);
		}

		::System::Void NPAFMEBNFOB()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + GFCJBHLLKBO_GAPLDKGHPPP_NPAFMEBNFOB_OFFSET))(this);
		}

		::System::Void CIHFGJDCHIA()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + GFCJBHLLKBO_GAPLDKGHPPP_CIHFGJDCHIA_OFFSET))(this);
		}

		::System::Void HFKFNFKIEON()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + GFCJBHLLKBO_GAPLDKGHPPP_HFKFNFKIEON_OFFSET))(this);
		}

	};
