#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/Client/LittleGame/ComicDessert/PreValidationFailureReason.h"
#include "unitysdk/System/Object.h"
class FEFLMKBBDLO;
class HLJNBBHKKMI;
class JKOOAIOBGHP;
class LPHINGPIEAJ;

#define ICDJLLFFIGI_CTOR_OFFSET UNITYSDK_OFFSET(0x16DF83A0)
#define ICDJLLFFIGI_TRYGETCANDIDATES_OFFSET UNITYSDK_OFFSET(0x16DF83B0)

inline static constexpr unsigned int ICDJLLFFIGI_TypeDefinitionIndex = 80035;

	class ICDJLLFFIGI : public ::System::Object
	{
	public:
		::LPHINGPIEAJ* OJAHLJGABMJ; // 0x10
		::HLJNBBHKKMI* PDENFEFCAGN; // 0x18
		::System::Int32 EMCPIPKEPBD; // 0x20
		::System::Void _ctor(::HLJNBBHKKMI* a1, ::LPHINGPIEAJ* a2, ::System::Int32 a3)
		{
			return ((::System::Void(*)(::PVOID, ::HLJNBBHKKMI*, ::LPHINGPIEAJ*, ::System::Int32))((::PBYTE)hIl2Cpp + ICDJLLFFIGI_CTOR_OFFSET))(this, a1, a2, a3);
		}

		::System::Boolean TryGetCandidates(::FEFLMKBBDLO* a1, ::JKOOAIOBGHP* a2, ::RPG::Client::LittleGame::ComicDessert::PreValidationFailureReason a3)
		{
			return ((::System::Boolean(*)(::PVOID, ::FEFLMKBBDLO*, ::JKOOAIOBGHP*, ::RPG::Client::LittleGame::ComicDessert::PreValidationFailureReason))((::PBYTE)hIl2Cpp + ICDJLLFFIGI_TRYGETCANDIDATES_OFFSET))(this, a1, a2, a3);
		}

	};
