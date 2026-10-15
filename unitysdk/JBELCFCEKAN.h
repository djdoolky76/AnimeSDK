#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/TaskConfig.h"
class FCOEMCEDLNL;
class JBELCFCEKAN;
namespace RPG::GameCore { class DynamicFloat; }

#define JBELCFCEKAN_CTOR_OFFSET UNITYSDK_OFFSET(0x1D012CB0)
#define JBELCFCEKAN_MGMEGEDLMAK_OFFSET UNITYSDK_OFFSET(0x1D012CC0)
#define JBELCFCEKAN_OJNNBEJLDIJ_OFFSET UNITYSDK_OFFSET(0x1D012C80)

inline static constexpr unsigned int JBELCFCEKAN_TypeDefinitionIndex = 22604;

	class JBELCFCEKAN : public ::RPG::GameCore::TaskConfig
	{
	public:
		::RPG::GameCore::DynamicFloat* NIDFLLDDIPF; // 0x18
		::RPG::GameCore::DynamicFloat* GHHGMAGFHLG; // 0x20
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + JBELCFCEKAN_CTOR_OFFSET))(this);
		}

		static ::System::Void OJNNBEJLDIJ(::FCOEMCEDLNL* a1, ::JBELCFCEKAN* a2)
		{
			return ((::System::Void(*)(::FCOEMCEDLNL*, ::JBELCFCEKAN*))((::PBYTE)hIl2Cpp + JBELCFCEKAN_OJNNBEJLDIJ_OFFSET))(a1, a2);
		}

		static ::System::Void MGMEGEDLMAK(::FCOEMCEDLNL* a1, ::JBELCFCEKAN* a2)
		{
			return ((::System::Void(*)(::FCOEMCEDLNL*, ::JBELCFCEKAN*))((::PBYTE)hIl2Cpp + JBELCFCEKAN_MGMEGEDLMAK_OFFSET))(a1, a2);
		}

	};
