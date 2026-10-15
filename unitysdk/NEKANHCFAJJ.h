#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/GELIALJDFBL.h"
class EBLHIMCKJIJ;
class KFELGAIGHAP;
namespace RPG::GameCore { class GameEntity; }
namespace RPG::GameCore { class TaskContext; }
namespace RPG::GameCore { class WaitPropCurveMovePaused; }
namespace System { class Object; }
namespace System { class String; }
namespace System { class WeakReference; }

#define NEKANHCFAJJ_CKBCLDKJJDC_OFFSET UNITYSDK_OFFSET(0xBB6A8F0)
#define NEKANHCFAJJ_CTOR_OFFSET UNITYSDK_OFFSET(0xBB6A2E0)
#define NEKANHCFAJJ_DISPOSE_OFFSET UNITYSDK_OFFSET(0xBB6A400)
#define NEKANHCFAJJ_ONTASKBEGIN_OFFSET UNITYSDK_OFFSET(0xBB6A690)
#define NEKANHCFAJJ_ONTASKRESET_OFFSET UNITYSDK_OFFSET(0xBB6A570)
#define NEKANHCFAJJ_TICK_OFFSET UNITYSDK_OFFSET(0xBB6A810)

	class NEKANHCFAJJ : public ::GELIALJDFBL
	{
	public:
		::RPG::GameCore::TaskContext* DDDNLILNMKA; // 0x18
		::RPG::GameCore::GameEntity* OJAHLJGABMJ; // 0x20
		::System::WeakReference* HPIHLICKLAD; // 0x28
		::RPG::GameCore::WaitPropCurveMovePaused* OFKGLJOAMLD; // 0x30
		::System::String* IJMGEMMNNPI; // 0x38
		::KFELGAIGHAP* HFOFIODMFGB; // 0x40
		::System::Void _ctor(::RPG::GameCore::TaskContext* a1, ::RPG::GameCore::WaitPropCurveMovePaused* a2)
		{
			return ((::System::Void(*)(::PVOID, ::RPG::GameCore::TaskContext*, ::RPG::GameCore::WaitPropCurveMovePaused*))((::PBYTE)hIl2Cpp + NEKANHCFAJJ_CTOR_OFFSET))(this, a1, a2);
		}

		::System::Void Dispose()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + NEKANHCFAJJ_DISPOSE_OFFSET))(this);
		}

		::System::Void OnTaskReset()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + NEKANHCFAJJ_ONTASKRESET_OFFSET))(this);
		}

		::System::Void OnTaskBegin()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + NEKANHCFAJJ_ONTASKBEGIN_OFFSET))(this);
		}

		::System::Void Tick(::System::Single a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::Single))((::PBYTE)hIl2Cpp + NEKANHCFAJJ_TICK_OFFSET))(this, a1);
		}

		::System::Void CKBCLDKJJDC(::System::Object* a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::Object*))((::PBYTE)hIl2Cpp + NEKANHCFAJJ_CKBCLDKJJDC_OFFSET))(this, a1);
		}

	};
