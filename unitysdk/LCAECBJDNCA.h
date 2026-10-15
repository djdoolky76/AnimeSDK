#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/GELIALJDFBL.h"
namespace RPG::GameCore { class ShowEntityFloatMessage; }
namespace RPG::GameCore { class TaskContext; }

#define LCAECBJDNCA_CTOR_OFFSET UNITYSDK_OFFSET(0xB609790)
#define LCAECBJDNCA_DISPOSE_OFFSET UNITYSDK_OFFSET(0xB6097A0)
#define LCAECBJDNCA_ONTASKBEGIN_OFFSET UNITYSDK_OFFSET(0xB6097E0)
#define LCAECBJDNCA_ONTASKRESET_OFFSET UNITYSDK_OFFSET(0xB609B30)
#define LCAECBJDNCA_TICK_OFFSET UNITYSDK_OFFSET(0xB609B80)

inline static constexpr unsigned int LCAECBJDNCA_TypeDefinitionIndex = 56453;

	class LCAECBJDNCA : public ::GELIALJDFBL
	{
	public:
		::RPG::GameCore::ShowEntityFloatMessage* OFKGLJOAMLD; // 0x18
		::RPG::GameCore::TaskContext* DDDNLILNMKA; // 0x20
		::System::Void _ctor(::RPG::GameCore::TaskContext* a1, ::RPG::GameCore::ShowEntityFloatMessage* a2)
		{
			return ((::System::Void(*)(::PVOID, ::RPG::GameCore::TaskContext*, ::RPG::GameCore::ShowEntityFloatMessage*))((::PBYTE)hIl2Cpp + LCAECBJDNCA_CTOR_OFFSET))(this, a1, a2);
		}

		::System::Void Dispose()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + LCAECBJDNCA_DISPOSE_OFFSET))(this);
		}

		::System::Void OnTaskBegin()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + LCAECBJDNCA_ONTASKBEGIN_OFFSET))(this);
		}

		::System::Void OnTaskReset()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + LCAECBJDNCA_ONTASKRESET_OFFSET))(this);
		}

		::System::Void Tick(::System::Single a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::Single))((::PBYTE)hIl2Cpp + LCAECBJDNCA_TICK_OFFSET))(this, a1);
		}

	};
