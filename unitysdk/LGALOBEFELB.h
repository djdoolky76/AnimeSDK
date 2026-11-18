#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/LICNBLHOLKF.h"

class MFMNHELPIMP;
namespace System::Collections::Generic { template <typename T> class HashSet_1; }
namespace UnityEngine { class Collider; }

#define LGALOBEFELB_HNDGJKPNIHA_OFFSET UNITYSDK_OFFSET(0x12560A50)
#define LGALOBEFELB_IFHNMAGGFAE_OFFSET UNITYSDK_OFFSET(0x12560D10)
#define LGALOBEFELB_JAKNPLDPPGH_OFFSET UNITYSDK_OFFSET(0x12560BD0)
#define LGALOBEFELB_LJFBNEKDDKK_OFFSET UNITYSDK_OFFSET(0x12560DA0)
#define LGALOBEFELB_MBHMJOJENMJ_OFFSET UNITYSDK_OFFSET(0x12560C70)
#define LGALOBEFELB_ONTRIGGERENTER_OFFSET UNITYSDK_OFFSET(0x12560780)
#define LGALOBEFELB_ONTRIGGEREXIT_OFFSET UNITYSDK_OFFSET(0x12560900)
#define LGALOBEFELB__CTOR_OFFSET UNITYSDK_OFFSET(0x125606A0)

inline static constexpr unsigned int LGALOBEFELB_TypeDefinitionIndex = 84467;

class LGALOBEFELB : public ::LICNBLHOLKF
{
public:
	::System::Collections::Generic::HashSet_1<::UnityEngine::Collider*>* PGGCMBBBBAO; // 0x58

	::System::Void _ctor(::MFMNHELPIMP* NCLAHIKBBBH)
	{
		return ((::System::Void(*)(::PVOID, ::MFMNHELPIMP*))((::PBYTE)hIl2Cpp + LGALOBEFELB__CTOR_OFFSET))(this, NCLAHIKBBBH);
	}

	::System::Void OnTriggerEnter(::UnityEngine::Collider* HODAIDNDKHD, ::MFMNHELPIMP* NCLAHIKBBBH)
	{
		return ((::System::Void(*)(::PVOID, ::UnityEngine::Collider*, ::MFMNHELPIMP*))((::PBYTE)hIl2Cpp + LGALOBEFELB_ONTRIGGERENTER_OFFSET))(this, HODAIDNDKHD, NCLAHIKBBBH);
	}

	::System::Void OnTriggerExit(::UnityEngine::Collider* HODAIDNDKHD, ::MFMNHELPIMP* NCLAHIKBBBH)
	{
		return ((::System::Void(*)(::PVOID, ::UnityEngine::Collider*, ::MFMNHELPIMP*))((::PBYTE)hIl2Cpp + LGALOBEFELB_ONTRIGGEREXIT_OFFSET))(this, HODAIDNDKHD, NCLAHIKBBBH);
	}

	::System::Void HNDGJKPNIHA()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + LGALOBEFELB_HNDGJKPNIHA_OFFSET))(this);
	}

	::System::Void JAKNPLDPPGH(::UnityEngine::Collider* MIALFKCCCPI, ::MFMNHELPIMP* KMGKAIDEIBA)
	{
		return ((::System::Void(*)(::PVOID, ::UnityEngine::Collider*, ::MFMNHELPIMP*))((::PBYTE)hIl2Cpp + LGALOBEFELB_JAKNPLDPPGH_OFFSET))(this, MIALFKCCCPI, KMGKAIDEIBA);
	}

	::System::Void MBHMJOJENMJ(::UnityEngine::Collider* MIALFKCCCPI, ::MFMNHELPIMP* KMGKAIDEIBA)
	{
		return ((::System::Void(*)(::PVOID, ::UnityEngine::Collider*, ::MFMNHELPIMP*))((::PBYTE)hIl2Cpp + LGALOBEFELB_MBHMJOJENMJ_OFFSET))(this, MIALFKCCCPI, KMGKAIDEIBA);
	}

	::System::Void IFHNMAGGFAE()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + LGALOBEFELB_IFHNMAGGFAE_OFFSET))(this);
	}

	::System::Boolean LJFBNEKDDKK()
	{
		return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + LGALOBEFELB_LJFBNEKDDKK_OFFSET))(this);
	}
};
