#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

namespace System { class String; }

#define A7F04E76E0084E4E_E71E8A3053FFB49F_F3D2CFE112A365A3_OFFSET UNITYSDK_OFFSET(0x39B6380)
#define A7F04E76E0084E4E_E71E8A3053FFB49F__CTOR_OFFSET UNITYSDK_OFFSET(0x1666CA0)

inline static constexpr unsigned int A7F04E76E0084E4E_E71E8A3053FFB49F_TypeDefinitionIndex = 12563;

class A7F04E76E0084E4E_E71E8A3053FFB49F : public ::System::Object
{
public:
	::System::String* A4448D8050DC0EDF; // 0x10
	::System::String* BA1AB6C45862C632; // 0x18
	::System::String* B6018BB9F7294B44; // 0x20
	::System::Int32 F2AC8B14A3E719AC; // 0x28

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + A7F04E76E0084E4E_E71E8A3053FFB49F__CTOR_OFFSET))(this);
	}

	::System::Void F3D2CFE112A365A3()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + A7F04E76E0084E4E_E71E8A3053FFB49F_F3D2CFE112A365A3_OFFSET))(this);
	}
};
