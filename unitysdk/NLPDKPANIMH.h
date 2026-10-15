#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/TaskConfig.h"
class FCOEMCEDLNL;
class NLPDKPANIMH;
namespace RPG::GameCore { class TargetEvaluator; }
namespace System { class String; }

#define NLPDKPANIMH_CTOR_OFFSET UNITYSDK_OFFSET(0x1D234DA0)
#define NLPDKPANIMH_MGMEGEDLMAK_OFFSET UNITYSDK_OFFSET(0x1D234DB0)
#define NLPDKPANIMH_OJNNBEJLDIJ_OFFSET UNITYSDK_OFFSET(0x1D234D60)

	class NLPDKPANIMH : public ::RPG::GameCore::TaskConfig
	{
	public:
		::RPG::GameCore::TargetEvaluator* HILNFHCPEAD; // 0x18
		::System::String* MKGLDELKOJF; // 0x20
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
