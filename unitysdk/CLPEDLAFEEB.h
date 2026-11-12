#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/BattleResultState.h"
#include "unitysdk/System/Object.h"
class EBEHJBOGLII;
class IBLLIBEANPO;
class MAMLJFHHHBN;
namespace System::Collections { class IEnumerator; }

#define CLPEDLAFEEB_BCJMLLCADCH_OFFSET UNITYSDK_OFFSET(0xE3617A0)
#define CLPEDLAFEEB_CTOR_OFFSET UNITYSDK_OFFSET(0xE361610)
#define CLPEDLAFEEB_KGOLGMKEBOI_OFFSET UNITYSDK_OFFSET(0xE361700)

inline static constexpr unsigned int CLPEDLAFEEB_TypeDefinitionIndex = 83535;

	class CLPEDLAFEEB : public ::System::Object
	{
	public:
		::EBEHJBOGLII* CGFKNIOKJAH; // 0x10
		::MAMLJFHHHBN* GCNNDHCLBPI; // 0x18
		::IBLLIBEANPO* FKMPGPCHLNL; // 0x20
		::System::Void _ctor(::MAMLJFHHHBN* a1, ::IBLLIBEANPO* a2, ::EBEHJBOGLII* a3)
		{
			return ((::System::Void(*)(::PVOID, ::MAMLJFHHHBN*, ::IBLLIBEANPO*, ::EBEHJBOGLII*))((::PBYTE)hIl2Cpp + CLPEDLAFEEB_CTOR_OFFSET))(this, a1, a2, a3);
		}

		::System::Collections::IEnumerator* KGOLGMKEBOI(::System::UInt32 a1, ::RPG::GameCore::BattleResultState a2)
		{
			return ((::System::Collections::IEnumerator*(*)(::PVOID, ::System::UInt32, ::RPG::GameCore::BattleResultState))((::PBYTE)hIl2Cpp + CLPEDLAFEEB_KGOLGMKEBOI_OFFSET))(this, a1, a2);
		}

		::System::Collections::IEnumerator* BCJMLLCADCH(::System::UInt32 a1, ::RPG::GameCore::BattleResultState a2)
		{
			return ((::System::Collections::IEnumerator*(*)(::PVOID, ::System::UInt32, ::RPG::GameCore::BattleResultState))((::PBYTE)hIl2Cpp + CLPEDLAFEEB_BCJMLLCADCH_OFFSET))(this, a1, a2);
		}

	};
