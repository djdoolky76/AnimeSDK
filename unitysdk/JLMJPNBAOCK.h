#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"
#include "unitysdk/HGCDFKINFPA.h"
class HNLKNLJBHDD;
namespace UnityEngine { class Camera; }
namespace UnityEngine { class Transform; }

#define JLMJPNBAOCK_CTOR_OFFSET UNITYSDK_OFFSET(0xB2508E0)
#define JLMJPNBAOCK_DJMAKDCNPDA_OFFSET UNITYSDK_OFFSET(0xB2508F0)

inline static constexpr unsigned int JLMJPNBAOCK_TypeDefinitionIndex = 79099;

	class JLMJPNBAOCK : public ::System::Object
	{
	public:
		::UnityEngine::Camera* IEMGKEFBPCG; // 0x10
		::UnityEngine::Transform* GKNBCPMJHMN; // 0x18
		::System::Single NJFJFGDCNNK; // 0x20
		::System::Void _ctor(::UnityEngine::Transform* a1, ::UnityEngine::Camera* a2, ::System::Single a3)
		{
			return ((::System::Void(*)(::PVOID, ::UnityEngine::Transform*, ::UnityEngine::Camera*, ::System::Single))((::PBYTE)hIl2Cpp + JLMJPNBAOCK_CTOR_OFFSET))(this, a1, a2, a3);
		}

		::System::Boolean DJMAKDCNPDA(::HNLKNLJBHDD* a1, ::HGCDFKINFPA a2)
		{
			return ((::System::Boolean(*)(::PVOID, ::HNLKNLJBHDD*, ::HGCDFKINFPA))((::PBYTE)hIl2Cpp + JLMJPNBAOCK_DJMAKDCNPDA_OFFSET))(this, a1, a2);
		}

	};
