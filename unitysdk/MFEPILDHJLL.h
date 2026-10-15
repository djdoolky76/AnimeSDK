#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/AdvWaitingEventBase.h"
class FCOEMCEDLNL;
class MFEPILDHJLL;
namespace RPG::GameCore { class TaskConfig; }

#define MFEPILDHJLL_CTOR_OFFSET UNITYSDK_OFFSET(0x1D157600)
#define MFEPILDHJLL_MGMEGEDLMAK_OFFSET UNITYSDK_OFFSET(0x1D157610)
#define MFEPILDHJLL_OJNNBEJLDIJ_OFFSET UNITYSDK_OFFSET(0x1D1575C0)

	class MFEPILDHJLL : public ::RPG::GameCore::AdvWaitingEventBase
	{
	public:
		::Il2CppArray<::RPG::GameCore::TaskConfig*>* NEKGALPLEOH; // 0x20
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MFEPILDHJLL_CTOR_OFFSET))(this);
		}

		static ::System::Void OJNNBEJLDIJ(::FCOEMCEDLNL* a1, ::MFEPILDHJLL* a2)
		{
			return ((::System::Void(*)(::FCOEMCEDLNL*, ::MFEPILDHJLL*))((::PBYTE)hIl2Cpp + MFEPILDHJLL_OJNNBEJLDIJ_OFFSET))(a1, a2);
		}

		static ::System::Void MGMEGEDLMAK(::FCOEMCEDLNL* a1, ::MFEPILDHJLL* a2)
		{
			return ((::System::Void(*)(::FCOEMCEDLNL*, ::MFEPILDHJLL*))((::PBYTE)hIl2Cpp + MFEPILDHJLL_MGMEGEDLMAK_OFFSET))(a1, a2);
		}

	};
