#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/GELIALJDFBL.h"
class GELIALJDFBL;
namespace RPG::GameCore { class TaskContext; }
namespace RPG::GameCore { class WaitFor; }

#define MGEEJIGDLBE_CTOR_OFFSET UNITYSDK_OFFSET(0xB911E00)
#define MGEEJIGDLBE_DISPOSE_OFFSET UNITYSDK_OFFSET(0xB911EC0)
#define MGEEJIGDLBE_ONTASKBEGIN_OFFSET UNITYSDK_OFFSET(0xB911F90)
#define MGEEJIGDLBE_ONTASKRESET_OFFSET UNITYSDK_OFFSET(0xB912020)
#define MGEEJIGDLBE_TICK_OFFSET UNITYSDK_OFFSET(0xB912070)

inline static constexpr unsigned int MGEEJIGDLBE_TypeDefinitionIndex = 58892;

	class MGEEJIGDLBE : public ::GELIALJDFBL
	{
	public:
		::RPG::GameCore::TaskContext* DDDNLILNMKA; // 0x18
		::RPG::GameCore::WaitFor* OFKGLJOAMLD; // 0x20
		::GELIALJDFBL* LLHKOFLJFCH; // 0x28
		::System::Void _ctor(::RPG::GameCore::TaskContext* a1, ::RPG::GameCore::WaitFor* a2)
		{
			return ((::System::Void(*)(::PVOID, ::RPG::GameCore::TaskContext*, ::RPG::GameCore::WaitFor*))((::PBYTE)hIl2Cpp + MGEEJIGDLBE_CTOR_OFFSET))(this, a1, a2);
		}

		::System::Void Dispose()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MGEEJIGDLBE_DISPOSE_OFFSET))(this);
		}

		::System::Void OnTaskBegin()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MGEEJIGDLBE_ONTASKBEGIN_OFFSET))(this);
		}

		::System::Void OnTaskReset()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MGEEJIGDLBE_ONTASKRESET_OFFSET))(this);
		}

		::System::Void Tick(::System::Single a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::Single))((::PBYTE)hIl2Cpp + MGEEJIGDLBE_TICK_OFFSET))(this, a1);
		}

	};
