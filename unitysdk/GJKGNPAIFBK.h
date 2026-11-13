#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/GELIALJDFBL.h"
class DNBOLDHOBML;
namespace RPG::GameCore { class TaskContext; }

#define GJKGNPAIFBK_CTOR_OFFSET UNITYSDK_OFFSET(0x1A8A6AD0)
#define GJKGNPAIFBK_DISPOSE_OFFSET UNITYSDK_OFFSET(0x1A8A6D20)
#define GJKGNPAIFBK_ONTASKBEGIN_OFFSET UNITYSDK_OFFSET(0x1A8A6AE0)
#define GJKGNPAIFBK_ONTASKRESET_OFFSET UNITYSDK_OFFSET(0x1A8A6C70)
#define GJKGNPAIFBK_TICK_OFFSET UNITYSDK_OFFSET(0x1A8A6CC0)

inline static constexpr unsigned int GJKGNPAIFBK_TypeDefinitionIndex = 53929;

	class GJKGNPAIFBK : public ::GELIALJDFBL
	{
	public:
		::RPG::GameCore::TaskContext* DDDNLILNMKA; // 0x18
		::DNBOLDHOBML* OFKGLJOAMLD; // 0x20
		::System::Void _ctor(::RPG::GameCore::TaskContext* a1, ::DNBOLDHOBML* a2)
		{
			return ((::System::Void(*)(::PVOID, ::RPG::GameCore::TaskContext*, ::DNBOLDHOBML*))((::PBYTE)hIl2Cpp + GJKGNPAIFBK_CTOR_OFFSET))(this, a1, a2);
		}

		::System::Void OnTaskBegin()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + GJKGNPAIFBK_ONTASKBEGIN_OFFSET))(this);
		}

		::System::Void OnTaskReset()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + GJKGNPAIFBK_ONTASKRESET_OFFSET))(this);
		}

		::System::Void Tick(::System::Single a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::Single))((::PBYTE)hIl2Cpp + GJKGNPAIFBK_TICK_OFFSET))(this, a1);
		}

		::System::Void Dispose()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + GJKGNPAIFBK_DISPOSE_OFFSET))(this);
		}

	};
