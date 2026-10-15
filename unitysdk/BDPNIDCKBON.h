#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/KKHEJKOOOKG.h"
#include "unitysdk/RPG/Client/LittleGame/FiveDim/PropMoveState.h"

#define BDPNIDCKBON_CLJEBKODGHK_OFFSET UNITYSDK_OFFSET(0x162FAB20)
#define BDPNIDCKBON_CTOR_OFFSET UNITYSDK_OFFSET(0x162FAD80)

inline static constexpr unsigned int BDPNIDCKBON_TypeDefinitionIndex = 77038;

	class BDPNIDCKBON : public ::KKHEJKOOOKG
	{
	public:
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + BDPNIDCKBON_CTOR_OFFSET))(this);
		}

		::System::Void CLJEBKODGHK(::RPG::Client::LittleGame::FiveDim::PropMoveState a1)
		{
			return ((::System::Void(*)(::PVOID, ::RPG::Client::LittleGame::FiveDim::PropMoveState))((::PBYTE)hIl2Cpp + BDPNIDCKBON_CLJEBKODGHK_OFFSET))(this, a1);
		}

	};
