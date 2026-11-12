#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/RogueBuffAeonType.h"
#include "unitysdk/RPG/GameCore/RogueBuffCategory.h"
#include "unitysdk/System/Object.h"
namespace RPG::GameCore { class RogueTournBuffRow; }
namespace System { class String; }

#define HMBDDBBNMCH_CTOR_OFFSET UNITYSDK_OFFSET(0x16CD4690)
#define HMBDDBBNMCH_GETAEONCROSSICON_OFFSET UNITYSDK_OFFSET(0x16CD49C0)
#define HMBDDBBNMCH_GETBATTLEEVENTBUFF_OFFSET UNITYSDK_OFFSET(0x16CD4A10)
#define HMBDDBBNMCH_GETEXTRAEFFECTROWIDS_OFFSET UNITYSDK_OFFSET(0x16CD48C0)
#define HMBDDBBNMCH_GETMAZEBUFFLEVEL_OFFSET UNITYSDK_OFFSET(0x16CD4770)
#define HMBDDBBNMCH_GETROGUEAEONID_OFFSET UNITYSDK_OFFSET(0x16CD4920)
#define HMBDDBBNMCH_GETROGUEBUFFCATEGORY_OFFSET UNITYSDK_OFFSET(0x16CD4870)
#define HMBDDBBNMCH_GETROGUEBUFFRARITY_OFFSET UNITYSDK_OFFSET(0x16CD4810)
#define HMBDDBBNMCH_GETROGUEBUFFTAG_OFFSET UNITYSDK_OFFSET(0x16CD4970)
#define HMBDDBBNMCH_GETROGUEBUFFTYPE_OFFSET UNITYSDK_OFFSET(0x16CD47C0)
#define HMBDDBBNMCH_GET_MAZEBUFFID_OFFSET UNITYSDK_OFFSET(0x16CD4720)
#define HMBDDBBNMCH_ISVALID_OFFSET UNITYSDK_OFFSET(0x16CD46D0)

inline static constexpr unsigned int HMBDDBBNMCH_TypeDefinitionIndex = 69145;

	class HMBDDBBNMCH : public ::System::Object
	{
	public:
		::RPG::GameCore::RogueTournBuffRow* IBPBJBOKKMF; // 0x10
		::System::Void _ctor(::System::UInt32 a1, ::System::UInt32 a2)
		{
			return ((::System::Void(*)(::PVOID, ::System::UInt32, ::System::UInt32))((::PBYTE)hIl2Cpp + HMBDDBBNMCH_CTOR_OFFSET))(this, a1, a2);
		}

		::System::Boolean IsValid()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + HMBDDBBNMCH_ISVALID_OFFSET))(this);
		}

		::System::UInt32 get_MazeBuffID()
		{
			return ((::System::UInt32(*)(::PVOID))((::PBYTE)hIl2Cpp + HMBDDBBNMCH_GET_MAZEBUFFID_OFFSET))(this);
		}

		::System::UInt32 GetMazeBuffLevel()
		{
			return ((::System::UInt32(*)(::PVOID))((::PBYTE)hIl2Cpp + HMBDDBBNMCH_GETMAZEBUFFLEVEL_OFFSET))(this);
		}

		::System::UInt32 GetRogueBuffType()
		{
			return ((::System::UInt32(*)(::PVOID))((::PBYTE)hIl2Cpp + HMBDDBBNMCH_GETROGUEBUFFTYPE_OFFSET))(this);
		}

		::System::UInt32 GetRogueBuffRarity()
		{
			return ((::System::UInt32(*)(::PVOID))((::PBYTE)hIl2Cpp + HMBDDBBNMCH_GETROGUEBUFFRARITY_OFFSET))(this);
		}

		::RPG::GameCore::RogueBuffCategory GetRogueBuffCategory()
		{
			return ((::RPG::GameCore::RogueBuffCategory(*)(::PVOID))((::PBYTE)hIl2Cpp + HMBDDBBNMCH_GETROGUEBUFFCATEGORY_OFFSET))(this);
		}

		::Il2CppArray<::System::UInt32>* GetExtraEffectRowIDs()
		{
			return ((::Il2CppArray<::System::UInt32>*(*)(::PVOID))((::PBYTE)hIl2Cpp + HMBDDBBNMCH_GETEXTRAEFFECTROWIDS_OFFSET))(this);
		}

		::System::UInt32 GetRogueAeonID()
		{
			return ((::System::UInt32(*)(::PVOID))((::PBYTE)hIl2Cpp + HMBDDBBNMCH_GETROGUEAEONID_OFFSET))(this);
		}

		::System::UInt32 GetRogueBuffTag()
		{
			return ((::System::UInt32(*)(::PVOID))((::PBYTE)hIl2Cpp + HMBDDBBNMCH_GETROGUEBUFFTAG_OFFSET))(this);
		}

		::System::String* GetAeonCrossIcon()
		{
			return ((::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + HMBDDBBNMCH_GETAEONCROSSICON_OFFSET))(this);
		}

		::RPG::GameCore::RogueBuffAeonType GetBattleEventBuff()
		{
			return ((::RPG::GameCore::RogueBuffAeonType(*)(::PVOID))((::PBYTE)hIl2Cpp + HMBDDBBNMCH_GETBATTLEEVENTBUFF_OFFSET))(this);
		}

	};
