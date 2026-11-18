#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/UnityEngine/Vector3.h"

#define KMKIDBCCJAJ_GIAOBHOJCDP_OFFSET UNITYSDK_OFFSET(0x17727620)
#define KMKIDBCCJAJ_JNMCKOJKKCN_OFFSET UNITYSDK_OFFSET(0x17727780)
#define KMKIDBCCJAJ_NKKEPCEBDNN_OFFSET UNITYSDK_OFFSET(0x177277F0)
#define KMKIDBCCJAJ__CTOR_OFFSET UNITYSDK_OFFSET(0x17727600)

inline static constexpr unsigned int KMKIDBCCJAJ_TypeDefinitionIndex = 63295;

class KMKIDBCCJAJ
{
public:
	::System::Void _ctor(::System::Single GDBANLBHNJK)
	{
		return ((::System::Void(*)(::PVOID, ::System::Single))((::PBYTE)hIl2Cpp + KMKIDBCCJAJ__CTOR_OFFSET))(this, GDBANLBHNJK);
	}

	::UnityEngine::Vector3 GIAOBHOJCDP(::UnityEngine::Vector3 EGEGIMGMJHN)
	{
		return ((::UnityEngine::Vector3(*)(::PVOID, ::UnityEngine::Vector3))((::PBYTE)hIl2Cpp + KMKIDBCCJAJ_GIAOBHOJCDP_OFFSET))(this, EGEGIMGMJHN);
	}

	::System::Single NKKEPCEBDNN()
	{
		return ((::System::Single(*)(::PVOID))((::PBYTE)hIl2Cpp + KMKIDBCCJAJ_NKKEPCEBDNN_OFFSET))(this);
	}

	::System::Single JNMCKOJKKCN(::System::Single EGEGIMGMJHN)
	{
		return ((::System::Single(*)(::PVOID, ::System::Single))((::PBYTE)hIl2Cpp + KMKIDBCCJAJ_JNMCKOJKKCN_OFFSET))(this, EGEGIMGMJHN);
	}
};
