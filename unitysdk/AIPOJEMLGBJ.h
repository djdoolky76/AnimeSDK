#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"
namespace RPG::Client { class FuncUnlockHint; }

#define AIPOJEMLGBJ_DCHBCPLPHEJ_OFFSET UNITYSDK_OFFSET(0x12CAF150)

inline static constexpr unsigned int AIPOJEMLGBJ_TypeDefinitionIndex = 68017;

	class AIPOJEMLGBJ : public ::System::Object
	{
	public:
		static ::System::Void DCHBCPLPHEJ(::RPG::Client::FuncUnlockHint* a1)
		{
			return ((::System::Void(*)(::RPG::Client::FuncUnlockHint*))((::PBYTE)hIl2Cpp + AIPOJEMLGBJ_DCHBCPLPHEJ_OFFSET))(a1);
		}

	};
