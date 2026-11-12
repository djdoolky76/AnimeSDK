#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/Client/LittleGame/ComicDessert/PreValidationFailureReason.h"
#include "unitysdk/System/Object.h"
class HLJNBBHKKMI;
class KBPCJPHHOPC;
class LPHINGPIEAJ;

#define HMPMNGJPDNJ_CTOR_OFFSET UNITYSDK_OFFSET(0x16D2ACC0)
#define HMPMNGJPDNJ_TRYGETCANDIDATES_OFFSET UNITYSDK_OFFSET(0x16D2ACD0)

inline static constexpr unsigned int HMPMNGJPDNJ_TypeDefinitionIndex = 80032;

	class HMPMNGJPDNJ : public ::System::Object
	{
	public:
		::LPHINGPIEAJ* EDADPGAAKNI; // 0x10
		::HLJNBBHKKMI* PDENFEFCAGN; // 0x18
		::System::Void _ctor(::HLJNBBHKKMI* a1, ::LPHINGPIEAJ* a2)
		{
			return ((::System::Void(*)(::PVOID, ::HLJNBBHKKMI*, ::LPHINGPIEAJ*))((::PBYTE)hIl2Cpp + HMPMNGJPDNJ_CTOR_OFFSET))(this, a1, a2);
		}

		::System::Boolean TryGetCandidates(::KBPCJPHHOPC* a1, ::RPG::Client::LittleGame::ComicDessert::PreValidationFailureReason a2)
		{
			return ((::System::Boolean(*)(::PVOID, ::KBPCJPHHOPC*, ::RPG::Client::LittleGame::ComicDessert::PreValidationFailureReason))((::PBYTE)hIl2Cpp + HMPMNGJPDNJ_TRYGETCANDIDATES_OFFSET))(this, a1, a2);
		}

	};
