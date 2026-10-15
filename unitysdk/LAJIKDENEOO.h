#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/PropertyModifyFunction.h"
#include "unitysdk/RPG/GameCore/TaskConfig.h"
class FCOEMCEDLNL;
class LAJIKDENEOO;
namespace RPG::GameCore { class DynamicFloat; }
namespace RPG::GameCore { class TargetEvaluator; }
namespace System { class String; }

#define LAJIKDENEOO_CTOR_OFFSET UNITYSDK_OFFSET(0x1D0A5350)
#define LAJIKDENEOO_MGMEGEDLMAK_OFFSET UNITYSDK_OFFSET(0x1D0A5360)
#define LAJIKDENEOO_OJNNBEJLDIJ_OFFSET UNITYSDK_OFFSET(0x1D0A5310)

inline static constexpr unsigned int LAJIKDENEOO_TypeDefinitionIndex = 22603;

	class LAJIKDENEOO : public ::RPG::GameCore::TaskConfig
	{
	public:
		::RPG::GameCore::DynamicFloat* AJHHCOHFIFA; // 0x18
		::System::String* FHLJGDGMMHK; // 0x20
		::RPG::GameCore::TargetEvaluator* HILNFHCPEAD; // 0x28
		::RPG::GameCore::PropertyModifyFunction FKCKKFALPBK; // 0x30
		::System::Boolean CMNJPIMBMMI; // 0x34
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + LAJIKDENEOO_CTOR_OFFSET))(this);
		}

		static ::System::Void OJNNBEJLDIJ(::FCOEMCEDLNL* a1, ::LAJIKDENEOO* a2)
		{
			return ((::System::Void(*)(::FCOEMCEDLNL*, ::LAJIKDENEOO*))((::PBYTE)hIl2Cpp + LAJIKDENEOO_OJNNBEJLDIJ_OFFSET))(a1, a2);
		}

		static ::System::Void MGMEGEDLMAK(::FCOEMCEDLNL* a1, ::LAJIKDENEOO* a2)
		{
			return ((::System::Void(*)(::FCOEMCEDLNL*, ::LAJIKDENEOO*))((::PBYTE)hIl2Cpp + LAJIKDENEOO_MGMEGEDLMAK_OFFSET))(a1, a2);
		}

	};
