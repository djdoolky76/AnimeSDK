#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/TaskConfig.h"
class FCOEMCEDLNL;
class HFHGEOOKHEP;
namespace RPG::GameCore { class DynamicFloat; }

#define HFHGEOOKHEP_CTOR_OFFSET UNITYSDK_OFFSET(0x1CEA08E0)
#define HFHGEOOKHEP_MGMEGEDLMAK_OFFSET UNITYSDK_OFFSET(0x1CEA08F0)
#define HFHGEOOKHEP_OJNNBEJLDIJ_OFFSET UNITYSDK_OFFSET(0x1CEA08A0)

inline static constexpr unsigned int HFHGEOOKHEP_TypeDefinitionIndex = 20536;

	class HFHGEOOKHEP : public ::RPG::GameCore::TaskConfig
	{
	public:
		::RPG::GameCore::DynamicFloat* IEHPFADHJFD; // 0x18
		::System::Boolean BEEAINAPMNE; // 0x20
		::System::Boolean GNDCCBNILML; // 0x21
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + HFHGEOOKHEP_CTOR_OFFSET))(this);
		}

		static ::System::Void OJNNBEJLDIJ(::FCOEMCEDLNL* a1, ::HFHGEOOKHEP* a2)
		{
			return ((::System::Void(*)(::FCOEMCEDLNL*, ::HFHGEOOKHEP*))((::PBYTE)hIl2Cpp + HFHGEOOKHEP_OJNNBEJLDIJ_OFFSET))(a1, a2);
		}

		static ::System::Void MGMEGEDLMAK(::FCOEMCEDLNL* a1, ::HFHGEOOKHEP* a2)
		{
			return ((::System::Void(*)(::FCOEMCEDLNL*, ::HFHGEOOKHEP*))((::PBYTE)hIl2Cpp + HFHGEOOKHEP_MGMEGEDLMAK_OFFSET))(a1, a2);
		}

	};
