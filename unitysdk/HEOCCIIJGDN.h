#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/STTaskConfig.h"
class FCOEMCEDLNL;
class HEOCCIIJGDN;

#define HEOCCIIJGDN_CTOR_OFFSET UNITYSDK_OFFSET(0x1E079380)
#define HEOCCIIJGDN_MGMEGEDLMAK_OFFSET UNITYSDK_OFFSET(0x1E079390)
#define HEOCCIIJGDN_OJNNBEJLDIJ_OFFSET UNITYSDK_OFFSET(0x1E0792C0)

inline static constexpr unsigned int HEOCCIIJGDN_TypeDefinitionIndex = 21675;

	class HEOCCIIJGDN : public ::RPG::GameCore::STTaskConfig
	{
	public:
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + HEOCCIIJGDN_CTOR_OFFSET))(this);
		}

		static ::System::Void OJNNBEJLDIJ(::FCOEMCEDLNL* a1, ::HEOCCIIJGDN* a2)
		{
			return ((::System::Void(*)(::FCOEMCEDLNL*, ::HEOCCIIJGDN*))((::PBYTE)hIl2Cpp + HEOCCIIJGDN_OJNNBEJLDIJ_OFFSET))(a1, a2);
		}

		static ::System::Void MGMEGEDLMAK(::FCOEMCEDLNL* a1, ::HEOCCIIJGDN* a2)
		{
			return ((::System::Void(*)(::FCOEMCEDLNL*, ::HEOCCIIJGDN*))((::PBYTE)hIl2Cpp + HEOCCIIJGDN_MGMEGEDLMAK_OFFSET))(a1, a2);
		}

	};
