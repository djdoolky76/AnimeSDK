#pragma once
#include "unitysdk/unitysdk.h"
namespace RPG::GameCore { class ST_RtMain_TransmitToTarget; }
namespace RPG::GameCore { class TaskContext; }

#define LNMIENAIANB_CTOR_OFFSET UNITYSDK_OFFSET(0xB7E26B0)
#define LNMIENAIANB_ONTASKBEGIN_OFFSET UNITYSDK_OFFSET(0xB7E26E0)
#define LNMIENAIANB_ONTASKRESET_OFFSET UNITYSDK_OFFSET(0xB7E2A70)
#define LNMIENAIANB_TICK_OFFSET UNITYSDK_OFFSET(0xB7E2A10)

inline static constexpr unsigned int LNMIENAIANB_TypeDefinitionIndex = 54146;

	class LNMIENAIANB
	{
	public:
		::System::Void _ctor(::RPG::GameCore::TaskContext* a1, ::RPG::GameCore::ST_RtMain_TransmitToTarget* a2)
		{
			return ((::System::Void(*)(::PVOID, ::RPG::GameCore::TaskContext*, ::RPG::GameCore::ST_RtMain_TransmitToTarget*))((::PBYTE)hIl2Cpp + LNMIENAIANB_CTOR_OFFSET))(this, a1, a2);
		}

		::System::Void OnTaskBegin()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + LNMIENAIANB_ONTASKBEGIN_OFFSET))(this);
		}

		::System::Void Tick(::System::Single a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::Single))((::PBYTE)hIl2Cpp + LNMIENAIANB_TICK_OFFSET))(this, a1);
		}

		::System::Void OnTaskReset()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + LNMIENAIANB_ONTASKRESET_OFFSET))(this);
		}

	};
