#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

class PNJDGHBEMLK;
namespace UnityEngine { class Texture; }

#define IDDCGJELPAB_DPBNGDEDKIC_EOKPEMGOPNA_OFFSET UNITYSDK_OFFSET(0x16F5D150)
#define IDDCGJELPAB_DPBNGDEDKIC_MKIFLNPIBEN_OFFSET UNITYSDK_OFFSET(0x16F5D190)
#define IDDCGJELPAB_DPBNGDEDKIC__CTOR_OFFSET UNITYSDK_OFFSET(0x16F5D140)

inline static constexpr unsigned int IDDCGJELPAB_DPBNGDEDKIC_TypeDefinitionIndex = 53205;

class IDDCGJELPAB_DPBNGDEDKIC : public ::System::Object
{
public:
	::PNJDGHBEMLK* MCMCPFDOEDK; // 0x10

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + IDDCGJELPAB_DPBNGDEDKIC__CTOR_OFFSET))(this);
	}

	::System::Void EOKPEMGOPNA(::UnityEngine::Texture* IMLLDOHDCNC, ::System::Int32 HBJOLKHGGDD)
	{
		return ((::System::Void(*)(::PVOID, ::UnityEngine::Texture*, ::System::Int32))((::PBYTE)hIl2Cpp + IDDCGJELPAB_DPBNGDEDKIC_EOKPEMGOPNA_OFFSET))(this, IMLLDOHDCNC, HBJOLKHGGDD);
	}

	::System::Void MKIFLNPIBEN(::UnityEngine::Texture* IMLLDOHDCNC, ::System::Int32 HBJOLKHGGDD)
	{
		return ((::System::Void(*)(::PVOID, ::UnityEngine::Texture*, ::System::Int32))((::PBYTE)hIl2Cpp + IDDCGJELPAB_DPBNGDEDKIC_MKIFLNPIBEN_OFFSET))(this, IMLLDOHDCNC, HBJOLKHGGDD);
	}
};
