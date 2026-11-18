#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"
#include "unitysdk/UnityEngine/Vector3.h"

namespace UnityEngine { class SphereCollider; }
namespace UnityEngine { class Transform; }

#define GJPKFPGNJCD_GHFOFMOAPIC_OFFSET UNITYSDK_OFFSET(0x13DDD980)
#define GJPKFPGNJCD_JLEGHNGEBOG_OFFSET UNITYSDK_OFFSET(0x13DDD990)
#define GJPKFPGNJCD_NCNLADGJMIO_OFFSET UNITYSDK_OFFSET(0x13DDD870)
#define GJPKFPGNJCD_OCDFLBHBHCA_OFFSET UNITYSDK_OFFSET(0x13DDD9B0)
#define GJPKFPGNJCD_PPAFGBILMME_OFFSET UNITYSDK_OFFSET(0x13DDD970)
#define GJPKFPGNJCD__CTOR_OFFSET UNITYSDK_OFFSET(0x13DDD7A0)

inline static constexpr unsigned int GJPKFPGNJCD_TypeDefinitionIndex = 67645;

class GJPKFPGNJCD : public ::System::Object
{
public:
	::UnityEngine::SphereCollider* DEIAPNGINDH; // 0x10
	::UnityEngine::Transform* ACDOKEGBJAO; // 0x18
	::UnityEngine::Vector3 OLLFNNGJCFN; // 0x20
	::UnityEngine::Vector3 DEPIHKEPCAG; // 0x2C
	::System::Single NEDDILIHGLL; // 0x38
	::System::Single GEEMKIKDHLB; // 0x3C

	::System::Void _ctor(::UnityEngine::SphereCollider* ABJOBELOMEE, ::UnityEngine::Transform* GKBJOPJKCLB)
	{
		return ((::System::Void(*)(::PVOID, ::UnityEngine::SphereCollider*, ::UnityEngine::Transform*))((::PBYTE)hIl2Cpp + GJPKFPGNJCD__CTOR_OFFSET))(this, ABJOBELOMEE, GKBJOPJKCLB);
	}

	::System::Void NCNLADGJMIO()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + GJPKFPGNJCD_NCNLADGJMIO_OFFSET))(this);
	}

	::System::Single PPAFGBILMME()
	{
		return ((::System::Single(*)(::PVOID))((::PBYTE)hIl2Cpp + GJPKFPGNJCD_PPAFGBILMME_OFFSET))(this);
	}

	::System::Single GHFOFMOAPIC()
	{
		return ((::System::Single(*)(::PVOID))((::PBYTE)hIl2Cpp + GJPKFPGNJCD_GHFOFMOAPIC_OFFSET))(this);
	}

	::UnityEngine::Vector3 JLEGHNGEBOG()
	{
		return ((::UnityEngine::Vector3(*)(::PVOID))((::PBYTE)hIl2Cpp + GJPKFPGNJCD_JLEGHNGEBOG_OFFSET))(this);
	}

	::UnityEngine::Vector3 OCDFLBHBHCA()
	{
		return ((::UnityEngine::Vector3(*)(::PVOID))((::PBYTE)hIl2Cpp + GJPKFPGNJCD_OCDFLBHBHCA_OFFSET))(this);
	}
};
