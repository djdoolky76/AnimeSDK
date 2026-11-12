#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/AvatarPropertyType.h"
#include "unitysdk/RPG/GameCore/FixPoint.h"
#include "unitysdk/System/Object.h"
class CIADJCABOFD;
class HDCJJFDLHIO;
class IIHGOLOEGHC;
class NFMGBKNCDLK;
namespace RPG::Client { class GridFightBattleGameContext; }
namespace RPG::Client { class GridFightRoleProperty; }
namespace RPG::Client { class GridFightTraitElationLaughPointEffect; }
namespace RPG::GameCore { class TurnBasedAbilityComponent; }
namespace System::Collections::Generic { template <typename T1, typename T2> class Dictionary_2; }
namespace System::Collections::Generic { template <typename T> class HashSet_1; }
namespace System::Collections::Generic { template <typename T> class List_1; }

#define RPG_CLIENT_GRIDFIGHTELATIONLAUGHPOINTPROPERTY_CCTOR_OFFSET UNITYSDK_OFFSET(0xDABF2F0)
#define RPG_CLIENT_GRIDFIGHTELATIONLAUGHPOINTPROPERTY_CTOR_OFFSET UNITYSDK_OFFSET(0xDABF1D0)
#define RPG_CLIENT_GRIDFIGHTELATIONLAUGHPOINTPROPERTY_GETBASEVALUE_OFFSET UNITYSDK_OFFSET(0xDABEE20)
#define RPG_CLIENT_GRIDFIGHTELATIONLAUGHPOINTPROPERTY_GETEXTRAEFFECTID_OFFSET UNITYSDK_OFFSET(0xDABF140)
#define RPG_CLIENT_GRIDFIGHTELATIONLAUGHPOINTPROPERTY_GETPROPERTYFACTORCOUNT_OFFSET UNITYSDK_OFFSET(0xDABEA20)
#define RPG_CLIENT_GRIDFIGHTELATIONLAUGHPOINTPROPERTY_GETPROPERTYFACTORTYPE_OFFSET UNITYSDK_OFFSET(0xDABEB60)
#define RPG_CLIENT_GRIDFIGHTELATIONLAUGHPOINTPROPERTY_GETPROPERTYTYPE_OFFSET UNITYSDK_OFFSET(0xDABE940)
#define RPG_CLIENT_GRIDFIGHTELATIONLAUGHPOINTPROPERTY_GETPROPERTY_1_OFFSET UNITYSDK_OFFSET(0xDABE8A0)
#define RPG_CLIENT_GRIDFIGHTELATIONLAUGHPOINTPROPERTY_GETPROPERTY_OFFSET UNITYSDK_OFFSET(0xDABE7B0)
#define RPG_CLIENT_GRIDFIGHTELATIONLAUGHPOINTPROPERTY_GET_DETAILPROPERTYCOUNT_OFFSET UNITYSDK_OFFSET(0xDABE700)
#define RPG_CLIENT_GRIDFIGHTELATIONLAUGHPOINTPROPERTY_GET_OVERVIEWPROPERTYCOUNT_OFFSET UNITYSDK_OFFSET(0xDABE650)
#define RPG_CLIENT_GRIDFIGHTELATIONLAUGHPOINTPROPERTY_GET_PROPERTYMAP_OFFSET UNITYSDK_OFFSET(0xDABF1C0)
#define RPG_CLIENT_GRIDFIGHTELATIONLAUGHPOINTPROPERTY_ISENHANCEPROPERTY_OFFSET UNITYSDK_OFFSET(0xDABF080)
#define RPG_CLIENT_GRIDFIGHTELATIONLAUGHPOINTPROPERTY_SETUPTRAIT_OFFSET UNITYSDK_OFFSET(0xDABDF60)
#define RPG_CLIENT_GRIDFIGHTELATIONLAUGHPOINTPROPERTY_UPDATE_OFFSET UNITYSDK_OFFSET(0xDABE0E0)
#define RPG_CLIENT_GRIDFIGHTELATIONLAUGHPOINTPROPERTY__GETABILITYCOMPONENT_OFFSET UNITYSDK_OFFSET(0xDABEFA0)
#define RPG_CLIENT_GRIDFIGHTELATIONLAUGHPOINTPROPERTY__GETFINALVALUE_OFFSET UNITYSDK_OFFSET(0xDABEC70)

namespace RPG::Client
{
	inline static constexpr unsigned int GridFightElationLaughPointProperty_TypeDefinitionIndex = 67195;

