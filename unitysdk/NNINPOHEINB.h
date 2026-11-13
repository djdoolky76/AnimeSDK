#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/GELIALJDFBL.h"
class EKFMIDBJDIA;
class GELIALJDFBL;
namespace RPG::GameCore { class PropStateChangeListenerConfig; }
namespace RPG::GameCore { class TaskContext; }
namespace System { class String; }

#define NNINPOHEINB_CTOR_OFFSET UNITYSDK_OFFSET(0x179EA200)
#define NNINPOHEINB_DFJAMCIAJPP_OFFSET UNITYSDK_OFFSET(0x179EA910)
#define NNINPOHEINB_DISPOSE_OFFSET UNITYSDK_OFFSET(0x179EACD0)
#define NNINPOHEINB_ECEBDIPBCGN_OFFSET UNITYSDK_OFFSET(0x179EA9F0)
#define NNINPOHEINB_ONTASKBEGIN_OFFSET UNITYSDK_OFFSET(0x179EA220)
#define NNINPOHEINB_ONTASKRESET_OFFSET UNITYSDK_OFFSET(0x179EA8C0)
#define NNINPOHEINB_TICK_OFFSET UNITYSDK_OFFSET(0x179EADB0)

inline static constexpr unsigned int NNINPOHEINB_TypeDefinitionIndex = 59615;

	class NNINPOHEINB : public ::GELIALJDFBL
	{
	public:
		::System::String* HFLOLHCOGMG; // 0x18
		::GELIALJDFBL* MJOEBIHKEIG; // 0x20
		::RPG::GameCore::TaskContext* EEFMDEHLLFI; // 0x28
		::RPG::GameCore::PropStateChangeListenerConfig* IGHAHBNLIJA; // 0x30
		::System::UInt32 IDOEBJDGHBF; // 0x38
		::System::UInt32 JJNEKDFIBMA; // 0x3C
		::System::Boolean BJIMNGNKDGD; // 0x40
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
