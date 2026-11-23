#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/E379DE61A548837D.h"

namespace UnityEngine { class Transform; }

#define FA2E421B1308BBDA__CTOR_OFFSET UNITYSDK_OFFSET(0x16514A0)

inline static constexpr unsigned int FA2E421B1308BBDA_TypeDefinitionIndex = 8663;

class FA2E421B1308BBDA : public ::E379DE61A548837D
{
public:
	::UnityEngine::Transform* AE1DFF7604D16FF3; // 0x38

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + FA2E421B1308BBDA__CTOR_OFFSET))(this);
	}
};
