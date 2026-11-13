#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/Client/LittleGame/ComicDessert/PreValidationFailureReason.h"
#include "unitysdk/System/Object.h"
class FEFLMKBBDLO;
class KBPCJPHHOPC;

#define OCAPFGNGIHA_CTOR_OFFSET UNITYSDK_OFFSET(0x19A01230)
#define OCAPFGNGIHA_TRYSELECT_OFFSET UNITYSDK_OFFSET(0x19A01020)

inline static constexpr unsigned int OCAPFGNGIHA_TypeDefinitionIndex = 80075;

	class OCAPFGNGIHA : public ::System::Object
	{
	public:
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + OCAPFGNGIHA_CTOR_OFFSET))(this);
		}

		::System::Boolean TrySelect(::KBPCJPHHOPC* a1, ::FEFLMKBBDLO* a2, ::RPG::Client::LittleGame::ComicDessert::PreValidationFailureReason a3)
		{
			return ((::System::Boolean(*)(::PVOID, ::KBPCJPHHOPC*, ::FEFLMKBBDLO*, ::RPG::Client::LittleGame::ComicDessert::PreValidationFailureReason))((::PBYTE)hIl2Cpp + OCAPFGNGIHA_TRYSELECT_OFFSET))(this, a1, a2, a3);
		}

	};
