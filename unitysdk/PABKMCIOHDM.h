#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"
namespace RPG::GameCore { class DialogueGroupRow; }

#define PABKMCIOHDM_DGJNFLPHEJM_OFFSET UNITYSDK_OFFSET(0xBFBD650)
#define PABKMCIOHDM_DMLIGFEFINN_OFFSET UNITYSDK_OFFSET(0xBFBD980)

inline static constexpr unsigned int PABKMCIOHDM_TypeDefinitionIndex = 56496;

	class PABKMCIOHDM : public ::System::Object
	{
	public:
		static ::System::Void DGJNFLPHEJM(::RPG::GameCore::DialogueGroupRow* a1)
		{
			return ((::System::Void(*)(::RPG::GameCore::DialogueGroupRow*))((::PBYTE)hIl2Cpp + PABKMCIOHDM_DGJNFLPHEJM_OFFSET))(a1);
		}

		static ::System::Boolean DMLIGFEFINN(::RPG::GameCore::DialogueGroupRow* a1)
		{
			return ((::System::Boolean(*)(::RPG::GameCore::DialogueGroupRow*))((::PBYTE)hIl2Cpp + PABKMCIOHDM_DMLIGFEFINN_OFFSET))(a1);
		}

	};
