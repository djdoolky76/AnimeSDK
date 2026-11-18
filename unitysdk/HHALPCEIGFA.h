#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

#define HHALPCEIGFA_CFKPBKOKPBM_OFFSET UNITYSDK_OFFSET(0x15DAA9B0)
#define HHALPCEIGFA_EFLAGLONHHM_OFFSET UNITYSDK_OFFSET(0x15DAA970)
#define HHALPCEIGFA_MJLFNBMLCAP_OFFSET UNITYSDK_OFFSET(0x15DAAA90)
#define HHALPCEIGFA_PAJNCNHJDKM_OFFSET UNITYSDK_OFFSET(0x15DAA9F0)
#define HHALPCEIGFA__CTOR_OFFSET UNITYSDK_OFFSET(0x15DAA960)

inline static constexpr unsigned int HHALPCEIGFA_TypeDefinitionIndex = 57312;

class HHALPCEIGFA : public ::System::Object
{
public:
	// static const ::System::Int32 AOPPHODJNGE = 0x0; // 0x0
	// static const ::System::Int32 KIFJNGGABPK = 0x1; // 0x0
	// static const ::System::Int32 NKFCCECJMEM = 0x2; // 0x0
	// static const ::System::Int32 ECNEJEMKJHK = 0x64; // 0x0
	// static const ::System::Int32 DAGPBLDCIPJ = 0x3E8; // 0x0

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + HHALPCEIGFA__CTOR_OFFSET))(this);
	}

	static ::System::Boolean EFLAGLONHHM(::System::Int32 PINBIBCJOEM)
	{
		return ((::System::Boolean(*)(::System::Int32))((::PBYTE)hIl2Cpp + HHALPCEIGFA_EFLAGLONHHM_OFFSET))(PINBIBCJOEM);
	}

	static ::System::Boolean CFKPBKOKPBM(::System::Int32 PINBIBCJOEM)
	{
		return ((::System::Boolean(*)(::System::Int32))((::PBYTE)hIl2Cpp + HHALPCEIGFA_CFKPBKOKPBM_OFFSET))(PINBIBCJOEM);
	}

	static ::System::Boolean PAJNCNHJDKM(::System::Int32 PINBIBCJOEM)
	{
		return ((::System::Boolean(*)(::System::Int32))((::PBYTE)hIl2Cpp + HHALPCEIGFA_PAJNCNHJDKM_OFFSET))(PINBIBCJOEM);
	}

	static ::System::Boolean MJLFNBMLCAP(::System::Int32 PINBIBCJOEM)
	{
		return ((::System::Boolean(*)(::System::Int32))((::PBYTE)hIl2Cpp + HHALPCEIGFA_MJLFNBMLCAP_OFFSET))(PINBIBCJOEM);
	}
};
