#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"
#include "unitysdk/UnityEngine/Vector3.h"

#define BKLDHBBCNOP_HGNCFAPBMEC_OFFSET UNITYSDK_OFFSET(0x13977380)
#define BKLDHBBCNOP_JLHBCPLAADE_OFFSET UNITYSDK_OFFSET(0x13977220)
#define BKLDHBBCNOP_PIGNCJBJHOL_OFFSET UNITYSDK_OFFSET(0x13977470)
#define BKLDHBBCNOP__CTOR_OFFSET UNITYSDK_OFFSET(0x13977210)

inline static constexpr unsigned int BKLDHBBCNOP_TypeDefinitionIndex = 77363;

class BKLDHBBCNOP : public ::System::Object
{
public:
	// static const ::System::Single IPCBKNIHKPD; // 0x0
	// static const ::System::Single LCIBCOMICGB; // 0x0
	::UnityEngine::Vector3 OHOGDOMNHNK; // 0x10
	::UnityEngine::Vector3 AGHNEGFHKMC; // 0x1C

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + BKLDHBBCNOP__CTOR_OFFSET))(this);
	}

	::System::Boolean JLHBCPLAADE(::UnityEngine::Vector3 KDLADJOGBME, ::System::Single NCCDJLDKFGA)
	{
		return ((::System::Boolean(*)(::PVOID, ::UnityEngine::Vector3, ::System::Single))((::PBYTE)hIl2Cpp + BKLDHBBCNOP_JLHBCPLAADE_OFFSET))(this, KDLADJOGBME, NCCDJLDKFGA);
	}

	::System::Void HGNCFAPBMEC(::UnityEngine::Vector3 OLLFNNGJCFN, ::UnityEngine::Vector3 IFOIKJJJEJB)
	{
		return ((::System::Void(*)(::PVOID, ::UnityEngine::Vector3, ::UnityEngine::Vector3))((::PBYTE)hIl2Cpp + BKLDHBBCNOP_HGNCFAPBMEC_OFFSET))(this, OLLFNNGJCFN, IFOIKJJJEJB);
	}

	::System::Boolean PIGNCJBJHOL(::UnityEngine::Vector3 KDLADJOGBME)
	{
		return ((::System::Boolean(*)(::PVOID, ::UnityEngine::Vector3))((::PBYTE)hIl2Cpp + BKLDHBBCNOP_PIGNCJBJHOL_OFFSET))(this, KDLADJOGBME);
	}
};
