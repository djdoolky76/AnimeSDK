#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/GELIALJDFBL.h"
class EKFMIDBJDIA;
class GELIALJDFBL;
namespace RPG::GameCore { class PropStateChangeListenerConfig; }
namespace RPG::GameCore { class TaskContext; }
namespace System { class String; }

#define NNINPOHEINB_CTOR_OFFSET UNITYSDK_OFFSET(0xBCAF300)
#define NNINPOHEINB_DFJAMCIAJPP_OFFSET UNITYSDK_OFFSET(0xBCAFA10)
#define NNINPOHEINB_DISPOSE_OFFSET UNITYSDK_OFFSET(0xBCAFDD0)
#define NNINPOHEINB_ECEBDIPBCGN_OFFSET UNITYSDK_OFFSET(0xBCAFAF0)
#define NNINPOHEINB_ONTASKBEGIN_OFFSET UNITYSDK_OFFSET(0xBCAF320)
#define NNINPOHEINB_ONTASKRESET_OFFSET UNITYSDK_OFFSET(0xBCAF9C0)
#define NNINPOHEINB_TICK_OFFSET UNITYSDK_OFFSET(0xBCAFEB0)

	class NNINPOHEINB : public ::GELIALJDFBL
	{
	public:
		::GELIALJDFBL* MJOEBIHKEIG; // 0x18
		::RPG::GameCore::PropStateChangeListenerConfig* IGHAHBNLIJA; // 0x20
		::System::String* HFLOLHCOGMG; // 0x28
		::RPG::GameCore::TaskContext* EEFMDEHLLFI; // 0x30
		::System::UInt32 JJNEKDFIBMA; // 0x38
		::System::Boolean BJIMNGNKDGD; // 0x3C
		::System::Byte _padding0[0x3];
		::System::UInt32 IDOEBJDGHBF; // 0x40
		::System::Void _ctor(::RPG::GameCore::TaskContext* a1, ::RPG::GameCore::PropStateChangeListenerConfig* a2)
		{
			return ((::System::Void(*)(::PVOID, ::RPG::GameCore::TaskContext*, ::RPG::GameCore::PropStateChangeListenerConfig*))((::PBYTE)hIl2Cpp + NNINPOHEINB_CTOR_OFFSET))(this, a1, a2);
		}

		::System::Void OnTaskBegin()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + NNINPOHEINB_ONTASKBEGIN_OFFSET))(this);
		}

		::System::Void OnTaskReset()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + NNINPOHEINB_ONTASKRESET_OFFSET))(this);
		}

		::System::Void ECEBDIPBCGN(::EKFMIDBJDIA* a1)
		{
			return ((::System::Void(*)(::PVOID, ::EKFMIDBJDIA*))((::PBYTE)hIl2Cpp + NNINPOHEINB_ECEBDIPBCGN_OFFSET))(this, a1);
		}

		::System::Void Dispose()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + NNINPOHEINB_DISPOSE_OFFSET))(this);
		}

		::System::Void Tick(::System::Single a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::Single))((::PBYTE)hIl2Cpp + NNINPOHEINB_TICK_OFFSET))(this, a1);
		}

		::System::Void DFJAMCIAJPP()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + NNINPOHEINB_DFJAMCIAJPP_OFFSET))(this);
		}

	};
