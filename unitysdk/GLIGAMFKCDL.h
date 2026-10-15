#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/GELIALJDFBL.h"
class KDJNAAOFMMJ;
namespace RPG::GameCore { class GridFightShowGuideHintWithText; }
namespace RPG::GameCore { class TaskContext; }

#define GLIGAMFKCDL_CTOR_OFFSET UNITYSDK_OFFSET(0x15AABB00)
#define GLIGAMFKCDL_DISPOSE_OFFSET UNITYSDK_OFFSET(0x15AABB10)
#define GLIGAMFKCDL_EHHDIJMGHGG_OFFSET UNITYSDK_OFFSET(0x15AABE90)
#define GLIGAMFKCDL_OAEENMIFHLF_OFFSET UNITYSDK_OFFSET(0x15AAC110)
#define GLIGAMFKCDL_ONTASKBEGIN_OFFSET UNITYSDK_OFFSET(0x15AABB70)
#define GLIGAMFKCDL_ONTASKRESET_OFFSET UNITYSDK_OFFSET(0x15AABCB0)
#define GLIGAMFKCDL_TICK_OFFSET UNITYSDK_OFFSET(0x15AABD10)

inline static constexpr unsigned int GLIGAMFKCDL_TypeDefinitionIndex = 53587;

	class GLIGAMFKCDL : public ::GELIALJDFBL
	{
	public:
		::RPG::GameCore::GridFightShowGuideHintWithText* OFKGLJOAMLD; // 0x18
		::KDJNAAOFMMJ* OLMFJLICIIA; // 0x20
		::RPG::GameCore::TaskContext* DDDNLILNMKA; // 0x28
		::System::Void _ctor(::RPG::GameCore::TaskContext* a1, ::RPG::GameCore::GridFightShowGuideHintWithText* a2)
		{
			return ((::System::Void(*)(::PVOID, ::RPG::GameCore::TaskContext*, ::RPG::GameCore::GridFightShowGuideHintWithText*))((::PBYTE)hIl2Cpp + GLIGAMFKCDL_CTOR_OFFSET))(this, a1, a2);
		}

		::System::Void Dispose()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + GLIGAMFKCDL_DISPOSE_OFFSET))(this);
		}

		::System::Void OnTaskBegin()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + GLIGAMFKCDL_ONTASKBEGIN_OFFSET))(this);
		}

		::System::Void OnTaskReset()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + GLIGAMFKCDL_ONTASKRESET_OFFSET))(this);
		}

		::System::Void Tick(::System::Single a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::Single))((::PBYTE)hIl2Cpp + GLIGAMFKCDL_TICK_OFFSET))(this, a1);
		}

		::System::Void EHHDIJMGHGG()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + GLIGAMFKCDL_EHHDIJMGHGG_OFFSET))(this);
		}

		::System::Void OAEENMIFHLF()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + GLIGAMFKCDL_OAEENMIFHLF_OFFSET))(this);
		}

	};
