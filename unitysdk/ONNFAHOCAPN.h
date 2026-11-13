#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/Client/LittleGame/ChimeraDuel/ChimeraDuelCommandGuideMode.h"
#include "unitysdk/System/Object.h"
namespace RPG::Client::LittleGame::ChimeraDuel { class ChimeraDuelGameInstance; }

#define ONNFAHOCAPN_BCODLIFIFNC_OFFSET UNITYSDK_OFFSET(0x17D87EC0)
#define ONNFAHOCAPN_CTOR_OFFSET UNITYSDK_OFFSET(0x17D88020)
#define ONNFAHOCAPN_DEGFEAHKFCG_OFFSET UNITYSDK_OFFSET(0x17D87F80)
#define ONNFAHOCAPN_EGFNLMKCNHC_OFFSET UNITYSDK_OFFSET(0x17D87FC0)

inline static constexpr unsigned int ONNFAHOCAPN_TypeDefinitionIndex = 80142;

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
