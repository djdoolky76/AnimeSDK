#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/EGFGCOMABKB.h"
#include "unitysdk/RPG/Client/LittleGame/FiveDim/PropMoveState.h"

#define JEBKDABMPDA_BPMGPFLHPLC_OFFSET UNITYSDK_OFFSET(0x13062280)
#define JEBKDABMPDA_CTOR_OFFSET UNITYSDK_OFFSET(0x130622D0)

inline static constexpr unsigned int JEBKDABMPDA_TypeDefinitionIndex = 79367;

	class JEBKDABMPDA : public ::EGFGCOMABKB
	{
	public:
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + JEBKDABMPDA_CTOR_OFFSET))(this);
		}

		::RPG::Client::LittleGame::FiveDim::PropMoveState BPMGPFLHPLC()
		{
			return ((::RPG::Client::LittleGame::FiveDim::PropMoveState(*)(::PVOID))((::PBYTE)hIl2Cpp + JEBKDABMPDA_BPMGPFLHPLC_OFFSET))(this);
		}

	};
