#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"
#include "unitysdk/RPG/GameCore/FixPoint.h"
class BNCHFPFHIJL;
class EPPECLHAGLL;
class GBCGKOIEMKF;
class KAKCDBGNJKN;
class KELONCAICPO;
namespace RPG::Client { class BattleShowUIPageParam; }
namespace RPG::Client { class BattleShowUIPageTextParam; }
namespace RPG::GameCore { class DynamicFloat; }
namespace RPG::GameCore { class TargetEvaluator; }
namespace RPG::GameCore { class TaskContext; }
namespace System { class String; }
namespace System::Collections::Generic { template <typename T> class List_1; }

#define EPPECLHAGLL_AKJABINEGDJ_OFFSET UNITYSDK_OFFSET(0x155CEFF0)
#define EPPECLHAGLL_BPLPBPMEODA_OFFSET UNITYSDK_OFFSET(0x155CE5E0)
#define EPPECLHAGLL_CCHBIBHIACF_OFFSET UNITYSDK_OFFSET(0x155CED70)
#define EPPECLHAGLL_CCTOR_OFFSET UNITYSDK_OFFSET(0x155CF060)
#define EPPECLHAGLL_CTOR_OFFSET UNITYSDK_OFFSET(0x155CEB20)
#define EPPECLHAGLL_FFOFCCNIAIB_OFFSET UNITYSDK_OFFSET(0x155CE6C0)
#define EPPECLHAGLL_FPDICBGPCDE_OFFSET UNITYSDK_OFFSET(0x155CEB30)
#define EPPECLHAGLL_GMEKIMKHNLF_OFFSET UNITYSDK_OFFSET(0x155CEE80)
#define EPPECLHAGLL_MONBOOMKINM_OFFSET UNITYSDK_OFFSET(0x155CEFA0)
#define EPPECLHAGLL_PNMCLEKKJKB_OFFSET UNITYSDK_OFFSET(0x155CEC70)

inline static constexpr unsigned int EPPECLHAGLL_TypeDefinitionIndex = 71695;

	class EPPECLHAGLL : public ::System::Object
	{
	public:
		::System::String* GEJIJFFILEB; // 0x10
		::System::String* DDDAKMPHEEJ; // 0x18
		::System::Collections::Generic::List_1<::RPG::Client::BattleShowUIPageTextParam*>* NPFHEANBOLE; // 0x20
		::System::String* GEPAHMFFAOF; // 0x28
		::System::Single MMOCIIJHFHL; // 0x30
		static ::KELONCAICPO** StaticGet_LHNBJBCOOHH()
		{
			return (::KELONCAICPO**)UnitySDK::FromName("", "EPPECLHAGLL")->GetStaticField(0x46B60);
		}

		// static const ::System::Object FOPMNAAAIDC; // 0x0
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + EPPECLHAGLL_CTOR_OFFSET))(this);
		}

		static ::System::Void _cctor()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + EPPECLHAGLL_CCTOR_OFFSET))();
		}

		static ::EPPECLHAGLL* BPLPBPMEODA(::BNCHFPFHIJL* a1, ::GBCGKOIEMKF* a2, ::RPG::GameCore::TaskContext* a3)
		{
			return ((::EPPECLHAGLL*(*)(::BNCHFPFHIJL*, ::GBCGKOIEMKF*, ::RPG::GameCore::TaskContext*))((::PBYTE)hIl2Cpp + EPPECLHAGLL_BPLPBPMEODA_OFFSET))(a1, a2, a3);
		}

		static ::EPPECLHAGLL* FFOFCCNIAIB(::KAKCDBGNJKN* a1, ::GBCGKOIEMKF* a2, ::RPG::GameCore::TaskContext* a3)
		{
			return ((::EPPECLHAGLL*(*)(::KAKCDBGNJKN*, ::GBCGKOIEMKF*, ::RPG::GameCore::TaskContext*))((::PBYTE)hIl2Cpp + EPPECLHAGLL_FFOFCCNIAIB_OFFSET))(a1, a2, a3);
		}

		static ::System::String* PNMCLEKKJKB(::RPG::GameCore::TaskContext* a1)
		{
			return ((::System::String*(*)(::RPG::GameCore::TaskContext*))((::PBYTE)hIl2Cpp + EPPECLHAGLL_PNMCLEKKJKB_OFFSET))(a1);
		}

		static ::System::String* CCHBIBHIACF(::RPG::GameCore::TargetEvaluator* a1, ::RPG::GameCore::TaskContext* a2)
		{
			return ((::System::String*(*)(::RPG::GameCore::TargetEvaluator*, ::RPG::GameCore::TaskContext*))((::PBYTE)hIl2Cpp + EPPECLHAGLL_CCHBIBHIACF_OFFSET))(a1, a2);
		}

		static ::System::Collections::Generic::List_1<::RPG::GameCore::FixPoint>* FPDICBGPCDE(::Il2CppArray<::RPG::GameCore::DynamicFloat*>* a1, ::RPG::GameCore::TaskContext* a2)
		{
			return ((::System::Collections::Generic::List_1<::RPG::GameCore::FixPoint>*(*)(::Il2CppArray<::RPG::GameCore::DynamicFloat*>*, ::RPG::GameCore::TaskContext*))((::PBYTE)hIl2Cpp + EPPECLHAGLL_FPDICBGPCDE_OFFSET))(a1, a2);
		}

		static ::System::Single GMEKIMKHNLF(::GBCGKOIEMKF* a1, ::RPG::GameCore::TaskContext* a2)
		{
			return ((::System::Single(*)(::GBCGKOIEMKF*, ::RPG::GameCore::TaskContext*))((::PBYTE)hIl2Cpp + EPPECLHAGLL_GMEKIMKHNLF_OFFSET))(a1, a2);
		}

		::System::Single MONBOOMKINM()
		{
			return ((::System::Single(*)(::PVOID))((::PBYTE)hIl2Cpp + EPPECLHAGLL_MONBOOMKINM_OFFSET))(this);
		}

		::RPG::Client::BattleShowUIPageParam* AKJABINEGDJ()
		{
			return ((::RPG::Client::BattleShowUIPageParam*(*)(::PVOID))((::PBYTE)hIl2Cpp + EPPECLHAGLL_AKJABINEGDJ_OFFSET))(this);
		}

	};
