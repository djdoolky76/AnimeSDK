#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/GELIALJDFBL.h"
class JNEDMEACFJF;
namespace RPG::GameCore { class TaskContext; }
namespace System { class Object; }

#define GGCNEKJJKFE_CTOR_OFFSET UNITYSDK_OFFSET(0x159F7390)
#define GGCNEKJJKFE_DISPOSE_OFFSET UNITYSDK_OFFSET(0x159F73A0)
#define GGCNEKJJKFE_IEGFJELGOMG_OFFSET UNITYSDK_OFFSET(0x159F7620)
#define GGCNEKJJKFE_ONTASKBEGIN_OFFSET UNITYSDK_OFFSET(0x159F74B0)
#define GGCNEKJJKFE_ONTASKRESET_OFFSET UNITYSDK_OFFSET(0x159F73F0)
#define GGCNEKJJKFE_TICK_OFFSET UNITYSDK_OFFSET(0x159F76B0)

inline static constexpr unsigned int GGCNEKJJKFE_TypeDefinitionIndex = 52929;

	class GGCNEKJJKFE : public ::GELIALJDFBL
	{
	public:
		::RPG::GameCore::TaskContext* EEFMDEHLLFI; // 0x18
		::JNEDMEACFJF* IGHAHBNLIJA; // 0x20
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
