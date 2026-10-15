#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/LittleGameShare/DiceCombatCore/DiceCombatGameState.h"
#include "unitysdk/System/Object.h"
class GGGIAPOEPLP;
class IGCHGCICEBA;
class NIMCJKKDGNG;
namespace System::Collections::Generic { template <typename T1, typename T2> class Dictionary_2; }

#define NIMCJKKDGNG_ALJIOCDBMKO_OFFSET UNITYSDK_OFFSET(0x1C76C370)
#define NIMCJKKDGNG_CTOR_OFFSET UNITYSDK_OFFSET(0x1C74F600)

inline static constexpr unsigned int NIMCJKKDGNG_TypeDefinitionIndex = 36202;

	class NIMCJKKDGNG : public ::System::Object
	{
	public:
		::System::Collections::Generic::Dictionary_2<::System::UInt32, ::System::UInt32>* JLMDIBNPACM; // 0x10
		::System::Collections::Generic::Dictionary_2<::System::UInt32, ::System::UInt32>* FHEJCAGLJFA; // 0x18
		::GGGIAPOEPLP* KODBOKOLJKF; // 0x20
		::IGCHGCICEBA* APBHONCMALK; // 0x28
		::System::UInt32 PLKGEFBEEME; // 0x30
		::System::Single PEDAHPCCBIN; // 0x34
		::System::Single MLOEMJENKNI; // 0x38
		::System::UInt32 ONPPBOKMMKL; // 0x3C
		::RPG::LittleGameShare::DiceCombatCore::DiceCombatGameState ADCPPJNMGJP; // 0x40
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + NIMCJKKDGNG_CTOR_OFFSET))(this);
		}

		::System::Void ALJIOCDBMKO(::NIMCJKKDGNG* a1)
		{
			return ((::System::Void(*)(::PVOID, ::NIMCJKKDGNG*))((::PBYTE)hIl2Cpp + NIMCJKKDGNG_ALJIOCDBMKO_OFFSET))(this, a1);
		}

	};
