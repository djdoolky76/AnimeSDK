#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/EGDGOMKKEJI.h"
#include "unitysdk/RPG/GameCore/DiceCombatTarget.h"
#include "unitysdk/RPG/GameCore/FixPoint.h"
class GGDIMKDOIGA;
class GLPPDCIBMIH;
class IJFIHJJPHNA;
namespace System::Collections::Generic { template <typename T> class List_1; }

#define LADCEAIPJIO_ACKKLEOAMCH_OFFSET UNITYSDK_OFFSET(0x1C71F520)
#define LADCEAIPJIO_CTOR_OFFSET UNITYSDK_OFFSET(0x1C71F4A0)
#define LADCEAIPJIO_PCGCDDDBMFE_OFFSET UNITYSDK_OFFSET(0x1C71F920)

inline static constexpr unsigned int LADCEAIPJIO_TypeDefinitionIndex = 36227;

	class LADCEAIPJIO : public ::EGDGOMKKEJI
	{
	public:
		::GGDIMKDOIGA* MLDDDJAEJKH; // 0x38
		::System::Collections::Generic::List_1<::GLPPDCIBMIH*>* MIIHADANIEI; // 0x40
		::System::Collections::Generic::List_1<::GLPPDCIBMIH*>* FPAJMIJIPEH; // 0x48
		::System::Void _ctor(::GGDIMKDOIGA* a1, ::IJFIHJJPHNA* a2, ::Il2CppArray<::RPG::GameCore::FixPoint>* a3)
		{
			return ((::System::Void(*)(::PVOID, ::GGDIMKDOIGA*, ::IJFIHJJPHNA*, ::Il2CppArray<::RPG::GameCore::FixPoint>*))((::PBYTE)hIl2Cpp + LADCEAIPJIO_CTOR_OFFSET))(this, a1, a2, a3);
		}

		::IJFIHJJPHNA* ACKKLEOAMCH(::RPG::GameCore::DiceCombatTarget a1)
		{
			return ((::IJFIHJJPHNA*(*)(::PVOID, ::RPG::GameCore::DiceCombatTarget))((::PBYTE)hIl2Cpp + LADCEAIPJIO_ACKKLEOAMCH_OFFSET))(this, a1);
		}

		::System::Collections::Generic::List_1<::IJFIHJJPHNA*>* PCGCDDDBMFE(::RPG::GameCore::DiceCombatTarget a1)
		{
			return ((::System::Collections::Generic::List_1<::IJFIHJJPHNA*>*(*)(::PVOID, ::RPG::GameCore::DiceCombatTarget))((::PBYTE)hIl2Cpp + LADCEAIPJIO_PCGCDDDBMFE_OFFSET))(this, a1);
		}

	};
