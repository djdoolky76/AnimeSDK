#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/GELIALJDFBL.h"
namespace RPG::GameCore { class StackBoostPointCallbackDecorate; }
namespace RPG::GameCore { class TaskContext; }

#define KCIFOAPMFNK_CTOR_OFFSET UNITYSDK_OFFSET(0x1A484F70)
#define KCIFOAPMFNK_DISPOSE_OFFSET UNITYSDK_OFFSET(0x1A484F80)
#define KCIFOAPMFNK_ONTASKBEGIN_OFFSET UNITYSDK_OFFSET(0x1A484FC0)
#define KCIFOAPMFNK_ONTASKRESET_OFFSET UNITYSDK_OFFSET(0x1A485690)
#define KCIFOAPMFNK_TICK_OFFSET UNITYSDK_OFFSET(0x1A4856E0)

inline static constexpr unsigned int KCIFOAPMFNK_TypeDefinitionIndex = 56835;

	class KCIFOAPMFNK : public ::GELIALJDFBL
	{
	public:
		::RPG::GameCore::TaskContext* DDDNLILNMKA; // 0x18
		::RPG::GameCore::StackBoostPointCallbackDecorate* OFKGLJOAMLD; // 0x20
		::System::Void _ctor(::RPG::GameCore::TaskContext* a1, ::RPG::GameCore::StackBoostPointCallbackDecorate* a2)
		{
			return ((::System::Void(*)(::PVOID, ::RPG::GameCore::TaskContext*, ::RPG::GameCore::StackBoostPointCallbackDecorate*))((::PBYTE)hIl2Cpp + KCIFOAPMFNK_CTOR_OFFSET))(this, a1, a2);
		}

		::System::Void Dispose()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + KCIFOAPMFNK_DISPOSE_OFFSET))(this);
		}

		::System::Void OnTaskBegin()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + KCIFOAPMFNK_ONTASKBEGIN_OFFSET))(this);
		}

		::System::Void OnTaskReset()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + KCIFOAPMFNK_ONTASKRESET_OFFSET))(this);
		}

		::System::Void Tick(::System::Single a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::Single))((::PBYTE)hIl2Cpp + KCIFOAPMFNK_TICK_OFFSET))(this, a1);
		}

	};
