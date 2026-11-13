#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/GELIALJDFBL.h"
class EBBBJDPGDFG;
class HDKNCBLPFOC;
namespace RPG::GameCore { class TaskContext; }

#define IMCDGIAHJGH_CTOR_OFFSET UNITYSDK_OFFSET(0x1A5CD700)
#define IMCDGIAHJGH_DISPOSE_OFFSET UNITYSDK_OFFSET(0x1A5CD710)
#define IMCDGIAHJGH_ONTASKBEGIN_OFFSET UNITYSDK_OFFSET(0x1A5CD7A0)
#define IMCDGIAHJGH_ONTASKRESET_OFFSET UNITYSDK_OFFSET(0x1A5CD750)
#define IMCDGIAHJGH_TICK_OFFSET UNITYSDK_OFFSET(0x1A5CD8D0)

inline static constexpr unsigned int IMCDGIAHJGH_TypeDefinitionIndex = 55107;

	class IMCDGIAHJGH : public ::GELIALJDFBL
	{
	public:
		::EBBBJDPGDFG* EEGKNKIBLHB; // 0x18
		::RPG::GameCore::TaskContext* DDDNLILNMKA; // 0x20
		::HDKNCBLPFOC* OFKGLJOAMLD; // 0x28
		::System::Int32 BLHGDMABBFJ; // 0x30
		::System::Int32 CCKPDMAHLNJ; // 0x34
		::System::Void _ctor(::RPG::GameCore::TaskContext* a1, ::HDKNCBLPFOC* a2)
		{
			return ((::System::Void(*)(::PVOID, ::RPG::GameCore::TaskContext*, ::HDKNCBLPFOC*))((::PBYTE)hIl2Cpp + IMCDGIAHJGH_CTOR_OFFSET))(this, a1, a2);
		}

		::System::Void Dispose()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + IMCDGIAHJGH_DISPOSE_OFFSET))(this);
		}

		::System::Void OnTaskReset()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + IMCDGIAHJGH_ONTASKRESET_OFFSET))(this);
		}

		::System::Void OnTaskBegin()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + IMCDGIAHJGH_ONTASKBEGIN_OFFSET))(this);
		}

		::System::Void Tick(::System::Single a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::Single))((::PBYTE)hIl2Cpp + IMCDGIAHJGH_TICK_OFFSET))(this, a1);
		}

	};
