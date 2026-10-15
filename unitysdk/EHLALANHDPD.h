#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/PropertyModifyFunction.h"
#include "unitysdk/RPG/GameCore/TaskConfig.h"
class EHLALANHDPD;
class FCOEMCEDLNL;
namespace RPG::GameCore { class DynamicFloat; }
namespace RPG::GameCore { class TargetEvaluator; }

#define EHLALANHDPD_CTOR_OFFSET UNITYSDK_OFFSET(0x1CD82BB0)
#define EHLALANHDPD_MGMEGEDLMAK_OFFSET UNITYSDK_OFFSET(0x1CD82BC0)
#define EHLALANHDPD_OJNNBEJLDIJ_OFFSET UNITYSDK_OFFSET(0x1CD82B70)

inline static constexpr unsigned int EHLALANHDPD_TypeDefinitionIndex = 23605;

	class EHLALANHDPD : public ::RPG::GameCore::TaskConfig
	{
	public:
		::RPG::GameCore::DynamicFloat* ALDLOOKHHGI; // 0x18
		::RPG::GameCore::TargetEvaluator* HILNFHCPEAD; // 0x20
		::System::Boolean GEKABEICGIN; // 0x28
		::System::Byte _padding0[0x3];
		::RPG::GameCore::PropertyModifyFunction DNKFJMBHINL; // 0x2C
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
