#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/E8C1635F85E9BC30.h"

namespace System { class String; }
namespace System::Reflection { class F60CD5AA5C2080DF; }

#define FD14828E4F0219C7_BA2716ADA4CE0956_OFFSET UNITYSDK_OFFSET(0x17D5EA0)
#define FD14828E4F0219C7__CTOR_1_OFFSET UNITYSDK_OFFSET(0x3C314E0)
#define FD14828E4F0219C7__CTOR_OFFSET UNITYSDK_OFFSET(0x3C31450)

inline static constexpr unsigned int FD14828E4F0219C7_TypeDefinitionIndex = 11512;

class FD14828E4F0219C7 : public ::E8C1635F85E9BC30
{
public:
	::System::String* A9DFDE835E8FE4EF; // 0x10
	::System::Reflection::F60CD5AA5C2080DF* A75AF42F3D144A0B; // 0x18

	::System::Void _ctor(::System::String* F79B4D487F303AB2, ::System::Reflection::F60CD5AA5C2080DF* ED935769C15179CF)
	{
		return ((::System::Void(*)(::PVOID, ::System::String*, ::System::Reflection::F60CD5AA5C2080DF*))((::PBYTE)hIl2Cpp + FD14828E4F0219C7__CTOR_OFFSET))(this, F79B4D487F303AB2, ED935769C15179CF);
	}

	::System::String* BA2716ADA4CE0956()
	{
		return ((::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + FD14828E4F0219C7_BA2716ADA4CE0956_OFFSET))(this);
	}

	::System::Void _ctor_1(::System::String* F79B4D487F303AB2)
	{
		return ((::System::Void(*)(::PVOID, ::System::String*))((::PBYTE)hIl2Cpp + FD14828E4F0219C7__CTOR_1_OFFSET))(this, F79B4D487F303AB2);
	}
};
