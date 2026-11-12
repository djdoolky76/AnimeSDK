#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/ControlSkillType.h"
#include "unitysdk/RPG/GameCore/SkillPropertyType.h"
#include "unitysdk/System/Object.h"
#include "unitysdk/RPG/GameCore/FixPoint.h"
class GBLLOCGMMPO;
class HBGIMIPDNDF;
namespace RPG::GameCore { class SkillData; }
namespace System { class String; }

#define FFLCBCBGMLI_CTOR_OFFSET UNITYSDK_OFFSET(0x16663A00)
#define FFLCBCBGMLI_DNPGGCBBNLI_OFFSET UNITYSDK_OFFSET(0x16663B70)
#define FFLCBCBGMLI_FIEAKHGBLKL_OFFSET UNITYSDK_OFFSET(0x16663B80)
#define FFLCBCBGMLI_GET_CTRLTYPE_OFFSET UNITYSDK_OFFSET(0x16663B30)
#define FFLCBCBGMLI_GET_DISABLECOUNT_OFFSET UNITYSDK_OFFSET(0x16663E20)
#define FFLCBCBGMLI_GET_LASTMANUALREPLACEDSKILL_OFFSET UNITYSDK_OFFSET(0x16663E60)
#define FFLCBCBGMLI_GET_OCCUPYDATA_OFFSET UNITYSDK_OFFSET(0x16663E40)
#define FFLCBCBGMLI_GET_OVERRIDEPROPERTIES_OFFSET UNITYSDK_OFFSET(0x16663B50)
#define FFLCBCBGMLI_GET_SLOTTRIGGERKEY_OFFSET UNITYSDK_OFFSET(0x16663E00)
#define FFLCBCBGMLI_GPFJIONLMIO_OFFSET UNITYSDK_OFFSET(0x16663AB0)
#define FFLCBCBGMLI_MDGNJPIMCPH_OFFSET UNITYSDK_OFFSET(0x16663E80)
#define FFLCBCBGMLI_NMDEGECPOAB_OFFSET UNITYSDK_OFFSET(0x16663DF0)
#define FFLCBCBGMLI_SET_CTRLTYPE_OFFSET UNITYSDK_OFFSET(0x16663B40)
#define FFLCBCBGMLI_SET_DISABLECOUNT_OFFSET UNITYSDK_OFFSET(0x16663E30)
#define FFLCBCBGMLI_SET_LASTMANUALREPLACEDSKILL_OFFSET UNITYSDK_OFFSET(0x16663E70)
#define FFLCBCBGMLI_SET_OCCUPYDATA_OFFSET UNITYSDK_OFFSET(0x16663E50)
#define FFLCBCBGMLI_SET_OVERRIDEPROPERTIES_OFFSET UNITYSDK_OFFSET(0x16663B60)
#define FFLCBCBGMLI_SET_SLOTTRIGGERKEY_OFFSET UNITYSDK_OFFSET(0x16663E10)

