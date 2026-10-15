#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"
namespace RPG::Client { class GridFightDivisionListViewExtra; }
namespace SuperScrollView { class LoopListViewItem2; }

#define NOMGIFNFIJD_BJFAANFFOPA_OFFSET UNITYSDK_OFFSET(0xBCF3960)
#define NOMGIFNFIJD_CTOR_OFFSET UNITYSDK_OFFSET(0xBCF3B40)
#define NOMGIFNFIJD_ENTER_OFFSET UNITYSDK_OFFSET(0xBCF3800)
#define NOMGIFNFIJD_EXIT_OFFSET UNITYSDK_OFFSET(0xBCF3AC0)
#define NOMGIFNFIJD_TICK_OFFSET UNITYSDK_OFFSET(0xBCF39B0)

	class NOMGIFNFIJD : public ::System::Object
	{
	public:
		::SuperScrollView::LoopListViewItem2* KHONKCGBGJE; // 0x10
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + NOMGIFNFIJD_CTOR_OFFSET))(this);
		}

		::System::Void Enter(::RPG::Client::GridFightDivisionListViewExtra* a1)
		{
			return ((::System::Void(*)(::PVOID, ::RPG::Client::GridFightDivisionListViewExtra*))((::PBYTE)hIl2Cpp + NOMGIFNFIJD_ENTER_OFFSET))(this, a1);
		}

		::System::Void Tick(::RPG::Client::GridFightDivisionListViewExtra* a1)
		{
			return ((::System::Void(*)(::PVOID, ::RPG::Client::GridFightDivisionListViewExtra*))((::PBYTE)hIl2Cpp + NOMGIFNFIJD_TICK_OFFSET))(this, a1);
		}

		::System::Void Exit()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + NOMGIFNFIJD_EXIT_OFFSET))(this);
		}

		::System::Void BJFAANFFOPA(::SuperScrollView::LoopListViewItem2* a1, ::System::Boolean a2)
		{
			return ((::System::Void(*)(::PVOID, ::SuperScrollView::LoopListViewItem2*, ::System::Boolean))((::PBYTE)hIl2Cpp + NOMGIFNFIJD_BJFAANFFOPA_OFFSET))(this, a1, a2);
		}

	};
