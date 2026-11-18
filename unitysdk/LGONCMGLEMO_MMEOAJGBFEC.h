#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

namespace System { class String; }
namespace System::Text::RegularExpressions { class Match; }

#define LGONCMGLEMO_MMEOAJGBFEC_OPMBGGHIIJB_OFFSET UNITYSDK_OFFSET(0x12A417E0)
#define LGONCMGLEMO_MMEOAJGBFEC__CTOR_OFFSET UNITYSDK_OFFSET(0x12A417D0)

inline static constexpr unsigned int LGONCMGLEMO_MMEOAJGBFEC_TypeDefinitionIndex = 70977;

class LGONCMGLEMO_MMEOAJGBFEC : public ::System::Object
{
public:
	::System::Boolean JMPBLJIAFOF; // 0x10

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + LGONCMGLEMO_MMEOAJGBFEC__CTOR_OFFSET))(this);
	}

	::System::String* OPMBGGHIIJB(::System::Text::RegularExpressions::Match* PELAJIFDIPN)
	{
		return ((::System::String*(*)(::PVOID, ::System::Text::RegularExpressions::Match*))((::PBYTE)hIl2Cpp + LGONCMGLEMO_MMEOAJGBFEC_OPMBGGHIIJB_OFFSET))(this, PELAJIFDIPN);
	}
};
