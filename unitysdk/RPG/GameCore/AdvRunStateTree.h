#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/TaskConfig.h"
class FCOEMCEDLNL;
namespace RPG::GameCore { class AIVariable; }
namespace RPG::GameCore { class AdvRunStateTree; }
namespace System { class String; }

#define RPG_GAMECORE_ADVRUNSTATETREE_CTOR_OFFSET UNITYSDK_OFFSET(0x1D3ACE80)
#define RPG_GAMECORE_ADVRUNSTATETREE_MGMEGEDLMAK_OFFSET UNITYSDK_OFFSET(0x1D3ACE90)
#define RPG_GAMECORE_ADVRUNSTATETREE_OJNNBEJLDIJ_OFFSET UNITYSDK_OFFSET(0x1D3ACE50)

namespace RPG::GameCore
{
	class AdvRunStateTree : public ::RPG::GameCore::TaskConfig
	{
	public:
		::System::String* AIPath; // 0x18
		::System::Boolean EnableRun; // 0x20
		::System::Byte _padding0[0x7];
		::Il2CppArray<::RPG::GameCore::AIVariable*>* OverrideVariableList; // 0x28
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_GAMECORE_ADVRUNSTATETREE_CTOR_OFFSET))(this);
		}

		static ::System::Void OJNNBEJLDIJ(::FCOEMCEDLNL* a1, ::RPG::GameCore::AdvRunStateTree* a2)
		{
			return ((::System::Void(*)(::FCOEMCEDLNL*, ::RPG::GameCore::AdvRunStateTree*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_ADVRUNSTATETREE_OJNNBEJLDIJ_OFFSET))(a1, a2);
		}

		static ::System::Void MGMEGEDLMAK(::FCOEMCEDLNL* a1, ::RPG::GameCore::AdvRunStateTree* a2)
		{
			return ((::System::Void(*)(::FCOEMCEDLNL*, ::RPG::GameCore::AdvRunStateTree*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_ADVRUNSTATETREE_MGMEGEDLMAK_OFFSET))(a1, a2);
		}

	};
}
