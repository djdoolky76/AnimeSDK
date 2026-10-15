#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/RogueMagicMountType.h"
#include "unitysdk/RPG/GameCore/TaskState.h"
#include "unitysdk/System/Object.h"
namespace RPG::GameCore { class BattleRogueMagicData_MagicUnit; }
namespace System { class String; }

#define HGLDNPONBAM_IJCPNDEKHKF_CTOR_OFFSET UNITYSDK_OFFSET(0x15CAC100)
#define HGLDNPONBAM_IJCPNDEKHKF_JINDACEGJGF_OFFSET UNITYSDK_OFFSET(0x15CAD0E0)
#define HGLDNPONBAM_IJCPNDEKHKF_KMNNGHKFCEC_OFFSET UNITYSDK_OFFSET(0x15CAC6B0)

	class HGLDNPONBAM_IJCPNDEKHKF : public ::System::Object
	{
	public:
		::System::String* KBKOGLCAEKG; // 0x10
		::RPG::GameCore::BattleRogueMagicData_MagicUnit* EABKOHGCHFP; // 0x18
		::RPG::GameCore::RogueMagicMountType ILLOBAKBDPB; // 0x20
		::RPG::GameCore::TaskState AKLILOFAMNG; // 0x24
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + HGLDNPONBAM_IJCPNDEKHKF_CTOR_OFFSET))(this);
		}

		::System::Boolean JINDACEGJGF()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + HGLDNPONBAM_IJCPNDEKHKF_JINDACEGJGF_OFFSET))(this);
		}

		::System::Boolean KMNNGHKFCEC()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + HGLDNPONBAM_IJCPNDEKHKF_KMNNGHKFCEC_OFFSET))(this);
		}

	};
