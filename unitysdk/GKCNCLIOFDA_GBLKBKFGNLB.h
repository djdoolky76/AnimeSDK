#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"
namespace RPG::GameCore { class GameEntity; }
namespace System { class Action; }
namespace System { class String; }

#define GKCNCLIOFDA_GBLKBKFGNLB_CTOR_OFFSET UNITYSDK_OFFSET(0x15A7AE70)
#define GKCNCLIOFDA_GBLKBKFGNLB_GET_ENTITY_OFFSET UNITYSDK_OFFSET(0x15A84AE0)
#define GKCNCLIOFDA_GBLKBKFGNLB_GET_PRIORITY_OFFSET UNITYSDK_OFFSET(0x15A84B00)
#define GKCNCLIOFDA_GBLKBKFGNLB_GET_RUNID_OFFSET UNITYSDK_OFFSET(0x15A84B10)
#define GKCNCLIOFDA_GBLKBKFGNLB_GET_UNIQUENAME_OFFSET UNITYSDK_OFFSET(0x15A84AF0)
#define GKCNCLIOFDA_GBLKBKFGNLB_MNBAGHPEFBC_OFFSET UNITYSDK_OFFSET(0x15A835A0)

inline static constexpr unsigned int GKCNCLIOFDA_GBLKBKFGNLB_TypeDefinitionIndex = 53539;

	class GKCNCLIOFDA_GBLKBKFGNLB : public ::System::Object
	{
	public:
		::RPG::GameCore::GameEntity* _Entity_k__BackingField; // 0x10
		::System::String* _UniqueName_k__BackingField; // 0x18
		::System::Action* AECONAAPKJE; // 0x20
		::System::Int32 _Priority_k__BackingField; // 0x28
		::System::UInt32 _RunId_k__BackingField; // 0x2C
		::System::Void _ctor(::RPG::GameCore::GameEntity* a1, ::System::String* a2, ::System::Int32 a3, ::System::UInt32 a4, ::System::Action* a5)
		{
			return ((::System::Void(*)(::PVOID, ::RPG::GameCore::GameEntity*, ::System::String*, ::System::Int32, ::System::UInt32, ::System::Action*))((::PBYTE)hIl2Cpp + GKCNCLIOFDA_GBLKBKFGNLB_CTOR_OFFSET))(this, a1, a2, a3, a4, a5);
		}

		::RPG::GameCore::GameEntity* get_Entity()
		{
			return ((::RPG::GameCore::GameEntity*(*)(::PVOID))((::PBYTE)hIl2Cpp + GKCNCLIOFDA_GBLKBKFGNLB_GET_ENTITY_OFFSET))(this);
		}

		::System::String* get_UniqueName()
		{
			return ((::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + GKCNCLIOFDA_GBLKBKFGNLB_GET_UNIQUENAME_OFFSET))(this);
		}

		::System::Int32 get_Priority()
		{
			return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + GKCNCLIOFDA_GBLKBKFGNLB_GET_PRIORITY_OFFSET))(this);
		}

		::System::UInt32 get_RunId()
		{
			return ((::System::UInt32(*)(::PVOID))((::PBYTE)hIl2Cpp + GKCNCLIOFDA_GBLKBKFGNLB_GET_RUNID_OFFSET))(this);
		}

		::System::Void MNBAGHPEFBC()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + GKCNCLIOFDA_GBLKBKFGNLB_MNBAGHPEFBC_OFFSET))(this);
		}

	};
