#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/MoleMole/DisplayMessageBase.h"

class FDJDLIJPGDP;
class MDIGEHANODA;

#define MOLEMOLE_GENERALTOPTIPSHOW_GET_CONFIG_OFFSET UNITYSDK_OFFSET(0x162CF3D0)
#define MOLEMOLE_GENERALTOPTIPSHOW_GET_ISTRIGGER_OFFSET UNITYSDK_OFFSET(0x162CEE60)
#define MOLEMOLE_GENERALTOPTIPSHOW_ONPROCESS_OFFSET UNITYSDK_OFFSET(0x162CEE20)
#define MOLEMOLE_GENERALTOPTIPSHOW_SETMESSAGECONFIG_OFFSET UNITYSDK_OFFSET(0x162CEDC0)
#define MOLEMOLE_GENERALTOPTIPSHOW__CTOR_OFFSET UNITYSDK_OFFSET(0x162CECB0)
#define MOLEMOLE_GENERALTOPTIPSHOW___BASE_GET_ISTRIGGER_OFFSET UNITYSDK_OFFSET(0x162CF3E0)
#define MOLEMOLE_GENERALTOPTIPSHOW___BASE_SETMESSAGECONFIG_OFFSET UNITYSDK_OFFSET(0x162CF3F0)

namespace MoleMole
{
	inline static constexpr unsigned int GeneralTopTipShow_TypeDefinitionIndex = 64102;

	class GeneralTopTipShow : public ::MoleMole::DisplayMessageBase
	{
	public:
		::MDIGEHANODA* _Config_k__BackingField; // 0x28

		::System::Void _ctor(::FDJDLIJPGDP* context)
		{
			return ((::System::Void(*)(::PVOID, ::FDJDLIJPGDP*))((::PBYTE)hIl2Cpp + MOLEMOLE_GENERALTOPTIPSHOW__CTOR_OFFSET))(this, context);
		}

		::System::Void SetMessageConfig()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_GENERALTOPTIPSHOW_SETMESSAGECONFIG_OFFSET))(this);
		}

		::System::Void OnProcess()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_GENERALTOPTIPSHOW_ONPROCESS_OFFSET))(this);
		}

		::System::Boolean get_IsTrigger()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_GENERALTOPTIPSHOW_GET_ISTRIGGER_OFFSET))(this);
		}

		::MDIGEHANODA* get_Config()
		{
			return ((::MDIGEHANODA*(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_GENERALTOPTIPSHOW_GET_CONFIG_OFFSET))(this);
		}

		::System::Boolean __base_get_IsTrigger()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_GENERALTOPTIPSHOW___BASE_GET_ISTRIGGER_OFFSET))(this);
		}

		::System::Void __base_SetMessageConfig()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_GENERALTOPTIPSHOW___BASE_SETMESSAGECONFIG_OFFSET))(this);
		}
	};
}
