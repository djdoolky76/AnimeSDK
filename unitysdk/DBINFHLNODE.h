#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/EGDGOMKKEJI.h"
#include "unitysdk/RPG/GameCore/DiceCombatTarget.h"
#include "unitysdk/RPG/GameCore/FixPoint.h"
class BPHJOOGJPKD;
class IJFIHJJPHNA;
namespace System::Collections::Generic { template <typename T> class List_1; }

#define DBINFHLNODE_ACKKLEOAMCH_OFFSET UNITYSDK_OFFSET(0x1C5AD780)
#define DBINFHLNODE_CTOR_OFFSET UNITYSDK_OFFSET(0x1C5AD540)
#define DBINFHLNODE_GET_CONDITIONRESULT_OFFSET UNITYSDK_OFFSET(0x1C5AD520)
#define DBINFHLNODE_NALNBHGCHFD_OFFSET UNITYSDK_OFFSET(0x1C5ADE20)
#define DBINFHLNODE_PCGCDDDBMFE_OFFSET UNITYSDK_OFFSET(0x1C5ADB30)
#define DBINFHLNODE_SET_CONDITIONRESULT_OFFSET UNITYSDK_OFFSET(0x1C5AD530)

inline static constexpr unsigned int DBINFHLNODE_TypeDefinitionIndex = 36225;

	class DBINFHLNODE : public ::EGDGOMKKEJI
	{
	public:
		::System::Boolean _ConditionResult_k__BackingField; // 0x38
		::System::Void _ctor(::BPHJOOGJPKD* a1, ::IJFIHJJPHNA* a2, ::Il2CppArray<::RPG::GameCore::FixPoint>* a3)
		{
			return ((::System::Void(*)(::PVOID, ::BPHJOOGJPKD*, ::IJFIHJJPHNA*, ::Il2CppArray<::RPG::GameCore::FixPoint>*))((::PBYTE)hIl2Cpp + DBINFHLNODE_CTOR_OFFSET))(this, a1, a2, a3);
		}

		::System::Boolean get_ConditionResult()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + DBINFHLNODE_GET_CONDITIONRESULT_OFFSET))(this);
		}

		::System::Void set_ConditionResult(::System::Boolean a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::Boolean))((::PBYTE)hIl2Cpp + DBINFHLNODE_SET_CONDITIONRESULT_OFFSET))(this, a1);
		}

		::IJFIHJJPHNA* ACKKLEOAMCH(::RPG::GameCore::DiceCombatTarget a1)
		{
			return ((::IJFIHJJPHNA*(*)(::PVOID, ::RPG::GameCore::DiceCombatTarget))((::PBYTE)hIl2Cpp + DBINFHLNODE_ACKKLEOAMCH_OFFSET))(this, a1);
		}

		::System::Collections::Generic::List_1<::IJFIHJJPHNA*>* PCGCDDDBMFE(::RPG::GameCore::DiceCombatTarget a1)
		{
			return ((::System::Collections::Generic::List_1<::IJFIHJJPHNA*>*(*)(::PVOID, ::RPG::GameCore::DiceCombatTarget))((::PBYTE)hIl2Cpp + DBINFHLNODE_PCGCDDDBMFE_OFFSET))(this, a1);
		}

		::System::Void NALNBHGCHFD(::System::Boolean a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::Boolean))((::PBYTE)hIl2Cpp + DBINFHLNODE_NALNBHGCHFD_OFFSET))(this, a1);
		}

	};
