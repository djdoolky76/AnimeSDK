#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/GELIALJDFBL.h"
namespace RPG::GameCore { class DestroyUnstageCharacter; }
namespace RPG::GameCore { class TaskContext; }

#define CJJFEDMKIAN_CTOR_OFFSET UNITYSDK_OFFSET(0xDB8C2B0)
#define CJJFEDMKIAN_DISPOSE_OFFSET UNITYSDK_OFFSET(0xDB8C2C0)
#define CJJFEDMKIAN_ONTASKBEGIN_OFFSET UNITYSDK_OFFSET(0xDB8C300)
#define CJJFEDMKIAN_ONTASKRESET_OFFSET UNITYSDK_OFFSET(0xDB8C530)
#define CJJFEDMKIAN_TICK_OFFSET UNITYSDK_OFFSET(0xDB8C580)

inline static constexpr unsigned int CJJFEDMKIAN_TypeDefinitionIndex = 56175;

	class CJJFEDMKIAN : public ::GELIALJDFBL
	{
	public:
		::RPG::GameCore::TaskContext* DDDNLILNMKA; // 0x18
		::RPG::GameCore::DestroyUnstageCharacter* OFKGLJOAMLD; // 0x20
		::System::Void _ctor(::RPG::GameCore::TaskContext* a1, ::RPG::GameCore::DestroyUnstageCharacter* a2)
		{
			return ((::System::Void(*)(::PVOID, ::RPG::GameCore::TaskContext*, ::RPG::GameCore::DestroyUnstageCharacter*))((::PBYTE)hIl2Cpp + CJJFEDMKIAN_CTOR_OFFSET))(this, a1, a2);
		}

		::System::Void Dispose()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CJJFEDMKIAN_DISPOSE_OFFSET))(this);
		}

		::System::Void OnTaskBegin()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CJJFEDMKIAN_ONTASKBEGIN_OFFSET))(this);
		}

		::System::Void OnTaskReset()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CJJFEDMKIAN_ONTASKRESET_OFFSET))(this);
		}

		::System::Void Tick(::System::Single a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::Single))((::PBYTE)hIl2Cpp + CJJFEDMKIAN_TICK_OFFSET))(this, a1);
		}

	};
