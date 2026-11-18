#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

namespace System { template <typename T> class Action_1; }

#define FDOKNLPCNHO__CTOR_OFFSET UNITYSDK_OFFSET(0x1713AD70)

inline static constexpr unsigned int FDOKNLPCNHO_TypeDefinitionIndex = 80163;

class FDOKNLPCNHO : public ::System::Object
{
public:
	::System::Action_1<::System::Boolean>* KMPEBPPBHGD; // 0x10
	::System::Boolean ADIFFIAPKCN; // 0x18

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + FDOKNLPCNHO__CTOR_OFFSET))(this);
	}
};
