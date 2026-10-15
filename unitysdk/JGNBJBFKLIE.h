#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/Client/TextID.h"
#include "unitysdk/RPG/GameCore/TaskConfig.h"
class FCOEMCEDLNL;
class JGNBJBFKLIE;
namespace System { class String; }

#define JGNBJBFKLIE_CTOR_OFFSET UNITYSDK_OFFSET(0x1CFFC5B0)
#define JGNBJBFKLIE_MGMEGEDLMAK_OFFSET UNITYSDK_OFFSET(0x1CFFC5C0)
#define JGNBJBFKLIE_OJNNBEJLDIJ_OFFSET UNITYSDK_OFFSET(0x1CFFC580)

inline static constexpr unsigned int JGNBJBFKLIE_TypeDefinitionIndex = 22109;

	class JGNBJBFKLIE : public ::RPG::GameCore::TaskConfig
	{
	public:
		::System::String* PEGNLFICABO; // 0x18
		::RPG::Client::TextID CBLEMIFMLJD; // 0x20
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + JGNBJBFKLIE_CTOR_OFFSET))(this);
		}

		static ::System::Void OJNNBEJLDIJ(::FCOEMCEDLNL* a1, ::JGNBJBFKLIE* a2)
		{
			return ((::System::Void(*)(::FCOEMCEDLNL*, ::JGNBJBFKLIE*))((::PBYTE)hIl2Cpp + JGNBJBFKLIE_OJNNBEJLDIJ_OFFSET))(a1, a2);
		}

		static ::System::Void MGMEGEDLMAK(::FCOEMCEDLNL* a1, ::JGNBJBFKLIE* a2)
		{
			return ((::System::Void(*)(::FCOEMCEDLNL*, ::JGNBJBFKLIE*))((::PBYTE)hIl2Cpp + JGNBJBFKLIE_MGMEGEDLMAK_OFFSET))(a1, a2);
		}

	};
