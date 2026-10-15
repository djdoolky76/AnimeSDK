#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/TaskConfig.h"
class FCOEMCEDLNL;
class MNAKABIKBLP;
namespace RPG::GameCore { class DynamicString; }

#define MNAKABIKBLP_CTOR_OFFSET UNITYSDK_OFFSET(0x1D1A5F20)
#define MNAKABIKBLP_MGMEGEDLMAK_OFFSET UNITYSDK_OFFSET(0x1D1A5F30)
#define MNAKABIKBLP_OJNNBEJLDIJ_OFFSET UNITYSDK_OFFSET(0x1D1A5EF0)

inline static constexpr unsigned int MNAKABIKBLP_TypeDefinitionIndex = 21480;

	class MNAKABIKBLP : public ::RPG::GameCore::TaskConfig
	{
	public:
		::RPG::GameCore::DynamicString* ODMPMJCAHPN; // 0x18
		::System::UInt32 KILEMGDMDNL; // 0x20
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MNAKABIKBLP_CTOR_OFFSET))(this);
		}

		static ::System::Void OJNNBEJLDIJ(::FCOEMCEDLNL* a1, ::MNAKABIKBLP* a2)
		{
			return ((::System::Void(*)(::FCOEMCEDLNL*, ::MNAKABIKBLP*))((::PBYTE)hIl2Cpp + MNAKABIKBLP_OJNNBEJLDIJ_OFFSET))(a1, a2);
		}

		static ::System::Void MGMEGEDLMAK(::FCOEMCEDLNL* a1, ::MNAKABIKBLP* a2)
		{
			return ((::System::Void(*)(::FCOEMCEDLNL*, ::MNAKABIKBLP*))((::PBYTE)hIl2Cpp + MNAKABIKBLP_MGMEGEDLMAK_OFFSET))(a1, a2);
		}

	};
