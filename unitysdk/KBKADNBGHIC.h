#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/GELIALJDFBL.h"
class HGCDDNJGGGG;
class IAAOMMGICFK;
namespace RPG::GameCore { class TaskContext; }

#define KBKADNBGHIC_CTOR_OFFSET UNITYSDK_OFFSET(0xBB93D80)
#define KBKADNBGHIC_DISPOSE_OFFSET UNITYSDK_OFFSET(0xBB93D90)
#define KBKADNBGHIC_ONTASKBEGIN_OFFSET UNITYSDK_OFFSET(0xBB93E30)
#define KBKADNBGHIC_ONTASKRESET_OFFSET UNITYSDK_OFFSET(0xBB93DE0)
#define KBKADNBGHIC_TICK_OFFSET UNITYSDK_OFFSET(0xBB94030)

inline static constexpr unsigned int KBKADNBGHIC_TypeDefinitionIndex = 53830;

	class KBKADNBGHIC : public ::GELIALJDFBL
	{
	public:
		::RPG::GameCore::TaskContext* EEFMDEHLLFI; // 0x18
		::IAAOMMGICFK* HOADGOKCPDG; // 0x20
		::HGCDDNJGGGG* IGHAHBNLIJA; // 0x28
		::System::Boolean PJFIKFPKBGI; // 0x30
		::System::Void _ctor(::RPG::GameCore::TaskContext* a1, ::HGCDDNJGGGG* a2)
		{
			return ((::System::Void(*)(::PVOID, ::RPG::GameCore::TaskContext*, ::HGCDDNJGGGG*))((::PBYTE)hIl2Cpp + KBKADNBGHIC_CTOR_OFFSET))(this, a1, a2);
		}

		::System::Void Dispose()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + KBKADNBGHIC_DISPOSE_OFFSET))(this);
		}

		::System::Void OnTaskReset()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + KBKADNBGHIC_ONTASKRESET_OFFSET))(this);
		}

		::System::Void OnTaskBegin()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + KBKADNBGHIC_ONTASKBEGIN_OFFSET))(this);
		}

		::System::Void Tick(::System::Single a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::Single))((::PBYTE)hIl2Cpp + KBKADNBGHIC_TICK_OFFSET))(this, a1);
		}

	};