	class GridFightElationLaughPointProperty : public ::System::Object
	{
	public:
		::System::Collections::Generic::Dictionary_2<::System::UInt32, ::RPG::GameCore::FixPoint>* _PropertyMap_k__BackingField; // 0x10
		::IIHGOLOEGHC* _FormulaContext; // 0x18
		::RPG::Client::GridFightTraitElationLaughPointEffect* _Effect; // 0x20
		::NFMGBKNCDLK* _StarModifierSource; // 0x28
		static ::System::Collections::Generic::HashSet_1<::RPG::GameCore::AvatarPropertyType>** StaticGet__ExtraPropertyTypes()
		{
			return (::System::Collections::Generic::HashSet_1<::RPG::GameCore::AvatarPropertyType>**)UnitySDK::FromName("RPG.Client", "GridFightElationLaughPointProperty")->GetStaticField(0x6D6E0);
		}

		static ::System::Collections::Generic::Dictionary_2<::RPG::GameCore::AvatarPropertyType, ::System::Collections::Generic::List_1<::RPG::GameCore::AvatarPropertyType>*>** StaticGet__FactorTypes()
		{
			return (::System::Collections::Generic::Dictionary_2<::RPG::GameCore::AvatarPropertyType, ::System::Collections::Generic::List_1<::RPG::GameCore::AvatarPropertyType>*>**)UnitySDK::FromName("RPG.Client", "GridFightElationLaughPointProperty")->GetStaticField(0x6D6E8);
		}

		static ::System::Collections::Generic::List_1<::RPG::GameCore::AvatarPropertyType>** StaticGet__DetailPropertyTypes()
		{
			return (::System::Collections::Generic::List_1<::RPG::GameCore::AvatarPropertyType>**)UnitySDK::FromName("RPG.Client", "GridFightElationLaughPointProperty")->GetStaticField(0x6D6F0);
		}

		static ::CIADJCABOFD** StaticGet__Calculator()
		{
			return (::CIADJCABOFD**)UnitySDK::FromName("RPG.Client", "GridFightElationLaughPointProperty")->GetStaticField(0x6D6F8);
		}

