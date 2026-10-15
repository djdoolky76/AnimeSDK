#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/HAFGAIKHMMG.h"
#include "unitysdk/RPG/GameCore/TaskConfig.h"
class BJCNEJFNIID;
class FCOEMCEDLNL;
class JDOLDFECMPL;
namespace RPG::GameCore { class DynamicFloat; }
namespace RPG::GameCore { class TargetEvaluator; }

#define JDOLDFECMPL_CTOR_OFFSET UNITYSDK_OFFSET(0x1D019B80)
#define JDOLDFECMPL_MGMEGEDLMAK_OFFSET UNITYSDK_OFFSET(0x1D019B90)
#define JDOLDFECMPL_OJNNBEJLDIJ_OFFSET UNITYSDK_OFFSET(0x1D019B50)

	class JDOLDFECMPL : public ::RPG::GameCore::TaskConfig
	{
	public:
		::RPG::GameCore::TargetEvaluator* NFMKOFNEKLA; // 0x18
		::RPG::GameCore::DynamicFloat* AJHHCOHFIFA; // 0x20
		::BJCNEJFNIID* OLOKHEMMGOH; // 0x28
		::HAFGAIKHMMG FKCKKFALPBK; // 0x30
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + JDOLDFECMPL_CTOR_OFFSET))(this);
		}

		static ::System::Void OJNNBEJLDIJ(::FCOEMCEDLNL* a1, ::JDOLDFECMPL* a2)
		{
			return ((::System::Void(*)(::FCOEMCEDLNL*, ::JDOLDFECMPL*))((::PBYTE)hIl2Cpp + JDOLDFECMPL_OJNNBEJLDIJ_OFFSET))(a1, a2);
		}

		static ::System::Void MGMEGEDLMAK(::FCOEMCEDLNL* a1, ::JDOLDFECMPL* a2)
		{
			return ((::System::Void(*)(::FCOEMCEDLNL*, ::JDOLDFECMPL*))((::PBYTE)hIl2Cpp + JDOLDFECMPL_MGMEGEDLMAK_OFFSET))(a1, a2);
		}

	};
