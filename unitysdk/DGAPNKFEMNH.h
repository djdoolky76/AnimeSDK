#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/EADABGHLCIG.h"
#include "unitysdk/RPG/Client/Prop/DestroyRootPuzzleChessType.h"

#define DGAPNKFEMNH_CIGPLCIKPLE_OFFSET UNITYSDK_OFFSET(0x1ADAB540)
#define DGAPNKFEMNH_CTOR_OFFSET UNITYSDK_OFFSET(0x1ADAB590)

inline static constexpr unsigned int DGAPNKFEMNH_TypeDefinitionIndex = 81289;

	class DGAPNKFEMNH : public ::EADABGHLCIG
	{
	public:
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + DGAPNKFEMNH_CTOR_OFFSET))(this);
		}

		::RPG::Client::Prop::DestroyRootPuzzleChessType CIGPLCIKPLE()
		{
			return ((::RPG::Client::Prop::DestroyRootPuzzleChessType(*)(::PVOID))((::PBYTE)hIl2Cpp + DGAPNKFEMNH_CIGPLCIKPLE_OFFSET))(this);
		}

	};
