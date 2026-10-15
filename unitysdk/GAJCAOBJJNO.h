#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/GELIALJDFBL.h"
#include "unitysdk/RPG/GameCore/TaskState.h"
class IEGCAOHNGCC;
namespace RPG::GameCore { class TaskConfig; }
namespace RPG::GameCore { class TaskContext; }

#define GAJCAOBJJNO_BPKPPDLJPAP_OFFSET UNITYSDK_OFFSET(0x1593CEB0)
#define GAJCAOBJJNO_CTOR_OFFSET UNITYSDK_OFFSET(0x1593CCF0)
#define GAJCAOBJJNO_DISPOSE_OFFSET UNITYSDK_OFFSET(0x1593CD30)
#define GAJCAOBJJNO_DJNNLPKCFPL_OFFSET UNITYSDK_OFFSET(0x1593CEA0)
#define GAJCAOBJJNO_ONTASKBEGIN_OFFSET UNITYSDK_OFFSET(0x1593CD90)
#define GAJCAOBJJNO_ONTASKRESET_OFFSET UNITYSDK_OFFSET(0x1593CDE0)
#define GAJCAOBJJNO_TICK_OFFSET UNITYSDK_OFFSET(0x1593CE30)

inline static constexpr unsigned int GAJCAOBJJNO_TypeDefinitionIndex = 54785;

	class GAJCAOBJJNO : public ::GELIALJDFBL
	{
	public:
		::RPG::GameCore::TaskContext* GPKCGOLOJKC; // 0x18
		::IEGCAOHNGCC* ANJMMCICKPI; // 0x20
		::RPG::GameCore::TaskConfig* DOCBCODGIEH; // 0x28
		::System::Void _ctor(::RPG::GameCore::TaskContext* a1, ::RPG::GameCore::TaskConfig* a2, ::IEGCAOHNGCC* a3)
		{
			return ((::System::Void(*)(::PVOID, ::RPG::GameCore::TaskContext*, ::RPG::GameCore::TaskConfig*, ::IEGCAOHNGCC*))((::PBYTE)hIl2Cpp + GAJCAOBJJNO_CTOR_OFFSET))(this, a1, a2, a3);
		}

		::System::Void Dispose()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + GAJCAOBJJNO_DISPOSE_OFFSET))(this);
		}

		::System::Void OnTaskBegin()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + GAJCAOBJJNO_ONTASKBEGIN_OFFSET))(this);
		}

		::System::Void OnTaskReset()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + GAJCAOBJJNO_ONTASKRESET_OFFSET))(this);
		}

		::System::Void Tick(::System::Single a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::Single))((::PBYTE)hIl2Cpp + GAJCAOBJJNO_TICK_OFFSET))(this, a1);
		}

		::RPG::GameCore::TaskState DJNNLPKCFPL()
		{
			return ((::RPG::GameCore::TaskState(*)(::PVOID))((::PBYTE)hIl2Cpp + GAJCAOBJJNO_DJNNLPKCFPL_OFFSET))(this);
		}

		::System::Void BPKPPDLJPAP(::RPG::GameCore::TaskState a1)
		{
			return ((::System::Void(*)(::PVOID, ::RPG::GameCore::TaskState))((::PBYTE)hIl2Cpp + GAJCAOBJJNO_BPKPPDLJPAP_OFFSET))(this, a1);
		}

	};
