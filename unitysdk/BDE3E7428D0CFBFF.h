#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/B3772AE449362DA5.h"

class E534C31BF9707B06;
class F0E97AE51AE3334A;
namespace UnityEngine { class Collider; }
namespace UnityEngine { class GameObject; }
namespace UnityEngine { class Transform; }

#define BDE3E7428D0CFBFF_A1E97155B145443C_OFFSET UNITYSDK_OFFSET(0x2239CA0)
#define BDE3E7428D0CFBFF_A765A1D14770A303_OFFSET UNITYSDK_OFFSET(0x2239C30)
#define BDE3E7428D0CFBFF_F2ED2B7804101269_OFFSET UNITYSDK_OFFSET(0x2239DE0)
#define BDE3E7428D0CFBFF__CTOR_OFFSET UNITYSDK_OFFSET(0x16591D0)

inline static constexpr unsigned int BDE3E7428D0CFBFF_TypeDefinitionIndex = 9210;

class BDE3E7428D0CFBFF : public ::B3772AE449362DA5
{
public:
	::F0E97AE51AE3334A* E14BAC98F5FBFA0D; // 0x70

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + BDE3E7428D0CFBFF__CTOR_OFFSET))(this);
	}

	::System::Void A765A1D14770A303()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + BDE3E7428D0CFBFF_A765A1D14770A303_OFFSET))(this);
	}

	::UnityEngine::Collider* F2ED2B7804101269(::UnityEngine::GameObject* A86A90C31A146E9C)
	{
		return ((::UnityEngine::Collider*(*)(::PVOID, ::UnityEngine::GameObject*))((::PBYTE)hIl2Cpp + BDE3E7428D0CFBFF_F2ED2B7804101269_OFFSET))(this, A86A90C31A146E9C);
	}

	::System::Void A1E97155B145443C(::E534C31BF9707B06* ACDE58E97E37D13C, ::UnityEngine::Transform* A525E46A9CD93677)
	{
		return ((::System::Void(*)(::PVOID, ::E534C31BF9707B06*, ::UnityEngine::Transform*))((::PBYTE)hIl2Cpp + BDE3E7428D0CFBFF_A1E97155B145443C_OFFSET))(this, ACDE58E97E37D13C, A525E46A9CD93677);
	}
};
