#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

namespace System { class String; }

#define B26CC95B76FBBA13_CONFIG__CTOR_OFFSET UNITYSDK_OFFSET(0x2A95DB0)

inline static constexpr unsigned int B26CC95B76FBBA13_Config_TypeDefinitionIndex = 19167;

class B26CC95B76FBBA13_Config : public ::System::Object
{
public:
	::System::String* key; // 0x10
	::System::Boolean enableAtomDecryption; // 0x18
	::System::Boolean enableManaDecryption; // 0x19

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + B26CC95B76FBBA13_CONFIG__CTOR_OFFSET))(this);
	}
};
