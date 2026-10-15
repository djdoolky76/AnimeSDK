#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/GELIALJDFBL.h"
namespace RPG::GameCore { class SwitchHandCancelLift; }
namespace RPG::GameCore { class TaskContext; }

#define JFLFGEGOFFC_CTOR_OFFSET UNITYSDK_OFFSET(0x16642090)
#define JFLFGEGOFFC_DISPOSE_OFFSET UNITYSDK_OFFSET(0x166420A0)
#define JFLFGEGOFFC_MJIHIBJLEJA_OFFSET UNITYSDK_OFFSET(0x16642430)
#define JFLFGEGOFFC_ONTASKBEGIN_OFFSET UNITYSDK_OFFSET(0x16642140)
#define JFLFGEGOFFC_ONTASKRESET_OFFSET UNITYSDK_OFFSET(0x166423E0)
#define JFLFGEGOFFC_TICK_OFFSET UNITYSDK_OFFSET(0x166420E0)

inline static constexpr unsigned int JFLFGEGOFFC_TypeDefinitionIndex = 53306;

	class JFLFGEGOFFC : public ::GELIALJDFBL
	{
	public:
		::RPG::GameCore::SwitchHandCancelLift* IGHAHBNLIJA; // 0x18
		::RPG::GameCore::TaskContext* EEFMDEHLLFI; // 0x20
		::System::Void _ctor(::RPG::GameCore::TaskContext* a1, ::RPG::GameCore::SwitchHandCancelLift* a2)
		{
			return ((::System::Void(*)(::PVOID, ::RPG::GameCore::TaskContext*, ::RPG::GameCore::SwitchHandCancelLift*))((::PBYTE)hIl2Cpp + JFLFGEGOFFC_CTOR_OFFSET))(this, a1, a2);
		}

		::System::Void Dispose()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + JFLFGEGOFFC_DISPOSE_OFFSET))(this);
		}

		::System::Void Tick(::System::Single a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::Single))((::PBYTE)hIl2Cpp + JFLFGEGOFFC_TICK_OFFSET))(this, a1);
		}

		::System::Void OnTaskBegin()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + JFLFGEGOFFC_ONTASKBEGIN_OFFSET))(this);
		}

		::System::Void OnTaskReset()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + JFLFGEGOFFC_ONTASKRESET_OFFSET))(this);
		}

		::System::Void MJIHIBJLEJA()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + JFLFGEGOFFC_MJIHIBJLEJA_OFFSET))(this);
		}

	};
