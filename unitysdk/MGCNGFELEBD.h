#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/GELIALJDFBL.h"
namespace RPG::GameCore { class LeaveLoopScene; }
namespace RPG::GameCore { class TaskContext; }

#define MGCNGFELEBD_CTOR_OFFSET UNITYSDK_OFFSET(0xB9110B0)
#define MGCNGFELEBD_DISPOSE_OFFSET UNITYSDK_OFFSET(0xB9110C0)
#define MGCNGFELEBD_ONTASKBEGIN_OFFSET UNITYSDK_OFFSET(0xB911100)
#define MGCNGFELEBD_ONTASKRESET_OFFSET UNITYSDK_OFFSET(0xB9113B0)
#define MGCNGFELEBD_TICK_OFFSET UNITYSDK_OFFSET(0xB911400)

inline static constexpr unsigned int MGCNGFELEBD_TypeDefinitionIndex = 58178;

	class MGCNGFELEBD : public ::GELIALJDFBL
	{
	public:
		::RPG::GameCore::TaskContext* DDDNLILNMKA; // 0x18
		::RPG::GameCore::LeaveLoopScene* OFKGLJOAMLD; // 0x20
		::System::Void _ctor(::RPG::GameCore::TaskContext* a1, ::RPG::GameCore::LeaveLoopScene* a2)
		{
			return ((::System::Void(*)(::PVOID, ::RPG::GameCore::TaskContext*, ::RPG::GameCore::LeaveLoopScene*))((::PBYTE)hIl2Cpp + MGCNGFELEBD_CTOR_OFFSET))(this, a1, a2);
		}

		::System::Void Dispose()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MGCNGFELEBD_DISPOSE_OFFSET))(this);
		}

		::System::Void OnTaskBegin()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MGCNGFELEBD_ONTASKBEGIN_OFFSET))(this);
		}

		::System::Void OnTaskReset()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MGCNGFELEBD_ONTASKRESET_OFFSET))(this);
		}

		::System::Void Tick(::System::Single a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::Single))((::PBYTE)hIl2Cpp + MGCNGFELEBD_TICK_OFFSET))(this, a1);
		}

	};
