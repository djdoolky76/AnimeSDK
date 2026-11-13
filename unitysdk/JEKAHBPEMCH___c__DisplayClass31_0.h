#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"
#include "unitysdk/UnityEngine/Vector3.h"
class DNFFEFPKDPC;
class JEKAHBPEMCH;
namespace System { template <typename T1, typename T2, typename T3> class Func_3; }
namespace System { template <typename T1, typename T2> class Func_2; }

#define JEKAHBPEMCH___C__DISPLAYCLASS31_0_CTOR_OFFSET UNITYSDK_OFFSET(0x13079150)
#define JEKAHBPEMCH___C__DISPLAYCLASS31_0__TRYFINDOCCLUDEDLANDINGTOWARDCAMERA_B__0_OFFSET UNITYSDK_OFFSET(0x13080760)

inline static constexpr unsigned int JEKAHBPEMCH___c__DisplayClass31_0_TypeDefinitionIndex = 79038;

	class JEKAHBPEMCH___c__DisplayClass31_0 : public ::System::Object
	{
	public:
		::System::Func_3<::UnityEngine::Vector3, ::UnityEngine::Vector3, ::System::Boolean>* validate; // 0x10
		::System::Func_2<::DNFFEFPKDPC*, ::System::Boolean>* __9__0; // 0x18
		::JEKAHBPEMCH* __4__this; // 0x20
		::System::Int32 ignoreY; // 0x28
		::UnityEngine::Vector3 playerPos; // 0x2C
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + JEKAHBPEMCH___C__DISPLAYCLASS31_0_CTOR_OFFSET))(this);
		}

		::System::Boolean _TryFindOccludedLandingTowardCamera_b__0(::DNFFEFPKDPC* a1)
		{
			return ((::System::Boolean(*)(::PVOID, ::DNFFEFPKDPC*))((::PBYTE)hIl2Cpp + JEKAHBPEMCH___C__DISPLAYCLASS31_0__TRYFINDOCCLUDEDLANDINGTOWARDCAMERA_B__0_OFFSET))(this, a1);
		}

	};
