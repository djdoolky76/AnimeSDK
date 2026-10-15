#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/AHLEKJMMLBA.h"
#include "unitysdk/DPKDLCLMJDI.h"
#include "unitysdk/RPG/GameCore/AvatarPropertyType.h"
#include "unitysdk/System/Object.h"
#include "unitysdk/RPG/GameCore/FixPoint.h"
#include "unitysdk/System/ValueTuple_4.h"
namespace RPG::GameCore { class ItemConfig; }

#define CAINPBIGHGM_COBAIMEGJFB_OFFSET UNITYSDK_OFFSET(0xC47A920)
#define CAINPBIGHGM_CTOR_OFFSET UNITYSDK_OFFSET(0xC47A910)
#define CAINPBIGHGM_GET_IDENTIFIER_OFFSET UNITYSDK_OFFSET(0xC47A840)
#define CAINPBIGHGM_GET_MAXLEVEL_OFFSET UNITYSDK_OFFSET(0xC47A880)
#define CAINPBIGHGM_GET_PLAYERLEVELREQUIRE_OFFSET UNITYSDK_OFFSET(0xC47A8C0)
#define CAINPBIGHGM_GET_PROMOTIONCOSTLIST_OFFSET UNITYSDK_OFFSET(0xC47A860)
#define CAINPBIGHGM_GET_PROPERTYVALUES_OFFSET UNITYSDK_OFFSET(0xC47A8E0)
#define CAINPBIGHGM_GET_WORLDLEVELREQUIRE_OFFSET UNITYSDK_OFFSET(0xC47A8A0)
#define CAINPBIGHGM_SET_MAXLEVEL_OFFSET UNITYSDK_OFFSET(0xC47A890)
#define CAINPBIGHGM_SET_PLAYERLEVELREQUIRE_OFFSET UNITYSDK_OFFSET(0xC47A8D0)
#define CAINPBIGHGM_SET_PROMOTIONCOSTLIST_OFFSET UNITYSDK_OFFSET(0xC47A870)
#define CAINPBIGHGM_SET_PROPERTYVALUES_OFFSET UNITYSDK_OFFSET(0xC47A900)
#define CAINPBIGHGM_SET_WORLDLEVELREQUIRE_OFFSET UNITYSDK_OFFSET(0xC47A8B0)

inline static constexpr unsigned int CAINPBIGHGM_TypeDefinitionIndex = 51965;

	class CAINPBIGHGM : public ::System::Object
	{
	public:
		::Il2CppArray<::RPG::GameCore::ItemConfig*>* _PromotionCostList_k__BackingField; // 0x10
		::System::UInt32 _WorldLevelRequire_k__BackingField; // 0x18
		::AHLEKJMMLBA _Identifier_k__BackingField; // 0x1C
		::System::UInt32 _MaxLevel_k__BackingField; // 0x28
		::System::UInt32 _PlayerLevelRequire_k__BackingField; // 0x2C
		::DPKDLCLMJDI _PropertyValues_k__BackingField; // 0x30
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
