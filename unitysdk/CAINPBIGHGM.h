#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/AHLEKJMMLBA.h"
#include "unitysdk/DPKDLCLMJDI.h"
#include "unitysdk/RPG/GameCore/AvatarPropertyType.h"
#include "unitysdk/System/Object.h"
#include "unitysdk/RPG/GameCore/FixPoint.h"
#include "unitysdk/System/ValueTuple_4.h"
namespace RPG::GameCore { class ItemConfig; }

#define CAINPBIGHGM_COBAIMEGJFB_OFFSET UNITYSDK_OFFSET(0xC481B20)
#define CAINPBIGHGM_CTOR_OFFSET UNITYSDK_OFFSET(0xC481B10)
#define CAINPBIGHGM_GET_IDENTIFIER_OFFSET UNITYSDK_OFFSET(0xC481A40)
#define CAINPBIGHGM_GET_MAXLEVEL_OFFSET UNITYSDK_OFFSET(0xC481A80)
#define CAINPBIGHGM_GET_PLAYERLEVELREQUIRE_OFFSET UNITYSDK_OFFSET(0xC481AC0)
#define CAINPBIGHGM_GET_PROMOTIONCOSTLIST_OFFSET UNITYSDK_OFFSET(0xC481A60)
#define CAINPBIGHGM_GET_PROPERTYVALUES_OFFSET UNITYSDK_OFFSET(0xC481AE0)
#define CAINPBIGHGM_GET_WORLDLEVELREQUIRE_OFFSET UNITYSDK_OFFSET(0xC481AA0)
#define CAINPBIGHGM_SET_MAXLEVEL_OFFSET UNITYSDK_OFFSET(0xC481A90)
#define CAINPBIGHGM_SET_PLAYERLEVELREQUIRE_OFFSET UNITYSDK_OFFSET(0xC481AD0)
#define CAINPBIGHGM_SET_PROMOTIONCOSTLIST_OFFSET UNITYSDK_OFFSET(0xC481A70)
#define CAINPBIGHGM_SET_PROPERTYVALUES_OFFSET UNITYSDK_OFFSET(0xC481B00)
#define CAINPBIGHGM_SET_WORLDLEVELREQUIRE_OFFSET UNITYSDK_OFFSET(0xC481AB0)

inline static constexpr unsigned int CAINPBIGHGM_TypeDefinitionIndex = 51965;

	class CAINPBIGHGM : public ::System::Object
	{
	public:
		::Il2CppArray<::RPG::GameCore::ItemConfig*>* _PromotionCostList_k__BackingField; // 0x10
		::System::UInt32 _WorldLevelRequire_k__BackingField; // 0x18
		::AHLEKJMMLBA _Identifier_k__BackingField; // 0x1C
		::DPKDLCLMJDI _PropertyValues_k__BackingField; // 0x28
		::System::UInt32 _PlayerLevelRequire_k__BackingField; // 0xE8
		::System::UInt32 _MaxLevel_k__BackingField; // 0xEC
		::System::Void _ctor(::AHLEKJMMLBA a1)
		{
			return ((::System::Void(*)(::PVOID, ::AHLEKJMMLBA))((::PBYTE)hIl2Cpp + CAINPBIGHGM_CTOR_OFFSET))(this, a1);
		}

		::AHLEKJMMLBA get_Identifier()
		{
			return ((::AHLEKJMMLBA(*)(::PVOID))((::PBYTE)hIl2Cpp + CAINPBIGHGM_GET_IDENTIFIER_OFFSET))(this);
		}

		::Il2CppArray<::RPG::GameCore::ItemConfig*>* get_PromotionCostList()
		{
			return ((::Il2CppArray<::RPG::GameCore::ItemConfig*>*(*)(::PVOID))((::PBYTE)hIl2Cpp + CAINPBIGHGM_GET_PROMOTIONCOSTLIST_OFFSET))(this);
		}

		::System::Void set_PromotionCostList(::Il2CppArray<::RPG::GameCore::ItemConfig*>* a1)
		{
			return ((::System::Void(*)(::PVOID, ::Il2CppArray<::RPG::GameCore::ItemConfig*>*))((::PBYTE)hIl2Cpp + CAINPBIGHGM_SET_PROMOTIONCOSTLIST_OFFSET))(this, a1);
		}

		::System::UInt32 get_MaxLevel()
		{
			return ((::System::UInt32(*)(::PVOID))((::PBYTE)hIl2Cpp + CAINPBIGHGM_GET_MAXLEVEL_OFFSET))(this);
		}

		::System::Void set_MaxLevel(::System::UInt32 a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::UInt32))((::PBYTE)hIl2Cpp + CAINPBIGHGM_SET_MAXLEVEL_OFFSET))(this, a1);
		}

		::System::UInt32 get_WorldLevelRequire()
		{
			return ((::System::UInt32(*)(::PVOID))((::PBYTE)hIl2Cpp + CAINPBIGHGM_GET_WORLDLEVELREQUIRE_OFFSET))(this);
		}

		::System::Void set_WorldLevelRequire(::System::UInt32 a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::UInt32))((::PBYTE)hIl2Cpp + CAINPBIGHGM_SET_WORLDLEVELREQUIRE_OFFSET))(this, a1);
		}

		::System::UInt32 get_PlayerLevelRequire()
		{
			return ((::System::UInt32(*)(::PVOID))((::PBYTE)hIl2Cpp + CAINPBIGHGM_GET_PLAYERLEVELREQUIRE_OFFSET))(this);
		}

		::System::Void set_PlayerLevelRequire(::System::UInt32 a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::UInt32))((::PBYTE)hIl2Cpp + CAINPBIGHGM_SET_PLAYERLEVELREQUIRE_OFFSET))(this, a1);
		}

		::DPKDLCLMJDI get_PropertyValues()
		{
			return ((::DPKDLCLMJDI(*)(::PVOID))((::PBYTE)hIl2Cpp + CAINPBIGHGM_GET_PROPERTYVALUES_OFFSET))(this);
		}

		::System::Void set_PropertyValues(::DPKDLCLMJDI a1)
		{
			return ((::System::Void(*)(::PVOID, ::DPKDLCLMJDI))((::PBYTE)hIl2Cpp + CAINPBIGHGM_SET_PROPERTYVALUES_OFFSET))(this, a1);
		}

		::System::ValueTuple_4<::RPG::GameCore::FixPoint, ::RPG::GameCore::FixPoint, ::RPG::GameCore::FixPoint, ::RPG::GameCore::FixPoint> COBAIMEGJFB(::RPG::GameCore::AvatarPropertyType a1)
		{
			return ((::System::ValueTuple_4<::RPG::GameCore::FixPoint, ::RPG::GameCore::FixPoint, ::RPG::GameCore::FixPoint, ::RPG::GameCore::FixPoint>(*)(::PVOID, ::RPG::GameCore::AvatarPropertyType))((::PBYTE)hIl2Cpp + CAINPBIGHGM_COBAIMEGJFB_OFFSET))(this, a1);
		}

	};
