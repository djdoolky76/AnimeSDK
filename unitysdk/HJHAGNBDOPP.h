#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/TaskConfig.h"
class FCOEMCEDLNL;
class HJHAGNBDOPP;
namespace RPG::GameCore { class TargetEvaluator; }

#define HJHAGNBDOPP_CTOR_OFFSET UNITYSDK_OFFSET(0x1E829720)
#define HJHAGNBDOPP_MGMEGEDLMAK_OFFSET UNITYSDK_OFFSET(0x1E829750)
#define HJHAGNBDOPP_OJNNBEJLDIJ_OFFSET UNITYSDK_OFFSET(0x1E8296D0)

inline static constexpr unsigned int HJHAGNBDOPP_TypeDefinitionIndex = 22405;

	class HJHAGNBDOPP : public ::RPG::GameCore::TaskConfig
	{
	public:
		::RPG::GameCore::TargetEvaluator* HILNFHCPEAD; // 0x18
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + HJHAGNBDOPP_CTOR_OFFSET))(this);
		}

		static ::System::Void OJNNBEJLDIJ(::FCOEMCEDLNL* a1, ::HJHAGNBDOPP* a2)
		{
			return ((::System::Void(*)(::FCOEMCEDLNL*, ::HJHAGNBDOPP*))((::PBYTE)hIl2Cpp + HJHAGNBDOPP_OJNNBEJLDIJ_OFFSET))(a1, a2);
		}

		static ::System::Void MGMEGEDLMAK(::FCOEMCEDLNL* a1, ::HJHAGNBDOPP* a2)
		{
			return ((::System::Void(*)(::FCOEMCEDLNL*, ::HJHAGNBDOPP*))((::PBYTE)hIl2Cpp + HJHAGNBDOPP_MGMEGEDLMAK_OFFSET))(a1, a2);
		}

	};