inline static constexpr unsigned int FFLCBCBGMLI_TypeDefinitionIndex = 58917;

	class FFLCBCBGMLI : public ::System::Object
	{
	public:
		::RPG::GameCore::SkillData* OIJCJPDGJBD; // 0x10
		::GBLLOCGMMPO* _OccupyData_k__BackingField; // 0x18
		::System::String* _SlotTriggerKey_k__BackingField; // 0x20
		::RPG::GameCore::SkillData* _LastManualReplacedSkill_k__BackingField; // 0x28
		::RPG::GameCore::SkillData* ECPIHNLHNBM; // 0x30
		::HBGIMIPDNDF* _OverrideProperties_k__BackingField; // 0x38
		::System::Int32 _DisableCount_k__BackingField; // 0x40
		::RPG::GameCore::ControlSkillType _CtrlType_k__BackingField; // 0x44
		::System::Void _ctor(::RPG::GameCore::ControlSkillType a1, ::RPG::GameCore::SkillData* a2)
		{
			return ((::System::Void(*)(::PVOID, ::RPG::GameCore::ControlSkillType, ::RPG::GameCore::SkillData*))((::PBYTE)hIl2Cpp + FFLCBCBGMLI_CTOR_OFFSET))(this, a1, a2);
		}

		::RPG::GameCore::ControlSkillType get_CtrlType()
		{
			return ((::RPG::GameCore::ControlSkillType(*)(::PVOID))((::PBYTE)hIl2Cpp + FFLCBCBGMLI_GET_CTRLTYPE_OFFSET))(this);
		}

		::System::Void set_CtrlType(::RPG::GameCore::ControlSkillType a1)
		{
			return ((::System::Void(*)(::PVOID, ::RPG::GameCore::ControlSkillType))((::PBYTE)hIl2Cpp + FFLCBCBGMLI_SET_CTRLTYPE_OFFSET))(this, a1);
		}

		::HBGIMIPDNDF* get_OverrideProperties()
		{
			return ((::HBGIMIPDNDF*(*)(::PVOID))((::PBYTE)hIl2Cpp + FFLCBCBGMLI_GET_OVERRIDEPROPERTIES_OFFSET))(this);
		}

		::System::Void set_OverrideProperties(::HBGIMIPDNDF* a1)
		{
			return ((::System::Void(*)(::PVOID, ::HBGIMIPDNDF*))((::PBYTE)hIl2Cpp + FFLCBCBGMLI_SET_OVERRIDEPROPERTIES_OFFSET))(this, a1);
		}

		::RPG::GameCore::SkillData* DNPGGCBBNLI()
		{
			return ((::RPG::GameCore::SkillData*(*)(::PVOID))((::PBYTE)hIl2Cpp + FFLCBCBGMLI_DNPGGCBBNLI_OFFSET))(this);
		}

		::System::Void FIEAKHGBLKL(::RPG::GameCore::SkillData* a1)
		{
			return ((::System::Void(*)(::PVOID, ::RPG::GameCore::SkillData*))((::PBYTE)hIl2Cpp + FFLCBCBGMLI_FIEAKHGBLKL_OFFSET))(this, a1);
		}

		::RPG::GameCore::SkillData* NMDEGECPOAB()
		{
			return ((::RPG::GameCore::SkillData*(*)(::PVOID))((::PBYTE)hIl2Cpp + FFLCBCBGMLI_NMDEGECPOAB_OFFSET))(this);
		}

		::System::Void GPFJIONLMIO(::RPG::GameCore::SkillData* a1)
		{
			return ((::System::Void(*)(::PVOID, ::RPG::GameCore::SkillData*))((::PBYTE)hIl2Cpp + FFLCBCBGMLI_GPFJIONLMIO_OFFSET))(this, a1);
		}

		::System::String* get_SlotTriggerKey()
		{
			return ((::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + FFLCBCBGMLI_GET_SLOTTRIGGERKEY_OFFSET))(this);
		}

		::System::Void set_SlotTriggerKey(::System::String* a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::String*))((::PBYTE)hIl2Cpp + FFLCBCBGMLI_SET_SLOTTRIGGERKEY_OFFSET))(this, a1);
		}

		::System::Int32 get_DisableCount()
		{
			return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + FFLCBCBGMLI_GET_DISABLECOUNT_OFFSET))(this);
		}

		::System::Void set_DisableCount(::System::Int32 a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::Int32))((::PBYTE)hIl2Cpp + FFLCBCBGMLI_SET_DISABLECOUNT_OFFSET))(this, a1);
		}

		::GBLLOCGMMPO* get_OccupyData()
		{
			return ((::GBLLOCGMMPO*(*)(::PVOID))((::PBYTE)hIl2Cpp + FFLCBCBGMLI_GET_OCCUPYDATA_OFFSET))(this);
		}

		::System::Void set_OccupyData(::GBLLOCGMMPO* a1)
		{
			return ((::System::Void(*)(::PVOID, ::GBLLOCGMMPO*))((::PBYTE)hIl2Cpp + FFLCBCBGMLI_SET_OCCUPYDATA_OFFSET))(this, a1);
		}

		::RPG::GameCore::SkillData* get_LastManualReplacedSkill()
		{
			return ((::RPG::GameCore::SkillData*(*)(::PVOID))((::PBYTE)hIl2Cpp + FFLCBCBGMLI_GET_LASTMANUALREPLACEDSKILL_OFFSET))(this);
		}

		::System::Void set_LastManualReplacedSkill(::RPG::GameCore::SkillData* a1)
		{
			return ((::System::Void(*)(::PVOID, ::RPG::GameCore::SkillData*))((::PBYTE)hIl2Cpp + FFLCBCBGMLI_SET_LASTMANUALREPLACEDSKILL_OFFSET))(this, a1);
		}

		::RPG::GameCore::FixPoint MDGNJPIMCPH(::RPG::GameCore::SkillPropertyType a1, ::RPG::GameCore::SkillData* a2, ::RPG::GameCore::FixPoint a3, ::RPG::GameCore::FixPoint a4)
		{
			return ((::RPG::GameCore::FixPoint(*)(::PVOID, ::RPG::GameCore::SkillPropertyType, ::RPG::GameCore::SkillData*, ::RPG::GameCore::FixPoint, ::RPG::GameCore::FixPoint))((::PBYTE)hIl2Cpp + FFLCBCBGMLI_MDGNJPIMCPH_OFFSET))(this, a1, a2, a3, a4);
		}

	};
