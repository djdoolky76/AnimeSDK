#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/MDHAJBBMIJC.h"
#include "unitysdk/RPG/Client/LittleGame/FiveDim/PropMoveState.h"

#define BBMKMNBGLBJ_BPMGPFLHPLC_OFFSET UNITYSDK_OFFSET(0x19D61440)
#define BBMKMNBGLBJ_CTOR_OFFSET UNITYSDK_OFFSET(0x19D61490)
#define BBMKMNBGLBJ_FNJCKCNKBKC_OFFSET UNITYSDK_OFFSET(0x19D613C0)

inline static constexpr unsigned int BBMKMNBGLBJ_TypeDefinitionIndex = 79383;

	class BBMKMNBGLBJ : public ::MDHAJBBMIJC
	{
	public:
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + BBMKMNBGLBJ_CTOR_OFFSET))(this);
		}

		::System::Void FNJCKCNKBKC()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + BBMKMNBGLBJ_FNJCKCNKBKC_OFFSET))(this);
		}

		::RPG::Client::LittleGame::FiveDim::PropMoveState BPMGPFLHPLC()
		{
			return ((::RPG::Client::LittleGame::FiveDim::PropMoveState(*)(::PVOID))((::PBYTE)hIl2Cpp + BBMKMNBGLBJ_BPMGPFLHPLC_OFFSET))(this);
		}

	};
