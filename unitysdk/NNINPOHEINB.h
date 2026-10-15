#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/GELIALJDFBL.h"
class EKFMIDBJDIA;
class GELIALJDFBL;
namespace RPG::GameCore { class PropStateChangeListenerConfig; }
namespace RPG::GameCore { class TaskContext; }
namespace System { class String; }

#define NNINPOHEINB_CTOR_OFFSET UNITYSDK_OFFSET(0xBCA82A0)
#define NNINPOHEINB_DFJAMCIAJPP_OFFSET UNITYSDK_OFFSET(0xBCA89B0)
#define NNINPOHEINB_DISPOSE_OFFSET UNITYSDK_OFFSET(0xBCA8D70)
#define NNINPOHEINB_ECEBDIPBCGN_OFFSET UNITYSDK_OFFSET(0xBCA8A90)
#define NNINPOHEINB_ONTASKBEGIN_OFFSET UNITYSDK_OFFSET(0xBCA82C0)
#define NNINPOHEINB_ONTASKRESET_OFFSET UNITYSDK_OFFSET(0xBCA8960)
#define NNINPOHEINB_TICK_OFFSET UNITYSDK_OFFSET(0xBCA8E50)

inline static constexpr unsigned int NNINPOHEINB_TypeDefinitionIndex = 58359;

	class NNINPOHEINB : public ::GELIALJDFBL
	{
	public:
		::System::String* HFLOLHCOGMG; // 0x18
		::RPG::GameCore::TaskContext* EEFMDEHLLFI; // 0x20
		::RPG::GameCore::PropStateChangeListenerConfig* IGHAHBNLIJA; // 0x28
		::GELIALJDFBL* MJOEBIHKEIG; // 0x30
		::System::Boolean BJIMNGNKDGD; // 0x38
		::System::Byte _padding0[0x3];
		::System::UInt32 JJNEKDFIBMA; // 0x3C
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
