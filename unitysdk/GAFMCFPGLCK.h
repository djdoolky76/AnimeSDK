#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/Client/TextID.h"
#include "unitysdk/RPG/GameCore/TaskConfig.h"
class FCOEMCEDLNL;
class GAFMCFPGLCK;
namespace RPG::GameCore { class DynamicFloat; }
namespace System { class String; }

#define GAFMCFPGLCK_CTOR_OFFSET UNITYSDK_OFFSET(0x1DFFA510)
#define GAFMCFPGLCK_MGMEGEDLMAK_OFFSET UNITYSDK_OFFSET(0x1DFFA520)
#define GAFMCFPGLCK_OJNNBEJLDIJ_OFFSET UNITYSDK_OFFSET(0x1DFFA4E0)

inline static constexpr unsigned int GAFMCFPGLCK_TypeDefinitionIndex = 23671;

	class GAFMCFPGLCK : public ::RPG::GameCore::TaskConfig
	{
	public:
		::RPG::GameCore::DynamicFloat* PMLDAAAAKCK; // 0x18
		::System::String* FBKAMIHGLFK; // 0x20
		::System::String* OLOIFNNLKJP; // 0x28
		::RPG::GameCore::DynamicFloat* JAADBJBIBPH; // 0x30
		::RPG::Client::TextID LILJIHBAPII; // 0x38
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + GAFMCFPGLCK_CTOR_OFFSET))(this);
		}

		static ::System::Void OJNNBEJLDIJ(::FCOEMCEDLNL* a1, ::GAFMCFPGLCK* a2)
		{
			return ((::System::Void(*)(::FCOEMCEDLNL*, ::GAFMCFPGLCK*))((::PBYTE)hIl2Cpp + GAFMCFPGLCK_OJNNBEJLDIJ_OFFSET))(a1, a2);
		}

		static ::System::Void MGMEGEDLMAK(::FCOEMCEDLNL* a1, ::GAFMCFPGLCK* a2)
		{
			return ((::System::Void(*)(::FCOEMCEDLNL*, ::GAFMCFPGLCK*))((::PBYTE)hIl2Cpp + GAFMCFPGLCK_MGMEGEDLMAK_OFFSET))(a1, a2);
		}

	};
