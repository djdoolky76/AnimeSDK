#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/MoleMole/UIControllerContextBase.h"

class ODCBCMEIOGG;

#define MOLEMOLE_UIHARDCOREBOSSBATTLETPREPPAGECONTROLLER_CONTEXT_ONBACKSTREAMING_OFFSET UNITYSDK_OFFSET(0x18C71D70)
#define MOLEMOLE_UIHARDCOREBOSSBATTLETPREPPAGECONTROLLER_CONTEXT__CTOR_OFFSET UNITYSDK_OFFSET(0x18C71F60)
#define MOLEMOLE_UIHARDCOREBOSSBATTLETPREPPAGECONTROLLER_CONTEXT___BASE_ONBACKSTREAMING_OFFSET UNITYSDK_OFFSET(0x18C71FB0)

namespace MoleMole
{
	inline static constexpr unsigned int UIHardCoreBossBattletPrepPageController_Context_TypeDefinitionIndex = 38723;

	class UIHardCoreBossBattletPrepPageController_Context : public ::MoleMole::UIControllerContextBase
	{
	public:
		::System::Int32 bossID; // 0x28
		::System::Int32 modeID; // 0x2C

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UIHARDCOREBOSSBATTLETPREPPAGECONTROLLER_CONTEXT__CTOR_OFFSET))(this);
		}

		::System::Void OnBackStreaming(::ODCBCMEIOGG* backBigScene)
		{
			return ((::System::Void(*)(::PVOID, ::ODCBCMEIOGG*))((::PBYTE)hIl2Cpp + MOLEMOLE_UIHARDCOREBOSSBATTLETPREPPAGECONTROLLER_CONTEXT_ONBACKSTREAMING_OFFSET))(this, backBigScene);
		}

		::System::Void __base_OnBackStreaming(::ODCBCMEIOGG* P0)
		{
			return ((::System::Void(*)(::PVOID, ::ODCBCMEIOGG*))((::PBYTE)hIl2Cpp + MOLEMOLE_UIHARDCOREBOSSBATTLETPREPPAGECONTROLLER_CONTEXT___BASE_ONBACKSTREAMING_OFFSET))(this, P0);
		}
	};
}
