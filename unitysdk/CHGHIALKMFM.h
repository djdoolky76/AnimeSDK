#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/Client/MechCraft/MechCraftAttributeType.h"
#include "unitysdk/RPG/Client/MechCraft/MechCraftRotationType.h"
#include "unitysdk/System/Object.h"
#include "unitysdk/UnityEngine/Vector2Int.h"
#include "unitysdk/PLHLAIJKMOD.h"
class DIGCDGKOBMK;
class PIIOAKOEACN;
namespace R3 { template <typename T> class ReactiveProperty_1; }
namespace R3 { template <typename T> class ReadOnlyReactiveProperty_1; }
namespace System { class Nullable; }
namespace System::Collections::Generic { template <typename T> class IEnumerable_1; }
namespace System::Collections::Generic { template <typename T> class IReadOnlyList_1; }

#define CHGHIALKMFM_AOFKJKBDGBE_OFFSET UNITYSDK_OFFSET(0x1C5473F0)
#define CHGHIALKMFM_CGEMEKLFAFM_OFFSET UNITYSDK_OFFSET(0x1C54AE70)
#define CHGHIALKMFM_CTOR_OFFSET UNITYSDK_OFFSET(0x1C54B6F0)
#define CHGHIALKMFM_GET_BUFFS_OFFSET UNITYSDK_OFFSET(0x1C54A750)
#define CHGHIALKMFM_GET_CONFIG_OFFSET UNITYSDK_OFFSET(0x1C54A510)
#define CHGHIALKMFM_GET_ISDISCOURAGED_OFFSET UNITYSDK_OFFSET(0x1C54A6E0)
#define CHGHIALKMFM_GET_ISRECOMMENDED_OFFSET UNITYSDK_OFFSET(0x1C54A6C0)
#define CHGHIALKMFM_GET_MUTABLEISUSABLE_OFFSET UNITYSDK_OFFSET(0x1C54A700)
#define CHGHIALKMFM_GET_PRIMARYATTRIBUTETYPE_OFFSET UNITYSDK_OFFSET(0x1C54A6A0)
#define CHGHIALKMFM_IICBFEMFFNN_OFFSET UNITYSDK_OFFSET(0x1C54A770)
#define CHGHIALKMFM_JFECKCDCFJP_OFFSET UNITYSDK_OFFSET(0x1C54B220)
#define CHGHIALKMFM_LMIOANICNMI_OFFSET UNITYSDK_OFFSET(0x1C54B160)
#define CHGHIALKMFM_MFLEJEAGNCH_1_OFFSET UNITYSDK_OFFSET(0x1C54ABC0)
#define CHGHIALKMFM_MFLEJEAGNCH_OFFSET UNITYSDK_OFFSET(0x1C54A8C0)
#define CHGHIALKMFM_OCIIJJOADAL_OFFSET UNITYSDK_OFFSET(0x1C54A530)
#define CHGHIALKMFM_PMFCJOMNBLK_OFFSET UNITYSDK_OFFSET(0x1C54A710)
#define CHGHIALKMFM_SET_BUFFS_OFFSET UNITYSDK_OFFSET(0x1C54A760)
#define CHGHIALKMFM_SET_CONFIG_OFFSET UNITYSDK_OFFSET(0x1C54A520)
#define CHGHIALKMFM_SET_ISDISCOURAGED_OFFSET UNITYSDK_OFFSET(0x1C54A6F0)
#define CHGHIALKMFM_SET_ISRECOMMENDED_OFFSET UNITYSDK_OFFSET(0x1C54A6D0)
#define CHGHIALKMFM_SET_PRIMARYATTRIBUTETYPE_OFFSET UNITYSDK_OFFSET(0x1C54A6B0)

