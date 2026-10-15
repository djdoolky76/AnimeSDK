#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/GELIALJDFBL.h"
#include "unitysdk/RPG/GameCore/FixPoint.h"
#include "unitysdk/RPG/GameCore/StringHash.h"
class BNBNHLHIJAJ;
class ENEIHJJPNPI;
class OAPPKGLPNHA;
namespace RPG::GameCore { class DynamicFloat; }
namespace RPG::GameCore { class TaskContext; }
namespace RPG::GameCore { class TriggerParallelTaskListTemplate; }
namespace System { class String; }
namespace System::Collections::Generic { template <typename T1, typename T2> class Dictionary_2; }
namespace System::Collections::Generic { template <typename T> class List_1; }

#define GBGPPNAGJHM_BBLAGJIFKEK_OFFSET UNITYSDK_OFFSET(0x15943520)
#define GBGPPNAGJHM_CTOR_OFFSET UNITYSDK_OFFSET(0x15941980)
#define GBGPPNAGJHM_DISPOSE_OFFSET UNITYSDK_OFFSET(0x15941A80)
#define GBGPPNAGJHM_JAHOAGLGHNB_OFFSET UNITYSDK_OFFSET(0x15943410)
#define GBGPPNAGJHM_JMKJMLBHLCA_OFFSET UNITYSDK_OFFSET(0x15943010)
#define GBGPPNAGJHM_OKHABJILJFJ_OFFSET UNITYSDK_OFFSET(0x15943650)
#define GBGPPNAGJHM_ONTASKBEGIN_OFFSET UNITYSDK_OFFSET(0x15941C30)
#define GBGPPNAGJHM_ONTASKRESET_OFFSET UNITYSDK_OFFSET(0x15943080)
#define GBGPPNAGJHM_PPKKBBJPCNH_OFFSET UNITYSDK_OFFSET(0x15941B40)
#define GBGPPNAGJHM_TICK_OFFSET UNITYSDK_OFFSET(0x15943230)
#define GBGPPNAGJHM___RUNTEMPLATES_G___SORTANDGETNEXTTEMPLATE_5_0_OFFSET UNITYSDK_OFFSET(0x15943660)

inline static constexpr unsigned int GBGPPNAGJHM_TypeDefinitionIndex = 55759;

	class GBGPPNAGJHM : public ::GELIALJDFBL
	{
	public:
		::System::Collections::Generic::List_1<::OAPPKGLPNHA*>* OOFAMBJDGIH; // 0x18
		::BNBNHLHIJAJ* ONPOGINJBCB; // 0x20
		::System::Collections::Generic::Dictionary_2<::RPG::GameCore::StringHash, ::System::String*>* BPGGBFAHLHM; // 0x28
		::RPG::GameCore::TaskContext* DDDNLILNMKA; // 0x30
		::RPG::GameCore::TriggerParallelTaskListTemplate* OFKGLJOAMLD; // 0x38
		::ENEIHJJPNPI* HGGIIDBDGKD; // 0x40
		::RPG::GameCore::FixPoint JLCJJMNJPAH; // 0x48
		::RPG::GameCore::FixPoint NCMIDIHKLAO; // 0x50
		::System::Void _ctor(::RPG::GameCore::TaskContext* a1, ::RPG::GameCore::TriggerParallelTaskListTemplate* a2)
		{
			return ((::System::Void(*)(::PVOID, ::RPG::GameCore::TaskContext*, ::RPG::GameCore::TriggerParallelTaskListTemplate*))((::PBYTE)hIl2Cpp + GBGPPNAGJHM_CTOR_OFFSET))(this, a1, a2);
		}

		::System::Void Dispose()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + GBGPPNAGJHM_DISPOSE_OFFSET))(this);
		}

		::System::Void OnTaskBegin()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + GBGPPNAGJHM_ONTASKBEGIN_OFFSET))(this);
		}

		::System::Void OnTaskReset()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + GBGPPNAGJHM_ONTASKRESET_OFFSET))(this);
		}

		::System::Void Tick(::System::Single a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::Single))((::PBYTE)hIl2Cpp + GBGPPNAGJHM_TICK_OFFSET))(this, a1);
		}

		::System::Void JAHOAGLGHNB(::System::Single a1, ::RPG::GameCore::FixPoint a2)
		{
			return ((::System::Void(*)(::PVOID, ::System::Single, ::RPG::GameCore::FixPoint))((::PBYTE)hIl2Cpp + GBGPPNAGJHM_JAHOAGLGHNB_OFFSET))(this, a1, a2);
		}

		::System::Void BBLAGJIFKEK()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + GBGPPNAGJHM_BBLAGJIFKEK_OFFSET))(this);
		}

		::System::Void PPKKBBJPCNH()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + GBGPPNAGJHM_PPKKBBJPCNH_OFFSET))(this);
		}

		::RPG::GameCore::FixPoint JMKJMLBHLCA(::RPG::GameCore::DynamicFloat* a1)
		{
			return ((::RPG::GameCore::FixPoint(*)(::PVOID, ::RPG::GameCore::DynamicFloat*))((::PBYTE)hIl2Cpp + GBGPPNAGJHM_JMKJMLBHLCA_OFFSET))(this, a1);
		}

		::System::Boolean OKHABJILJFJ()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + GBGPPNAGJHM_OKHABJILJFJ_OFFSET))(this);
		}

		::OAPPKGLPNHA* __RunTemplates_g___SortAndGetNextTemplate_5_0(::RPG::GameCore::FixPoint a1)
		{
			return ((::OAPPKGLPNHA*(*)(::PVOID, ::RPG::GameCore::FixPoint))((::PBYTE)hIl2Cpp + GBGPPNAGJHM___RUNTEMPLATES_G___SORTANDGETNEXTTEMPLATE_5_0_OFFSET))(this, a1);
		}

	};
