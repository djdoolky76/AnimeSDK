#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/MKADHMMGGNA.h"
#include "unitysdk/RPG/Client/Prop/DestroyRootPuzzleChessType.h"

#define AMFOBPIOFJC_CIGPLCIKPLE_OFFSET UNITYSDK_OFFSET(0x15571390)
#define AMFOBPIOFJC_CTOR_OFFSET UNITYSDK_OFFSET(0x155713E0)

inline static constexpr unsigned int AMFOBPIOFJC_TypeDefinitionIndex = 78553;

	class AMFOBPIOFJC : public ::MKADHMMGGNA
	{
	public:
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + AMFOBPIOFJC_CTOR_OFFSET))(this);
		}

		::RPG::Client::Prop::DestroyRootPuzzleChessType CIGPLCIKPLE()
		{
			return ((::RPG::Client::Prop::DestroyRootPuzzleChessType(*)(::PVOID))((::PBYTE)hIl2Cpp + AMFOBPIOFJC_CIGPLCIKPLE_OFFSET))(this);
		}

	};
