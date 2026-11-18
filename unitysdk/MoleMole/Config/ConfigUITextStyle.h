#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/Foundation/MihoyoSerializedScriptableObject.h"
#include "unitysdk/MoleMole/Config/LanguageTextStyleConfig.h"
#include "unitysdk/MoleMole/Config/RubyDefaultParams.h"

namespace MoleMole::Config { class UITextStyleRule; }
namespace MoleMole::Config { class UITextStyleTemplate; }
namespace System::Collections::Generic { template <typename T> class List_1; }

#define MOLEMOLE_CONFIG_CONFIGUITEXTSTYLE__CTOR_OFFSET UNITYSDK_OFFSET(0x165400F0)

namespace MoleMole::Config
{
	inline static constexpr unsigned int ConfigUITextStyle_TypeDefinitionIndex = 72406;

	class ConfigUITextStyle : public ::Foundation::MihoyoSerializedScriptableObject
	{
	public:
		// static const ::System::String* ConfigPath; // 0x0
		::System::Single globalDefaultUnderlineFeather; // 0x58
		::MoleMole::Config::RubyDefaultParams globalDefaultRubyParams; // 0x5C
		::System::Byte _padding0[0x4];
		::System::Collections::Generic::List_1<::MoleMole::Config::LanguageTextStyleConfig>* globalDefaultConfigs; // 0x68
		::System::Collections::Generic::List_1<::MoleMole::Config::UITextStyleTemplate*>* templates; // 0x70
		::System::Collections::Generic::List_1<::MoleMole::Config::UITextStyleRule*>* rules; // 0x78

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_CONFIG_CONFIGUITEXTSTYLE__CTOR_OFFSET))(this);
		}
	};
}