		static ::System::Collections::Generic::List_1<::RPG::GameCore::AvatarPropertyType>** StaticGet__OverviewPropertyTypes()
		{
			return (::System::Collections::Generic::List_1<::RPG::GameCore::AvatarPropertyType>**)UnitySDK::FromName("RPG.Client", "GridFightElationLaughPointProperty")->GetStaticField(0x6D700);
		}

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_GRIDFIGHTELATIONLAUGHPOINTPROPERTY_CTOR_OFFSET))(this);
		}

		static ::System::Void _cctor()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + RPG_CLIENT_GRIDFIGHTELATIONLAUGHPOINTPROPERTY_CCTOR_OFFSET))();
		}

		::System::Void SetupTrait(::RPG::Client::GridFightTraitElationLaughPointEffect* a1)
		{
			return ((::System::Void(*)(::PVOID, ::RPG::Client::GridFightTraitElationLaughPointEffect*))((::PBYTE)hIl2Cpp + RPG_CLIENT_GRIDFIGHTELATIONLAUGHPOINTPROPERTY_SETUPTRAIT_OFFSET))(this, a1);
		}

		::System::Void Update(::HDCJJFDLHIO* a1)
		{
			return ((::System::Void(*)(::PVOID, ::HDCJJFDLHIO*))((::PBYTE)hIl2Cpp + RPG_CLIENT_GRIDFIGHTELATIONLAUGHPOINTPROPERTY_UPDATE_OFFSET))(this, a1);
		}

		::System::Int32 get_OverviewPropertyCount()
		{
			return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_GRIDFIGHTELATIONLAUGHPOINTPROPERTY_GET_OVERVIEWPROPERTYCOUNT_OFFSET))(this);
		}

		::System::Int32 get_DetailPropertyCount()
		{
			return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_GRIDFIGHTELATIONLAUGHPOINTPROPERTY_GET_DETAILPROPERTYCOUNT_OFFSET))(this);
		}

		::RPG::Client::GridFightRoleProperty* GetProperty(::System::Int32 a1)
		{
			return ((::RPG::Client::GridFightRoleProperty*(*)(::PVOID, ::System::Int32))((::PBYTE)hIl2Cpp + RPG_CLIENT_GRIDFIGHTELATIONLAUGHPOINTPROPERTY_GETPROPERTY_OFFSET))(this, a1);
		}

		::RPG::GameCore::AvatarPropertyType GetPropertyType(::System::Int32 a1)
		{
			return ((::RPG::GameCore::AvatarPropertyType(*)(::PVOID, ::System::Int32))((::PBYTE)hIl2Cpp + RPG_CLIENT_GRIDFIGHTELATIONLAUGHPOINTPROPERTY_GETPROPERTYTYPE_OFFSET))(this, a1);
		}

		::System::Int32 GetPropertyFactorCount(::RPG::GameCore::AvatarPropertyType a1)
		{
			return ((::System::Int32(*)(::PVOID, ::RPG::GameCore::AvatarPropertyType))((::PBYTE)hIl2Cpp + RPG_CLIENT_GRIDFIGHTELATIONLAUGHPOINTPROPERTY_GETPROPERTYFACTORCOUNT_OFFSET))(this, a1);
		}

		::RPG::GameCore::AvatarPropertyType GetPropertyFactorType(::RPG::GameCore::AvatarPropertyType a1, ::System::Int32 a2)
		{
			return ((::RPG::GameCore::AvatarPropertyType(*)(::PVOID, ::RPG::GameCore::AvatarPropertyType, ::System::Int32))((::PBYTE)hIl2Cpp + RPG_CLIENT_GRIDFIGHTELATIONLAUGHPOINTPROPERTY_GETPROPERTYFACTORTYPE_OFFSET))(this, a1, a2);
		}

		::RPG::Client::GridFightRoleProperty* GetProperty_1(::RPG::GameCore::AvatarPropertyType a1)
		{
			return ((::RPG::Client::GridFightRoleProperty*(*)(::PVOID, ::RPG::GameCore::AvatarPropertyType))((::PBYTE)hIl2Cpp + RPG_CLIENT_GRIDFIGHTELATIONLAUGHPOINTPROPERTY_GETPROPERTY_1_OFFSET))(this, a1);
		}

		::RPG::GameCore::FixPoint GetBaseValue(::RPG::GameCore::AvatarPropertyType a1)
		{
			return ((::RPG::GameCore::FixPoint(*)(::PVOID, ::RPG::GameCore::AvatarPropertyType))((::PBYTE)hIl2Cpp + RPG_CLIENT_GRIDFIGHTELATIONLAUGHPOINTPROPERTY_GETBASEVALUE_OFFSET))(this, a1);
		}

		::RPG::GameCore::FixPoint _GetFinalValue(::RPG::GameCore::AvatarPropertyType a1)
		{
			return ((::RPG::GameCore::FixPoint(*)(::PVOID, ::RPG::GameCore::AvatarPropertyType))((::PBYTE)hIl2Cpp + RPG_CLIENT_GRIDFIGHTELATIONLAUGHPOINTPROPERTY__GETFINALVALUE_OFFSET))(this, a1);
		}

		::RPG::GameCore::TurnBasedAbilityComponent* _GetAbilityComponent(::RPG::Client::GridFightBattleGameContext* a1)
		{
			return ((::RPG::GameCore::TurnBasedAbilityComponent*(*)(::PVOID, ::RPG::Client::GridFightBattleGameContext*))((::PBYTE)hIl2Cpp + RPG_CLIENT_GRIDFIGHTELATIONLAUGHPOINTPROPERTY__GETABILITYCOMPONENT_OFFSET))(this, a1);
		}

		::System::Boolean IsEnhanceProperty(::RPG::GameCore::AvatarPropertyType a1)
		{
			return ((::System::Boolean(*)(::PVOID, ::RPG::GameCore::AvatarPropertyType))((::PBYTE)hIl2Cpp + RPG_CLIENT_GRIDFIGHTELATIONLAUGHPOINTPROPERTY_ISENHANCEPROPERTY_OFFSET))(this, a1);
		}

		::System::UInt32 GetExtraEffectID(::RPG::GameCore::AvatarPropertyType a1)
		{
			return ((::System::UInt32(*)(::PVOID, ::RPG::GameCore::AvatarPropertyType))((::PBYTE)hIl2Cpp + RPG_CLIENT_GRIDFIGHTELATIONLAUGHPOINTPROPERTY_GETEXTRAEFFECTID_OFFSET))(this, a1);
		}

		::System::Collections::Generic::Dictionary_2<::System::UInt32, ::RPG::GameCore::FixPoint>* get_PropertyMap()
		{
			return ((::System::Collections::Generic::Dictionary_2<::System::UInt32, ::RPG::GameCore::FixPoint>*(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_GRIDFIGHTELATIONLAUGHPOINTPROPERTY_GET_PROPERTYMAP_OFFSET))(this);
		}

	};
}
