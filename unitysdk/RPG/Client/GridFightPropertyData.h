#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/AvatarPropertyType.h"
#include "unitysdk/System/Object.h"
#include "unitysdk/RPG/GameCore/FixPoint.h"
class FNCAJPNHGMN;
class IIHGOLOEGHC;
class ILEMEHDHELP;
class OFAKEFLLHNP;
namespace RPG::Client { class GridFightRole; }
namespace RPG::Client { class GridFightRoleProperty; }
namespace System::Collections::Generic { template <typename T> class List_1; }

#define RPG_CLIENT_GRIDFIGHTPROPERTYDATA_ADDMODIFIERSOURCE_OFFSET UNITYSDK_OFFSET(0x1DF3E410)
#define RPG_CLIENT_GRIDFIGHTPROPERTYDATA_CCTOR_OFFSET UNITYSDK_OFFSET(0x1DF3C1B0)
#define RPG_CLIENT_GRIDFIGHTPROPERTYDATA_CTOR_OFFSET UNITYSDK_OFFSET(0x1DF3E360)
#define RPG_CLIENT_GRIDFIGHTPROPERTYDATA_GETPROPERTY_OFFSET UNITYSDK_OFFSET(0x1DF3E510)
#define RPG_CLIENT_GRIDFIGHTPROPERTYDATA_GET_CALCULATOR_OFFSET UNITYSDK_OFFSET(0x1DF3ECF0)
#define RPG_CLIENT_GRIDFIGHTPROPERTYDATA_GET_CURRENTENERGYBAR_OFFSET UNITYSDK_OFFSET(0x1DF3E990)
#define RPG_CLIENT_GRIDFIGHTPROPERTYDATA_GET_CURRENTHP_OFFSET UNITYSDK_OFFSET(0x1DF3E7F0)
#define RPG_CLIENT_GRIDFIGHTPROPERTYDATA_GET_CURRENTSPECIALSP_OFFSET UNITYSDK_OFFSET(0x1DF3E890)
#define RPG_CLIENT_GRIDFIGHTPROPERTYDATA_GET_CURRENTSPEED_OFFSET UNITYSDK_OFFSET(0x1DF3E940)
#define RPG_CLIENT_GRIDFIGHTPROPERTYDATA_GET_CURRENTSP_OFFSET UNITYSDK_OFFSET(0x1DF3E840)
#define RPG_CLIENT_GRIDFIGHTPROPERTYDATA__GETAVATARRAWPROPERTYVALUE_OFFSET UNITYSDK_OFFSET(0x1DF3F530)
#define RPG_CLIENT_GRIDFIGHTPROPERTYDATA__GETBACKPROPERTYMODIFIER_OFFSET UNITYSDK_OFFSET(0x1DF3F3A0)
#define RPG_CLIENT_GRIDFIGHTPROPERTYDATA__GETEXCELPROPERTY_OFFSET UNITYSDK_OFFSET(0x1DF3ED50)
#define RPG_CLIENT_GRIDFIGHTPROPERTYDATA__GETFINALVALUE_OFFSET UNITYSDK_OFFSET(0x1DF3E5B0)
#define RPG_CLIENT_GRIDFIGHTPROPERTYDATA__GETINITIALENERGYBAR_OFFSET UNITYSDK_OFFSET(0x1DF3EA20)

namespace RPG::Client
{
	inline static constexpr unsigned int GridFightPropertyData_TypeDefinitionIndex = 66773;

	class GridFightPropertyData : public ::System::Object
	{
	public:
		::RPG::Client::GridFightRole* _Role; // 0x10
		::System::Collections::Generic::List_1<::FNCAJPNHGMN*>* _ModifierSources; // 0x18
		::IIHGOLOEGHC* _FormulaContext; // 0x20
		static ::ILEMEHDHELP** StaticGet__Calculator_k__BackingField()
		{
			return (::ILEMEHDHELP**)UnitySDK::FromName("RPG.Client", "GridFightPropertyData")->GetStaticField(0x67B60);
		}

