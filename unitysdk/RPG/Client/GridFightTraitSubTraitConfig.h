#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/Client/GridFightTraitConfigBase.h"
#include "unitysdk/RPG/GameCore/GridFightActivationType.h"
#include "unitysdk/RPG/GameCore/GridFightTraitType.h"
#include "unitysdk/RPG/Client/TextID.h"
namespace RPG::GameCore { class GridFightSubTraitBasicInfoRow; }
namespace RPG::GameCore { class GridFightTraitBaseConfigRow; }
namespace System { class String; }

#define RPG_CLIENT_GRIDFIGHTTRAITSUBTRAITCONFIG_CTOR_OFFSET UNITYSDK_OFFSET(0xDCF1A90)
#define RPG_CLIENT_GRIDFIGHTTRAITSUBTRAITCONFIG_GET_ACTIVATIONTYPE_OFFSET UNITYSDK_OFFSET(0xDCF1F80)
#define RPG_CLIENT_GRIDFIGHTTRAITSUBTRAITCONFIG_GET_BASEDESC_OFFSET UNITYSDK_OFFSET(0xDCF1CF0)
#define RPG_CLIENT_GRIDFIGHTTRAITSUBTRAITCONFIG_GET_BATTLEEVENTIDLIST_OFFSET UNITYSDK_OFFSET(0xDCF2020)
#define RPG_CLIENT_GRIDFIGHTTRAITSUBTRAITCONFIG_GET_CUTINPATH_OFFSET UNITYSDK_OFFSET(0xDCF1C90)
#define RPG_CLIENT_GRIDFIGHTTRAITSUBTRAITCONFIG_GET_FATHERTRAITID_OFFSET UNITYSDK_OFFSET(0xDCF20C0)
#define RPG_CLIENT_GRIDFIGHTTRAITSUBTRAITCONFIG_GET_ICONPATH_OFFSET UNITYSDK_OFFSET(0xDCF1BD0)
#define RPG_CLIENT_GRIDFIGHTTRAITSUBTRAITCONFIG_GET_ID_OFFSET UNITYSDK_OFFSET(0xDCF1B10)
#define RPG_CLIENT_GRIDFIGHTTRAITSUBTRAITCONFIG_GET_MINIICONPATH_OFFSET UNITYSDK_OFFSET(0xDCF1C30)
#define RPG_CLIENT_GRIDFIGHTTRAITSUBTRAITCONFIG_GET_NAMETEXTID_OFFSET UNITYSDK_OFFSET(0xDCF1B60)
#define RPG_CLIENT_GRIDFIGHTTRAITSUBTRAITCONFIG_GET_PRIORITY_OFFSET UNITYSDK_OFFSET(0xDCF2070)
#define RPG_CLIENT_GRIDFIGHTTRAITSUBTRAITCONFIG_GET_SIMPLEDESC_OFFSET UNITYSDK_OFFSET(0xDCF1E10)
#define RPG_CLIENT_GRIDFIGHTTRAITSUBTRAITCONFIG_GET_TRAITEFFECTLIST_OFFSET UNITYSDK_OFFSET(0xDCF1F30)
#define RPG_CLIENT_GRIDFIGHTTRAITSUBTRAITCONFIG_GET_TRAITTYPE_OFFSET UNITYSDK_OFFSET(0xDCF1FD0)

namespace RPG::Client
{
	inline static constexpr unsigned int GridFightTraitSubTraitConfig_TypeDefinitionIndex = 67347;

	class GridFightTraitSubTraitConfig : public ::RPG::Client::GridFightTraitConfigBase
	{
	public:
		::RPG::GameCore::GridFightSubTraitBasicInfoRow* _Row; // 0x18
		::RPG::GameCore::GridFightTraitBaseConfigRow* _FatherTraitRow; // 0x20
		::System::Void _ctor(::RPG::GameCore::GridFightSubTraitBasicInfoRow* a1)
		{
			return ((::System::Void(*)(::PVOID, ::RPG::GameCore::GridFightSubTraitBasicInfoRow*))((::PBYTE)hIl2Cpp + RPG_CLIENT_GRIDFIGHTTRAITSUBTRAITCONFIG_CTOR_OFFSET))(this, a1);
		}

		::System::UInt32 get_ID()
		{
			return ((::System::UInt32(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_GRIDFIGHTTRAITSUBTRAITCONFIG_GET_ID_OFFSET))(this);
		}

		::RPG::Client::TextID get_NameTextID()
		{
			return ((::RPG::Client::TextID(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_GRIDFIGHTTRAITSUBTRAITCONFIG_GET_NAMETEXTID_OFFSET))(this);
		}

		::System::String* get_IconPath()
		{
			return ((::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_GRIDFIGHTTRAITSUBTRAITCONFIG_GET_ICONPATH_OFFSET))(this);
		}

		::System::String* get_MiniIconPath()
		{
			return ((::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_GRIDFIGHTTRAITSUBTRAITCONFIG_GET_MINIICONPATH_OFFSET))(this);
		}

		::System::String* get_CutInPath()
		{
			return ((::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_GRIDFIGHTTRAITSUBTRAITCONFIG_GET_CUTINPATH_OFFSET))(this);
		}

		::System::String* get_BaseDesc()
		{
			return ((::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_GRIDFIGHTTRAITSUBTRAITCONFIG_GET_BASEDESC_OFFSET))(this);
		}

		::System::String* get_SimpleDesc()
		{
			return ((::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_GRIDFIGHTTRAITSUBTRAITCONFIG_GET_SIMPLEDESC_OFFSET))(this);
		}

		::Il2CppArray<::System::UInt32>* get_TraitEffectList()
		{
			return ((::Il2CppArray<::System::UInt32>*(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_GRIDFIGHTTRAITSUBTRAITCONFIG_GET_TRAITEFFECTLIST_OFFSET))(this);
		}

		::RPG::GameCore::GridFightActivationType get_ActivationType()
		{
			return ((::RPG::GameCore::GridFightActivationType(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_GRIDFIGHTTRAITSUBTRAITCONFIG_GET_ACTIVATIONTYPE_OFFSET))(this);
		}

		::RPG::GameCore::GridFightTraitType get_TraitType()
		{
			return ((::RPG::GameCore::GridFightTraitType(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_GRIDFIGHTTRAITSUBTRAITCONFIG_GET_TRAITTYPE_OFFSET))(this);
		}

		::Il2CppArray<::System::UInt32>* get_BattleEventIDList()
		{
			return ((::Il2CppArray<::System::UInt32>*(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_GRIDFIGHTTRAITSUBTRAITCONFIG_GET_BATTLEEVENTIDLIST_OFFSET))(this);
		}

		::System::UInt32 get_Priority()
		{
			return ((::System::UInt32(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_GRIDFIGHTTRAITSUBTRAITCONFIG_GET_PRIORITY_OFFSET))(this);
		}

		::System::UInt32 get_FatherTraitID()
		{
			return ((::System::UInt32(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_GRIDFIGHTTRAITSUBTRAITCONFIG_GET_FATHERTRAITID_OFFSET))(this);
		}

	};
}
