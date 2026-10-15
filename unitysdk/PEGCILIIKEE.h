#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/HAFGAIKHMMG.h"
#include "unitysdk/RPG/GameCore/TaskConfig.h"
class FCOEMCEDLNL;
class PEGCILIIKEE;
namespace RPG::GameCore { class DynamicFloat; }
namespace RPG::GameCore { class TargetEvaluator; }

#define PEGCILIIKEE_CTOR_OFFSET UNITYSDK_OFFSET(0x1D2D54C0)
#define PEGCILIIKEE_MGMEGEDLMAK_OFFSET UNITYSDK_OFFSET(0x1D2D54D0)
#define PEGCILIIKEE_OJNNBEJLDIJ_OFFSET UNITYSDK_OFFSET(0x1D2D5490)

	class PEGCILIIKEE : public ::RPG::GameCore::TaskConfig
	{
	public:
		::RPG::GameCore::TargetEvaluator* NFMKOFNEKLA; // 0x18
		::RPG::GameCore::DynamicFloat* AJHHCOHFIFA; // 0x20
		::HAFGAIKHMMG FKCKKFALPBK; // 0x28
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + PEGCILIIKEE_CTOR_OFFSET))(this);
		}

		static ::System::Void OJNNBEJLDIJ(::FCOEMCEDLNL* a1, ::PEGCILIIKEE* a2)
		{
			return ((::System::Void(*)(::FCOEMCEDLNL*, ::PEGCILIIKEE*))((::PBYTE)hIl2Cpp + PEGCILIIKEE_OJNNBEJLDIJ_OFFSET))(a1, a2);
		}

		static ::System::Void MGMEGEDLMAK(::FCOEMCEDLNL* a1, ::PEGCILIIKEE* a2)
		{
			return ((::System::Void(*)(::FCOEMCEDLNL*, ::PEGCILIIKEE*))((::PBYTE)hIl2Cpp + PEGCILIIKEE_MGMEGEDLMAK_OFFSET))(a1, a2);
		}

	};
