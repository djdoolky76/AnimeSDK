#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/ChimeraDuelTeamType.h"
#include "unitysdk/System/Object.h"
class BFMHFBHIAAL;
class BIDKFNCENHJ;
class ECIIEBFKNMJ;
class FGLMDDJIGBL;
class GMGHBGLNMFF;
class HGNBCNMOBAO;
class KAKADGHNMFK;
class PAMFILOLBCJ;
class PPNKAAHMBJI;
namespace Entitas { template <typename T> class IMatcher_1; }
namespace RPG::GameCore { class BaseChimeraDuelEntitiesSelectorConfig; }
namespace RPG::GameCore { class BaseChimeraDuelValueGetter; }
namespace RPG::GameCore { class ChimeraDuelEntityPredicateBase; }
namespace RPG::GameCore { class ChimeraDuelEntityValueGetterBase; }
namespace RPG::GameCore { class ChimeraDuelPredicateBase; }
namespace System { class Action; }
namespace System { class Object; }
namespace System { class String; }
namespace System::Collections::Generic { template <typename T> class IEnumerable_1; }
namespace System::Collections::Generic { template <typename T> class Stack_1; }

#define HAJDFCHFBGN_AFALMKEGANE_OFFSET UNITYSDK_OFFSET(0x17DDC250)
#define HAJDFCHFBGN_BOPMDBFEAHN_OFFSET UNITYSDK_OFFSET(0x17DDB3A0)
#define HAJDFCHFBGN_BPGLLLGDNGP_OFFSET UNITYSDK_OFFSET(0x17DDBC70)
#define HAJDFCHFBGN_CTOR_OFFSET UNITYSDK_OFFSET(0x17DDB0E0)
#define HAJDFCHFBGN_DMAKIEAPHIJ_OFFSET UNITYSDK_OFFSET(0x17DDBC20)
#define HAJDFCHFBGN_EFFKLENHBCH_OFFSET UNITYSDK_OFFSET(0x17DDC390)
#define HAJDFCHFBGN_EGBGIPLIPOE_OFFSET UNITYSDK_OFFSET(0x17DDB590)
#define HAJDFCHFBGN_GAAJDFCEGMB_OFFSET UNITYSDK_OFFSET(0x17DDBBC0)
#define HAJDFCHFBGN_GET__ENTITIESSELECTOREVALUATOR_OFFSET UNITYSDK_OFFSET(0x17DDB030)
#define HAJDFCHFBGN_GET__ENTITYPREDICATEEVALUATOR_OFFSET UNITYSDK_OFFSET(0x17DDAFF0)
#define HAJDFCHFBGN_GET__ENTITYVALUEGETTEREVALUATOR_OFFSET UNITYSDK_OFFSET(0x17DDB000)
#define HAJDFCHFBGN_GET__GAMECONTEXT_OFFSET UNITYSDK_OFFSET(0x17DDB040)
#define HAJDFCHFBGN_GET__PREDICATEEVALUATOR_OFFSET UNITYSDK_OFFSET(0x17DDB010)
#define HAJDFCHFBGN_GET__VALUEGETTEREVALUATOR_OFFSET UNITYSDK_OFFSET(0x17DDB020)
#define HAJDFCHFBGN_GFGHOCIBEBI_OFFSET UNITYSDK_OFFSET(0x17DDB600)
#define HAJDFCHFBGN_GFJDLCOCKBJ_OFFSET UNITYSDK_OFFSET(0x17DDB510)
#define HAJDFCHFBGN_GKGDDHOEOEC_OFFSET UNITYSDK_OFFSET(0x17DC32D0)
#define HAJDFCHFBGN_HADOHLNHHGB_OFFSET UNITYSDK_OFFSET(0x17DDB2B0)
#define HAJDFCHFBGN_HGGFJKGPDPH_OFFSET UNITYSDK_OFFSET(0x17DDB670)
#define HAJDFCHFBGN_LGFKENELLCL_OFFSET UNITYSDK_OFFSET(0x17DDBA30)
#define HAJDFCHFBGN_LHHBEIGFGED_OFFSET UNITYSDK_OFFSET(0x17DDB2F0)
#define HAJDFCHFBGN_LMCJNHDFJNJ_OFFSET UNITYSDK_OFFSET(0x17DDBE60)
#define HAJDFCHFBGN_LNAKPOFIHJJ_OFFSET UNITYSDK_OFFSET(0x17DDBFA0)
#define HAJDFCHFBGN_MFMDEHGHKKA_OFFSET UNITYSDK_OFFSET(0x17DDBDA0)
#define HAJDFCHFBGN_MLHLNIIFKOP_OFFSET UNITYSDK_OFFSET(0x17DDC520)
#define HAJDFCHFBGN_MNGGAOFNGIP_OFFSET UNITYSDK_OFFSET(0x17DC3270)
#define HAJDFCHFBGN_NGIIFLDCIPD_OFFSET UNITYSDK_OFFSET(0x17DDC4D0)
#define HAJDFCHFBGN_NMKHKOLECKE_OFFSET UNITYSDK_OFFSET(0x17DDB800)
#define HAJDFCHFBGN_OCABBBNJKLD_1_OFFSET UNITYSDK_OFFSET(0x17DDB730)
#define HAJDFCHFBGN_OCABBBNJKLD_OFFSET UNITYSDK_OFFSET(0x17DDB6D0)
#define HAJDFCHFBGN_OOKDABLIIBB_OFFSET UNITYSDK_OFFSET(0x17DDB050)
#define HAJDFCHFBGN_PGOOAJPBGJA_OFFSET UNITYSDK_OFFSET(0x17DDBB70)
#define HAJDFCHFBGN___CTOR_B__22_0_OFFSET UNITYSDK_OFFSET(0x17DDC570)
#define HAJDFCHFBGN___CTOR_B__22_1_OFFSET UNITYSDK_OFFSET(0x17DDC580)

