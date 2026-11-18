#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/MoleMole/UIControllerContextBase.h"

namespace System { class Object; }
namespace System::Collections::Generic { template <typename T> class List_1; }

#define MOLEMOLE_ZENKOVGEMDEBUFFINFODIALOGCONTEXT_INITBYACTIVEEFFECTS_OFFSET UNITYSDK_OFFSET(0x17267C50)
#define MOLEMOLE_ZENKOVGEMDEBUFFINFODIALOGCONTEXT_INITBYGEMS_OFFSET UNITYSDK_OFFSET(0x17267B00)
#define MOLEMOLE_ZENKOVGEMDEBUFFINFODIALOGCONTEXT__CTOR_OFFSET UNITYSDK_OFFSET(0x17268170)

namespace MoleMole
{
	inline static constexpr unsigned int ZenkovGemDebuffInfoDialogContext_TypeDefinitionIndex = 61030;

	class ZenkovGemDebuffInfoDialogContext : public ::MoleMole::UIControllerContextBase
	{
	public:
		::System::Collections::Generic::List_1<::System::Object*>* DebuffList; // 0x28
		::System::Collections::Generic::List_1<::System::Int32>* ItemList; // 0x30

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_ZENKOVGEMDEBUFFINFODIALOGCONTEXT__CTOR_OFFSET))(this);
		}

		::System::Void InitByGems()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_ZENKOVGEMDEBUFFINFODIALOGCONTEXT_INITBYGEMS_OFFSET))(this);
		}

		::System::Void InitByActiveEffects()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_ZENKOVGEMDEBUFFINFODIALOGCONTEXT_INITBYACTIVEEFFECTS_OFFSET))(this);
		}
	};
}
