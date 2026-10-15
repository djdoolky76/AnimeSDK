#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/TaskConfig.h"
class FCOEMCEDLNL;
class NLPDKPANIMH;
namespace RPG::GameCore { class TargetEvaluator; }
namespace System { class String; }

#define NLPDKPANIMH_CTOR_OFFSET UNITYSDK_OFFSET(0x1D207180)
#define NLPDKPANIMH_MGMEGEDLMAK_OFFSET UNITYSDK_OFFSET(0x1D207190)
#define NLPDKPANIMH_OJNNBEJLDIJ_OFFSET UNITYSDK_OFFSET(0x1D207140)

inline static constexpr unsigned int NLPDKPANIMH_TypeDefinitionIndex = 24111;

	class NLPDKPANIMH : public ::RPG::GameCore::TaskConfig
	{
	public:
		::System::String* MKGLDELKOJF; // 0x18
		::RPG::GameCore::TargetEvaluator* HILNFHCPEAD; // 0x20
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + NLPDKPANIMH_CTOR_OFFSET))(this);
		}

		static ::System::Void OJNNBEJLDIJ(::FCOEMCEDLNL* a1, ::NLPDKPANIMH* a2)
		{
			return ((::System::Void(*)(::FCOEMCEDLNL*, ::NLPDKPANIMH*))((::PBYTE)hIl2Cpp + NLPDKPANIMH_OJNNBEJLDIJ_OFFSET))(a1, a2);
		}

		static ::System::Void MGMEGEDLMAK(::FCOEMCEDLNL* a1, ::NLPDKPANIMH* a2)
		{
			return ((::System::Void(*)(::FCOEMCEDLNL*, ::NLPDKPANIMH*))((::PBYTE)hIl2Cpp + NLPDKPANIMH_MGMEGEDLMAK_OFFSET))(a1, a2);
		}

	};
