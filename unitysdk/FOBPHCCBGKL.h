#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/GELIALJDFBL.h"
class FOOIINCDBFA;
namespace RPG::GameCore { class AdvNPCIdle; }
namespace RPG::GameCore { class AdventureCharacterController; }
namespace RPG::GameCore { class TaskContext; }

#define FOBPHCCBGKL_CTOR_OFFSET UNITYSDK_OFFSET(0x1680FCB0)
#define FOBPHCCBGKL_DISPOSE_OFFSET UNITYSDK_OFFSET(0x1680FE00)
#define FOBPHCCBGKL_ONTASKBEGIN_OFFSET UNITYSDK_OFFSET(0x1680FE40)
#define FOBPHCCBGKL_ONTASKRESET_OFFSET UNITYSDK_OFFSET(0x1680FF60)
#define FOBPHCCBGKL_TICK_OFFSET UNITYSDK_OFFSET(0x1680FFB0)

inline static constexpr unsigned int FOBPHCCBGKL_TypeDefinitionIndex = 53533;

	class FOBPHCCBGKL : public ::GELIALJDFBL
	{
	public:
		::RPG::GameCore::TaskContext* DDDNLILNMKA; // 0x18
		::FOOIINCDBFA* EIJAMKAKADD; // 0x20
		::RPG::GameCore::AdventureCharacterController* EEMOFHKBEBO; // 0x28
		::System::Void _ctor(::RPG::GameCore::TaskContext* a1, ::RPG::GameCore::AdvNPCIdle* a2)
		{
			return ((::System::Void(*)(::PVOID, ::RPG::GameCore::TaskContext*, ::RPG::GameCore::AdvNPCIdle*))((::PBYTE)hIl2Cpp + FOBPHCCBGKL_CTOR_OFFSET))(this, a1, a2);
		}

		::System::Void Dispose()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + FOBPHCCBGKL_DISPOSE_OFFSET))(this);
		}

		::System::Void OnTaskBegin()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + FOBPHCCBGKL_ONTASKBEGIN_OFFSET))(this);
		}

		::System::Void OnTaskReset()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + FOBPHCCBGKL_ONTASKRESET_OFFSET))(this);
		}

		::System::Void Tick(::System::Single a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::Single))((::PBYTE)hIl2Cpp + FOBPHCCBGKL_TICK_OFFSET))(this, a1);
		}

	};
