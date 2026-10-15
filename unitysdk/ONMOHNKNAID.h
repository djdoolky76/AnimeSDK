#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/TaskConfig.h"
class FCOEMCEDLNL;
class ONMOHNKNAID;
namespace RPG::GameCore { class DynamicString; }

#define ONMOHNKNAID_CTOR_OFFSET UNITYSDK_OFFSET(0x1D276820)
#define ONMOHNKNAID_MGMEGEDLMAK_OFFSET UNITYSDK_OFFSET(0x1D276830)
#define ONMOHNKNAID_OJNNBEJLDIJ_OFFSET UNITYSDK_OFFSET(0x1D2767F0)

inline static constexpr unsigned int ONMOHNKNAID_TypeDefinitionIndex = 20991;

	class ONMOHNKNAID : public ::RPG::GameCore::TaskConfig
	{
	public:
		::RPG::GameCore::DynamicString* HCKELNILFPJ; // 0x18
		::System::Boolean CAGCHKJHMPD; // 0x20
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + ONMOHNKNAID_CTOR_OFFSET))(this);
		}

		static ::System::Void OJNNBEJLDIJ(::FCOEMCEDLNL* a1, ::ONMOHNKNAID* a2)
		{
			return ((::System::Void(*)(::FCOEMCEDLNL*, ::ONMOHNKNAID*))((::PBYTE)hIl2Cpp + ONMOHNKNAID_OJNNBEJLDIJ_OFFSET))(a1, a2);
		}

		static ::System::Void MGMEGEDLMAK(::FCOEMCEDLNL* a1, ::ONMOHNKNAID* a2)
		{
			return ((::System::Void(*)(::FCOEMCEDLNL*, ::ONMOHNKNAID*))((::PBYTE)hIl2Cpp + ONMOHNKNAID_MGMEGEDLMAK_OFFSET))(a1, a2);
		}

	};
