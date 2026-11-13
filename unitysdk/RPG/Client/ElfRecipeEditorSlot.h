#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

#define RPG_CLIENT_ELFRECIPEEDITORSLOT_CTOR_OFFSET UNITYSDK_OFFSET(0x1AEAE3E0)
#define RPG_CLIENT_ELFRECIPEEDITORSLOT_GET_INDEX_OFFSET UNITYSDK_OFFSET(0x1AEAE500)
#define RPG_CLIENT_ELFRECIPEEDITORSLOT_GET_ISEMPTY_OFFSET UNITYSDK_OFFSET(0x1AEAD9F0)
#define RPG_CLIENT_ELFRECIPEEDITORSLOT_GET_ISLOCK_OFFSET UNITYSDK_OFFSET(0x1AEAD290)
#define RPG_CLIENT_ELFRECIPEEDITORSLOT_GET_RECIPEID_OFFSET UNITYSDK_OFFSET(0x1AEAE520)
#define RPG_CLIENT_ELFRECIPEEDITORSLOT_SET_INDEX_OFFSET UNITYSDK_OFFSET(0x1AEAE510)
#define RPG_CLIENT_ELFRECIPEEDITORSLOT_SET_RECIPEID_OFFSET UNITYSDK_OFFSET(0x1AEAE530)

namespace RPG::Client
{
	inline static constexpr unsigned int ElfRecipeEditorSlot_TypeDefinitionIndex = 65172;

	class ElfRecipeEditorSlot : public ::System::Object
	{
	public:
		::System::Int32 _Index_k__BackingField; // 0x10
		::System::UInt32 _RecipeID_k__BackingField; // 0x14
		::System::Void _ctor(::System::Int32 a1, ::System::UInt32 a2)
		{
			return ((::System::Void(*)(::PVOID, ::System::Int32, ::System::UInt32))((::PBYTE)hIl2Cpp + RPG_CLIENT_ELFRECIPEEDITORSLOT_CTOR_OFFSET))(this, a1, a2);
		}

		::System::Int32 get_Index()
		{
			return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_ELFRECIPEEDITORSLOT_GET_INDEX_OFFSET))(this);
		}

		::System::Void set_Index(::System::Int32 a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::Int32))((::PBYTE)hIl2Cpp + RPG_CLIENT_ELFRECIPEEDITORSLOT_SET_INDEX_OFFSET))(this, a1);
		}

		::System::UInt32 get_RecipeID()
		{
			return ((::System::UInt32(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_ELFRECIPEEDITORSLOT_GET_RECIPEID_OFFSET))(this);
		}

		::System::Void set_RecipeID(::System::UInt32 a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::UInt32))((::PBYTE)hIl2Cpp + RPG_CLIENT_ELFRECIPEEDITORSLOT_SET_RECIPEID_OFFSET))(this, a1);
		}

		::System::Boolean get_IsEmpty()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_ELFRECIPEEDITORSLOT_GET_ISEMPTY_OFFSET))(this);
		}

		::System::Boolean get_IsLock()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_ELFRECIPEEDITORSLOT_GET_ISLOCK_OFFSET))(this);
		}

	};
}
