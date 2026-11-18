#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/MoleMole/UIControllerContextBase.h"

class ODCBCMEIOGG;

#define MOLEMOLE_UIPINBALLMAINPAGECONTROLLER_CONTEXT_ONBACKSTREAMING_OFFSET UNITYSDK_OFFSET(0x17449970)
#define MOLEMOLE_UIPINBALLMAINPAGECONTROLLER_CONTEXT__CTOR_OFFSET UNITYSDK_OFFSET(0x17449B20)
#define MOLEMOLE_UIPINBALLMAINPAGECONTROLLER_CONTEXT___BASE_ONBACKSTREAMING_OFFSET UNITYSDK_OFFSET(0x17449B70)

namespace MoleMole
{
	inline static constexpr unsigned int UIPinballMainPageController_Context_TypeDefinitionIndex = 59543;

	class UIPinballMainPageController_Context : public ::MoleMole::UIControllerContextBase
	{
	public:
		::System::Int32 LevelID; // 0x28

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UIPINBALLMAINPAGECONTROLLER_CONTEXT__CTOR_OFFSET))(this);
		}

		::System::Void OnBackStreaming(::ODCBCMEIOGG* backBigScene)
		{
			return ((::System::Void(*)(::PVOID, ::ODCBCMEIOGG*))((::PBYTE)hIl2Cpp + MOLEMOLE_UIPINBALLMAINPAGECONTROLLER_CONTEXT_ONBACKSTREAMING_OFFSET))(this, backBigScene);
		}

		::System::Void __base_OnBackStreaming(::ODCBCMEIOGG* P0)
		{
			return ((::System::Void(*)(::PVOID, ::ODCBCMEIOGG*))((::PBYTE)hIl2Cpp + MOLEMOLE_UIPINBALLMAINPAGECONTROLLER_CONTEXT___BASE_ONBACKSTREAMING_OFFSET))(this, P0);
		}
	};
}
