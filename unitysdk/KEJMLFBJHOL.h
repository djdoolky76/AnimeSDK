#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/GELIALJDFBL.h"
class EAFAGENDEJO;
class IAAOMMGICFK;
namespace RPG::GameCore { class GameEntity; }
namespace RPG::GameCore { class TaskContext; }

#define KEJMLFBJHOL_CTOR_OFFSET UNITYSDK_OFFSET(0x1B5DEDB0)
#define KEJMLFBJHOL_DISPOSE_OFFSET UNITYSDK_OFFSET(0x1B5DF290)
#define KEJMLFBJHOL_EALOIIOKNCD_OFFSET UNITYSDK_OFFSET(0x1B5DF180)
#define KEJMLFBJHOL_ONFINISHIMMEDIATELYINPERFORMANCE_OFFSET UNITYSDK_OFFSET(0x1B5DF310)
#define KEJMLFBJHOL_ONTASKBEGIN_OFFSET UNITYSDK_OFFSET(0x1B5DEDC0)
#define KEJMLFBJHOL_ONTASKRESET_OFFSET UNITYSDK_OFFSET(0x1B5DF1F0)
#define KEJMLFBJHOL_TICK_OFFSET UNITYSDK_OFFSET(0x1B5DF0C0)

inline static constexpr unsigned int KEJMLFBJHOL_TypeDefinitionIndex = 53832;

	class KEJMLFBJHOL : public ::GELIALJDFBL
	{
	public:
		::EAFAGENDEJO* IGHAHBNLIJA; // 0x18
		::RPG::GameCore::GameEntity* OJAHLJGABMJ; // 0x20
		::IAAOMMGICFK* HOADGOKCPDG; // 0x28
		::RPG::GameCore::TaskContext* EEFMDEHLLFI; // 0x30
		::System::Int32 IDEAJCAGFMB; // 0x38
		::System::Int32 MCHMDPAPOHC; // 0x3C
		::System::Single NNKDEALFLIN; // 0x40
		::System::Void _ctor(::RPG::GameCore::TaskContext* a1, ::EAFAGENDEJO* a2)
		{
			return ((::System::Void(*)(::PVOID, ::RPG::GameCore::TaskContext*, ::EAFAGENDEJO*))((::PBYTE)hIl2Cpp + KEJMLFBJHOL_CTOR_OFFSET))(this, a1, a2);
		}

		::System::Void OnTaskBegin()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + KEJMLFBJHOL_ONTASKBEGIN_OFFSET))(this);
		}

		::System::Void Tick(::System::Single a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::Single))((::PBYTE)hIl2Cpp + KEJMLFBJHOL_TICK_OFFSET))(this, a1);
		}

		::System::Void OnTaskReset()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + KEJMLFBJHOL_ONTASKRESET_OFFSET))(this);
		}

		::System::Void Dispose()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + KEJMLFBJHOL_DISPOSE_OFFSET))(this);
		}

		::System::Void OnFinishImmediatelyInPerformance(::System::Single a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::Single))((::PBYTE)hIl2Cpp + KEJMLFBJHOL_ONFINISHIMMEDIATELYINPERFORMANCE_OFFSET))(this, a1);
		}

		::System::Void EALOIIOKNCD()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + KEJMLFBJHOL_EALOIIOKNCD_OFFSET))(this);
		}

	};
