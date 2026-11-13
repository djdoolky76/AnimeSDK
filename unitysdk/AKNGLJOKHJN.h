#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/TaskConfig.h"
class AKNGLJOKHJN;
class FCOEMCEDLNL;
namespace RPG::GameCore { class TargetEvaluator; }

#define AKNGLJOKHJN_CTOR_OFFSET UNITYSDK_OFFSET(0x1ECA2930)
#define AKNGLJOKHJN_MGMEGEDLMAK_OFFSET UNITYSDK_OFFSET(0x1ECA2940)
#define AKNGLJOKHJN_OJNNBEJLDIJ_OFFSET UNITYSDK_OFFSET(0x1ECA2900)

inline static constexpr unsigned int AKNGLJOKHJN_TypeDefinitionIndex = 22821;

	class AKNGLJOKHJN : public ::RPG::GameCore::TaskConfig
	{
	public:
		::RPG::GameCore::TargetEvaluator* HILNFHCPEAD; // 0x18
		::System::Int32 BGFBICLOCMK; // 0x20
		::System::Int32 IIPFHDIAFHL; // 0x24
		::System::Int32 KMOPKKPGADM; // 0x28
		::System::Boolean AHCIOIHFOHH; // 0x2C
		::System::Boolean APKNFGMBLGD; // 0x2D
		::System::Boolean NJNGPPFAEPG; // 0x2E
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + AKNGLJOKHJN_CTOR_OFFSET))(this);
		}

		static ::System::Void OJNNBEJLDIJ(::FCOEMCEDLNL* a1, ::AKNGLJOKHJN* a2)
		{
			return ((::System::Void(*)(::FCOEMCEDLNL*, ::AKNGLJOKHJN*))((::PBYTE)hIl2Cpp + AKNGLJOKHJN_OJNNBEJLDIJ_OFFSET))(a1, a2);
		}

		static ::System::Void MGMEGEDLMAK(::FCOEMCEDLNL* a1, ::AKNGLJOKHJN* a2)
		{
			return ((::System::Void(*)(::FCOEMCEDLNL*, ::AKNGLJOKHJN*))((::PBYTE)hIl2Cpp + AKNGLJOKHJN_MGMEGEDLMAK_OFFSET))(a1, a2);
		}

	};
