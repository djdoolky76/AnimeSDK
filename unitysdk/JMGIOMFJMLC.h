#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/GELIALJDFBL.h"
namespace RPG::GameCore { class TaskContext; }
namespace RPG::GameCore { class WaitSilverWolfCompanionToastExit; }
namespace System { class Object; }

#define JMGIOMFJMLC_CTOR_OFFSET UNITYSDK_OFFSET(0xB263EB0)
#define JMGIOMFJMLC_DISPOSE_OFFSET UNITYSDK_OFFSET(0xB263EC0)
#define JMGIOMFJMLC_FMADPMADPHK_OFFSET UNITYSDK_OFFSET(0xB2641E0)
#define JMGIOMFJMLC_ONTASKBEGIN_OFFSET UNITYSDK_OFFSET(0xB263F00)
#define JMGIOMFJMLC_ONTASKRESET_OFFSET UNITYSDK_OFFSET(0xB264110)
#define JMGIOMFJMLC_TICK_OFFSET UNITYSDK_OFFSET(0xB264160)

	class JMGIOMFJMLC : public ::GELIALJDFBL
	{
	public:
		::RPG::GameCore::TaskContext* DDDNLILNMKA; // 0x18
		::RPG::GameCore::WaitSilverWolfCompanionToastExit* OFKGLJOAMLD; // 0x20
		::System::Single HJAOODPONOD; // 0x28
		::System::Void _ctor(::RPG::GameCore::TaskContext* a1, ::RPG::GameCore::WaitSilverWolfCompanionToastExit* a2)
		{
			return ((::System::Void(*)(::PVOID, ::RPG::GameCore::TaskContext*, ::RPG::GameCore::WaitSilverWolfCompanionToastExit*))((::PBYTE)hIl2Cpp + JMGIOMFJMLC_CTOR_OFFSET))(this, a1, a2);
		}

		::System::Void Dispose()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + JMGIOMFJMLC_DISPOSE_OFFSET))(this);
		}

		::System::Void OnTaskBegin()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + JMGIOMFJMLC_ONTASKBEGIN_OFFSET))(this);
		}

		::System::Void OnTaskReset()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + JMGIOMFJMLC_ONTASKRESET_OFFSET))(this);
		}

		::System::Void Tick(::System::Single a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::Single))((::PBYTE)hIl2Cpp + JMGIOMFJMLC_TICK_OFFSET))(this, a1);
		}

		::System::Void FMADPMADPHK(::System::Object* a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::Object*))((::PBYTE)hIl2Cpp + JMGIOMFJMLC_FMADPMADPHK_OFFSET))(this, a1);
		}

	};
