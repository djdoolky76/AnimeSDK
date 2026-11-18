#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

namespace System::Collections::Generic { template <typename T> class List_1; }
namespace UnityEngine { class Behaviour; }
namespace UnityEngine { class GameObject; }
namespace UnityEngine { class ParticleSystem; }
namespace UnityEngine { class Renderer; }

#define KCAGFFJBMPE__CTOR_OFFSET UNITYSDK_OFFSET(0x16330880)

inline static constexpr unsigned int KCAGFFJBMPE_TypeDefinitionIndex = 80798;

class KCAGFFJBMPE : public ::System::Object
{
public:
	::UnityEngine::GameObject* JEIDPPCEHLD; // 0x10
	::System::Collections::Generic::List_1<::UnityEngine::Behaviour*>* FKCIFPNBPLM; // 0x18
	::System::Collections::Generic::List_1<::UnityEngine::Renderer*>* OJKLOBECFIO; // 0x20
	::System::Collections::Generic::List_1<::UnityEngine::ParticleSystem*>* AMHPLAJLCPC; // 0x28

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + KCAGFFJBMPE__CTOR_OFFSET))(this);
	}
};
