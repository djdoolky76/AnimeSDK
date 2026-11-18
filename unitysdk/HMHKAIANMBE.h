#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/Foundation/Coroutine/CoroutineHandle.h"
#include "unitysdk/System/Object.h"

namespace MoleMole { class ActivitBGAnimationSequence; }
namespace System { template <typename T> class Action_1; }
namespace UnityEngine { class Animation; }

#define HMHKAIANMBE_DIJFCGBMDEP_OFFSET UNITYSDK_OFFSET(0x15DC9200)
#define HMHKAIANMBE_DNEDCMPDBPO_OFFSET UNITYSDK_OFFSET(0x15DC9740)
#define HMHKAIANMBE_FFDHOIECKNL_OFFSET UNITYSDK_OFFSET(0x15DC89D0)
#define HMHKAIANMBE_HNDGJKPNIHA_OFFSET UNITYSDK_OFFSET(0x15DC91B0)
#define HMHKAIANMBE_LCJEELHBNHG_OFFSET UNITYSDK_OFFSET(0x15DC96E0)
#define HMHKAIANMBE_NPOLNFDBOOD_OFFSET UNITYSDK_OFFSET(0x15DC8DA0)
#define HMHKAIANMBE_PHOADBJGFBE_OFFSET UNITYSDK_OFFSET(0x15DC8F20)
#define HMHKAIANMBE_POBCELPAMJE_OFFSET UNITYSDK_OFFSET(0x15DC8770)
#define HMHKAIANMBE__CTOR_OFFSET UNITYSDK_OFFSET(0x15DC8700)

inline static constexpr unsigned int HMHKAIANMBE_TypeDefinitionIndex = 76838;

class HMHKAIANMBE : public ::System::Object
{
public:
	::MoleMole::ActivitBGAnimationSequence* GKFNKKJFHNE; // 0x10
	::UnityEngine::Animation* AOKJEGNBALI; // 0x18
	::System::Action_1<::System::Int32>* BMMABGGKKPL; // 0x20
	::Foundation::Coroutine::CoroutineHandle OHAAHFECOAC; // 0x28
	::Foundation::Coroutine::CoroutineHandle KGCGLIGDNFF; // 0x2C
	::System::Int32 OJOEBEBNFCJ; // 0x30

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + HMHKAIANMBE__CTOR_OFFSET))(this);
	}

	::System::Void POBCELPAMJE()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + HMHKAIANMBE_POBCELPAMJE_OFFSET))(this);
	}

	::System::Void NPOLNFDBOOD()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + HMHKAIANMBE_NPOLNFDBOOD_OFFSET))(this);
	}

	::System::Void HNDGJKPNIHA()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + HMHKAIANMBE_HNDGJKPNIHA_OFFSET))(this);
	}

	::System::Void FFDHOIECKNL()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + HMHKAIANMBE_FFDHOIECKNL_OFFSET))(this);
	}

	::System::Void LCJEELHBNHG()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + HMHKAIANMBE_LCJEELHBNHG_OFFSET))(this);
	}

	::System::Void DNEDCMPDBPO(::MoleMole::ActivitBGAnimationSequence* GKFNKKJFHNE)
	{
		return ((::System::Void(*)(::PVOID, ::MoleMole::ActivitBGAnimationSequence*))((::PBYTE)hIl2Cpp + HMHKAIANMBE_DNEDCMPDBPO_OFFSET))(this, GKFNKKJFHNE);
	}

	::System::Void PHOADBJGFBE()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + HMHKAIANMBE_PHOADBJGFBE_OFFSET))(this);
	}

	::System::Void DIJFCGBMDEP()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + HMHKAIANMBE_DIJFCGBMDEP_OFFSET))(this);
	}
};
