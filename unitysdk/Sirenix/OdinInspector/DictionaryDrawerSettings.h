#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/Sirenix/OdinInspector/DictionaryDisplayOptions.h"
#include "unitysdk/System/Attribute.h"

namespace System { class String; }

#define SIRENIX_ODININSPECTOR_DICTIONARYDRAWERSETTINGS__CTOR_OFFSET UNITYSDK_OFFSET(0x1FB7FFD0)

namespace Sirenix::OdinInspector
{
	inline static constexpr unsigned int DictionaryDrawerSettings_TypeDefinitionIndex = 7285;

	class DictionaryDrawerSettings : public ::System::Attribute
	{
	public:
		::System::String* KeyLabel; // 0x10
		::System::String* ExpandedKey; // 0x18
		::System::String* ValueLabel; // 0x20
		::Sirenix::OdinInspector::DictionaryDisplayOptions DisplayMode; // 0x28
		::System::Boolean IsReadOnly; // 0x2C
		::System::Byte _padding0[0x3];
		::System::Int32 ExpandedLevel; // 0x30

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + SIRENIX_ODININSPECTOR_DICTIONARYDRAWERSETTINGS__CTOR_OFFSET))(this);
		}
	};
}
