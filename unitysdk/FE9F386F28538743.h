#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

namespace System { class Type; }

#define FE9F386F28538743_F217A4842D0BF520_OFFSET UNITYSDK_OFFSET(0x3F2BB60)

inline static constexpr unsigned int FE9F386F28538743_TypeDefinitionIndex = 20066;

class FE9F386F28538743 : public ::System::Object
{
public:
	static ::System::Boolean F217A4842D0BF520(::System::Type* BBCFEC7DB309E927)
	{
		return ((::System::Boolean(*)(::System::Type*))((::PBYTE)hIl2Cpp + FE9F386F28538743_F217A4842D0BF520_OFFSET))(BBCFEC7DB309E927);
	}
};
