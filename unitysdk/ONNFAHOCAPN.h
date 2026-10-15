#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/Client/LittleGame/ChimeraDuel/ChimeraDuelCommandGuideMode.h"
#include "unitysdk/System/Object.h"
namespace RPG::Client::LittleGame::ChimeraDuel { class ChimeraDuelGameInstance; }

#define ONNFAHOCAPN_BCODLIFIFNC_OFFSET UNITYSDK_OFFSET(0xBF5F690)
#define ONNFAHOCAPN_CTOR_OFFSET UNITYSDK_OFFSET(0xBF5F7F0)
#define ONNFAHOCAPN_DEGFEAHKFCG_OFFSET UNITYSDK_OFFSET(0xBF5F750)
#define ONNFAHOCAPN_EGFNLMKCNHC_OFFSET UNITYSDK_OFFSET(0xBF5F790)

	class ONNFAHOCAPN : public ::System::Object
	{
	public:
		::RPG::Client::LittleGame::ChimeraDuel::ChimeraDuelCommandGuideMode BHJDJDPLCLP; // 0x10
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + ONNFAHOCAPN_CTOR_OFFSET))(this);
		}

		::System::Void BCODLIFIFNC(::RPG::Client::LittleGame::ChimeraDuel::ChimeraDuelCommandGuideMode a1)
		{
			return ((::System::Void(*)(::PVOID, ::RPG::Client::LittleGame::ChimeraDuel::ChimeraDuelCommandGuideMode))((::PBYTE)hIl2Cpp + ONNFAHOCAPN_BCODLIFIFNC_OFFSET))(this, a1);
		}

		::RPG::Client::LittleGame::ChimeraDuel::ChimeraDuelCommandGuideMode DEGFEAHKFCG()
		{
			return ((::RPG::Client::LittleGame::ChimeraDuel::ChimeraDuelCommandGuideMode(*)(::PVOID))((::PBYTE)hIl2Cpp + ONNFAHOCAPN_DEGFEAHKFCG_OFFSET))(this);
		}

		::System::Boolean EGFNLMKCNHC(::RPG::Client::LittleGame::ChimeraDuel::ChimeraDuelGameInstance* a1)
		{
			return ((::System::Boolean(*)(::PVOID, ::RPG::Client::LittleGame::ChimeraDuel::ChimeraDuelGameInstance*))((::PBYTE)hIl2Cpp + ONNFAHOCAPN_EGFNLMKCNHC_OFFSET))(this, a1);
		}

	};
