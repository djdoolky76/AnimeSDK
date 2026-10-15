#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/PropertyModifyFunction.h"
#include "unitysdk/RPG/GameCore/TaskConfig.h"
class EHLALANHDPD;
class FCOEMCEDLNL;
namespace RPG::GameCore { class DynamicFloat; }
namespace RPG::GameCore { class TargetEvaluator; }

#define EHLALANHDPD_CTOR_OFFSET UNITYSDK_OFFSET(0x1CD54B70)
#define EHLALANHDPD_MGMEGEDLMAK_OFFSET UNITYSDK_OFFSET(0x1CD54B80)
#define EHLALANHDPD_OJNNBEJLDIJ_OFFSET UNITYSDK_OFFSET(0x1CD54B30)

inline static constexpr unsigned int EHLALANHDPD_TypeDefinitionIndex = 23605;

	class EHLALANHDPD : public ::RPG::GameCore::TaskConfig
	{
	public:
		::RPG::GameCore::TargetEvaluator* HILNFHCPEAD; // 0x18
		::RPG::GameCore::DynamicFloat* ALDLOOKHHGI; // 0x20
		::RPG::GameCore::PropertyModifyFunction DNKFJMBHINL; // 0x28
		::System::Boolean GEKABEICGIN; // 0x2C
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + EHLALANHDPD_CTOR_OFFSET))(this);
		}

		static ::System::Void OJNNBEJLDIJ(::FCOEMCEDLNL* a1, ::EHLALANHDPD* a2)
		{
			return ((::System::Void(*)(::FCOEMCEDLNL*, ::EHLALANHDPD*))((::PBYTE)hIl2Cpp + EHLALANHDPD_OJNNBEJLDIJ_OFFSET))(a1, a2);
		}

		static ::System::Void MGMEGEDLMAK(::FCOEMCEDLNL* a1, ::EHLALANHDPD* a2)
		{
			return ((::System::Void(*)(::FCOEMCEDLNL*, ::EHLALANHDPD*))((::PBYTE)hIl2Cpp + EHLALANHDPD_MGMEGEDLMAK_OFFSET))(a1, a2);
		}

	};
