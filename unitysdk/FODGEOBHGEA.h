#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/GNMCJBHMCIP.h"
#include "unitysdk/LBONKEEBNOB.h"
#include "unitysdk/UnityEngine/Vector2.h"

class HKIELPFGJJA;

#define FODGEOBHGEA_CNONDMCIFGL_OFFSET UNITYSDK_OFFSET(0x125B7090)
#define FODGEOBHGEA__CTOR_OFFSET UNITYSDK_OFFSET(0x125B7080)

inline static constexpr unsigned int FODGEOBHGEA_TypeDefinitionIndex = 76150;

class FODGEOBHGEA : public ::GNMCJBHMCIP
{
public:
	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + FODGEOBHGEA__CTOR_OFFSET))(this);
	}

	static ::LBONKEEBNOB CNONDMCIFGL(::HKIELPFGJJA* AEJAMJDBHAM, ::UnityEngine::Vector2 JIPCJNIHNIP)
	{
		return ((::LBONKEEBNOB(*)(::HKIELPFGJJA*, ::UnityEngine::Vector2))((::PBYTE)hIl2Cpp + FODGEOBHGEA_CNONDMCIFGL_OFFSET))(AEJAMJDBHAM, JIPCJNIHNIP);
	}
};
