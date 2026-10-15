#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/GELIALJDFBL.h"
class MPCOPCFENHI;
namespace RPG::GameCore { class TaskContext; }

#define PHMDGPGOILK_CTOR_OFFSET UNITYSDK_OFFSET(0xC24E380)
#define PHMDGPGOILK_DISPOSE_OFFSET UNITYSDK_OFFSET(0xC24E390)
#define PHMDGPGOILK_ONTASKBEGIN_OFFSET UNITYSDK_OFFSET(0xC24E3D0)
#define PHMDGPGOILK_ONTASKRESET_OFFSET UNITYSDK_OFFSET(0xC24E6E0)
#define PHMDGPGOILK_TICK_OFFSET UNITYSDK_OFFSET(0xC24E730)
#define PHMDGPGOILK__ONTASKBEGIN_B__2_0_OFFSET UNITYSDK_OFFSET(0xC24E790)

inline static constexpr unsigned int PHMDGPGOILK_TypeDefinitionIndex = 52945;

	class PHMDGPGOILK : public ::GELIALJDFBL
	{
	public:
		::MPCOPCFENHI* OFKGLJOAMLD; // 0x18
		::System::Void _ctor(::RPG::GameCore::TaskContext* a1, ::MPCOPCFENHI* a2)
		{
			return ((::System::Void(*)(::PVOID, ::RPG::GameCore::TaskContext*, ::MPCOPCFENHI*))((::PBYTE)hIl2Cpp + PHMDGPGOILK_CTOR_OFFSET))(this, a1, a2);
		}

		::System::Void Dispose()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + PHMDGPGOILK_DISPOSE_OFFSET))(this);
		}

		::System::Void OnTaskBegin()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + PHMDGPGOILK_ONTASKBEGIN_OFFSET))(this);
		}

		::System::Void OnTaskReset()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + PHMDGPGOILK_ONTASKRESET_OFFSET))(this);
		}

		::System::Void Tick(::System::Single a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::Single))((::PBYTE)hIl2Cpp + PHMDGPGOILK_TICK_OFFSET))(this, a1);
		}

		::System::Void _OnTaskBegin_b__2_0()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + PHMDGPGOILK__ONTASKBEGIN_B__2_0_OFFSET))(this);
		}

	};
