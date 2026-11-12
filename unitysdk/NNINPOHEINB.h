#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/GELIALJDFBL.h"
class EKFMIDBJDIA;
class GELIALJDFBL;
namespace RPG::GameCore { class PropStateChangeListenerConfig; }
namespace RPG::GameCore { class TaskContext; }
namespace System { class String; }

#define NNINPOHEINB_CTOR_OFFSET UNITYSDK_OFFSET(0xC597D60)
#define NNINPOHEINB_DFJAMCIAJPP_OFFSET UNITYSDK_OFFSET(0xC598470)
#define NNINPOHEINB_DISPOSE_OFFSET UNITYSDK_OFFSET(0xC598830)
#define NNINPOHEINB_ECEBDIPBCGN_OFFSET UNITYSDK_OFFSET(0xC598550)
#define NNINPOHEINB_ONTASKBEGIN_OFFSET UNITYSDK_OFFSET(0xC597D80)
#define NNINPOHEINB_ONTASKRESET_OFFSET UNITYSDK_OFFSET(0xC598420)
#define NNINPOHEINB_TICK_OFFSET UNITYSDK_OFFSET(0xC598910)

inline static constexpr unsigned int NNINPOHEINB_TypeDefinitionIndex = 59615;

	class NNINPOHEINB : public ::GELIALJDFBL
	{
	public:
		::RPG::GameCore::PropStateChangeListenerConfig* IGHAHBNLIJA; // 0x18
		::GELIALJDFBL* MJOEBIHKEIG; // 0x20
		::System::String* HFLOLHCOGMG; // 0x28
		::RPG::GameCore::TaskContext* EEFMDEHLLFI; // 0x30
		::System::UInt32 JJNEKDFIBMA; // 0x38
		::System::UInt32 IDOEBJDGHBF; // 0x3C
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
