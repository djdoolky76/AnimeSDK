#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/MoleMole/Config/LanguageFontSizeConfig.h"
#include "unitysdk/System/Object.h"

namespace System { class String; }
namespace System::Collections::Generic { template <typename T> class List_1; }

#define MOLEMOLE_CONFIG_LANGUAGEFONTSIZEADAPTIVE_FFEAFPAKNGJ_OFFSET UNITYSDK_OFFSET(0x1B44D920)
#define MOLEMOLE_CONFIG_LANGUAGEFONTSIZEADAPTIVE_GET_EDITBUTTONTEXT_OFFSET UNITYSDK_OFFSET(0x1B44D890)
#define MOLEMOLE_CONFIG_LANGUAGEFONTSIZEADAPTIVE_GET_ISEDITLOCKED_OFFSET UNITYSDK_OFFSET(0x1B44D880)
#define MOLEMOLE_CONFIG_LANGUAGEFONTSIZEADAPTIVE__CTOR_OFFSET UNITYSDK_OFFSET(0x1B44D910)

namespace MoleMole::Config
{
	inline static constexpr unsigned int LanguageFontSizeAdaptive_TypeDefinitionIndex = 45400;

	class LanguageFontSizeAdaptive : public ::System::Object
	{
	public:
		::System::Boolean _isEditing; // 0x10
		::System::Byte _padding0[0x7];
		::System::String* usageName; // 0x18
		::System::Boolean forceBestFit; // 0x20
		::System::Byte _padding1[0x7];
		::System::Collections::Generic::List_1<::MoleMole::Config::LanguageFontSizeConfig>* configs; // 0x28

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_CONFIG_LANGUAGEFONTSIZEADAPTIVE__CTOR_OFFSET))(this);
		}

		::System::Boolean get_IsEditLocked()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_CONFIG_LANGUAGEFONTSIZEADAPTIVE_GET_ISEDITLOCKED_OFFSET))(this);
		}

		::System::String* get_EditButtonText()
		{
			return ((::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_CONFIG_LANGUAGEFONTSIZEADAPTIVE_GET_EDITBUTTONTEXT_OFFSET))(this);
		}

		::System::Void FFEAFPAKNGJ()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_CONFIG_LANGUAGEFONTSIZEADAPTIVE_FFEAFPAKNGJ_OFFSET))(this);
		}
	};
}
