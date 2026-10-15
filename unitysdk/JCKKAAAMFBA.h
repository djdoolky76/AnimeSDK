#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"
class DEGELHCLDJB;
class EBEHJBOGLII;
class ELDKPCBCIIO;
class HPOCHBIJIHH;
class MAMLJFHHHBN;
namespace RPG::Client::FateRin::Battle { class FateRinPrepareBattleViewModel; }
namespace RPG::Client::FateRin::HouguMap { class FateRinHouguMapFight; }
namespace System::Collections::Generic { template <typename T> class IReadOnlyList_1; }

#define JCKKAAAMFBA_BCIGDPFHEAL_OFFSET UNITYSDK_OFFSET(0x165895A0)
#define JCKKAAAMFBA_CTOR_OFFSET UNITYSDK_OFFSET(0x16589380)
#define JCKKAAAMFBA_KLMNJNNIKOK_OFFSET UNITYSDK_OFFSET(0x165894B0)

inline static constexpr unsigned int JCKKAAAMFBA_TypeDefinitionIndex = 80981;

	class JCKKAAAMFBA : public ::System::Object
	{
	public:
		::EBEHJBOGLII* CGFKNIOKJAH; // 0x10
		::DEGELHCLDJB* JNBGEJAAMEG; // 0x18
		::HPOCHBIJIHH* PODJBLOPDAK; // 0x20
		::ELDKPCBCIIO* DBHBDBIFCNF; // 0x28
		::MAMLJFHHHBN* GCNNDHCLBPI; // 0x30
		::System::Void _ctor(::MAMLJFHHHBN* a1, ::EBEHJBOGLII* a2, ::HPOCHBIJIHH* a3, ::DEGELHCLDJB* a4, ::ELDKPCBCIIO* a5)
		{
			return ((::System::Void(*)(::PVOID, ::MAMLJFHHHBN*, ::EBEHJBOGLII*, ::HPOCHBIJIHH*, ::DEGELHCLDJB*, ::ELDKPCBCIIO*))((::PBYTE)hIl2Cpp + JCKKAAAMFBA_CTOR_OFFSET))(this, a1, a2, a3, a4, a5);
		}

		::RPG::Client::FateRin::Battle::FateRinPrepareBattleViewModel* KLMNJNNIKOK(::RPG::Client::FateRin::HouguMap::FateRinHouguMapFight* a1)
		{
			return ((::RPG::Client::FateRin::Battle::FateRinPrepareBattleViewModel*(*)(::PVOID, ::RPG::Client::FateRin::HouguMap::FateRinHouguMapFight*))((::PBYTE)hIl2Cpp + JCKKAAAMFBA_KLMNJNNIKOK_OFFSET))(this, a1);
		}

		::RPG::Client::FateRin::Battle::FateRinPrepareBattleViewModel* BCIGDPFHEAL(::System::UInt32 a1, ::System::Collections::Generic::IReadOnlyList_1<::System::UInt32>* a2)
		{
			return ((::RPG::Client::FateRin::Battle::FateRinPrepareBattleViewModel*(*)(::PVOID, ::System::UInt32, ::System::Collections::Generic::IReadOnlyList_1<::System::UInt32>*))((::PBYTE)hIl2Cpp + JCKKAAAMFBA_BCIGDPFHEAL_OFFSET))(this, a1, a2);
		}

	};
