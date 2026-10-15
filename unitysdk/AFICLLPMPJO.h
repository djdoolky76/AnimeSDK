#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/SummonerEnergyBarType.h"
#include "unitysdk/System/Object.h"
class AFICLLPMPJO;
namespace RPG::GameCore { class DotBarTypeConfig; }
namespace RPG::GameCore { class GameEntity; }
namespace RPG::GameCore { class NumBarTypeConfig; }
namespace RPG::GameCore { class ProgressBarTypeConfig; }

#define AFICLLPMPJO_CTOR_OFFSET UNITYSDK_OFFSET(0xCF05E20)
#define AFICLLPMPJO_FKNKMOFOODM_OFFSET UNITYSDK_OFFSET(0xCF05DB0)

inline static constexpr unsigned int AFICLLPMPJO_TypeDefinitionIndex = 56882;

	class AFICLLPMPJO : public ::System::Object
	{
	public:
		::RPG::GameCore::DotBarTypeConfig* CEPLINKFOHN; // 0x10
		::RPG::GameCore::GameEntity* OFHDAHHPNPJ; // 0x18
		::RPG::GameCore::NumBarTypeConfig* HOEEFFGDHOI; // 0x20
		::RPG::GameCore::ProgressBarTypeConfig* JJOBGHGHNPJ; // 0x28
		::System::Int32 KMDEBAKFJML; // 0x30
		::System::Int32 HOCMHABKLGJ; // 0x34
		::System::Int32 JADMAPDKLKL; // 0x38
		::RPG::GameCore::SummonerEnergyBarType OPFMFGGBAKC; // 0x3C
		::System::Boolean CAGCHKJHMPD; // 0x40
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + AFICLLPMPJO_CTOR_OFFSET))(this);
		}

		::System::Void FKNKMOFOODM(::AFICLLPMPJO* a1)
		{
			return ((::System::Void(*)(::PVOID, ::AFICLLPMPJO*))((::PBYTE)hIl2Cpp + AFICLLPMPJO_FKNKMOFOODM_OFFSET))(this, a1);
		}

	};
