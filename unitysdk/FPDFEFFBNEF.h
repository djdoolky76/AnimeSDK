#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/TaskConfig.h"
class FCOEMCEDLNL;
class FPDFEFFBNEF;
namespace RPG::GameCore { class DynamicString; }
namespace RPG::GameCore { class LittleGameFireEffectParams; }

#define FPDFEFFBNEF_CTOR_OFFSET UNITYSDK_OFFSET(0x1CDEC880)
#define FPDFEFFBNEF_MGMEGEDLMAK_OFFSET UNITYSDK_OFFSET(0x1CDEC890)
#define FPDFEFFBNEF_OJNNBEJLDIJ_OFFSET UNITYSDK_OFFSET(0x1CDEC850)

inline static constexpr unsigned int FPDFEFFBNEF_TypeDefinitionIndex = 21442;

	class FPDFEFFBNEF : public ::RPG::GameCore::TaskConfig
	{
	public:
		::RPG::GameCore::LittleGameFireEffectParams* EKKGNJDOANO; // 0x18
		::RPG::GameCore::DynamicString* ODMPMJCAHPN; // 0x20
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + FPDFEFFBNEF_CTOR_OFFSET))(this);
		}

		static ::System::Void OJNNBEJLDIJ(::FCOEMCEDLNL* a1, ::FPDFEFFBNEF* a2)
		{
			return ((::System::Void(*)(::FCOEMCEDLNL*, ::FPDFEFFBNEF*))((::PBYTE)hIl2Cpp + FPDFEFFBNEF_OJNNBEJLDIJ_OFFSET))(a1, a2);
		}

		static ::System::Void MGMEGEDLMAK(::FCOEMCEDLNL* a1, ::FPDFEFFBNEF* a2)
		{
			return ((::System::Void(*)(::FCOEMCEDLNL*, ::FPDFEFFBNEF*))((::PBYTE)hIl2Cpp + FPDFEFFBNEF_MGMEGEDLMAK_OFFSET))(a1, a2);
		}

	};
