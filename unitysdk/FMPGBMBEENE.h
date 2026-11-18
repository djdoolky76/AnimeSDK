#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

namespace System { class Action; }
namespace System { class String; }

#define FMPGBMBEENE__CTOR_OFFSET UNITYSDK_OFFSET(0x179B6F00)

inline static constexpr unsigned int FMPGBMBEENE_TypeDefinitionIndex = 63110;

class FMPGBMBEENE : public ::System::Object
{
public:
	::System::Action* DPLOHNHEHOM; // 0x10
	::System::String* OLHANDPEFNE; // 0x18
	::System::Single MDKJDFOLOOD; // 0x20

	::System::Void _ctor(::System::Single BJFNJHGAADJ, ::System::Action* GLBEHDHFEOE, ::System::String* GOMCGPKAKPO)
	{
		return ((::System::Void(*)(::PVOID, ::System::Single, ::System::Action*, ::System::String*))((::PBYTE)hIl2Cpp + FMPGBMBEENE__CTOR_OFFSET))(this, BJFNJHGAADJ, GLBEHDHFEOE, GOMCGPKAKPO);
	}
};
