#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/Client/GridFightTraitConfigBase.h"
#include "unitysdk/RPG/GameCore/GridFightActivationType.h"
#include "unitysdk/RPG/GameCore/GridFightTraitType.h"
#include "unitysdk/RPG/Client/TextID.h"
namespace RPG::GameCore { class GridFightTraitBaseConfigRow; }
namespace System { class String; }

#define RPG_CLIENT_GRIDFIGHTTRAITCONFIG_CTOR_OFFSET UNITYSDK_OFFSET(0x1D3F2AA0)
#define RPG_CLIENT_GRIDFIGHTTRAITCONFIG_GETBANNEDMODULEID_OFFSET UNITYSDK_OFFSET(0x1D3F2FB0)
#define RPG_CLIENT_GRIDFIGHTTRAITCONFIG_GET_ACTIVATIONTYPE_OFFSET UNITYSDK_OFFSET(0x1D3F2E70)
#define RPG_CLIENT_GRIDFIGHTTRAITCONFIG_GET_BASEDESC_OFFSET UNITYSDK_OFFSET(0x1D3F2BE0)
#define RPG_CLIENT_GRIDFIGHTTRAITCONFIG_GET_BATTLEEVENTIDLIST_OFFSET UNITYSDK_OFFSET(0x1D3F2F10)
#define RPG_CLIENT_GRIDFIGHTTRAITCONFIG_GET_CUTINPATH_OFFSET UNITYSDK_OFFSET(0x1D3F2B90)
#define RPG_CLIENT_GRIDFIGHTTRAITCONFIG_GET_ICONPATH_OFFSET UNITYSDK_OFFSET(0x1D3E72D0)
#define RPG_CLIENT_GRIDFIGHTTRAITCONFIG_GET_ID_OFFSET UNITYSDK_OFFSET(0x1D3F26D0)
#define RPG_CLIENT_GRIDFIGHTTRAITCONFIG_GET_MINIICONPATH_OFFSET UNITYSDK_OFFSET(0x1D3F2B40)
#define RPG_CLIENT_GRIDFIGHTTRAITCONFIG_GET_NAMETEXTID_OFFSET UNITYSDK_OFFSET(0x1D3E71E0)
#define RPG_CLIENT_GRIDFIGHTTRAITCONFIG_GET_PRIORITY_OFFSET UNITYSDK_OFFSET(0x1D3F2F60)
#define RPG_CLIENT_GRIDFIGHTTRAITCONFIG_GET_SIMPLEDESC_OFFSET UNITYSDK_OFFSET(0x1D3F2D00)
#define RPG_CLIENT_GRIDFIGHTTRAITCONFIG_GET_TRAITEFFECTLIST_OFFSET UNITYSDK_OFFSET(0x1D3F2E20)
#define RPG_CLIENT_GRIDFIGHTTRAITCONFIG_GET_TRAITTYPE_OFFSET UNITYSDK_OFFSET(0x1D3F2EC0)

namespace RPG::Client
{
	inline static constexpr unsigned int GridFightTraitConfig_TypeDefinitionIndex = 67348;

	class GridFightTraitConfig : public ::RPG::Client::GridFightTraitConfigBase
	{
	public:
		::RPG::GameCore::GridFightTraitBaseConfigRow* _Row; // 0x18
		::System::Void _ctor(::RPG::GameCore::GridFightTraitBaseConfigRow* a1)
		{
			return ((::System::Void(*)(::PVOID, ::RPG::GameCore::GridFightTraitBaseConfigRow*))((::PBYTE)hIl2Cpp + RPG_CLIENT_GRIDFIGHTTRAITCONFIG_CTOR_OFFSET))(this, a1);
		}

		::System::UInt32 get_ID()
		{
			return ((::System::UInt32(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_GRIDFIGHTTRAITCONFIG_GET_ID_OFFSET))(this);
		}

		::RPG::Client::TextID get_NameTextID()
		{
			return ((::RPG::Client::TextID(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_GRIDFIGHTTRAITCONFIG_GET_NAMETEXTID_OFFSET))(this);
		}

		::System::String* get_IconPath()
		{
			return ((::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_GRIDFIGHTTRAITCONFIG_GET_ICONPATH_OFFSET))(this);
		}

		::System::String* get_MiniIconPath()
		{
			return ((::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_GRIDFIGHTTRAITCONFIG_GET_MINIICONPATH_OFFSET))(this);
		}

		::System::String* get_CutInPath()
		{
			return ((::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_GRIDFIGHTTRAITCONFIG_GET_CUTINPATH_OFFSET))(this);
		}

		::System::String* get_BaseDesc()
		{
			return ((::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_GRIDFIGHTTRAITCONFIG_GET_BASEDESC_OFFSET))(this);
		}

		::System::String* get_SimpleDesc()
		{
			return ((::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_GRIDFIGHTTRAITCONFIG_GET_SIMPLEDESC_OFFSET))(this);
		}

		::Il2CppArray<::System::UInt32>* get_TraitEffectList()
		{
			return ((::Il2CppArray<::System::UInt32>*(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_GRIDFIGHTTRAITCONFIG_GET_TRAITEFFECTLIST_OFFSET))(this);
		}

		::RPG::GameCore::GridFightActivationType get_ActivationType()
		{
			return ((::RPG::GameCore::GridFightActivationType(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_GRIDFIGHTTRAITCONFIG_GET_ACTIVATIONTYPE_OFFSET))(this);
		}

		::RPG::GameCore::GridFightTraitType get_TraitType()
		{
			return ((::RPG::GameCore::GridFightTraitType(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_GRIDFIGHTTRAITCONFIG_GET_TRAITTYPE_OFFSET))(this);
		}

		::Il2CppArray<::System::UInt32>* get_BattleEventIDList()
		{
			return ((::Il2CppArray<::System::UInt32>*(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_GRIDFIGHTTRAITCONFIG_GET_BATTLEEVENTIDLIST_OFFSET))(this);
		}

		::System::UInt32 get_Priority()
		{
			return ((::System::UInt32(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_GRIDFIGHTTRAITCONFIG_GET_PRIORITY_OFFSET))(this);
		}

		::System::UInt32 GetBannedModuleID()
		{
			return ((::System::UInt32(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_GRIDFIGHTTRAITCONFIG_GETBANNEDMODULEID_OFFSET))(this);
		}

	};
}
