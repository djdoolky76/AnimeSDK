#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/GELIALJDFBL.h"
namespace RPG::GameCore { class DestroyUnstageCharacter; }
namespace RPG::GameCore { class TaskContext; }

#define CJJFEDMKIAN_CTOR_OFFSET UNITYSDK_OFFSET(0xD216670)
#define CJJFEDMKIAN_DISPOSE_OFFSET UNITYSDK_OFFSET(0xD216680)
#define CJJFEDMKIAN_ONTASKBEGIN_OFFSET UNITYSDK_OFFSET(0xD2166C0)
#define CJJFEDMKIAN_ONTASKRESET_OFFSET UNITYSDK_OFFSET(0xD2168F0)
#define CJJFEDMKIAN_TICK_OFFSET UNITYSDK_OFFSET(0xD216940)

inline static constexpr unsigned int CJJFEDMKIAN_TypeDefinitionIndex = 55001;

	class CJJFEDMKIAN : public ::GELIALJDFBL
	{
	public:
		::RPG::GameCore::DestroyUnstageCharacter* OFKGLJOAMLD; // 0x18
		::RPG::GameCore::TaskContext* DDDNLILNMKA; // 0x20
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