inline static constexpr unsigned int CHGHIALKMFM_TypeDefinitionIndex = 41803;

	class CHGHIALKMFM : public ::System::Object
	{
	public:
		::PIIOAKOEACN* _Config_k__BackingField; // 0x10
		::R3::ReactiveProperty_1<::System::Boolean>* _MutableIsUsable_k__BackingField; // 0x18
		::System::Collections::Generic::IReadOnlyList_1<::DIGCDGKOBMK*>* _Buffs_k__BackingField; // 0x20
		::System::Nullable* HAOAFOMBMAO; // 0x28
		::System::Byte _padding0[0x4];
		::System::Boolean _IsRecommended_k__BackingField; // 0x34
		::System::Boolean _IsDiscouraged_k__BackingField; // 0x35
		::System::Byte _padding1[0x2];
		::System::Nullable* _PrimaryAttributeType_k__BackingField; // 0x38
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CHGHIALKMFM_CTOR_OFFSET))(this);
		}

		::PIIOAKOEACN* get_Config()
		{
			return ((::PIIOAKOEACN*(*)(::PVOID))((::PBYTE)hIl2Cpp + CHGHIALKMFM_GET_CONFIG_OFFSET))(this);
		}

		::System::Void set_Config(::PIIOAKOEACN* a1)
		{
			return ((::System::Void(*)(::PVOID, ::PIIOAKOEACN*))((::PBYTE)hIl2Cpp + CHGHIALKMFM_SET_CONFIG_OFFSET))(this, a1);
		}

		::UnityEngine::Vector2Int OCIIJJOADAL()
		{
			return ((::UnityEngine::Vector2Int(*)(::PVOID))((::PBYTE)hIl2Cpp + CHGHIALKMFM_OCIIJJOADAL_OFFSET))(this);
		}

		::System::Nullable* get_PrimaryAttributeType()
		{
			return ((::System::Nullable*(*)(::PVOID))((::PBYTE)hIl2Cpp + CHGHIALKMFM_GET_PRIMARYATTRIBUTETYPE_OFFSET))(this);
		}

		::System::Void set_PrimaryAttributeType(::System::Nullable* a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::Nullable*))((::PBYTE)hIl2Cpp + CHGHIALKMFM_SET_PRIMARYATTRIBUTETYPE_OFFSET))(this, a1);
		}

		::System::Boolean get_IsRecommended()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + CHGHIALKMFM_GET_ISRECOMMENDED_OFFSET))(this);
		}

		::System::Void set_IsRecommended(::System::Boolean a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::Boolean))((::PBYTE)hIl2Cpp + CHGHIALKMFM_SET_ISRECOMMENDED_OFFSET))(this, a1);
		}

		::System::Boolean get_IsDiscouraged()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + CHGHIALKMFM_GET_ISDISCOURAGED_OFFSET))(this);
		}

		::System::Void set_IsDiscouraged(::System::Boolean a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::Boolean))((::PBYTE)hIl2Cpp + CHGHIALKMFM_SET_ISDISCOURAGED_OFFSET))(this, a1);
		}

		::R3::ReactiveProperty_1<::System::Boolean>* get_MutableIsUsable()
		{
			return ((::R3::ReactiveProperty_1<::System::Boolean>*(*)(::PVOID))((::PBYTE)hIl2Cpp + CHGHIALKMFM_GET_MUTABLEISUSABLE_OFFSET))(this);
		}

		::R3::ReadOnlyReactiveProperty_1<::System::Boolean>* PMFCJOMNBLK()
		{
			return ((::R3::ReadOnlyReactiveProperty_1<::System::Boolean>*(*)(::PVOID))((::PBYTE)hIl2Cpp + CHGHIALKMFM_PMFCJOMNBLK_OFFSET))(this);
		}

		::System::Boolean AOFKJKBDGBE()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + CHGHIALKMFM_AOFKJKBDGBE_OFFSET))(this);
		}

		::System::Collections::Generic::IReadOnlyList_1<::DIGCDGKOBMK*>* get_Buffs()
		{
			return ((::System::Collections::Generic::IReadOnlyList_1<::DIGCDGKOBMK*>*(*)(::PVOID))((::PBYTE)hIl2Cpp + CHGHIALKMFM_GET_BUFFS_OFFSET))(this);
		}

		::System::Void set_Buffs(::System::Collections::Generic::IReadOnlyList_1<::DIGCDGKOBMK*>* a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::Collections::Generic::IReadOnlyList_1<::DIGCDGKOBMK*>*))((::PBYTE)hIl2Cpp + CHGHIALKMFM_SET_BUFFS_OFFSET))(this, a1);
		}

		::System::Boolean IICBFEMFFNN()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + CHGHIALKMFM_IICBFEMFFNN_OFFSET))(this);
		}

		::System::Collections::Generic::IEnumerable_1<::UnityEngine::Vector2Int>* MFLEJEAGNCH(::UnityEngine::Vector2Int a1)
		{
			return ((::System::Collections::Generic::IEnumerable_1<::UnityEngine::Vector2Int>*(*)(::PVOID, ::UnityEngine::Vector2Int))((::PBYTE)hIl2Cpp + CHGHIALKMFM_MFLEJEAGNCH_OFFSET))(this, a1);
		}

		::System::Collections::Generic::IEnumerable_1<::UnityEngine::Vector2Int>* MFLEJEAGNCH_1(::PLHLAIJKMOD a1)
		{
			return ((::System::Collections::Generic::IEnumerable_1<::UnityEngine::Vector2Int>*(*)(::PVOID, ::PLHLAIJKMOD))((::PBYTE)hIl2Cpp + CHGHIALKMFM_MFLEJEAGNCH_1_OFFSET))(this, a1);
		}

		::UnityEngine::Vector2Int CGEMEKLFAFM(::RPG::Client::MechCraft::MechCraftRotationType a1)
		{
			return ((::UnityEngine::Vector2Int(*)(::PVOID, ::RPG::Client::MechCraft::MechCraftRotationType))((::PBYTE)hIl2Cpp + CHGHIALKMFM_CGEMEKLFAFM_OFFSET))(this, a1);
		}

		::System::Collections::Generic::IEnumerable_1<::UnityEngine::Vector2Int>* LMIOANICNMI(::RPG::Client::MechCraft::MechCraftRotationType a1)
		{
			return ((::System::Collections::Generic::IEnumerable_1<::UnityEngine::Vector2Int>*(*)(::PVOID, ::RPG::Client::MechCraft::MechCraftRotationType))((::PBYTE)hIl2Cpp + CHGHIALKMFM_LMIOANICNMI_OFFSET))(this, a1);
		}

		::System::Void JFECKCDCFJP(::RPG::Client::MechCraft::MechCraftRotationType a1, ::UnityEngine::Vector2Int a2, ::RPG::Client::MechCraft::MechCraftRotationType a3)
		{
			return ((::System::Void(*)(::PVOID, ::RPG::Client::MechCraft::MechCraftRotationType, ::UnityEngine::Vector2Int, ::RPG::Client::MechCraft::MechCraftRotationType))((::PBYTE)hIl2Cpp + CHGHIALKMFM_JFECKCDCFJP_OFFSET))(this, a1, a2, a3);
		}

	};
