#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/GridFightTraitEffectType.h"
#include "unitysdk/System/Object.h"
class AEHFALNJDKC;
class FBFODNFGMKG;
class FBNGHMHHHLL;
class JLKCBOIFJKC;
class MBHLMKKALIG;
namespace RPG::Client { class GridFightGameModifier; }
namespace RPG::Client { class GridFightModifierInfo; }
namespace RPG::Client { class GridFightPreparationTraitEffectIndicator; }
namespace RPG::Client { class GridFightRole; }
namespace RPG::Client { class GridFightTrait; }
namespace RPG::Client { class IGridFightTraitEffect; }
namespace RPG::GameCore { class GridFightRoleSwitchConfigRow; }
namespace System { class Object; }
namespace System::Collections::Generic { template <typename T1, typename T2> class Dictionary_2; }
namespace System::Collections::Generic { template <typename T> class IEnumerable_1; }
namespace System::Collections::Generic { template <typename T> class IList_1; }
namespace System::Collections::Generic { template <typename T> class List_1; }
namespace System::Collections::Specialized { class NotifyCollectionChangedEventArgs; }

#define RPG_CLIENT_GRIDFIGHTGAMETRAIT_CHECKHASTRAITBYEFFECTTYPE_OFFSET UNITYSDK_OFFSET(0x1CD6A170)
#define RPG_CLIENT_GRIDFIGHTGAMETRAIT_CTOR_OFFSET UNITYSDK_OFFSET(0x1CD585D0)
#define RPG_CLIENT_GRIDFIGHTGAMETRAIT_GETADDITIONALTRAITROLECHOOSETRAITIDS_OFFSET UNITYSDK_OFFSET(0x1CD69E50)
#define RPG_CLIENT_GRIDFIGHTGAMETRAIT_GETALLTRAITCANEFFECTSLOT_OFFSET UNITYSDK_OFFSET(0x1CD69960)
#define RPG_CLIENT_GRIDFIGHTGAMETRAIT_GETCHOOSETRAITBYMANUALROLEIDS_OFFSET UNITYSDK_OFFSET(0x1CD6A0B0)
#define RPG_CLIENT_GRIDFIGHTGAMETRAIT_GETCHOOSETRAITBYMANUALTRAITIDS_OFFSET UNITYSDK_OFFSET(0x1CD69D90)
#define RPG_CLIENT_GRIDFIGHTGAMETRAIT_GETEFFECTBYEFFECTID_OFFSET UNITYSDK_OFFSET(0x1CD60560)
#define RPG_CLIENT_GRIDFIGHTGAMETRAIT_GETEFFECTBYEFFECTTYPE_OFFSET UNITYSDK_OFFSET(0x1CD604F0)
#define RPG_CLIENT_GRIDFIGHTGAMETRAIT_GETEFFECTBYID_OFFSET UNITYSDK_OFFSET(0x1CD69B90)
#define RPG_CLIENT_GRIDFIGHTGAMETRAIT_GETGAINOTHERROLETRAITIDS_OFFSET UNITYSDK_OFFSET(0x1CD69F10)
#define RPG_CLIENT_GRIDFIGHTGAMETRAIT_GETPREPARATIONTRAITEFFECTINDICATORS_OFFSET UNITYSDK_OFFSET(0x1CD68DC0)
#define RPG_CLIENT_GRIDFIGHTGAMETRAIT_GETROLESBYTRAIT_OFFSET UNITYSDK_OFFSET(0x1CD6A910)
#define RPG_CLIENT_GRIDFIGHTGAMETRAIT_GETTRAITBYEFFECTTYPE_OFFSET UNITYSDK_OFFSET(0x1CD5F930)
#define RPG_CLIENT_GRIDFIGHTGAMETRAIT_GETTRAITBYID_OFFSET UNITYSDK_OFFSET(0x1CD65040)
#define RPG_CLIENT_GRIDFIGHTGAMETRAIT_GETTRAITS_OFFSET UNITYSDK_OFFSET(0x1CD68B70)
#define RPG_CLIENT_GRIDFIGHTGAMETRAIT_GET_ALLTRAITS_OFFSET UNITYSDK_OFFSET(0x1CD65140)
#define RPG_CLIENT_GRIDFIGHTGAMETRAIT_HASGAINOTHERROLETRAIT_OFFSET UNITYSDK_OFFSET(0x1CD69FD0)
#define RPG_CLIENT_GRIDFIGHTGAMETRAIT_INITIALIZETRAITS_OFFSET UNITYSDK_OFFSET(0x1CD5FB30)
#define RPG_CLIENT_GRIDFIGHTGAMETRAIT_INITMODIFIER_OFFSET UNITYSDK_OFFSET(0x1CD595F0)
#define RPG_CLIENT_GRIDFIGHTGAMETRAIT_INIT_OFFSET UNITYSDK_OFFSET(0x1CD58D40)
#define RPG_CLIENT_GRIDFIGHTGAMETRAIT_ISSHOWSPECIALFRONTBACKTYPETRAIT_OFFSET UNITYSDK_OFFSET(0x1CD6A310)
#define RPG_CLIENT_GRIDFIGHTGAMETRAIT_ONMEMBERSCHANGEDEVENTHANDLER_OFFSET UNITYSDK_OFFSET(0x1CD668C0)
#define RPG_CLIENT_GRIDFIGHTGAMETRAIT_ONMODIFIERADD_OFFSET UNITYSDK_OFFSET(0x1CD65470)
#define RPG_CLIENT_GRIDFIGHTGAMETRAIT_ONMODIFIERREMOVE_OFFSET UNITYSDK_OFFSET(0x1CD66120)
#define RPG_CLIENT_GRIDFIGHTGAMETRAIT_ONMODIFIERUPDATE_OFFSET UNITYSDK_OFFSET(0x1CD66210)
#define RPG_CLIENT_GRIDFIGHTGAMETRAIT_SETCOLLECTOR_OFFSET UNITYSDK_OFFSET(0x1CD58DB0)
#define RPG_CLIENT_GRIDFIGHTGAMETRAIT_SETROLECOLLECTOR_OFFSET UNITYSDK_OFFSET(0x1CD58FA0)
#define RPG_CLIENT_GRIDFIGHTGAMETRAIT_UPDATELAYER_OFFSET UNITYSDK_OFFSET(0x1CD65260)
#define RPG_CLIENT_GRIDFIGHTGAMETRAIT_UPDATETRAITEFFECT_OFFSET UNITYSDK_OFFSET(0x1CD5F740)
#define RPG_CLIENT_GRIDFIGHTGAMETRAIT__GETTRAITBYID_OFFSET UNITYSDK_OFFSET(0x1CD65090)
#define RPG_CLIENT_GRIDFIGHTGAMETRAIT__INITTRAITS_OFFSET UNITYSDK_OFFSET(0x1CD64B20)
#define RPG_CLIENT_GRIDFIGHTGAMETRAIT__ISADDITIONALTRAITROLECHOOSEMEMBER_OFFSET UNITYSDK_OFFSET(0x1CD6A6D0)
#define RPG_CLIENT_GRIDFIGHTGAMETRAIT__ONDEACTIVEALLTRAITCHANGED_OFFSET UNITYSDK_OFFSET(0x1CD65B20)
#define RPG_CLIENT_GRIDFIGHTGAMETRAIT__ONMEMBERTRAITCOLLECTIONCHANGED_OFFSET UNITYSDK_OFFSET(0x1CD67BD0)
#define RPG_CLIENT_GRIDFIGHTGAMETRAIT__TRYGETCURSWITCHROLE_OFFSET UNITYSDK_OFFSET(0x1CD6CD90)
#define RPG_CLIENT_GRIDFIGHTGAMETRAIT__TRYGETFRONTBACKSWITCHROLE_OFFSET UNITYSDK_OFFSET(0x1CD6D440)
#define RPG_CLIENT_GRIDFIGHTGAMETRAIT__TRYGETTRAITSWITCHROLE_OFFSET UNITYSDK_OFFSET(0x1CD6CF90)
#define RPG_CLIENT_GRIDFIGHTGAMETRAIT__UPDATETRAITIFMEMBERACTIVE_OFFSET UNITYSDK_OFFSET(0x1CD67A50)
#define RPG_CLIENT_GRIDFIGHTGAMETRAIT__UPDATETRAITS_OFFSET UNITYSDK_OFFSET(0x1CD688F0)

