#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/TaskConfig.h"
class DCGAKLDFEKM;
class FCOEMCEDLNL;
namespace RPG::GameCore { class ChenLingFesTargetConfig; }
namespace System { class String; }

#define DCGAKLDFEKM_CTOR_OFFSET UNITYSDK_OFFSET(0x1DCD7920)
#define DCGAKLDFEKM_MGMEGEDLMAK_OFFSET UNITYSDK_OFFSET(0x1DCD7930)
#define DCGAKLDFEKM_OJNNBEJLDIJ_OFFSET UNITYSDK_OFFSET(0x1DCD78F0)

inline static constexpr unsigned int DCGAKLDFEKM_TypeDefinitionIndex = 21513;

	class DCGAKLDFEKM : public ::RPG::GameCore::TaskConfig
	{
	public:
		::RPG::GameCore::ChenLingFesTargetConfig* GMJKHCGCNKA; // 0x18
		::System::String* MNDFOPKBHKP; // 0x20
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + DCGAKLDFEKM_CTOR_OFFSET))(this);
		}

		static ::System::Void OJNNBEJLDIJ(::FCOEMCEDLNL* a1, ::DCGAKLDFEKM* a2)
		{
			return ((::System::Void(*)(::FCOEMCEDLNL*, ::DCGAKLDFEKM*))((::PBYTE)hIl2Cpp + DCGAKLDFEKM_OJNNBEJLDIJ_OFFSET))(a1, a2);
		}

		static ::System::Void MGMEGEDLMAK(::FCOEMCEDLNL* a1, ::DCGAKLDFEKM* a2)
		{
			return ((::System::Void(*)(::FCOEMCEDLNL*, ::DCGAKLDFEKM*))((::PBYTE)hIl2Cpp + DCGAKLDFEKM_MGMEGEDLMAK_OFFSET))(a1, a2);
		}

	};
