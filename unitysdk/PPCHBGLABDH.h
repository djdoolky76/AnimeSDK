#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/EADABGHLCIG.h"
#include "unitysdk/RPG/Client/Prop/DestroyRootPuzzleChessType.h"

#define PPCHBGLABDH_CIGPLCIKPLE_OFFSET UNITYSDK_OFFSET(0xC37AD50)
#define PPCHBGLABDH_CTOR_OFFSET UNITYSDK_OFFSET(0xC37ADA0)

inline static constexpr unsigned int PPCHBGLABDH_TypeDefinitionIndex = 78553;

	class PPCHBGLABDH : public ::EADABGHLCIG
	{
	public:
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + PPCHBGLABDH_CTOR_OFFSET))(this);
		}

		::RPG::Client::Prop::DestroyRootPuzzleChessType CIGPLCIKPLE()
		{
			return ((::RPG::Client::Prop::DestroyRootPuzzleChessType(*)(::PVOID))((::PBYTE)hIl2Cpp + PPCHBGLABDH_CIGPLCIKPLE_OFFSET))(this);
		}

	};
