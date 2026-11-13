#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/CustomizedMonsterStanceBarType.h"
#include "unitysdk/RPG/GameCore/TaskConfig.h"
class EBHNFJFACOE;
class FCOEMCEDLNL;
class NILMOLIGDGM;
namespace RPG::GameCore { class DynamicFloat; }
namespace RPG::GameCore { class TargetEvaluator; }
namespace System { class String; }

#define EBHNFJFACOE_CTOR_OFFSET UNITYSDK_OFFSET(0x1E9A7270)
#define EBHNFJFACOE_MGMEGEDLMAK_OFFSET UNITYSDK_OFFSET(0x1E9A72B0)
#define EBHNFJFACOE_OJNNBEJLDIJ_OFFSET UNITYSDK_OFFSET(0x1E9A7210)

inline static constexpr unsigned int EBHNFJFACOE_TypeDefinitionIndex = 24106;

	class EBHNFJFACOE : public ::RPG::GameCore::TaskConfig
	{
	public:
		::NILMOLIGDGM* EABKOHGCHFP; // 0x18
		::System::String* GFNAPNFFGPJ; // 0x20
		::RPG::GameCore::DynamicFloat* AADNIFFHHDD; // 0x28
		::RPG::GameCore::TargetEvaluator* HILNFHCPEAD; // 0x30
		::RPG::GameCore::CustomizedMonsterStanceBarType NPHAFHNNHEE; // 0x38
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + EBHNFJFACOE_CTOR_OFFSET))(this);
		}

		static ::System::Void OJNNBEJLDIJ(::FCOEMCEDLNL* a1, ::EBHNFJFACOE* a2)
		{
			return ((::System::Void(*)(::FCOEMCEDLNL*, ::EBHNFJFACOE*))((::PBYTE)hIl2Cpp + EBHNFJFACOE_OJNNBEJLDIJ_OFFSET))(a1, a2);
		}

		static ::System::Void MGMEGEDLMAK(::FCOEMCEDLNL* a1, ::EBHNFJFACOE* a2)
		{
			return ((::System::Void(*)(::FCOEMCEDLNL*, ::EBHNFJFACOE*))((::PBYTE)hIl2Cpp + EBHNFJFACOE_MGMEGEDLMAK_OFFSET))(a1, a2);
		}

	};
