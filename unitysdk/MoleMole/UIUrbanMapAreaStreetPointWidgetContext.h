#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/MoleMole/UIUrbanMapPointWidgetContext.h"
#include "unitysdk/Foundation/AssetPath.h"

class HEDEOMJGEBP;
namespace System { class String; }

#define MOLEMOLE_UIURBANMAPAREASTREETPOINTWIDGETCONTEXT_GETTITLEICON_OFFSET UNITYSDK_OFFSET(0x13BCC150)
#define MOLEMOLE_UIURBANMAPAREASTREETPOINTWIDGETCONTEXT_GETTITLEKEY_OFFSET UNITYSDK_OFFSET(0x13BCC220)
#define MOLEMOLE_UIURBANMAPAREASTREETPOINTWIDGETCONTEXT__CTOR_OFFSET UNITYSDK_OFFSET(0x13BCC0D0)
#define MOLEMOLE_UIURBANMAPAREASTREETPOINTWIDGETCONTEXT___BASE_GETTITLEICON_OFFSET UNITYSDK_OFFSET(0x13BCC370)
#define MOLEMOLE_UIURBANMAPAREASTREETPOINTWIDGETCONTEXT___BASE_GETTITLEKEY_OFFSET UNITYSDK_OFFSET(0x13BCC3A0)

namespace MoleMole
{
	inline static constexpr unsigned int UIUrbanMapAreaStreetPointWidgetContext_TypeDefinitionIndex = 41459;

	class UIUrbanMapAreaStreetPointWidgetContext : public ::MoleMole::UIUrbanMapPointWidgetContext
	{
	public:
		::HEDEOMJGEBP* AreaStreetData; // 0x58

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UIURBANMAPAREASTREETPOINTWIDGETCONTEXT__CTOR_OFFSET))(this);
		}

		::Foundation::AssetPath GetTitleIcon()
		{
			return ((::Foundation::AssetPath(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UIURBANMAPAREASTREETPOINTWIDGETCONTEXT_GETTITLEICON_OFFSET))(this);
		}

		::System::String* GetTitleKey()
		{
			return ((::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UIURBANMAPAREASTREETPOINTWIDGETCONTEXT_GETTITLEKEY_OFFSET))(this);
		}

		::Foundation::AssetPath __base_GetTitleIcon()
		{
			return ((::Foundation::AssetPath(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UIURBANMAPAREASTREETPOINTWIDGETCONTEXT___BASE_GETTITLEICON_OFFSET))(this);
		}

		::System::String* __base_GetTitleKey()
		{
			return ((::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UIURBANMAPAREASTREETPOINTWIDGETCONTEXT___BASE_GETTITLEKEY_OFFSET))(this);
		}
	};
}
