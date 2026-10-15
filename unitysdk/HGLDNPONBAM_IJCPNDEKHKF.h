#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/RogueMagicMountType.h"
#include "unitysdk/RPG/GameCore/TaskState.h"
#include "unitysdk/System/Object.h"
namespace RPG::GameCore { class BattleRogueMagicData_MagicUnit; }
namespace System { class String; }

#define HGLDNPONBAM_IJCPNDEKHKF_CTOR_OFFSET UNITYSDK_OFFSET(0x15C9F6F0)
#define HGLDNPONBAM_IJCPNDEKHKF_JINDACEGJGF_OFFSET UNITYSDK_OFFSET(0x15CA06D0)
#define HGLDNPONBAM_IJCPNDEKHKF_KMNNGHKFCEC_OFFSET UNITYSDK_OFFSET(0x15C9FCA0)

inline static constexpr unsigned int HGLDNPONBAM_IJCPNDEKHKF_TypeDefinitionIndex = 57661;

	class HGLDNPONBAM_IJCPNDEKHKF : public ::System::Object
	{
	public:
		::RPG::GameCore::BattleRogueMagicData_MagicUnit* EABKOHGCHFP; // 0x10
		::System::String* KBKOGLCAEKG; // 0x18
		::RPG::GameCore::TaskState AKLILOFAMNG; // 0x20
		::RPG::GameCore::RogueMagicMountType ILLOBAKBDPB; // 0x24
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
