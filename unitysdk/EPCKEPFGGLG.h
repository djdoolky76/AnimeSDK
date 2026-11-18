#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

namespace System { class String; }

#define EPCKEPFGGLG__CTOR_OFFSET UNITYSDK_OFFSET(0x1427B9C0)

inline static constexpr unsigned int EPCKEPFGGLG_TypeDefinitionIndex = 59606;

class EPCKEPFGGLG : public ::System::Object
{
public:
	::System::String* JFKGGDBBEDG; // 0x10
	::System::String* AGMHFOFMILH; // 0x18
	::System::String* HHHDGCECMDB; // 0x20
	::System::String* DELDLFAGJEJ; // 0x28

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + EPCKEPFGGLG__CTOR_OFFSET))(this);
	}
};
