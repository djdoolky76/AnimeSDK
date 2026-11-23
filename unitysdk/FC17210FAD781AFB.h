#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/E0B58AD87D1F143C/BD7D9CB727F92D8C.h"
#include "unitysdk/E379DE61A548837D.h"
#include "unitysdk/FB15B066A5E7656D.h"
#include "unitysdk/UnityEngine/Vector3.h"

#define FC17210FAD781AFB__CTOR_OFFSET UNITYSDK_OFFSET(0x16514A0)

inline static constexpr unsigned int FC17210FAD781AFB_TypeDefinitionIndex = 6900;

class FC17210FAD781AFB : public ::E379DE61A548837D
{
public:
	::System::UInt64 F5EA66BAD07CE74B; // 0x38
	::FB15B066A5E7656D A81F7151FC46C7F0; // 0x40
	::UnityEngine::Vector3 B20ADE0D5960BD32; // 0x48
	::UnityEngine::Vector3 F6B166DED9C9D77A; // 0x54
	::E0B58AD87D1F143C::BD7D9CB727F92D8C B3C03A753F48CDBB; // 0x60

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + FC17210FAD781AFB__CTOR_OFFSET))(this);
	}
};
