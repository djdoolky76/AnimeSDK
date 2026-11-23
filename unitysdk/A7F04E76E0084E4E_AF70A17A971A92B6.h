#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

namespace System { class String; }

#define A7F04E76E0084E4E_AF70A17A971A92B6_BEF1A483DC858E1C_OFFSET UNITYSDK_OFFSET(0x39B64E0)
#define A7F04E76E0084E4E_AF70A17A971A92B6__CTOR_OFFSET UNITYSDK_OFFSET(0x1666CA0)

inline static constexpr unsigned int A7F04E76E0084E4E_AF70A17A971A92B6_TypeDefinitionIndex = 12565;

class A7F04E76E0084E4E_AF70A17A971A92B6 : public ::System::Object
{
public:
	::System::String* A4448D8050DC0EDF; // 0x10
	::System::String* BA1AB6C45862C632; // 0x18
	::System::String* B6018BB9F7294B44; // 0x20
	::System::Int32 F2AC8B14A3E719AC; // 0x28

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + A7F04E76E0084E4E_AF70A17A971A92B6__CTOR_OFFSET))(this);
	}

	::System::Void BEF1A483DC858E1C()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + A7F04E76E0084E4E_AF70A17A971A92B6_BEF1A483DC858E1C_OFFSET))(this);
	}
};
