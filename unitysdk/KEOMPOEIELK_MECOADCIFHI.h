#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/Client/LittleGameSandboxCompletionResult.h"
#include "unitysdk/System/Object.h"
class FFAIADMGHHJ;

#define KEOMPOEIELK_MECOADCIFHI_CTOR_OFFSET UNITYSDK_OFFSET(0x1B5E3950)

inline static constexpr unsigned int KEOMPOEIELK_MECOADCIFHI_TypeDefinitionIndex = 61945;

	class KEOMPOEIELK_MECOADCIFHI : public ::System::Object
	{
	public:
		::FFAIADMGHHJ* PAHJOEIMLIB; // 0x10
		::RPG::Client::LittleGameSandboxCompletionResult IIMIFIBHMBA; // 0x18
		::System::Boolean ANKADBJOMIE; // 0x1C
		::System::Boolean KJKDEFMOEPI; // 0x1D
		::System::Byte _padding0[0x2];
		::RPG::Client::LittleGameSandboxCompletionResult FHDNKMEBMDE; // 0x20
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + KEOMPOEIELK_MECOADCIFHI_CTOR_OFFSET))(this);
		}

	};
