#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/GELIALJDFBL.h"
class EKFMIDBJDIA;
namespace RPG::GameCore { class GameEntity; }
namespace RPG::GameCore { class PumanHuntGameplayController; }
namespace RPG::GameCore { class TaskContext; }
namespace System::Collections::Generic { template <typename T1, typename T2> class Dictionary_2; }

#define EAHJDBNGBEN_AKBIKOKKBFI_OFFSET UNITYSDK_OFFSET(0x12679490)
#define EAHJDBNGBEN_BDFOKBJBHJM_OFFSET UNITYSDK_OFFSET(0x12679C80)
#define EAHJDBNGBEN_BNLPMEMODPH_OFFSET UNITYSDK_OFFSET(0x12679280)
#define EAHJDBNGBEN_CTOR_OFFSET UNITYSDK_OFFSET(0x12678D70)
#define EAHJDBNGBEN_DISPOSE_OFFSET UNITYSDK_OFFSET(0x12678E10)
#define EAHJDBNGBEN_DNMLKKBLILF_OFFSET UNITYSDK_OFFSET(0x12679720)
#define EAHJDBNGBEN_EHBPEKNOKDB_OFFSET UNITYSDK_OFFSET(0x12678EB0)
#define EAHJDBNGBEN_KIGKKADGFCC_OFFSET UNITYSDK_OFFSET(0x12679A30)
#define EAHJDBNGBEN_ODAFDILOCJF_OFFSET UNITYSDK_OFFSET(0x12679CD0)
#define EAHJDBNGBEN_ONTASKBEGIN_OFFSET UNITYSDK_OFFSET(0x126796A0)
#define EAHJDBNGBEN_ONTASKRESET_OFFSET UNITYSDK_OFFSET(0x1267A2A0)
#define EAHJDBNGBEN_TICK_OFFSET UNITYSDK_OFFSET(0x12678E50)

inline static constexpr unsigned int EAHJDBNGBEN_TypeDefinitionIndex = 53187;

	class EAHJDBNGBEN : public ::GELIALJDFBL
	{
	public:
		::System::Collections::Generic::Dictionary_2<::System::UInt32, ::RPG::GameCore::GameEntity*>* DGAKFMBKIOH; // 0x18
		::RPG::GameCore::TaskContext* EEFMDEHLLFI; // 0x20
		::RPG::GameCore::PumanHuntGameplayController* IGHAHBNLIJA; // 0x28
		::System::Int32 OJADHCHCLAI; // 0x30
		// static const ::System::String* HDBPMLDNMKE; // 0x0
		// static const ::System::String* LOAEJBJGLDK; // 0x0
		// static const ::System::String* CODMOFKCDNG; // 0x0
		::System::Void _ctor(::RPG::GameCore::TaskContext* a1, ::RPG::GameCore::PumanHuntGameplayController* a2)
		{
			return ((::System::Void(*)(::PVOID, ::RPG::GameCore::TaskContext*, ::RPG::GameCore::PumanHuntGameplayController*))((::PBYTE)hIl2Cpp + EAHJDBNGBEN_CTOR_OFFSET))(this, a1, a2);
		}

		::System::Void Dispose()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + EAHJDBNGBEN_DISPOSE_OFFSET))(this);
		}

		::System::Void Tick(::System::Single a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::Single))((::PBYTE)hIl2Cpp + EAHJDBNGBEN_TICK_OFFSET))(this, a1);
		}

		::System::Void EHBPEKNOKDB()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + EAHJDBNGBEN_EHBPEKNOKDB_OFFSET))(this);
		}

		::System::Void BNLPMEMODPH()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + EAHJDBNGBEN_BNLPMEMODPH_OFFSET))(this);
		}

		::System::Void AKBIKOKKBFI()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + EAHJDBNGBEN_AKBIKOKKBFI_OFFSET))(this);
		}

		::System::Void OnTaskBegin()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + EAHJDBNGBEN_ONTASKBEGIN_OFFSET))(this);
		}

		::System::Void DNMLKKBLILF(::EKFMIDBJDIA* a1)
		{
			return ((::System::Void(*)(::PVOID, ::EKFMIDBJDIA*))((::PBYTE)hIl2Cpp + EAHJDBNGBEN_DNMLKKBLILF_OFFSET))(this, a1);
		}

		::System::Void KIGKKADGFCC(::EKFMIDBJDIA* a1)
		{
			return ((::System::Void(*)(::PVOID, ::EKFMIDBJDIA*))((::PBYTE)hIl2Cpp + EAHJDBNGBEN_KIGKKADGFCC_OFFSET))(this, a1);
		}

		::System::Void ODAFDILOCJF()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + EAHJDBNGBEN_ODAFDILOCJF_OFFSET))(this);
		}

		::System::Void BDFOKBJBHJM()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + EAHJDBNGBEN_BDFOKBJBHJM_OFFSET))(this);
		}

		::System::Void OnTaskReset()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + EAHJDBNGBEN_ONTASKRESET_OFFSET))(this);
		}

	};
