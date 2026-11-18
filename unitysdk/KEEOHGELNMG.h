#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

namespace System { class String; }

#define KEEOHGELNMG__CTOR_OFFSET UNITYSDK_OFFSET(0x12982680)

inline static constexpr unsigned int KEEOHGELNMG_TypeDefinitionIndex = 75969;

class KEEOHGELNMG : public ::System::Object
{
public:
	::System::String* FPMNAEJBMON; // 0x10
	::System::String* KNHIDDMLDDC; // 0x18
	::System::Boolean JOCDEIDMOBM; // 0x20

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + KEEOHGELNMG__CTOR_OFFSET))(this);
	}
};
