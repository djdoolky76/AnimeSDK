#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/GELIALJDFBL.h"
namespace RPG::GameCore { class EnterFloor; }
namespace RPG::GameCore { class TaskContext; }

#define ECEIPBGCKMM_CTOR_OFFSET UNITYSDK_OFFSET(0x13ABC2D0)
#define ECEIPBGCKMM_DISPOSE_OFFSET UNITYSDK_OFFSET(0x13ABC2E0)
#define ECEIPBGCKMM_ONTASKBEGIN_OFFSET UNITYSDK_OFFSET(0x13ABC320)
#define ECEIPBGCKMM_ONTASKRESET_OFFSET UNITYSDK_OFFSET(0x13ABC500)
#define ECEIPBGCKMM_TICK_OFFSET UNITYSDK_OFFSET(0x13ABC550)

inline static constexpr unsigned int ECEIPBGCKMM_TypeDefinitionIndex = 53896;

	class ECEIPBGCKMM : public ::GELIALJDFBL
	{
	public:
		::RPG::GameCore::EnterFloor* OFKGLJOAMLD; // 0x18
		::RPG::GameCore::TaskContext* DDDNLILNMKA; // 0x20
		::System::Void _ctor(::RPG::GameCore::TaskContext* a1, ::RPG::GameCore::EnterFloor* a2)
		{
			return ((::System::Void(*)(::PVOID, ::RPG::GameCore::TaskContext*, ::RPG::GameCore::EnterFloor*))((::PBYTE)hIl2Cpp + ECEIPBGCKMM_CTOR_OFFSET))(this, a1, a2);
		}

		::System::Void Dispose()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + ECEIPBGCKMM_DISPOSE_OFFSET))(this);
		}

		::System::Void OnTaskBegin()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + ECEIPBGCKMM_ONTASKBEGIN_OFFSET))(this);
		}

		::System::Void OnTaskReset()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + ECEIPBGCKMM_ONTASKRESET_OFFSET))(this);
		}

		::System::Void Tick(::System::Single a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::Single))((::PBYTE)hIl2Cpp + ECEIPBGCKMM_TICK_OFFSET))(this, a1);
		}

	};