namespace RPG::Client
{
	inline static constexpr unsigned int GridFightGameTrait_TypeDefinitionIndex = 67297;

	class GridFightGameTrait : public ::System::Object
	{
	public:
		::System::Collections::Generic::Dictionary_2<::System::UInt32, ::RPG::Client::GridFightTrait*>* _TraitByID; // 0x10
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_GRIDFIGHTGAMETRAIT_CTOR_OFFSET))(this);
		}

		::System::Void Init(::MBHLMKKALIG* a1)
		{
			return ((::System::Void(*)(::PVOID, ::MBHLMKKALIG*))((::PBYTE)hIl2Cpp + RPG_CLIENT_GRIDFIGHTGAMETRAIT_INIT_OFFSET))(this, a1);
		}

		::RPG::Client::GridFightTrait* GetTraitByID(::System::UInt32 a1)
		{
			return ((::RPG::Client::GridFightTrait*(*)(::PVOID, ::System::UInt32))((::PBYTE)hIl2Cpp + RPG_CLIENT_GRIDFIGHTGAMETRAIT_GETTRAITBYID_OFFSET))(this, a1);
		}

		::System::Collections::Generic::IEnumerable_1<::RPG::Client::GridFightTrait*>* get_AllTraits()
		{
			return ((::System::Collections::Generic::IEnumerable_1<::RPG::Client::GridFightTrait*>*(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_GRIDFIGHTGAMETRAIT_GET_ALLTRAITS_OFFSET))(this);
		}

		::System::Void SetCollector(::FBFODNFGMKG* a1)
		{
			return ((::System::Void(*)(::PVOID, ::FBFODNFGMKG*))((::PBYTE)hIl2Cpp + RPG_CLIENT_GRIDFIGHTGAMETRAIT_SETCOLLECTOR_OFFSET))(this, a1);
		}

		::System::Void SetRoleCollector(::FBFODNFGMKG* a1)
		{
			return ((::System::Void(*)(::PVOID, ::FBFODNFGMKG*))((::PBYTE)hIl2Cpp + RPG_CLIENT_GRIDFIGHTGAMETRAIT_SETROLECOLLECTOR_OFFSET))(this, a1);
		}

		::System::Void UpdateLayer()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_GRIDFIGHTGAMETRAIT_UPDATELAYER_OFFSET))(this);
		}

		::System::Void InitModifier(::RPG::Client::GridFightModifierInfo* a1)
		{
			return ((::System::Void(*)(::PVOID, ::RPG::Client::GridFightModifierInfo*))((::PBYTE)hIl2Cpp + RPG_CLIENT_GRIDFIGHTGAMETRAIT_INITMODIFIER_OFFSET))(this, a1);
		}

		::System::Void OnModifierAdd(::RPG::Client::GridFightGameModifier* a1)
		{
			return ((::System::Void(*)(::PVOID, ::RPG::Client::GridFightGameModifier*))((::PBYTE)hIl2Cpp + RPG_CLIENT_GRIDFIGHTGAMETRAIT_ONMODIFIERADD_OFFSET))(this, a1);
		}

		::System::Void OnModifierRemove(::RPG::Client::GridFightGameModifier* a1)
		{
			return ((::System::Void(*)(::PVOID, ::RPG::Client::GridFightGameModifier*))((::PBYTE)hIl2Cpp + RPG_CLIENT_GRIDFIGHTGAMETRAIT_ONMODIFIERREMOVE_OFFSET))(this, a1);
		}

		::System::Void OnModifierUpdate(::RPG::Client::GridFightGameModifier* a1)
		{
			return ((::System::Void(*)(::PVOID, ::RPG::Client::GridFightGameModifier*))((::PBYTE)hIl2Cpp + RPG_CLIENT_GRIDFIGHTGAMETRAIT_ONMODIFIERUPDATE_OFFSET))(this, a1);
		}

		::System::Void _OnDeactiveAllTraitChanged(::System::UInt32 a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::UInt32))((::PBYTE)hIl2Cpp + RPG_CLIENT_GRIDFIGHTGAMETRAIT__ONDEACTIVEALLTRAITCHANGED_OFFSET))(this, a1);
		}

		::System::Void OnMembersChangedEventHandler(::System::Object* a1, ::System::Collections::Specialized::NotifyCollectionChangedEventArgs* a2)
		{
			return ((::System::Void(*)(::PVOID, ::System::Object*, ::System::Collections::Specialized::NotifyCollectionChangedEventArgs*))((::PBYTE)hIl2Cpp + RPG_CLIENT_GRIDFIGHTGAMETRAIT_ONMEMBERSCHANGEDEVENTHANDLER_OFFSET))(this, a1, a2);
		}

		::System::Void _OnMemberTraitCollectionChanged(::System::Object* a1, ::System::Collections::Specialized::NotifyCollectionChangedEventArgs* a2)
		{
			return ((::System::Void(*)(::PVOID, ::System::Object*, ::System::Collections::Specialized::NotifyCollectionChangedEventArgs*))((::PBYTE)hIl2Cpp + RPG_CLIENT_GRIDFIGHTGAMETRAIT__ONMEMBERTRAITCOLLECTIONCHANGED_OFFSET))(this, a1, a2);
		}

		::System::Void _UpdateTraitIfMemberActive(::AEHFALNJDKC* a1)
		{
			return ((::System::Void(*)(::PVOID, ::AEHFALNJDKC*))((::PBYTE)hIl2Cpp + RPG_CLIENT_GRIDFIGHTGAMETRAIT__UPDATETRAITIFMEMBERACTIVE_OFFSET))(this, a1);
		}

		::System::Void _UpdateTraits(::AEHFALNJDKC* a1)
		{
			return ((::System::Void(*)(::PVOID, ::AEHFALNJDKC*))((::PBYTE)hIl2Cpp + RPG_CLIENT_GRIDFIGHTGAMETRAIT__UPDATETRAITS_OFFSET))(this, a1);
		}

		::System::Void InitializeTraits(::System::Collections::Generic::IList_1<::FBNGHMHHHLL*>* a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::Collections::Generic::IList_1<::FBNGHMHHHLL*>*))((::PBYTE)hIl2Cpp + RPG_CLIENT_GRIDFIGHTGAMETRAIT_INITIALIZETRAITS_OFFSET))(this, a1);
		}

		::System::Collections::Generic::List_1<::RPG::Client::GridFightTrait*>* GetTraits()
		{
			return ((::System::Collections::Generic::List_1<::RPG::Client::GridFightTrait*>*(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_GRIDFIGHTGAMETRAIT_GETTRAITS_OFFSET))(this);
		}

		::System::Collections::Generic::List_1<::RPG::Client::GridFightPreparationTraitEffectIndicator*>* GetPreparationTraitEffectIndicators()
		{
			return ((::System::Collections::Generic::List_1<::RPG::Client::GridFightPreparationTraitEffectIndicator*>*(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_GRIDFIGHTGAMETRAIT_GETPREPARATIONTRAITEFFECTINDICATORS_OFFSET))(this);
		}

		::System::Collections::Generic::List_1<::RPG::Client::GridFightTrait*>* GetAllTraitCanEffectSlot()
		{
			return ((::System::Collections::Generic::List_1<::RPG::Client::GridFightTrait*>*(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_GRIDFIGHTGAMETRAIT_GETALLTRAITCANEFFECTSLOT_OFFSET))(this);
		}

		::RPG::Client::IGridFightTraitEffect* UpdateTraitEffect(::JLKCBOIFJKC* a1)
		{
			return ((::RPG::Client::IGridFightTraitEffect*(*)(::PVOID, ::JLKCBOIFJKC*))((::PBYTE)hIl2Cpp + RPG_CLIENT_GRIDFIGHTGAMETRAIT_UPDATETRAITEFFECT_OFFSET))(this, a1);
		}

		::RPG::Client::GridFightTrait* GetTraitByEffectType(::RPG::GameCore::GridFightTraitEffectType a1)
		{
			return ((::RPG::Client::GridFightTrait*(*)(::PVOID, ::RPG::GameCore::GridFightTraitEffectType))((::PBYTE)hIl2Cpp + RPG_CLIENT_GRIDFIGHTGAMETRAIT_GETTRAITBYEFFECTTYPE_OFFSET))(this, a1);
		}

		::RPG::Client::IGridFightTraitEffect* GetEffectByEffectType(::System::UInt32 a1, ::RPG::GameCore::GridFightTraitEffectType a2)
		{
			return ((::RPG::Client::IGridFightTraitEffect*(*)(::PVOID, ::System::UInt32, ::RPG::GameCore::GridFightTraitEffectType))((::PBYTE)hIl2Cpp + RPG_CLIENT_GRIDFIGHTGAMETRAIT_GETEFFECTBYEFFECTTYPE_OFFSET))(this, a1, a2);
		}

		::RPG::Client::IGridFightTraitEffect* GetEffectByID(::System::UInt32 a1)
		{
			return ((::RPG::Client::IGridFightTraitEffect*(*)(::PVOID, ::System::UInt32))((::PBYTE)hIl2Cpp + RPG_CLIENT_GRIDFIGHTGAMETRAIT_GETEFFECTBYID_OFFSET))(this, a1);
		}

		::RPG::Client::IGridFightTraitEffect* GetEffectByEffectID(::System::UInt32 a1, ::System::UInt32 a2)
		{
			return ((::RPG::Client::IGridFightTraitEffect*(*)(::PVOID, ::System::UInt32, ::System::UInt32))((::PBYTE)hIl2Cpp + RPG_CLIENT_GRIDFIGHTGAMETRAIT_GETEFFECTBYEFFECTID_OFFSET))(this, a1, a2);
		}

		::System::Collections::Generic::IEnumerable_1<::System::UInt32>* GetChooseTraitByManualTraitIDs(::System::UInt32 a1)
		{
			return ((::System::Collections::Generic::IEnumerable_1<::System::UInt32>*(*)(::PVOID, ::System::UInt32))((::PBYTE)hIl2Cpp + RPG_CLIENT_GRIDFIGHTGAMETRAIT_GETCHOOSETRAITBYMANUALTRAITIDS_OFFSET))(this, a1);
		}

		::System::Collections::Generic::IEnumerable_1<::System::UInt32>* GetAdditionalTraitRoleChooseTraitIDs(::System::UInt32 a1)
		{
			return ((::System::Collections::Generic::IEnumerable_1<::System::UInt32>*(*)(::PVOID, ::System::UInt32))((::PBYTE)hIl2Cpp + RPG_CLIENT_GRIDFIGHTGAMETRAIT_GETADDITIONALTRAITROLECHOOSETRAITIDS_OFFSET))(this, a1);
		}

		::System::Collections::Generic::IEnumerable_1<::System::UInt32>* GetGainOtherRoleTraitIDs(::System::UInt32 a1)
		{
			return ((::System::Collections::Generic::IEnumerable_1<::System::UInt32>*(*)(::PVOID, ::System::UInt32))((::PBYTE)hIl2Cpp + RPG_CLIENT_GRIDFIGHTGAMETRAIT_GETGAINOTHERROLETRAITIDS_OFFSET))(this, a1);
		}

		::System::Boolean HasGainOtherRoleTrait(::System::UInt32 a1, ::System::UInt32 a2)
		{
			return ((::System::Boolean(*)(::PVOID, ::System::UInt32, ::System::UInt32))((::PBYTE)hIl2Cpp + RPG_CLIENT_GRIDFIGHTGAMETRAIT_HASGAINOTHERROLETRAIT_OFFSET))(this, a1, a2);
		}

		::System::Collections::Generic::IEnumerable_1<::System::UInt32>* GetChooseTraitByManualRoleIDs(::System::UInt32 a1)
		{
			return ((::System::Collections::Generic::IEnumerable_1<::System::UInt32>*(*)(::PVOID, ::System::UInt32))((::PBYTE)hIl2Cpp + RPG_CLIENT_GRIDFIGHTGAMETRAIT_GETCHOOSETRAITBYMANUALROLEIDS_OFFSET))(this, a1);
		}

		::System::Boolean CheckHasTraitByEffectType(::RPG::GameCore::GridFightTraitEffectType a1)
		{
			return ((::System::Boolean(*)(::PVOID, ::RPG::GameCore::GridFightTraitEffectType))((::PBYTE)hIl2Cpp + RPG_CLIENT_GRIDFIGHTGAMETRAIT_CHECKHASTRAITBYEFFECTTYPE_OFFSET))(this, a1);
		}

		::System::Boolean IsShowSpecialFrontBackTypeTrait(::RPG::Client::GridFightRole* a1)
		{
			return ((::System::Boolean(*)(::PVOID, ::RPG::Client::GridFightRole*))((::PBYTE)hIl2Cpp + RPG_CLIENT_GRIDFIGHTGAMETRAIT_ISSHOWSPECIALFRONTBACKTYPETRAIT_OFFSET))(this, a1);
		}

		::System::Boolean _IsAdditionalTraitRoleChooseMember(::RPG::Client::GridFightRole* a1)
		{
			return ((::System::Boolean(*)(::PVOID, ::RPG::Client::GridFightRole*))((::PBYTE)hIl2Cpp + RPG_CLIENT_GRIDFIGHTGAMETRAIT__ISADDITIONALTRAITROLECHOOSEMEMBER_OFFSET))(this, a1);
		}

		::System::Void _InitTraits(::System::Collections::Generic::IEnumerable_1<::RPG::Client::GridFightTrait*>* a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::Collections::Generic::IEnumerable_1<::RPG::Client::GridFightTrait*>*))((::PBYTE)hIl2Cpp + RPG_CLIENT_GRIDFIGHTGAMETRAIT__INITTRAITS_OFFSET))(this, a1);
		}

		::RPG::Client::GridFightTrait* _GetTraitByID(::System::UInt32 a1)
		{
			return ((::RPG::Client::GridFightTrait*(*)(::PVOID, ::System::UInt32))((::PBYTE)hIl2Cpp + RPG_CLIENT_GRIDFIGHTGAMETRAIT__GETTRAITBYID_OFFSET))(this, a1);
		}

		::System::Collections::Generic::IEnumerable_1<::RPG::Client::GridFightRole*>* GetRolesByTrait(::System::UInt32 a1)
		{
			return ((::System::Collections::Generic::IEnumerable_1<::RPG::Client::GridFightRole*>*(*)(::PVOID, ::System::UInt32))((::PBYTE)hIl2Cpp + RPG_CLIENT_GRIDFIGHTGAMETRAIT_GETROLESBYTRAIT_OFFSET))(this, a1);
		}

		::System::Boolean _TryGetCurSwitchRole(::RPG::Client::GridFightRole* a1)
		{
			return ((::System::Boolean(*)(::PVOID, ::RPG::Client::GridFightRole*))((::PBYTE)hIl2Cpp + RPG_CLIENT_GRIDFIGHTGAMETRAIT__TRYGETCURSWITCHROLE_OFFSET))(this, a1);
		}

		::System::Boolean _TryGetTraitSwitchRole(::RPG::GameCore::GridFightRoleSwitchConfigRow* a1, ::RPG::Client::GridFightRole* a2)
		{
			return ((::System::Boolean(*)(::PVOID, ::RPG::GameCore::GridFightRoleSwitchConfigRow*, ::RPG::Client::GridFightRole*))((::PBYTE)hIl2Cpp + RPG_CLIENT_GRIDFIGHTGAMETRAIT__TRYGETTRAITSWITCHROLE_OFFSET))(this, a1, a2);
		}

		::System::Boolean _TryGetFrontBackSwitchRole(::RPG::GameCore::GridFightRoleSwitchConfigRow* a1, ::RPG::Client::GridFightRole* a2)
		{
			return ((::System::Boolean(*)(::PVOID, ::RPG::GameCore::GridFightRoleSwitchConfigRow*, ::RPG::Client::GridFightRole*))((::PBYTE)hIl2Cpp + RPG_CLIENT_GRIDFIGHTGAMETRAIT__TRYGETFRONTBACKSWITCHROLE_OFFSET))(this, a1, a2);
		}

	};
}
