#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/IEEBMFMLPCE.h"
#include "unitysdk/System/Object.h"

namespace System { class String; }

#define FBBLNKHAEJC__CTOR_OFFSET UNITYSDK_OFFSET(0x16173090)

inline static constexpr unsigned int FBBLNKHAEJC_TypeDefinitionIndex = 86053;

class FBBLNKHAEJC : public ::System::Object
{
public:
	::System::String* OLOMNNBBHPJ; // 0x10
	::IEEBMFMLPCE AGEFPKLIFGB; // 0x18
	::System::Boolean DOFCLPCLHOJ; // 0x1C

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + FBBLNKHAEJC__CTOR_OFFSET))(this);
	}
};
