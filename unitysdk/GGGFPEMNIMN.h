#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/EFNJLACKEDH.h"
#include "unitysdk/RPG/LittleGameShare/DiceCombatCore/TacticsCardUseCheckResult.h"
class BKHHFIJCHEP;
class GHLNPFDIJLF;
class JCLBAEHIBLA;
namespace System::Collections::Generic { template <typename T> class List_1; }

#define GGGFPEMNIMN_CTOR_OFFSET UNITYSDK_OFFSET(0x159F85C0)
#define GGGFPEMNIMN_NPAFMEBNFOB_OFFSET UNITYSDK_OFFSET(0x159F85E0)

inline static constexpr unsigned int GGGFPEMNIMN_TypeDefinitionIndex = 60348;

	class GGGFPEMNIMN : public ::EFNJLACKEDH
	{
	public:
		::JCLBAEHIBLA* NOKJFPPOHKM; // 0x18
		::System::Collections::Generic::List_1<::GHLNPFDIJLF*>* LOIGPFNCEHA; // 0x20
		::System::UInt32 MPIMEEAIELI; // 0x28
		::RPG::LittleGameShare::DiceCombatCore::TacticsCardUseCheckResult KKPMKENCGFD; // 0x2C
		::System::Void _ctor(::BKHHFIJCHEP* a1, ::JCLBAEHIBLA* a2, ::System::UInt32 a3, ::RPG::LittleGameShare::DiceCombatCore::TacticsCardUseCheckResult a4, ::System::Collections::Generic::List_1<::GHLNPFDIJLF*>* a5)
		{
			return ((::System::Void(*)(::PVOID, ::BKHHFIJCHEP*, ::JCLBAEHIBLA*, ::System::UInt32, ::RPG::LittleGameShare::DiceCombatCore::TacticsCardUseCheckResult, ::System::Collections::Generic::List_1<::GHLNPFDIJLF*>*))((::PBYTE)hIl2Cpp + GGGFPEMNIMN_CTOR_OFFSET))(this, a1, a2, a3, a4, a5);
		}

		::System::Void NPAFMEBNFOB()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + GGGFPEMNIMN_NPAFMEBNFOB_OFFSET))(this);
		}

	};
