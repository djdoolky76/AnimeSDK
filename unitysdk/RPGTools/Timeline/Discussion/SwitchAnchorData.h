#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"
namespace System { class String; }

#define RPGTOOLS_TIMELINE_DISCUSSION_SWITCHANCHORDATA_CTOR_OFFSET UNITYSDK_OFFSET(0xE8DC580)
#define RPGTOOLS_TIMELINE_DISCUSSION_SWITCHANCHORDATA_DFAMDKDOLKD_OFFSET UNITYSDK_OFFSET(0xE8DC540)
#define RPGTOOLS_TIMELINE_DISCUSSION_SWITCHANCHORDATA_LKGAKMMGOCN_OFFSET UNITYSDK_OFFSET(0xE8DC500)
#define RPGTOOLS_TIMELINE_DISCUSSION_SWITCHANCHORDATA_OGOGLJCDHJC_OFFSET UNITYSDK_OFFSET(0xE8DC4C0)

namespace RPGTools::Timeline::Discussion
{
	inline static constexpr unsigned int SwitchAnchorData_TypeDefinitionIndex = 48784;

	class SwitchAnchorData : public ::System::Object
	{
	public:
		::System::String* CharacterUniqueName; // 0x10
		::System::String* AnchorName; // 0x18
		::System::UInt32 GroupID; // 0x20
		::System::UInt32 AnchorID; // 0x24
		::System::Boolean StickToGround; // 0x28
		::System::Boolean _isCaptureNpc; // 0x29
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPGTOOLS_TIMELINE_DISCUSSION_SWITCHANCHORDATA_CTOR_OFFSET))(this);
		}

		::System::Void OGOGLJCDHJC()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPGTOOLS_TIMELINE_DISCUSSION_SWITCHANCHORDATA_OGOGLJCDHJC_OFFSET))(this);
		}

		::System::Void LKGAKMMGOCN()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPGTOOLS_TIMELINE_DISCUSSION_SWITCHANCHORDATA_LKGAKMMGOCN_OFFSET))(this);
		}

		::System::Void DFAMDKDOLKD()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPGTOOLS_TIMELINE_DISCUSSION_SWITCHANCHORDATA_DFAMDKDOLKD_OFFSET))(this);
		}

	};
}
