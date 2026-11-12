#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/GELIALJDFBL.h"
class KFELGAIGHAP;
namespace RPG::GameCore { class AdvWaitArtLoad; }
namespace RPG::GameCore { class CharacterModelComponent; }
namespace RPG::GameCore { class TaskContext; }

#define IHDIEEEHCFH_CTOR_OFFSET UNITYSDK_OFFSET(0x173CD8C0)
#define IHDIEEEHCFH_DISPOSE_OFFSET UNITYSDK_OFFSET(0x173CD950)
#define IHDIEEEHCFH_ONTASKBEGIN_OFFSET UNITYSDK_OFFSET(0x173CDA20)
#define IHDIEEEHCFH_ONTASKRESET_OFFSET UNITYSDK_OFFSET(0x173CDB90)
#define IHDIEEEHCFH_TICK_OFFSET UNITYSDK_OFFSET(0x173CDBE0)

inline static constexpr unsigned int IHDIEEEHCFH_TypeDefinitionIndex = 53626;

	class IHDIEEEHCFH : public ::GELIALJDFBL
	{
	public:
		::RPG::GameCore::CharacterModelComponent* FFPNKJOPAIL; // 0x18
		::RPG::GameCore::TaskContext* DDDNLILNMKA; // 0x20
		::KFELGAIGHAP* DKLIJOFDJCK; // 0x28
		::RPG::GameCore::AdvWaitArtLoad* OFKGLJOAMLD; // 0x30
		::System::Boolean FCDAPPDMLEG; // 0x38
		::System::Void _ctor(::RPG::GameCore::TaskContext* a1, ::RPG::GameCore::AdvWaitArtLoad* a2)
		{
			return ((::System::Void(*)(::PVOID, ::RPG::GameCore::TaskContext*, ::RPG::GameCore::AdvWaitArtLoad*))((::PBYTE)hIl2Cpp + IHDIEEEHCFH_CTOR_OFFSET))(this, a1, a2);
		}

		::System::Void Dispose()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + IHDIEEEHCFH_DISPOSE_OFFSET))(this);
		}

		::System::Void OnTaskBegin()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + IHDIEEEHCFH_ONTASKBEGIN_OFFSET))(this);
		}

		::System::Void OnTaskReset()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + IHDIEEEHCFH_ONTASKRESET_OFFSET))(this);
		}

		::System::Void Tick(::System::Single a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::Single))((::PBYTE)hIl2Cpp + IHDIEEEHCFH_TICK_OFFSET))(this, a1);
		}

	};
