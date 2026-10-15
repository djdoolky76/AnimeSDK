#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/MKADHMMGGNA.h"
#include "unitysdk/RPG/Client/Prop/DestroyRootPuzzleChessType.h"

#define NIMLOFPLEDA_CIGPLCIKPLE_OFFSET UNITYSDK_OFFSET(0xBBF7970)
#define NIMLOFPLEDA_CTOR_OFFSET UNITYSDK_OFFSET(0xBBF79C0)

inline static constexpr unsigned int NIMLOFPLEDA_TypeDefinitionIndex = 78555;

	class NIMLOFPLEDA : public ::MKADHMMGGNA
	{
	public:
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + NIMLOFPLEDA_CTOR_OFFSET))(this);
		}

		::RPG::Client::Prop::DestroyRootPuzzleChessType CIGPLCIKPLE()
		{
			return ((::RPG::Client::Prop::DestroyRootPuzzleChessType(*)(::PVOID))((::PBYTE)hIl2Cpp + NIMLOFPLEDA_CIGPLCIKPLE_OFFSET))(this);
		}

	};
