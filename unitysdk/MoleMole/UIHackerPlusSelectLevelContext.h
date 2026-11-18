#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/MoleMole/UIControllerContextBase.h"

class ODCBCMEIOGG;

#define MOLEMOLE_UIHACKERPLUSSELECTLEVELCONTEXT_ONBACKSTREAMING_OFFSET UNITYSDK_OFFSET(0x1A27B500)
#define MOLEMOLE_UIHACKERPLUSSELECTLEVELCONTEXT__CTOR_OFFSET UNITYSDK_OFFSET(0x1A27B570)
#define MOLEMOLE_UIHACKERPLUSSELECTLEVELCONTEXT___BASE_ONBACKSTREAMING_OFFSET UNITYSDK_OFFSET(0x1A27B5C0)

namespace MoleMole
{
	inline static constexpr unsigned int UIHackerPlusSelectLevelContext_TypeDefinitionIndex = 79783;

	class UIHackerPlusSelectLevelContext : public ::MoleMole::UIControllerContextBase
	{
	public:
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UIHACKERPLUSSELECTLEVELCONTEXT__CTOR_OFFSET))(this);
		}

		::System::Void OnBackStreaming(::ODCBCMEIOGG* backBigScene)
		{
			return ((::System::Void(*)(::PVOID, ::ODCBCMEIOGG*))((::PBYTE)hIl2Cpp + MOLEMOLE_UIHACKERPLUSSELECTLEVELCONTEXT_ONBACKSTREAMING_OFFSET))(this, backBigScene);
		}

		::System::Void __base_OnBackStreaming(::ODCBCMEIOGG* P0)
		{
			return ((::System::Void(*)(::PVOID, ::ODCBCMEIOGG*))((::PBYTE)hIl2Cpp + MOLEMOLE_UIHACKERPLUSSELECTLEVELCONTEXT___BASE_ONBACKSTREAMING_OFFSET))(this, P0);
		}
	};
}
