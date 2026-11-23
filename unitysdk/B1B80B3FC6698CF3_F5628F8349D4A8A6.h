#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"
#include "unitysdk/UnityEngine/Vector3.h"

namespace System { template <typename T1, typename T2> class Func_2; }
namespace UnityEngine { class Transform; }

#define B1B80B3FC6698CF3_F5628F8349D4A8A6_EE583A582415B1C0_OFFSET UNITYSDK_OFFSET(0x2977ED0)
#define B1B80B3FC6698CF3_F5628F8349D4A8A6__CCTOR_OFFSET UNITYSDK_OFFSET(0x2978340)
#define B1B80B3FC6698CF3_F5628F8349D4A8A6__CTOR_OFFSET UNITYSDK_OFFSET(0x1666CA0)

inline static constexpr unsigned int B1B80B3FC6698CF3_F5628F8349D4A8A6_TypeDefinitionIndex = 15498;

class B1B80B3FC6698CF3_F5628F8349D4A8A6 : public ::System::Object
{
public:
	static ::B1B80B3FC6698CF3_F5628F8349D4A8A6** StaticGet_AA32F971AB02398B()
	{
		return (::B1B80B3FC6698CF3_F5628F8349D4A8A6**)Il2CppClass::FromTypeDefinitionIndex(B1B80B3FC6698CF3_F5628F8349D4A8A6_TypeDefinitionIndex)->GetStaticField(0x0);
	}
	static ::System::Func_2<::UnityEngine::Transform*, ::UnityEngine::Vector3>** StaticGet_B55D445D85F5FA3C()
	{
		return (::System::Func_2<::UnityEngine::Transform*, ::UnityEngine::Vector3>**)Il2CppClass::FromTypeDefinitionIndex(B1B80B3FC6698CF3_F5628F8349D4A8A6_TypeDefinitionIndex)->GetStaticField(0x8);
	}

	static ::System::Void _cctor()
	{
		return ((::System::Void(*)())((::PBYTE)hIl2Cpp + B1B80B3FC6698CF3_F5628F8349D4A8A6__CCTOR_OFFSET))();
	}

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + B1B80B3FC6698CF3_F5628F8349D4A8A6__CTOR_OFFSET))(this);
	}

	::UnityEngine::Vector3 EE583A582415B1C0(::UnityEngine::Transform* BBCFEC7DB309E927)
	{
		return ((::UnityEngine::Vector3(*)(::PVOID, ::UnityEngine::Transform*))((::PBYTE)hIl2Cpp + B1B80B3FC6698CF3_F5628F8349D4A8A6_EE583A582415B1C0_OFFSET))(this, BBCFEC7DB309E927);
	}
};
