#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/GELIALJDFBL.h"
class EBBBJDPGDFG;
class HDKNCBLPFOC;
namespace RPG::GameCore { class TaskContext; }

#define IMCDGIAHJGH_CTOR_OFFSET UNITYSDK_OFFSET(0x164C1310)
#define IMCDGIAHJGH_DISPOSE_OFFSET UNITYSDK_OFFSET(0x164C1320)
#define IMCDGIAHJGH_ONTASKBEGIN_OFFSET UNITYSDK_OFFSET(0x164C13B0)
#define IMCDGIAHJGH_ONTASKRESET_OFFSET UNITYSDK_OFFSET(0x164C1360)
#define IMCDGIAHJGH_TICK_OFFSET UNITYSDK_OFFSET(0x164C14E0)

inline static constexpr unsigned int IMCDGIAHJGH_TypeDefinitionIndex = 53943;

	class IMCDGIAHJGH : public ::GELIALJDFBL
	{
	public:
		::EBBBJDPGDFG* EEGKNKIBLHB; // 0x18
		::HDKNCBLPFOC* OFKGLJOAMLD; // 0x20
		::RPG::GameCore::TaskContext* DDDNLILNMKA; // 0x28
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
