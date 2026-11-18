#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"
#include "unitysdk/UnityEngine/Vector3.h"

namespace System { class String; }
namespace System { template <typename T1, typename T2, typename T3> class Func_3; }
namespace UnityEngine { class Collider; }

#define BHDIFOOIHLK_ACOEONABOJL_OFFSET UNITYSDK_OFFSET(0x128A9150)
#define BHDIFOOIHLK_DECMGICKDLH_OFFSET UNITYSDK_OFFSET(0x128A9190)
#define BHDIFOOIHLK_DPIHOJBBGLA_OFFSET UNITYSDK_OFFSET(0x128A91A0)
#define BHDIFOOIHLK_EQUALS_1_OFFSET UNITYSDK_OFFSET(0x128A9060)
#define BHDIFOOIHLK_EQUALS_OFFSET UNITYSDK_OFFSET(0x128A9000)
#define BHDIFOOIHLK_GETHASHCODE_OFFSET UNITYSDK_OFFSET(0x128A9110)
#define BHDIFOOIHLK_HLPHPBAODIF_OFFSET UNITYSDK_OFFSET(0x128A9160)
#define BHDIFOOIHLK_JGBGPJACDOG_OFFSET UNITYSDK_OFFSET(0x128A9180)
#define BHDIFOOIHLK_MPOMFJEGCCG_OFFSET UNITYSDK_OFFSET(0x128A9170)
#define BHDIFOOIHLK_TOSTRING_OFFSET UNITYSDK_OFFSET(0x128A8F40)
#define BHDIFOOIHLK__CTOR_OFFSET UNITYSDK_OFFSET(0x128A8EA0)

inline static constexpr unsigned int BHDIFOOIHLK_TypeDefinitionIndex = 39453;

class BHDIFOOIHLK : public ::System::Object
{
public:
	::System::String* _BLBIAMKGHJL_k__BackingField; // 0x10
	::System::Func_3<::UnityEngine::Collider*, ::UnityEngine::Vector3, ::System::Boolean>* _DKFEMAEAODH_k__BackingField; // 0x18
	::System::Int32 _JFPALPENGNB_k__BackingField; // 0x20

	::System::Void _ctor(::System::Int32 MGMDLMBEDJF, ::System::String* HIAIKHDFCLN, ::System::Func_3<::UnityEngine::Collider*, ::UnityEngine::Vector3, ::System::Boolean>* KPDNJEDICCM)
	{
		return ((::System::Void(*)(::PVOID, ::System::Int32, ::System::String*, ::System::Func_3<::UnityEngine::Collider*, ::UnityEngine::Vector3, ::System::Boolean>*))((::PBYTE)hIl2Cpp + BHDIFOOIHLK__CTOR_OFFSET))(this, MGMDLMBEDJF, HIAIKHDFCLN, KPDNJEDICCM);
	}

	::System::String* ToString()
	{
		return ((::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + BHDIFOOIHLK_TOSTRING_OFFSET))(this);
	}

	::System::Boolean Equals(::BHDIFOOIHLK* LIBPKNHDIGP)
	{
		return ((::System::Boolean(*)(::PVOID, ::BHDIFOOIHLK*))((::PBYTE)hIl2Cpp + BHDIFOOIHLK_EQUALS_OFFSET))(this, LIBPKNHDIGP);
	}

	::System::Boolean Equals_1(::System::Object* EIFONLCJOPG)
	{
		return ((::System::Boolean(*)(::PVOID, ::System::Object*))((::PBYTE)hIl2Cpp + BHDIFOOIHLK_EQUALS_1_OFFSET))(this, EIFONLCJOPG);
	}

	::System::Int32 GetHashCode()
	{
		return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + BHDIFOOIHLK_GETHASHCODE_OFFSET))(this);
	}

	::System::Int32 ACOEONABOJL()
	{
		return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + BHDIFOOIHLK_ACOEONABOJL_OFFSET))(this);
	}

	::System::Int32 HLPHPBAODIF()
	{
		return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + BHDIFOOIHLK_HLPHPBAODIF_OFFSET))(this);
	}

	::System::Func_3<::UnityEngine::Collider*, ::UnityEngine::Vector3, ::System::Boolean>* MPOMFJEGCCG()
	{
		return ((::System::Func_3<::UnityEngine::Collider*, ::UnityEngine::Vector3, ::System::Boolean>*(*)(::PVOID))((::PBYTE)hIl2Cpp + BHDIFOOIHLK_MPOMFJEGCCG_OFFSET))(this);
	}

	::System::Boolean JGBGPJACDOG(::System::Object* MIALFKCCCPI)
	{
		return ((::System::Boolean(*)(::PVOID, ::System::Object*))((::PBYTE)hIl2Cpp + BHDIFOOIHLK_JGBGPJACDOG_OFFSET))(this, MIALFKCCCPI);
	}

	::System::String* DECMGICKDLH()
	{
		return ((::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + BHDIFOOIHLK_DECMGICKDLH_OFFSET))(this);
	}

	::System::String* DPIHOJBBGLA()
	{
		return ((::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + BHDIFOOIHLK_DPIHOJBBGLA_OFFSET))(this);
	}
};
