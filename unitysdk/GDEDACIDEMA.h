#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/GELIALJDFBL.h"
namespace RPG::GameCore { class ElfTriggerShowUI; }
namespace RPG::GameCore { class TaskContext; }
namespace System { class String; }

#define GDEDACIDEMA_AIEGALJHOFE_OFFSET UNITYSDK_OFFSET(0x1599A210)
#define GDEDACIDEMA_CTOR_OFFSET UNITYSDK_OFFSET(0x15999E70)
#define GDEDACIDEMA_DISPOSE_OFFSET UNITYSDK_OFFSET(0x15999ED0)
#define GDEDACIDEMA_JNIKOAEAEHB_OFFSET UNITYSDK_OFFSET(0x1599A650)
#define GDEDACIDEMA_LCMKBCAGAJO_OFFSET UNITYSDK_OFFSET(0x1599A430)
#define GDEDACIDEMA_LDNFLKPEABM_OFFSET UNITYSDK_OFFSET(0x1599A1C0)
#define GDEDACIDEMA_LICKEBHBMDO_OFFSET UNITYSDK_OFFSET(0x1599A4F0)
#define GDEDACIDEMA_ONTASKBEGIN_OFFSET UNITYSDK_OFFSET(0x15999F20)
#define GDEDACIDEMA_ONTASKRESET_OFFSET UNITYSDK_OFFSET(0x15999E80)
#define GDEDACIDEMA_TICK_OFFSET UNITYSDK_OFFSET(0x1599A160)

inline static constexpr unsigned int GDEDACIDEMA_TypeDefinitionIndex = 58099;

	class GDEDACIDEMA : public ::GELIALJDFBL
	{
	public:
		::RPG::GameCore::ElfTriggerShowUI* OFKGLJOAMLD; // 0x18
		::RPG::GameCore::TaskContext* DDDNLILNMKA; // 0x20
		// static const ::System::String* KJBMODOOOPC; // 0x0
		::System::Void _ctor(::RPG::GameCore::TaskContext* a1, ::RPG::GameCore::ElfTriggerShowUI* a2)
		{
			return ((::System::Void(*)(::PVOID, ::RPG::GameCore::TaskContext*, ::RPG::GameCore::ElfTriggerShowUI*))((::PBYTE)hIl2Cpp + GDEDACIDEMA_CTOR_OFFSET))(this, a1, a2);
		}

		::System::Void OnTaskReset()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + GDEDACIDEMA_ONTASKRESET_OFFSET))(this);
		}

		::System::Void Dispose()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + GDEDACIDEMA_DISPOSE_OFFSET))(this);
		}

		::System::Void OnTaskBegin()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + GDEDACIDEMA_ONTASKBEGIN_OFFSET))(this);
		}

		::System::Void Tick(::System::Single a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::Single))((::PBYTE)hIl2Cpp + GDEDACIDEMA_TICK_OFFSET))(this, a1);
		}

		::System::Void LDNFLKPEABM()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + GDEDACIDEMA_LDNFLKPEABM_OFFSET))(this);
		}

		static ::System::Void AIEGALJHOFE(::System::String* a1)
		{
			return ((::System::Void(*)(::System::String*))((::PBYTE)hIl2Cpp + GDEDACIDEMA_AIEGALJHOFE_OFFSET))(a1);
		}

		static ::System::Void LCMKBCAGAJO(::System::String* a1)
		{
			return ((::System::Void(*)(::System::String*))((::PBYTE)hIl2Cpp + GDEDACIDEMA_LCMKBCAGAJO_OFFSET))(a1);
		}

		static ::System::Boolean LICKEBHBMDO()
		{
			return ((::System::Boolean(*)())((::PBYTE)hIl2Cpp + GDEDACIDEMA_LICKEBHBMDO_OFFSET))();
		}

		static ::System::Void JNIKOAEAEHB()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + GDEDACIDEMA_JNIKOAEAEHB_OFFSET))();
		}

	};
