#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/GELIALJDFBL.h"
class PCBAPNFAENH;
namespace RPG::GameCore { class TaskContext; }

#define KICNHCOILHJ_CTOR_OFFSET UNITYSDK_OFFSET(0xB412FB0)
#define KICNHCOILHJ_DISPOSE_OFFSET UNITYSDK_OFFSET(0xB413180)
#define KICNHCOILHJ_EDNJAFJEPJF_OFFSET UNITYSDK_OFFSET(0xB413080)
#define KICNHCOILHJ_GET_FORCESKIP_OFFSET UNITYSDK_OFFSET(0xB4131C0)
#define KICNHCOILHJ_ONTASKBEGIN_OFFSET UNITYSDK_OFFSET(0xB412FC0)
#define KICNHCOILHJ_ONTASKRESET_OFFSET UNITYSDK_OFFSET(0xB4130D0)
#define KICNHCOILHJ_TICK_OFFSET UNITYSDK_OFFSET(0xB413120)

inline static constexpr unsigned int KICNHCOILHJ_TypeDefinitionIndex = 58753;

	class KICNHCOILHJ : public ::GELIALJDFBL
	{
	public:
		::PCBAPNFAENH* OFKGLJOAMLD; // 0x18
		::RPG::GameCore::TaskContext* DDDNLILNMKA; // 0x20
		::System::Void _ctor(::RPG::GameCore::TaskContext* a1, ::PCBAPNFAENH* a2)
		{
			return ((::System::Void(*)(::PVOID, ::RPG::GameCore::TaskContext*, ::PCBAPNFAENH*))((::PBYTE)hIl2Cpp + KICNHCOILHJ_CTOR_OFFSET))(this, a1, a2);
		}

		::System::Void OnTaskBegin()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + KICNHCOILHJ_ONTASKBEGIN_OFFSET))(this);
		}

		::System::Void EDNJAFJEPJF()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + KICNHCOILHJ_EDNJAFJEPJF_OFFSET))(this);
		}

		::System::Void OnTaskReset()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + KICNHCOILHJ_ONTASKRESET_OFFSET))(this);
		}

		::System::Void Tick(::System::Single a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::Single))((::PBYTE)hIl2Cpp + KICNHCOILHJ_TICK_OFFSET))(this, a1);
		}

		::System::Void Dispose()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + KICNHCOILHJ_DISPOSE_OFFSET))(this);
		}

		::System::Boolean get_ForceSkip()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + KICNHCOILHJ_GET_FORCESKIP_OFFSET))(this);
		}

	};
