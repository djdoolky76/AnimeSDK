#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"
namespace RPG::Client { class GridFightDivisionListViewExtra; }
namespace SuperScrollView { class LoopListView2; }
namespace SuperScrollView { class LoopListViewItem2; }

#define HPIDNHKGMKH_CDKIDBFHNPL_OFFSET UNITYSDK_OFFSET(0x15DCDEC0)
#define HPIDNHKGMKH_CTOR_OFFSET UNITYSDK_OFFSET(0x15DCDF60)
#define HPIDNHKGMKH_ENTER_OFFSET UNITYSDK_OFFSET(0x15DCD870)
#define HPIDNHKGMKH_EXIT_OFFSET UNITYSDK_OFFSET(0x15DCDD40)
#define HPIDNHKGMKH_TICK_OFFSET UNITYSDK_OFFSET(0x15DCDB60)

inline static constexpr unsigned int HPIDNHKGMKH_TypeDefinitionIndex = 64456;

	class HPIDNHKGMKH : public ::System::Object
	{
	public:
		::RPG::Client::GridFightDivisionListViewExtra* CFKHNPGEAJA; // 0x10
		::System::Int32 JCEMFJNEOND; // 0x18
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + HPIDNHKGMKH_CTOR_OFFSET))(this);
		}

		::System::Void Enter(::RPG::Client::GridFightDivisionListViewExtra* a1)
		{
			return ((::System::Void(*)(::PVOID, ::RPG::Client::GridFightDivisionListViewExtra*))((::PBYTE)hIl2Cpp + HPIDNHKGMKH_ENTER_OFFSET))(this, a1);
		}

		::System::Void Tick(::RPG::Client::GridFightDivisionListViewExtra* a1)
		{
			return ((::System::Void(*)(::PVOID, ::RPG::Client::GridFightDivisionListViewExtra*))((::PBYTE)hIl2Cpp + HPIDNHKGMKH_TICK_OFFSET))(this, a1);
		}

		::System::Void Exit()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + HPIDNHKGMKH_EXIT_OFFSET))(this);
		}

		::System::Void CDKIDBFHNPL(::SuperScrollView::LoopListView2* a1, ::SuperScrollView::LoopListViewItem2* a2)
		{
			return ((::System::Void(*)(::PVOID, ::SuperScrollView::LoopListView2*, ::SuperScrollView::LoopListViewItem2*))((::PBYTE)hIl2Cpp + HPIDNHKGMKH_CDKIDBFHNPL_OFFSET))(this, a1, a2);
		}

	};
