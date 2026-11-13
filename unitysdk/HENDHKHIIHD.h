#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/TaskConfig.h"
class FCOEMCEDLNL;
class HENDHKHIIHD;
namespace RPG::GameCore { class TargetEvaluator; }

#define HENDHKHIIHD_CTOR_OFFSET UNITYSDK_OFFSET(0x1E9F0840)
#define HENDHKHIIHD_MGMEGEDLMAK_OFFSET UNITYSDK_OFFSET(0x1E9F0870)
#define HENDHKHIIHD_OJNNBEJLDIJ_OFFSET UNITYSDK_OFFSET(0x1E9F07F0)

inline static constexpr unsigned int HENDHKHIIHD_TypeDefinitionIndex = 22407;

	class HENDHKHIIHD : public ::RPG::GameCore::TaskConfig
	{
	public:
		::RPG::GameCore::TargetEvaluator* HILNFHCPEAD; // 0x18
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + HENDHKHIIHD_CTOR_OFFSET))(this);
		}

		static ::System::Void OJNNBEJLDIJ(::FCOEMCEDLNL* a1, ::HENDHKHIIHD* a2)
		{
			return ((::System::Void(*)(::FCOEMCEDLNL*, ::HENDHKHIIHD*))((::PBYTE)hIl2Cpp + HENDHKHIIHD_OJNNBEJLDIJ_OFFSET))(a1, a2);
		}

		static ::System::Void MGMEGEDLMAK(::FCOEMCEDLNL* a1, ::HENDHKHIIHD* a2)
		{
			return ((::System::Void(*)(::FCOEMCEDLNL*, ::HENDHKHIIHD*))((::PBYTE)hIl2Cpp + HENDHKHIIHD_MGMEGEDLMAK_OFFSET))(a1, a2);
		}

	};
