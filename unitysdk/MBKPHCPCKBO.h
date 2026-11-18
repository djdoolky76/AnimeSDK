#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/MJHDNMKGLBJ.h"
#include "unitysdk/UnityEngine/Vector3.h"

class MBKPHCPCKBO_Config;
namespace UnityEngine { class Collider; }
namespace UnityEngine { class Rigidbody; }

#define MBKPHCPCKBO_BBOMJDBNHIC_OFFSET UNITYSDK_OFFSET(0x12D4E120)
#define MBKPHCPCKBO_FFDDNLGLABI_OFFSET UNITYSDK_OFFSET(0x12D4E170)
#define MBKPHCPCKBO_GETCLASSID_OFFSET UNITYSDK_OFFSET(0x12D4DDD0)
#define MBKPHCPCKBO_GMCACBFOFID_OFFSET UNITYSDK_OFFSET(0x12D4E240)
#define MBKPHCPCKBO_JCJHCEBFNAJ_OFFSET UNITYSDK_OFFSET(0x12D4DEB0)
#define MBKPHCPCKBO_JFDOOELFAOA_OFFSET UNITYSDK_OFFSET(0x12D4E1C0)
#define MBKPHCPCKBO_MEFBHFEOKGH_OFFSET UNITYSDK_OFFSET(0x12D4E530)
#define MBKPHCPCKBO_ONCLEAN_OFFSET UNITYSDK_OFFSET(0x12D4DD90)
#define MBKPHCPCKBO__CCTOR_OFFSET UNITYSDK_OFFSET(0x12D4DE20)
#define MBKPHCPCKBO__CTOR_OFFSET UNITYSDK_OFFSET(0x12D4DEA0)

inline static constexpr unsigned int MBKPHCPCKBO_TypeDefinitionIndex = 65005;

class MBKPHCPCKBO : public ::MJHDNMKGLBJ
{
public:
	// static const ::System::Int32 IPAPPCOIEIF = 0x68; // 0x0
	::UnityEngine::Rigidbody* CFCDGNIJMNL; // 0x48
	::MBKPHCPCKBO_Config* DFMKILICPFB; // 0x50
	::UnityEngine::Collider* ALBOBDDMFPN; // 0x58
	::UnityEngine::Vector3 FMJGOHNLJNA; // 0x60

	static ::System::Void _cctor()
	{
		return ((::System::Void(*)())((::PBYTE)hIl2Cpp + MBKPHCPCKBO__CCTOR_OFFSET))();
	}

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MBKPHCPCKBO__CTOR_OFFSET))(this);
	}

	::System::Void OnClean()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MBKPHCPCKBO_ONCLEAN_OFFSET))(this);
	}

	::System::Int32 GetClassID()
	{
		return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + MBKPHCPCKBO_GETCLASSID_OFFSET))(this);
	}

	::UnityEngine::Collider* JCJHCEBFNAJ()
	{
		return ((::UnityEngine::Collider*(*)(::PVOID))((::PBYTE)hIl2Cpp + MBKPHCPCKBO_JCJHCEBFNAJ_OFFSET))(this);
	}

	::System::Void BBOMJDBNHIC(::MBKPHCPCKBO_Config* DFMKILICPFB)
	{
		return ((::System::Void(*)(::PVOID, ::MBKPHCPCKBO_Config*))((::PBYTE)hIl2Cpp + MBKPHCPCKBO_BBOMJDBNHIC_OFFSET))(this, DFMKILICPFB);
	}

	::System::Void FFDDNLGLABI(::MBKPHCPCKBO_Config* DFMKILICPFB)
	{
		return ((::System::Void(*)(::PVOID, ::MBKPHCPCKBO_Config*))((::PBYTE)hIl2Cpp + MBKPHCPCKBO_FFDDNLGLABI_OFFSET))(this, DFMKILICPFB);
	}

	static ::MBKPHCPCKBO* JFDOOELFAOA()
	{
		return ((::MBKPHCPCKBO*(*)())((::PBYTE)hIl2Cpp + MBKPHCPCKBO_JFDOOELFAOA_OFFSET))();
	}

	::UnityEngine::Rigidbody* GMCACBFOFID()
	{
		return ((::UnityEngine::Rigidbody*(*)(::PVOID))((::PBYTE)hIl2Cpp + MBKPHCPCKBO_GMCACBFOFID_OFFSET))(this);
	}

	::System::Int32 MEFBHFEOKGH()
	{
		return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + MBKPHCPCKBO_MEFBHFEOKGH_OFFSET))(this);
	}
};
