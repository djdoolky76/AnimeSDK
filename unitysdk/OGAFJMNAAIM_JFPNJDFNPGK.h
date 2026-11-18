#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/ValueType.h"
#include "unitysdk/UnityEngine/Vector3.h"

class MIKBKMMKEML;
class OGAFJMNAAIM;
namespace UnityEngine { class GameObject; }

#define OGAFJMNAAIM_JFPNJDFNPGK_JJEJHGOJOII_OFFSET UNITYSDK_OFFSET(0x97E760)

inline static constexpr unsigned int OGAFJMNAAIM_JFPNJDFNPGK_TypeDefinitionIndex = 96664;

struct alignas(8) OGAFJMNAAIM_JFPNJDFNPGK
{
	::System::Int32 MGMDLMBEDJF; // 0x10
	::System::Byte _padding0[0x4];
	::UnityEngine::GameObject* NJOAJLDJCCJ; // 0x18
	::MIKBKMMKEML* INAMJNDFHNO; // 0x20
	::UnityEngine::Vector3 CKPGOKHECCH; // 0x28
	::System::Byte _padding1[0x4];
	::OGAFJMNAAIM* LMCAGNEBCDN; // 0x38

	::System::Void JJEJHGOJOII()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + OGAFJMNAAIM_JFPNJDFNPGK_JJEJHGOJOII_OFFSET))(this);
	}
};
