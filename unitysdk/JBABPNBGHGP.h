#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/GELIALJDFBL.h"
class KFELGAIGHAP;
namespace RPG::GameCore { class SwitchCharacterAnchorV2; }
namespace RPG::GameCore { class TaskContext; }

#define JBABPNBGHGP_CTOR_OFFSET UNITYSDK_OFFSET(0x1655CF40)
#define JBABPNBGHGP_DISPOSE_OFFSET UNITYSDK_OFFSET(0x1655D090)
#define JBABPNBGHGP_ONTASKBEGIN_OFFSET UNITYSDK_OFFSET(0x1655D410)
#define JBABPNBGHGP_ONTASKRESET_OFFSET UNITYSDK_OFFSET(0x1655D1F0)
#define JBABPNBGHGP_TICK_OFFSET UNITYSDK_OFFSET(0x1655D270)

inline static constexpr unsigned int JBABPNBGHGP_TypeDefinitionIndex = 53304;

	class JBABPNBGHGP : public ::GELIALJDFBL
	{
	public:
		::KFELGAIGHAP* HFOFIODMFGB; // 0x18
		::RPG::GameCore::SwitchCharacterAnchorV2* OFKGLJOAMLD; // 0x20
		::RPG::GameCore::TaskContext* DDDNLILNMKA; // 0x28
		::System::Void _ctor(::RPG::GameCore::TaskContext* a1, ::RPG::GameCore::SwitchCharacterAnchorV2* a2)
		{
			return ((::System::Void(*)(::PVOID, ::RPG::GameCore::TaskContext*, ::RPG::GameCore::SwitchCharacterAnchorV2*))((::PBYTE)hIl2Cpp + JBABPNBGHGP_CTOR_OFFSET))(this, a1, a2);
		}

		::System::Void Dispose()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + JBABPNBGHGP_DISPOSE_OFFSET))(this);
		}

		::System::Void Tick(::System::Single a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::Single))((::PBYTE)hIl2Cpp + JBABPNBGHGP_TICK_OFFSET))(this, a1);
		}

		::System::Void OnTaskBegin()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + JBABPNBGHGP_ONTASKBEGIN_OFFSET))(this);
		}

		::System::Void OnTaskReset()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + JBABPNBGHGP_ONTASKRESET_OFFSET))(this);
		}

	};
