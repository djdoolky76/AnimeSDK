#pragma once
#include "unitysdk/unitysdk.h"
namespace RPG::GameCore { class ST_Side_Hipplen_SetAnimatorParam; }
namespace RPG::GameCore { class TaskContext; }

#define GCPNIBDBFEB_CTOR_OFFSET UNITYSDK_OFFSET(0x15990400)
#define GCPNIBDBFEB_ONTASKBEGIN_OFFSET UNITYSDK_OFFSET(0x15990430)
#define GCPNIBDBFEB_ONTASKRESET_OFFSET UNITYSDK_OFFSET(0x159906A0)
#define GCPNIBDBFEB_TICK_OFFSET UNITYSDK_OFFSET(0x15990640)

inline static constexpr unsigned int GCPNIBDBFEB_TypeDefinitionIndex = 52288;

	class GCPNIBDBFEB
	{
	public:
		::System::Void _ctor(::RPG::GameCore::TaskContext* a1, ::RPG::GameCore::ST_Side_Hipplen_SetAnimatorParam* a2)
		{
			return ((::System::Void(*)(::PVOID, ::RPG::GameCore::TaskContext*, ::RPG::GameCore::ST_Side_Hipplen_SetAnimatorParam*))((::PBYTE)hIl2Cpp + GCPNIBDBFEB_CTOR_OFFSET))(this, a1, a2);
		}

		::System::Void OnTaskBegin()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + GCPNIBDBFEB_ONTASKBEGIN_OFFSET))(this);
		}

		::System::Void Tick(::System::Single a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::Single))((::PBYTE)hIl2Cpp + GCPNIBDBFEB_TICK_OFFSET))(this, a1);
		}

		::System::Void OnTaskReset()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + GCPNIBDBFEB_ONTASKRESET_OFFSET))(this);
		}

	};
