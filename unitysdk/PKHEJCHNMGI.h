#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/Client/TextID.h"
#include "unitysdk/RPG/GameCore/FateRinCaseBoardTeamType.h"
#include "unitysdk/System/Object.h"
class FCOEMCEDLNL;
class PKHEJCHNMGI;

#define PKHEJCHNMGI_CTOR_OFFSET UNITYSDK_OFFSET(0x1E738470)
#define PKHEJCHNMGI_OJNNBEJLDIJ_OFFSET UNITYSDK_OFFSET(0x1E7380F0)

inline static constexpr unsigned int PKHEJCHNMGI_TypeDefinitionIndex = 11627;

	class PKHEJCHNMGI : public ::System::Object
	{
	public:
		::RPG::Client::TextID NMAHGFAPENI; // 0x10
		::System::UInt32 GMCBNNKJAGJ; // 0x20
		::RPG::GameCore::FateRinCaseBoardTeamType JCDIEKGKCPP; // 0x24
		::RPG::Client::TextID KONCALJBIOB; // 0x28
		::RPG::Client::TextID BGNGIBBEGMB; // 0x38
		::RPG::Client::TextID IGKPNJCFCPN; // 0x48
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + PKHEJCHNMGI_CTOR_OFFSET))(this);
		}

		static ::System::Void OJNNBEJLDIJ(::FCOEMCEDLNL* a1, ::PKHEJCHNMGI* a2)
		{
			return ((::System::Void(*)(::FCOEMCEDLNL*, ::PKHEJCHNMGI*))((::PBYTE)hIl2Cpp + PKHEJCHNMGI_OJNNBEJLDIJ_OFFSET))(a1, a2);
		}

	};
