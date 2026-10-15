#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/GELIALJDFBL.h"
namespace RPG::GameCore { class ShowBattleUI; }
namespace RPG::GameCore { class TaskContext; }

#define HDFMGIGDPLG_CTOR_OFFSET UNITYSDK_OFFSET(0x15C32DA0)
#define HDFMGIGDPLG_DISPOSE_OFFSET UNITYSDK_OFFSET(0x15C32DB0)
#define HDFMGIGDPLG_ONTASKBEGIN_OFFSET UNITYSDK_OFFSET(0x15C32DF0)
#define HDFMGIGDPLG_ONTASKRESET_OFFSET UNITYSDK_OFFSET(0x15C32E90)
#define HDFMGIGDPLG_TICK_OFFSET UNITYSDK_OFFSET(0x15C32EE0)

	class HDFMGIGDPLG : public ::GELIALJDFBL
	{
	public:
		::RPG::GameCore::ShowBattleUI* OFKGLJOAMLD; // 0x18
		::RPG::GameCore::TaskContext* DDDNLILNMKA; // 0x20
		// static const ::System::Object BKDJLPKIPIL; // 0x0
		::System::Void _ctor(::RPG::GameCore::TaskContext* a1, ::RPG::GameCore::ShowBattleUI* a2)
		{
			return ((::System::Void(*)(::PVOID, ::RPG::GameCore::TaskContext*, ::RPG::GameCore::ShowBattleUI*))((::PBYTE)hIl2Cpp + HDFMGIGDPLG_CTOR_OFFSET))(this, a1, a2);
		}

		::System::Void Dispose()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + HDFMGIGDPLG_DISPOSE_OFFSET))(this);
		}

		::System::Void OnTaskBegin()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + HDFMGIGDPLG_ONTASKBEGIN_OFFSET))(this);
		}

		::System::Void OnTaskReset()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + HDFMGIGDPLG_ONTASKRESET_OFFSET))(this);
		}

		::System::Void Tick(::System::Single a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::Single))((::PBYTE)hIl2Cpp + HDFMGIGDPLG_TICK_OFFSET))(this, a1);
		}

	};
