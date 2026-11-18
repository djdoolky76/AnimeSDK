#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/PIOMHDMPINF.h"

namespace UnityEngine { class GameObject; }
namespace UnityEngine { class Transform; }

#define NJPANDKOIDJ_AEEIHGDOFOA_LBJEOHBBBPN_OFFSET UNITYSDK_OFFSET(0x10D7C940)
#define NJPANDKOIDJ_AEEIHGDOFOA__CTOR_OFFSET UNITYSDK_OFFSET(0x10D7CA90)

inline static constexpr unsigned int NJPANDKOIDJ_AEEIHGDOFOA_TypeDefinitionIndex = 58747;

class NJPANDKOIDJ_AEEIHGDOFOA : public ::PIOMHDMPINF
{
public:
	::UnityEngine::GameObject* DCBNPHMKJOM; // 0x10
	::UnityEngine::Transform* ODALDIOFMPH; // 0x18

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + NJPANDKOIDJ_AEEIHGDOFOA__CTOR_OFFSET))(this);
	}

	::System::Boolean LBJEOHBBBPN()
	{
		return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + NJPANDKOIDJ_AEEIHGDOFOA_LBJEOHBBBPN_OFFSET))(this);
	}
};
