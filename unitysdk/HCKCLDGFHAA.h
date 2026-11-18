#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

namespace System { class String; }

#define HCKCLDGFHAA__CTOR_OFFSET UNITYSDK_OFFSET(0x17AEC290)

inline static constexpr unsigned int HCKCLDGFHAA_TypeDefinitionIndex = 80600;

class HCKCLDGFHAA : public ::System::Object
{
public:
	::Il2CppArray<::System::String*>* EGDEMPIKJAD; // 0x10
	::System::Int32 KNHKFCBJHAI; // 0x18
	::System::Int32 HHGEFHFGFGG; // 0x1C

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + HCKCLDGFHAA__CTOR_OFFSET))(this);
	}
};