inline static constexpr unsigned int HAJDFCHFBGN_TypeDefinitionIndex = 80163;

	class HAJDFCHFBGN : public ::System::Object
	{
	public:
		::FGLMDDJIGBL* __PredicateEvaluator_k__BackingField; // 0x10
		::BFMHFBHIAAL* __GameContext_k__BackingField; // 0x18
		::PAMFILOLBCJ* __ValueGetterEvaluator_k__BackingField; // 0x20
		::BIDKFNCENHJ* __EntityPredicateEvaluator_k__BackingField; // 0x28
		::System::Collections::Generic::Stack_1<::GMGHBGLNMFF*>* PDJKFCMIOME; // 0x30
		::System::Collections::Generic::Stack_1<::System::Object*>* FDJCCCCOLME; // 0x38
		::PPNKAAHMBJI* __EntitiesSelectorEvaluator_k__BackingField; // 0x40
		::HGNBCNMOBAO* __EntityValueGetterEvaluator_k__BackingField; // 0x48
		::System::Void _ctor(::BFMHFBHIAAL* a1, ::ECIIEBFKNMJ* a2)
		{
			return ((::System::Void(*)(::PVOID, ::BFMHFBHIAAL*, ::ECIIEBFKNMJ*))((::PBYTE)hIl2Cpp + HAJDFCHFBGN_CTOR_OFFSET))(this, a1, a2);
		}

		::BIDKFNCENHJ* get__EntityPredicateEvaluator()
		{
			return ((::BIDKFNCENHJ*(*)(::PVOID))((::PBYTE)hIl2Cpp + HAJDFCHFBGN_GET__ENTITYPREDICATEEVALUATOR_OFFSET))(this);
		}

		::HGNBCNMOBAO* get__EntityValueGetterEvaluator()
		{
			return ((::HGNBCNMOBAO*(*)(::PVOID))((::PBYTE)hIl2Cpp + HAJDFCHFBGN_GET__ENTITYVALUEGETTEREVALUATOR_OFFSET))(this);
		}

		::FGLMDDJIGBL* get__PredicateEvaluator()
		{
			return ((::FGLMDDJIGBL*(*)(::PVOID))((::PBYTE)hIl2Cpp + HAJDFCHFBGN_GET__PREDICATEEVALUATOR_OFFSET))(this);
		}

		::PAMFILOLBCJ* get__ValueGetterEvaluator()
		{
			return ((::PAMFILOLBCJ*(*)(::PVOID))((::PBYTE)hIl2Cpp + HAJDFCHFBGN_GET__VALUEGETTEREVALUATOR_OFFSET))(this);
		}

		::PPNKAAHMBJI* get__EntitiesSelectorEvaluator()
		{
			return ((::PPNKAAHMBJI*(*)(::PVOID))((::PBYTE)hIl2Cpp + HAJDFCHFBGN_GET__ENTITIESSELECTOREVALUATOR_OFFSET))(this);
		}

		::BFMHFBHIAAL* get__GameContext()
		{
			return ((::BFMHFBHIAAL*(*)(::PVOID))((::PBYTE)hIl2Cpp + HAJDFCHFBGN_GET__GAMECONTEXT_OFFSET))(this);
		}

		::GMGHBGLNMFF* OOKDABLIIBB()
		{
			return ((::GMGHBGLNMFF*(*)(::PVOID))((::PBYTE)hIl2Cpp + HAJDFCHFBGN_OOKDABLIIBB_OFFSET))(this);
		}

		::System::Void HADOHLNHHGB()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + HAJDFCHFBGN_HADOHLNHHGB_OFFSET))(this);
		}

		::System::Void LHHBEIGFGED(::System::Object* a1, ::GMGHBGLNMFF* a2)
		{
			return ((::System::Void(*)(::PVOID, ::System::Object*, ::GMGHBGLNMFF*))((::PBYTE)hIl2Cpp + HAJDFCHFBGN_LHHBEIGFGED_OFFSET))(this, a1, a2);
		}

		::System::Void BOPMDBFEAHN(::System::Object* a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::Object*))((::PBYTE)hIl2Cpp + HAJDFCHFBGN_BOPMDBFEAHN_OFFSET))(this, a1);
		}

		::System::Void GFJDLCOCKBJ(::GMGHBGLNMFF* a1, ::System::Action* a2)
		{
			return ((::System::Void(*)(::PVOID, ::GMGHBGLNMFF*, ::System::Action*))((::PBYTE)hIl2Cpp + HAJDFCHFBGN_GFJDLCOCKBJ_OFFSET))(this, a1, a2);
		}

		::System::Boolean EGBGIPLIPOE(::KAKADGHNMFK* a1, ::RPG::GameCore::ChimeraDuelEntityPredicateBase* a2)
		{
			return ((::System::Boolean(*)(::PVOID, ::KAKADGHNMFK*, ::RPG::GameCore::ChimeraDuelEntityPredicateBase*))((::PBYTE)hIl2Cpp + HAJDFCHFBGN_EGBGIPLIPOE_OFFSET))(this, a1, a2);
		}

		::System::Single GFGHOCIBEBI(::KAKADGHNMFK* a1, ::RPG::GameCore::ChimeraDuelEntityValueGetterBase* a2)
		{
			return ((::System::Single(*)(::PVOID, ::KAKADGHNMFK*, ::RPG::GameCore::ChimeraDuelEntityValueGetterBase*))((::PBYTE)hIl2Cpp + HAJDFCHFBGN_GFGHOCIBEBI_OFFSET))(this, a1, a2);
		}

		::System::Boolean HGGFJKGPDPH(::RPG::GameCore::ChimeraDuelPredicateBase* a1)
		{
			return ((::System::Boolean(*)(::PVOID, ::RPG::GameCore::ChimeraDuelPredicateBase*))((::PBYTE)hIl2Cpp + HAJDFCHFBGN_HGGFJKGPDPH_OFFSET))(this, a1);
		}

		::System::Single MNGGAOFNGIP(::RPG::GameCore::BaseChimeraDuelValueGetter* a1)
		{
			return ((::System::Single(*)(::PVOID, ::RPG::GameCore::BaseChimeraDuelValueGetter*))((::PBYTE)hIl2Cpp + HAJDFCHFBGN_MNGGAOFNGIP_OFFSET))(this, a1);
		}

		::System::Collections::Generic::IEnumerable_1<::KAKADGHNMFK*>* OCABBBNJKLD(::RPG::GameCore::BaseChimeraDuelEntitiesSelectorConfig* a1)
		{
			return ((::System::Collections::Generic::IEnumerable_1<::KAKADGHNMFK*>*(*)(::PVOID, ::RPG::GameCore::BaseChimeraDuelEntitiesSelectorConfig*))((::PBYTE)hIl2Cpp + HAJDFCHFBGN_OCABBBNJKLD_OFFSET))(this, a1);
		}

		::System::Collections::Generic::IEnumerable_1<::KAKADGHNMFK*>* OCABBBNJKLD_1(::System::Collections::Generic::IEnumerable_1<::RPG::GameCore::BaseChimeraDuelEntitiesSelectorConfig*>* a1)
		{
			return ((::System::Collections::Generic::IEnumerable_1<::KAKADGHNMFK*>*(*)(::PVOID, ::System::Collections::Generic::IEnumerable_1<::RPG::GameCore::BaseChimeraDuelEntitiesSelectorConfig*>*))((::PBYTE)hIl2Cpp + HAJDFCHFBGN_OCABBBNJKLD_1_OFFSET))(this, a1);
		}

		::KAKADGHNMFK* GKGDDHOEOEC()
		{
			return ((::KAKADGHNMFK*(*)(::PVOID))((::PBYTE)hIl2Cpp + HAJDFCHFBGN_GKGDDHOEOEC_OFFSET))(this);
		}

		::KAKADGHNMFK* NMKHKOLECKE(::RPG::GameCore::ChimeraDuelTeamType a1)
		{
			return ((::KAKADGHNMFK*(*)(::PVOID, ::RPG::GameCore::ChimeraDuelTeamType))((::PBYTE)hIl2Cpp + HAJDFCHFBGN_NMKHKOLECKE_OFFSET))(this, a1);
		}

		::KAKADGHNMFK* PGOOAJPBGJA()
		{
			return ((::KAKADGHNMFK*(*)(::PVOID))((::PBYTE)hIl2Cpp + HAJDFCHFBGN_PGOOAJPBGJA_OFFSET))(this);
		}

		::System::Collections::Generic::IEnumerable_1<::KAKADGHNMFK*>* GAAJDFCEGMB(::System::String* a1)
		{
			return ((::System::Collections::Generic::IEnumerable_1<::KAKADGHNMFK*>*(*)(::PVOID, ::System::String*))((::PBYTE)hIl2Cpp + HAJDFCHFBGN_GAAJDFCEGMB_OFFSET))(this, a1);
		}

		::KAKADGHNMFK* DMAKIEAPHIJ()
		{
			return ((::KAKADGHNMFK*(*)(::PVOID))((::PBYTE)hIl2Cpp + HAJDFCHFBGN_DMAKIEAPHIJ_OFFSET))(this);
		}

		::KAKADGHNMFK* BPGLLLGDNGP(::System::Int32 a1)
		{
			return ((::KAKADGHNMFK*(*)(::PVOID, ::System::Int32))((::PBYTE)hIl2Cpp + HAJDFCHFBGN_BPGLLLGDNGP_OFFSET))(this, a1);
		}

		::System::Collections::Generic::IEnumerable_1<::KAKADGHNMFK*>* MFMDEHGHKKA(::Entitas::IMatcher_1<::KAKADGHNMFK*>* a1)
		{
			return ((::System::Collections::Generic::IEnumerable_1<::KAKADGHNMFK*>*(*)(::PVOID, ::Entitas::IMatcher_1<::KAKADGHNMFK*>*))((::PBYTE)hIl2Cpp + HAJDFCHFBGN_MFMDEHGHKKA_OFFSET))(this, a1);
		}

		::System::Collections::Generic::IEnumerable_1<::KAKADGHNMFK*>* LMCJNHDFJNJ()
		{
			return ((::System::Collections::Generic::IEnumerable_1<::KAKADGHNMFK*>*(*)(::PVOID))((::PBYTE)hIl2Cpp + HAJDFCHFBGN_LMCJNHDFJNJ_OFFSET))(this);
		}

		::System::Collections::Generic::IEnumerable_1<::KAKADGHNMFK*>* LNAKPOFIHJJ()
		{
			return ((::System::Collections::Generic::IEnumerable_1<::KAKADGHNMFK*>*(*)(::PVOID))((::PBYTE)hIl2Cpp + HAJDFCHFBGN_LNAKPOFIHJJ_OFFSET))(this);
		}

		::System::Collections::Generic::IEnumerable_1<::KAKADGHNMFK*>* LGFKENELLCL()
		{
			return ((::System::Collections::Generic::IEnumerable_1<::KAKADGHNMFK*>*(*)(::PVOID))((::PBYTE)hIl2Cpp + HAJDFCHFBGN_LGFKENELLCL_OFFSET))(this);
		}

		::System::Collections::Generic::IEnumerable_1<::KAKADGHNMFK*>* AFALMKEGANE()
		{
			return ((::System::Collections::Generic::IEnumerable_1<::KAKADGHNMFK*>*(*)(::PVOID))((::PBYTE)hIl2Cpp + HAJDFCHFBGN_AFALMKEGANE_OFFSET))(this);
		}

		::System::Collections::Generic::IEnumerable_1<::KAKADGHNMFK*>* EFFKLENHBCH()
		{
			return ((::System::Collections::Generic::IEnumerable_1<::KAKADGHNMFK*>*(*)(::PVOID))((::PBYTE)hIl2Cpp + HAJDFCHFBGN_EFFKLENHBCH_OFFSET))(this);
		}

		::KAKADGHNMFK* NGIIFLDCIPD()
		{
			return ((::KAKADGHNMFK*(*)(::PVOID))((::PBYTE)hIl2Cpp + HAJDFCHFBGN_NGIIFLDCIPD_OFFSET))(this);
		}

		::KAKADGHNMFK* MLHLNIIFKOP()
		{
			return ((::KAKADGHNMFK*(*)(::PVOID))((::PBYTE)hIl2Cpp + HAJDFCHFBGN_MLHLNIIFKOP_OFFSET))(this);
		}

		::GMGHBGLNMFF* __ctor_b__22_0()
		{
			return ((::GMGHBGLNMFF*(*)(::PVOID))((::PBYTE)hIl2Cpp + HAJDFCHFBGN___CTOR_B__22_0_OFFSET))(this);
		}

		::GMGHBGLNMFF* __ctor_b__22_1()
		{
			return ((::GMGHBGLNMFF*(*)(::PVOID))((::PBYTE)hIl2Cpp + HAJDFCHFBGN___CTOR_B__22_1_OFFSET))(this);
		}

	};
