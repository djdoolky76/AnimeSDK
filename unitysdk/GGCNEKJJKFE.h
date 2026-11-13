#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/GELIALJDFBL.h"
class JNEDMEACFJF;
namespace RPG::GameCore { class TaskContext; }
namespace System { class Object; }

#define GGCNEKJJKFE_CTOR_OFFSET UNITYSDK_OFFSET(0x1B4A0870)
#define GGCNEKJJKFE_DISPOSE_OFFSET UNITYSDK_OFFSET(0x1B4A0880)
#define GGCNEKJJKFE_IEGFJELGOMG_OFFSET UNITYSDK_OFFSET(0x1B4A0B00)
#define GGCNEKJJKFE_ONTASKBEGIN_OFFSET UNITYSDK_OFFSET(0x1B4A0990)
#define GGCNEKJJKFE_ONTASKRESET_OFFSET UNITYSDK_OFFSET(0x1B4A08D0)
#define GGCNEKJJKFE_TICK_OFFSET UNITYSDK_OFFSET(0x1B4A0B90)

inline static constexpr unsigned int GGCNEKJJKFE_TypeDefinitionIndex = 54085;

	class GGCNEKJJKFE : public ::GELIALJDFBL
	{
	public:
		::JNEDMEACFJF* IGHAHBNLIJA; // 0x18
		::RPG::GameCore::TaskContext* EEFMDEHLLFI; // 0x20
		::System::Void _ctor(::RPG::GameCore::TaskContext* a1, ::JNEDMEACFJF* a2)
		{
			return ((::System::Void(*)(::PVOID, ::RPG::GameCore::TaskContext*, ::JNEDMEACFJF*))((::PBYTE)hIl2Cpp + GGCNEKJJKFE_CTOR_OFFSET))(this, a1, a2);
		}

		::System::Void Dispose()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + GGCNEKJJKFE_DISPOSE_OFFSET))(this);
		}

		::System::Void OnTaskBegin()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + GGCNEKJJKFE_ONTASKBEGIN_OFFSET))(this);
		}

		::System::Void OnTaskReset()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + GGCNEKJJKFE_ONTASKRESET_OFFSET))(this);
		}

		::System::Void IEGFJELGOMG(::System::UInt16 a1, ::System::Object* a2)
		{
			return ((::System::Void(*)(::PVOID, ::System::UInt16, ::System::Object*))((::PBYTE)hIl2Cpp + GGCNEKJJKFE_IEGFJELGOMG_OFFSET))(this, a1, a2);
		}

		::System::Void Tick(::System::Single a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::Single))((::PBYTE)hIl2Cpp + GGCNEKJJKFE_TICK_OFFSET))(this, a1);
		}

	};
