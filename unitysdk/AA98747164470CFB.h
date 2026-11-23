#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/E0B58AD87D1F143C/BD7D9CB727F92D8C.h"
#include "unitysdk/E379DE61A548837D.h"
#include "unitysdk/FB15B066A5E7656D.h"
#include "unitysdk/UnityEngine/Vector3.h"

#define AA98747164470CFB__CTOR_OFFSET UNITYSDK_OFFSET(0x16514A0)

inline static constexpr unsigned int AA98747164470CFB_TypeDefinitionIndex = 7169;

class AA98747164470CFB : public ::E379DE61A548837D
{
public:
	::System::UInt32 EDB42C4C835AAD90; // 0x38
	::System::Byte _padding0[0x4];
	::System::UInt64 F5EA66BAD07CE74B; // 0x40
	::FB15B066A5E7656D A81F7151FC46C7F0; // 0x48
	::UnityEngine::Vector3 B20ADE0D5960BD32; // 0x50
	::UnityEngine::Vector3 F6B166DED9C9D77A; // 0x5C
	::E0B58AD87D1F143C::BD7D9CB727F92D8C B3C03A753F48CDBB; // 0x68

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + AA98747164470CFB__CTOR_OFFSET))(this);
	}
};
