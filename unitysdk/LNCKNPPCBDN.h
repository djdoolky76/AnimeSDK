#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/TaskConfig.h"
class FCOEMCEDLNL;
class LNCKNPPCBDN;
namespace RPG::GameCore { class DynamicFloat; }
namespace RPG::GameCore { class DynamicString; }
namespace RPG::GameCore { class FiveDimTrainEnergyGear; }

#define LNCKNPPCBDN_CTOR_OFFSET UNITYSDK_OFFSET(0x1D118DA0)
#define LNCKNPPCBDN_MGMEGEDLMAK_OFFSET UNITYSDK_OFFSET(0x1D118DB0)
#define LNCKNPPCBDN_OJNNBEJLDIJ_OFFSET UNITYSDK_OFFSET(0x1D118D70)

inline static constexpr unsigned int LNCKNPPCBDN_TypeDefinitionIndex = 21469;

	class LNCKNPPCBDN : public ::RPG::GameCore::TaskConfig
	{
	public:
		::RPG::GameCore::DynamicFloat* DBNCAMCCAFM; // 0x18
		::Il2CppArray<::RPG::GameCore::FiveDimTrainEnergyGear*>* FFDJIJCCDFO; // 0x20
		::RPG::GameCore::DynamicString* OAOGPNFPBCC; // 0x28
		::RPG::GameCore::DynamicFloat* IAMKAPIJLGP; // 0x30
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + LNCKNPPCBDN_CTOR_OFFSET))(this);
		}

		static ::System::Void OJNNBEJLDIJ(::FCOEMCEDLNL* a1, ::LNCKNPPCBDN* a2)
		{
			return ((::System::Void(*)(::FCOEMCEDLNL*, ::LNCKNPPCBDN*))((::PBYTE)hIl2Cpp + LNCKNPPCBDN_OJNNBEJLDIJ_OFFSET))(a1, a2);
		}

		static ::System::Void MGMEGEDLMAK(::FCOEMCEDLNL* a1, ::LNCKNPPCBDN* a2)
		{
			return ((::System::Void(*)(::FCOEMCEDLNL*, ::LNCKNPPCBDN*))((::PBYTE)hIl2Cpp + LNCKNPPCBDN_MGMEGEDLMAK_OFFSET))(a1, a2);
		}

	};
