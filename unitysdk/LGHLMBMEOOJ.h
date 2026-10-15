#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/TaskConfig.h"
class FCOEMCEDLNL;
class LGHLMBMEOOJ;
namespace RPG::GameCore { class TargetEvaluator; }
namespace RPG::GameCore { class TaskConfig; }

#define LGHLMBMEOOJ_CTOR_OFFSET UNITYSDK_OFFSET(0x1D0ED8B0)
#define LGHLMBMEOOJ_MGMEGEDLMAK_OFFSET UNITYSDK_OFFSET(0x1D0ED8C0)
#define LGHLMBMEOOJ_OJNNBEJLDIJ_OFFSET UNITYSDK_OFFSET(0x1D0ED880)

	class LGHLMBMEOOJ : public ::RPG::GameCore::TaskConfig
	{
	public:
		::Il2CppArray<::RPG::GameCore::TaskConfig*>* CFINKMFANFE; // 0x18
		::RPG::GameCore::TargetEvaluator* HILNFHCPEAD; // 0x20
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + LGHLMBMEOOJ_CTOR_OFFSET))(this);
		}

		static ::System::Void OJNNBEJLDIJ(::FCOEMCEDLNL* a1, ::LGHLMBMEOOJ* a2)
		{
			return ((::System::Void(*)(::FCOEMCEDLNL*, ::LGHLMBMEOOJ*))((::PBYTE)hIl2Cpp + LGHLMBMEOOJ_OJNNBEJLDIJ_OFFSET))(a1, a2);
		}

		static ::System::Void MGMEGEDLMAK(::FCOEMCEDLNL* a1, ::LGHLMBMEOOJ* a2)
		{
			return ((::System::Void(*)(::FCOEMCEDLNL*, ::LGHLMBMEOOJ*))((::PBYTE)hIl2Cpp + LGHLMBMEOOJ_MGMEGEDLMAK_OFFSET))(a1, a2);
		}

	};
