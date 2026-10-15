#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/TaskConfig.h"
class FCOEMCEDLNL;
class KIKKCLCAIFJ;

#define KIKKCLCAIFJ_CTOR_OFFSET UNITYSDK_OFFSET(0x1D068A90)
#define KIKKCLCAIFJ_MGMEGEDLMAK_OFFSET UNITYSDK_OFFSET(0x1D068AA0)
#define KIKKCLCAIFJ_OJNNBEJLDIJ_OFFSET UNITYSDK_OFFSET(0x1D0689D0)

inline static constexpr unsigned int KIKKCLCAIFJ_TypeDefinitionIndex = 19934;

	class KIKKCLCAIFJ : public ::RPG::GameCore::TaskConfig
	{
	public:
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + KIKKCLCAIFJ_CTOR_OFFSET))(this);
		}

		static ::System::Void OJNNBEJLDIJ(::FCOEMCEDLNL* a1, ::KIKKCLCAIFJ* a2)
		{
			return ((::System::Void(*)(::FCOEMCEDLNL*, ::KIKKCLCAIFJ*))((::PBYTE)hIl2Cpp + KIKKCLCAIFJ_OJNNBEJLDIJ_OFFSET))(a1, a2);
		}

		static ::System::Void MGMEGEDLMAK(::FCOEMCEDLNL* a1, ::KIKKCLCAIFJ* a2)
		{
			return ((::System::Void(*)(::FCOEMCEDLNL*, ::KIKKCLCAIFJ*))((::PBYTE)hIl2Cpp + KIKKCLCAIFJ_MGMEGEDLMAK_OFFSET))(a1, a2);
		}

	};
