#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/GELIALJDFBL.h"
namespace RPG::GameCore { class SetNoShadowCaster; }
namespace RPG::GameCore { class TaskContext; }

#define LOFMJIEOGHF_CTOR_OFFSET UNITYSDK_OFFSET(0xB7F8FE0)
#define LOFMJIEOGHF_DISPOSE_OFFSET UNITYSDK_OFFSET(0xB7F8FF0)
#define LOFMJIEOGHF_ONTASKBEGIN_OFFSET UNITYSDK_OFFSET(0xB7F9030)
#define LOFMJIEOGHF_ONTASKRESET_OFFSET UNITYSDK_OFFSET(0xB7F95A0)
#define LOFMJIEOGHF_TICK_OFFSET UNITYSDK_OFFSET(0xB7F95F0)

inline static constexpr unsigned int LOFMJIEOGHF_TypeDefinitionIndex = 55555;

	class LOFMJIEOGHF : public ::GELIALJDFBL
	{
	public:
		::RPG::GameCore::TaskContext* DDDNLILNMKA; // 0x18
		::RPG::GameCore::SetNoShadowCaster* OFKGLJOAMLD; // 0x20
		::System::Void _ctor(::RPG::GameCore::TaskContext* a1, ::RPG::GameCore::SetNoShadowCaster* a2)
		{
			return ((::System::Void(*)(::PVOID, ::RPG::GameCore::TaskContext*, ::RPG::GameCore::SetNoShadowCaster*))((::PBYTE)hIl2Cpp + LOFMJIEOGHF_CTOR_OFFSET))(this, a1, a2);
		}

		::System::Void Dispose()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + LOFMJIEOGHF_DISPOSE_OFFSET))(this);
		}

		::System::Void OnTaskBegin()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + LOFMJIEOGHF_ONTASKBEGIN_OFFSET))(this);
		}

		::System::Void OnTaskReset()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + LOFMJIEOGHF_ONTASKRESET_OFFSET))(this);
		}

		::System::Void Tick(::System::Single a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::Single))((::PBYTE)hIl2Cpp + LOFMJIEOGHF_TICK_OFFSET))(this, a1);
		}

	};
