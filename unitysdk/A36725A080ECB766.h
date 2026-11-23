#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/B3772AE449362DA5.h"

class B1A7D2A2308DC606;
class E534C31BF9707B06;
namespace UnityEngine { class Collider; }
namespace UnityEngine { class GameObject; }
namespace UnityEngine { class Transform; }

#define A36725A080ECB766_A1E97155B145443C_OFFSET UNITYSDK_OFFSET(0x2053EB0)
#define A36725A080ECB766_A765A1D14770A303_OFFSET UNITYSDK_OFFSET(0x2053E40)
#define A36725A080ECB766_F2ED2B7804101269_OFFSET UNITYSDK_OFFSET(0x2053FF0)
#define A36725A080ECB766__CTOR_OFFSET UNITYSDK_OFFSET(0x16591D0)

inline static constexpr unsigned int A36725A080ECB766_TypeDefinitionIndex = 8399;

class A36725A080ECB766 : public ::B3772AE449362DA5
{
public:
	::B1A7D2A2308DC606* E14BAC98F5FBFA0D; // 0x70

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + A36725A080ECB766__CTOR_OFFSET))(this);
	}

	::System::Void A1E97155B145443C(::E534C31BF9707B06* ACDE58E97E37D13C, ::UnityEngine::Transform* A525E46A9CD93677)
	{
		return ((::System::Void(*)(::PVOID, ::E534C31BF9707B06*, ::UnityEngine::Transform*))((::PBYTE)hIl2Cpp + A36725A080ECB766_A1E97155B145443C_OFFSET))(this, ACDE58E97E37D13C, A525E46A9CD93677);
	}

	::System::Void A765A1D14770A303()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + A36725A080ECB766_A765A1D14770A303_OFFSET))(this);
	}

	::UnityEngine::Collider* F2ED2B7804101269(::UnityEngine::GameObject* A86A90C31A146E9C)
	{
		return ((::UnityEngine::Collider*(*)(::PVOID, ::UnityEngine::GameObject*))((::PBYTE)hIl2Cpp + A36725A080ECB766_F2ED2B7804101269_OFFSET))(this, A86A90C31A146E9C);
	}
};