		static ::System::Void _cctor()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + RPG_CLIENT_GRIDFIGHTPROPERTYDATA_CCTOR_OFFSET))();
		}

		::System::Void _ctor(::RPG::Client::GridFightRole* a1)
		{
			return ((::System::Void(*)(::PVOID, ::RPG::Client::GridFightRole*))((::PBYTE)hIl2Cpp + RPG_CLIENT_GRIDFIGHTPROPERTYDATA_CTOR_OFFSET))(this, a1);
		}

		::System::Void AddModifierSource(::FNCAJPNHGMN* a1)
		{
			return ((::System::Void(*)(::PVOID, ::FNCAJPNHGMN*))((::PBYTE)hIl2Cpp + RPG_CLIENT_GRIDFIGHTPROPERTYDATA_ADDMODIFIERSOURCE_OFFSET))(this, a1);
		}

		::RPG::Client::GridFightRoleProperty* GetProperty(::RPG::GameCore::AvatarPropertyType a1)
		{
			return ((::RPG::Client::GridFightRoleProperty*(*)(::PVOID, ::RPG::GameCore::AvatarPropertyType))((::PBYTE)hIl2Cpp + RPG_CLIENT_GRIDFIGHTPROPERTYDATA_GETPROPERTY_OFFSET))(this, a1);
		}

		::RPG::Client::GridFightRoleProperty* get_CurrentHP()
		{
			return ((::RPG::Client::GridFightRoleProperty*(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_GRIDFIGHTPROPERTYDATA_GET_CURRENTHP_OFFSET))(this);
		}

		::RPG::Client::GridFightRoleProperty* get_CurrentSP()
		{
			return ((::RPG::Client::GridFightRoleProperty*(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_GRIDFIGHTPROPERTYDATA_GET_CURRENTSP_OFFSET))(this);
		}

		::RPG::Client::GridFightRoleProperty* get_CurrentSpecialSP()
		{
			return ((::RPG::Client::GridFightRoleProperty*(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_GRIDFIGHTPROPERTYDATA_GET_CURRENTSPECIALSP_OFFSET))(this);
		}

		::RPG::Client::GridFightRoleProperty* get_CurrentSpeed()
		{
			return ((::RPG::Client::GridFightRoleProperty*(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_GRIDFIGHTPROPERTYDATA_GET_CURRENTSPEED_OFFSET))(this);
		}

		::RPG::Client::GridFightRoleProperty* get_CurrentEnergyBar()
		{
			return ((::RPG::Client::GridFightRoleProperty*(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_GRIDFIGHTPROPERTYDATA_GET_CURRENTENERGYBAR_OFFSET))(this);
		}

		static ::ILEMEHDHELP* get_Calculator()
		{
			return ((::ILEMEHDHELP*(*)())((::PBYTE)hIl2Cpp + RPG_CLIENT_GRIDFIGHTPROPERTYDATA_GET_CALCULATOR_OFFSET))();
		}

		::RPG::GameCore::FixPoint _GetFinalValue(::RPG::GameCore::AvatarPropertyType a1)
		{
			return ((::RPG::GameCore::FixPoint(*)(::PVOID, ::RPG::GameCore::AvatarPropertyType))((::PBYTE)hIl2Cpp + RPG_CLIENT_GRIDFIGHTPROPERTYDATA__GETFINALVALUE_OFFSET))(this, a1);
		}

		::RPG::GameCore::FixPoint _GetExcelProperty(::RPG::GameCore::AvatarPropertyType a1)
		{
			return ((::RPG::GameCore::FixPoint(*)(::PVOID, ::RPG::GameCore::AvatarPropertyType))((::PBYTE)hIl2Cpp + RPG_CLIENT_GRIDFIGHTPROPERTYDATA__GETEXCELPROPERTY_OFFSET))(this, a1);
		}

		::RPG::GameCore::FixPoint _GetAvatarRawPropertyValue(::RPG::GameCore::AvatarPropertyType a1)
		{
			return ((::RPG::GameCore::FixPoint(*)(::PVOID, ::RPG::GameCore::AvatarPropertyType))((::PBYTE)hIl2Cpp + RPG_CLIENT_GRIDFIGHTPROPERTYDATA__GETAVATARRAWPROPERTYVALUE_OFFSET))(this, a1);
		}

		::RPG::GameCore::FixPoint _GetInitialEnergyBar()
		{
			return ((::RPG::GameCore::FixPoint(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_GRIDFIGHTPROPERTYDATA__GETINITIALENERGYBAR_OFFSET))(this);
		}

		::OFAKEFLLHNP* _GetBackPropertyModifier(::RPG::GameCore::AvatarPropertyType a1)
		{
			return ((::OFAKEFLLHNP*(*)(::PVOID, ::RPG::GameCore::AvatarPropertyType))((::PBYTE)hIl2Cpp + RPG_CLIENT_GRIDFIGHTPROPERTYDATA__GETBACKPROPERTYMODIFIER_OFFSET))(this, a1);
		}

	};
}
