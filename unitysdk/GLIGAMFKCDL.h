#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/GELIALJDFBL.h"
class KDJNAAOFMMJ;
namespace RPG::GameCore { class GridFightShowGuideHintWithText; }
namespace RPG::GameCore { class TaskContext; }

#define GLIGAMFKCDL_CTOR_OFFSET UNITYSDK_OFFSET(0x16C63C50)
#define GLIGAMFKCDL_DISPOSE_OFFSET UNITYSDK_OFFSET(0x16C63C60)
#define GLIGAMFKCDL_EHHDIJMGHGG_OFFSET UNITYSDK_OFFSET(0x16C63E00)
#define GLIGAMFKCDL_OAEENMIFHLF_OFFSET UNITYSDK_OFFSET(0x16C641F0)
#define GLIGAMFKCDL_ONTASKBEGIN_OFFSET UNITYSDK_OFFSET(0x16C63CC0)
#define GLIGAMFKCDL_ONTASKRESET_OFFSET UNITYSDK_OFFSET(0x16C64080)
#define GLIGAMFKCDL_TICK_OFFSET UNITYSDK_OFFSET(0x16C640E0)

inline static constexpr unsigned int GLIGAMFKCDL_TypeDefinitionIndex = 54751;

	class GLIGAMFKCDL : public ::GELIALJDFBL
	{
	public:
		::KDJNAAOFMMJ* OLMFJLICIIA; // 0x18
		::RPG::GameCore::GridFightShowGuideHintWithText* OFKGLJOAMLD; // 0x20
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
