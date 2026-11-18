#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/KAPINBBMLDJ.h"
#include "unitysdk/MoleMole/GetItemListShow.h"

class HJFOMLOOGBE;

#define MOLEMOLE_GETITEMLISTEXTRASHOW_ONPROCESS_OFFSET UNITYSDK_OFFSET(0x12B47ED0)
#define MOLEMOLE_GETITEMLISTEXTRASHOW_SHOWNATIVEREWARDPOP_OFFSET UNITYSDK_OFFSET(0x12B47F50)
#define MOLEMOLE_GETITEMLISTEXTRASHOW__CTOR_OFFSET UNITYSDK_OFFSET(0x12B47EC0)
#define MOLEMOLE_GETITEMLISTEXTRASHOW___BASE_ONPROCESS_OFFSET UNITYSDK_OFFSET(0x12B48320)

namespace MoleMole
{
	inline static constexpr unsigned int GetItemListExtraShow_TypeDefinitionIndex = 59232;

	class GetItemListExtraShow : public ::MoleMole::GetItemListShow
	{
	public:
		::KAPINBBMLDJ reason; // 0x78
		::System::UInt32 extraData; // 0x7C

		::System::Void _ctor(::HJFOMLOOGBE* context)
		{
			return ((::System::Void(*)(::PVOID, ::HJFOMLOOGBE*))((::PBYTE)hIl2Cpp + MOLEMOLE_GETITEMLISTEXTRASHOW__CTOR_OFFSET))(this, context);
		}

		::System::Void OnProcess()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_GETITEMLISTEXTRASHOW_ONPROCESS_OFFSET))(this);
		}

		::System::Void ShowNativeRewardPop()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_GETITEMLISTEXTRASHOW_SHOWNATIVEREWARDPOP_OFFSET))(this);
		}

		::System::Void __base_OnProcess()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_GETITEMLISTEXTRASHOW___BASE_ONPROCESS_OFFSET))(this);
		}
	};
}
