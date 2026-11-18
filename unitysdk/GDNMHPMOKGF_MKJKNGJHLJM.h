#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/Foundation/LerpVector3Func.h"
#include "unitysdk/Foundation/Lerped_2.h"
#include "unitysdk/System/Object.h"
#include "unitysdk/UnityEngine/Vector3.h"

class GDNMHPMOKGF;

#define GDNMHPMOKGF_MKJKNGJHLJM_HBPLINHBFFK_OFFSET UNITYSDK_OFFSET(0x13DC0A20)
#define GDNMHPMOKGF_MKJKNGJHLJM_JINCFIGEAKM_OFFSET UNITYSDK_OFFSET(0x13DC0400)
#define GDNMHPMOKGF_MKJKNGJHLJM_JJEKFJPIENK_OFFSET UNITYSDK_OFFSET(0x13DC0AE0)
#define GDNMHPMOKGF_MKJKNGJHLJM_LBNLCGAIJCC_OFFSET UNITYSDK_OFFSET(0x13DC0AF0)
#define GDNMHPMOKGF_MKJKNGJHLJM_PLPONJAKNEB_OFFSET UNITYSDK_OFFSET(0x13DC06E0)
#define GDNMHPMOKGF_MKJKNGJHLJM__CTOR_OFFSET UNITYSDK_OFFSET(0x13DC0AB0)

inline static constexpr unsigned int GDNMHPMOKGF_MKJKNGJHLJM_TypeDefinitionIndex = 67616;

class GDNMHPMOKGF_MKJKNGJHLJM : public ::System::Object
{
public:
	// static const ::System::String* EMAJMOIFHFO; // 0x0
	::UnityEngine::Vector3 HODAIDNDKHD; // 0x10
	::System::Boolean MAJHCAHGHAO; // 0x1C
	::System::Byte _padding0[0x3];
	::System::Single _KHEOGAHDPCM_k__BackingField; // 0x20
	::UnityEngine::Vector3 MJODFDBNJIP; // 0x24
	::Foundation::Lerped_2<::UnityEngine::Vector3, ::Foundation::LerpVector3Func> AHEJBFKJBPH; // 0x30

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + GDNMHPMOKGF_MKJKNGJHLJM__CTOR_OFFSET))(this);
	}

	::System::Void JINCFIGEAKM(::GDNMHPMOKGF* AMNIHACKELI)
	{
		return ((::System::Void(*)(::PVOID, ::GDNMHPMOKGF*))((::PBYTE)hIl2Cpp + GDNMHPMOKGF_MKJKNGJHLJM_JINCFIGEAKM_OFFSET))(this, AMNIHACKELI);
	}

	::System::Void PLPONJAKNEB(::GDNMHPMOKGF* AMNIHACKELI)
	{
		return ((::System::Void(*)(::PVOID, ::GDNMHPMOKGF*))((::PBYTE)hIl2Cpp + GDNMHPMOKGF_MKJKNGJHLJM_PLPONJAKNEB_OFFSET))(this, AMNIHACKELI);
	}

	::System::Void HBPLINHBFFK()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + GDNMHPMOKGF_MKJKNGJHLJM_HBPLINHBFFK_OFFSET))(this);
	}

	::System::Single JJEKFJPIENK()
	{
		return ((::System::Single(*)(::PVOID))((::PBYTE)hIl2Cpp + GDNMHPMOKGF_MKJKNGJHLJM_JJEKFJPIENK_OFFSET))(this);
	}

	::System::Void LBNLCGAIJCC(::System::Single EGEGIMGMJHN)
	{
		return ((::System::Void(*)(::PVOID, ::System::Single))((::PBYTE)hIl2Cpp + GDNMHPMOKGF_MKJKNGJHLJM_LBNLCGAIJCC_OFFSET))(this, EGEGIMGMJHN);
	}
};
