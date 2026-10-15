#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/GELIALJDFBL.h"
namespace RPG::GameCore { class SwitchMainCamera; }
namespace RPG::GameCore { class TaskContext; }

#define ODKHJJNDKDI_CTOR_OFFSET UNITYSDK_OFFSET(0xBD98690)
#define ODKHJJNDKDI_DISPOSE_OFFSET UNITYSDK_OFFSET(0xBD986A0)
#define ODKHJJNDKDI_ONTASKBEGIN_OFFSET UNITYSDK_OFFSET(0xBD98730)
#define ODKHJJNDKDI_ONTASKRESET_OFFSET UNITYSDK_OFFSET(0xBD986E0)
#define ODKHJJNDKDI_TICK_OFFSET UNITYSDK_OFFSET(0xBD98940)

inline static constexpr unsigned int ODKHJJNDKDI_TypeDefinitionIndex = 55688;

	class ODKHJJNDKDI : public ::GELIALJDFBL
	{
	public:
		::RPG::GameCore::SwitchMainCamera* OFKGLJOAMLD; // 0x18
		::RPG::GameCore::TaskContext* DDDNLILNMKA; // 0x20
		::System::Void _ctor(::RPG::GameCore::TaskContext* a1, ::RPG::GameCore::SwitchMainCamera* a2)
		{
			return ((::System::Void(*)(::PVOID, ::RPG::GameCore::TaskContext*, ::RPG::GameCore::SwitchMainCamera*))((::PBYTE)hIl2Cpp + ODKHJJNDKDI_CTOR_OFFSET))(this, a1, a2);
		}

		::System::Void Dispose()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + ODKHJJNDKDI_DISPOSE_OFFSET))(this);
		}

		::System::Void OnTaskReset()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + ODKHJJNDKDI_ONTASKRESET_OFFSET))(this);
		}

		::System::Void OnTaskBegin()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + ODKHJJNDKDI_ONTASKBEGIN_OFFSET))(this);
		}

		::System::Void Tick(::System::Single a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::Single))((::PBYTE)hIl2Cpp + ODKHJJNDKDI_TICK_OFFSET))(this, a1);
		}

	};
