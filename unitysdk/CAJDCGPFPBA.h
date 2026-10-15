#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/FormatString.h"
#include "unitysdk/RPG/GameCore/TaskConfig.h"
class CAJDCGPFPBA;
class FCOEMCEDLNL;
namespace RPG::GameCore { class TargetEvaluator; }

#define CAJDCGPFPBA_CTOR_OFFSET UNITYSDK_OFFSET(0x1D9FFE90)
#define CAJDCGPFPBA_MGMEGEDLMAK_OFFSET UNITYSDK_OFFSET(0x1D9FFEA0)
#define CAJDCGPFPBA_OJNNBEJLDIJ_OFFSET UNITYSDK_OFFSET(0x1D9FFE60)

	class CAJDCGPFPBA : public ::RPG::GameCore::TaskConfig
	{
	public:
		::RPG::GameCore::TargetEvaluator* JACJMOPEPDA; // 0x18
		::RPG::GameCore::FormatString ECNKCCNJNPJ; // 0x20
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CAJDCGPFPBA_CTOR_OFFSET))(this);
		}

		static ::System::Void OJNNBEJLDIJ(::FCOEMCEDLNL* a1, ::CAJDCGPFPBA* a2)
		{
			return ((::System::Void(*)(::FCOEMCEDLNL*, ::CAJDCGPFPBA*))((::PBYTE)hIl2Cpp + CAJDCGPFPBA_OJNNBEJLDIJ_OFFSET))(a1, a2);
		}

		static ::System::Void MGMEGEDLMAK(::FCOEMCEDLNL* a1, ::CAJDCGPFPBA* a2)
		{
			return ((::System::Void(*)(::FCOEMCEDLNL*, ::CAJDCGPFPBA*))((::PBYTE)hIl2Cpp + CAJDCGPFPBA_MGMEGEDLMAK_OFFSET))(a1, a2);
		}

	};
