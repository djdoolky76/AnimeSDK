#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/KLNKLOMDIIC.h"
#include "unitysdk/System/Object.h"
#include "unitysdk/UnityEngine/Vector3.h"
namespace System { class Object; }
namespace System { template <typename T1, typename T2, typename T3> class Func_3; }

#define PDPIHJEBAEC___C_CCTOR_OFFSET UNITYSDK_OFFSET(0x1C9A9B10)
#define PDPIHJEBAEC___C_CTOR_OFFSET UNITYSDK_OFFSET(0x1C9A9B40)
#define PDPIHJEBAEC___C__PROJECT_B__3_0_OFFSET UNITYSDK_OFFSET(0x1C9A9B50)

inline static constexpr unsigned int PDPIHJEBAEC___c_TypeDefinitionIndex = 43370;

	class PDPIHJEBAEC___c : public ::System::Object
	{
	public:
		static ::System::Object** StaticGet___9()
		{
			return (::System::Object**)UnitySDK::FromName("", "<>c")->GetStaticField(0x5B9A0);
		}

		static ::System::Func_3<::UnityEngine::Vector3, ::KLNKLOMDIIC, ::System::Single>** StaticGet___9__3_0()
		{
			return (::System::Func_3<::UnityEngine::Vector3, ::KLNKLOMDIIC, ::System::Single>**)UnitySDK::FromName("", "<>c")->GetStaticField(0x5B9A8);
		}

		static ::System::Void _cctor()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + PDPIHJEBAEC___C_CCTOR_OFFSET))();
		}

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + PDPIHJEBAEC___C_CTOR_OFFSET))(this);
		}

		::System::Single _Project_b__3_0(::UnityEngine::Vector3 a1, ::KLNKLOMDIIC a2)
		{
			return ((::System::Single(*)(::PVOID, ::UnityEngine::Vector3, ::KLNKLOMDIIC))((::PBYTE)hIl2Cpp + PDPIHJEBAEC___C__PROJECT_B__3_0_OFFSET))(this, a1, a2);
		}

	};
