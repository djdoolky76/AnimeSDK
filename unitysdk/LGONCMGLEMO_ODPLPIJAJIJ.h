#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

namespace System { class String; }
namespace System::Text::RegularExpressions { class Match; }

#define LGONCMGLEMO_ODPLPIJAJIJ_JOPLHPLAGOM_OFFSET UNITYSDK_OFFSET(0x14DAC7A0)
#define LGONCMGLEMO_ODPLPIJAJIJ__CTOR_OFFSET UNITYSDK_OFFSET(0x14DAC790)

inline static constexpr unsigned int LGONCMGLEMO_ODPLPIJAJIJ_TypeDefinitionIndex = 70974;

class LGONCMGLEMO_ODPLPIJAJIJ : public ::System::Object
{
public:
	::System::Boolean JMPBLJIAFOF; // 0x10

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + LGONCMGLEMO_ODPLPIJAJIJ__CTOR_OFFSET))(this);
	}

	::System::String* JOPLHPLAGOM(::System::Text::RegularExpressions::Match* PELAJIFDIPN)
	{
		return ((::System::String*(*)(::PVOID, ::System::Text::RegularExpressions::Match*))((::PBYTE)hIl2Cpp + LGONCMGLEMO_ODPLPIJAJIJ_JOPLHPLAGOM_OFFSET))(this, PELAJIFDIPN);
	}
};
