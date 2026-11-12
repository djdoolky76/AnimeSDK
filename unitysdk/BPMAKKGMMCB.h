#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/GELIALJDFBL.h"
class EJFBOPCAGNP;
class IAAOMMGICFK;
namespace RPG::GameCore { class TaskContext; }

#define BPMAKKGMMCB_CTOR_OFFSET UNITYSDK_OFFSET(0xCB4B680)
#define BPMAKKGMMCB_DISPOSE_OFFSET UNITYSDK_OFFSET(0xCB4B690)
#define BPMAKKGMMCB_ONTASKBEGIN_OFFSET UNITYSDK_OFFSET(0xCB4B730)
#define BPMAKKGMMCB_ONTASKRESET_OFFSET UNITYSDK_OFFSET(0xCB4B6E0)
#define BPMAKKGMMCB_TICK_OFFSET UNITYSDK_OFFSET(0xCB4B950)

inline static constexpr unsigned int BPMAKKGMMCB_TypeDefinitionIndex = 53837;

	class BPMAKKGMMCB : public ::GELIALJDFBL
	{
	public:
		::EJFBOPCAGNP* IGHAHBNLIJA; // 0x18
		::IAAOMMGICFK* HOADGOKCPDG; // 0x20
		::RPG::GameCore::TaskContext* EEFMDEHLLFI; // 0x28
		::System::Void _ctor(::RPG::GameCore::TaskContext* a1, ::EJFBOPCAGNP* a2)
		{
			return ((::System::Void(*)(::PVOID, ::RPG::GameCore::TaskContext*, ::EJFBOPCAGNP*))((::PBYTE)hIl2Cpp + BPMAKKGMMCB_CTOR_OFFSET))(this, a1, a2);
		}

		::System::Void Dispose()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + BPMAKKGMMCB_DISPOSE_OFFSET))(this);
		}

		::System::Void OnTaskReset()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + BPMAKKGMMCB_ONTASKRESET_OFFSET))(this);
		}

		::System::Void OnTaskBegin()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + BPMAKKGMMCB_ONTASKBEGIN_OFFSET))(this);
		}

		::System::Void Tick(::System::Single a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::Single))((::PBYTE)hIl2Cpp + BPMAKKGMMCB_TICK_OFFSET))(this, a1);
		}

	};
