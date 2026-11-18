#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/MoleMole/LogicMessageBase.h"

class NOKMDJDEMDJ;

#define MOLEMOLE_CHANGESCENENOTIFYOBJ_GET_PRIORITY_OFFSET UNITYSDK_OFFSET(0x18B7C8B0)
#define MOLEMOLE_CHANGESCENENOTIFYOBJ_ONPROCESS_OFFSET UNITYSDK_OFFSET(0x18B7C920)
#define MOLEMOLE_CHANGESCENENOTIFYOBJ_SETMESSAGECONFIG_OFFSET UNITYSDK_OFFSET(0x18B7C8C0)
#define MOLEMOLE_CHANGESCENENOTIFYOBJ__CTOR_OFFSET UNITYSDK_OFFSET(0x18B7CA20)
#define MOLEMOLE_CHANGESCENENOTIFYOBJ___BASE_SETMESSAGECONFIG_OFFSET UNITYSDK_OFFSET(0x18B7CA30)

namespace MoleMole
{
	inline static constexpr unsigned int ChangeSceneNotifyObj_TypeDefinitionIndex = 54577;

	class ChangeSceneNotifyObj : public ::MoleMole::LogicMessageBase
	{
	public:
		::NOKMDJDEMDJ* Notify; // 0x20

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_CHANGESCENENOTIFYOBJ__CTOR_OFFSET))(this);
		}

		::System::Int32 get_Priority()
		{
			return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_CHANGESCENENOTIFYOBJ_GET_PRIORITY_OFFSET))(this);
		}

		::System::Void SetMessageConfig()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_CHANGESCENENOTIFYOBJ_SETMESSAGECONFIG_OFFSET))(this);
		}

		::System::Void OnProcess()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_CHANGESCENENOTIFYOBJ_ONPROCESS_OFFSET))(this);
		}

		::System::Void __base_SetMessageConfig()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_CHANGESCENENOTIFYOBJ___BASE_SETMESSAGECONFIG_OFFSET))(this);
		}
	};
}
