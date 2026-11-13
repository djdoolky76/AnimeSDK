#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/GELIALJDFBL.h"
class BNFINJANAGB;
namespace RPG::GameCore { class TaskContext; }

#define HLJPKMHBBDH_CTOR_OFFSET UNITYSDK_OFFSET(0x198A5BC0)
#define HLJPKMHBBDH_DISPOSE_OFFSET UNITYSDK_OFFSET(0x198A5E10)
#define HLJPKMHBBDH_ONTASKBEGIN_OFFSET UNITYSDK_OFFSET(0x198A5BD0)
#define HLJPKMHBBDH_ONTASKRESET_OFFSET UNITYSDK_OFFSET(0x198A5D60)
#define HLJPKMHBBDH_TICK_OFFSET UNITYSDK_OFFSET(0x198A5DB0)

inline static constexpr unsigned int HLJPKMHBBDH_TypeDefinitionIndex = 59384;

	class HLJPKMHBBDH : public ::GELIALJDFBL
	{
	public:
		::BNFINJANAGB* OFKGLJOAMLD; // 0x18
		::RPG::GameCore::TaskContext* DDDNLILNMKA; // 0x20
		::System::Void _ctor(::RPG::GameCore::TaskContext* a1, ::BNFINJANAGB* a2)
		{
			return ((::System::Void(*)(::PVOID, ::RPG::GameCore::TaskContext*, ::BNFINJANAGB*))((::PBYTE)hIl2Cpp + HLJPKMHBBDH_CTOR_OFFSET))(this, a1, a2);
		}

		::System::Void OnTaskBegin()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + HLJPKMHBBDH_ONTASKBEGIN_OFFSET))(this);
		}

		::System::Void OnTaskReset()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + HLJPKMHBBDH_ONTASKRESET_OFFSET))(this);
		}

		::System::Void Tick(::System::Single a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::Single))((::PBYTE)hIl2Cpp + HLJPKMHBBDH_TICK_OFFSET))(this, a1);
		}

		::System::Void Dispose()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + HLJPKMHBBDH_DISPOSE_OFFSET))(this);
		}

	};
