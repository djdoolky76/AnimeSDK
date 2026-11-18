#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/MIKOMFIBMBN.h"
#include "unitysdk/System/Object.h"

namespace System { class String; }
namespace System::Collections::Generic { template <typename T> class List_1; }

#define MOLEMOLE_UIFADECONFIG_GGMFFJMCJLI_OFFSET UNITYSDK_OFFSET(0x18086740)
#define MOLEMOLE_UIFADECONFIG_NFOADICFMBL_OFFSET UNITYSDK_OFFSET(0x180865C0)
#define MOLEMOLE_UIFADECONFIG__CTOR_OFFSET UNITYSDK_OFFSET(0x180865B0)

namespace MoleMole
{
	inline static constexpr unsigned int UIFadeConfig_TypeDefinitionIndex = 58906;

	class UIFadeConfig : public ::System::Object
	{
	public:
		::System::String* fadeIn; // 0x10
		::System::String* fadeOut; // 0x18
		::System::Collections::Generic::List_1<::System::Object*>* overrideFadeInAnim; // 0x20
		::System::Collections::Generic::List_1<::System::Object*>* overrideFadeOutAnim; // 0x28
		::System::Boolean ignoreFading; // 0x30
		::System::Byte _padding0[0x3];
		::System::Single ignoreFadeMaskDuration; // 0x34

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UIFADECONFIG__CTOR_OFFSET))(this);
		}

		::System::String* NFOADICFMBL(::MIKOMFIBMBN KIAGKPDIDDH)
		{
			return ((::System::String*(*)(::PVOID, ::MIKOMFIBMBN))((::PBYTE)hIl2Cpp + MOLEMOLE_UIFADECONFIG_NFOADICFMBL_OFFSET))(this, KIAGKPDIDDH);
		}

		::System::String* GGMFFJMCJLI(::MIKOMFIBMBN KDEHMPGOCEP)
		{
			return ((::System::String*(*)(::PVOID, ::MIKOMFIBMBN))((::PBYTE)hIl2Cpp + MOLEMOLE_UIFADECONFIG_GGMFFJMCJLI_OFFSET))(this, KDEHMPGOCEP);
		}
	};
}
