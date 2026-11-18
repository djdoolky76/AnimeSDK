#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

class PNJDGHBEMLK;
namespace UnityEngine { class Texture; }

#define AMJIOCDAIJO_ELIMGHEDGAF_FFIEPFPDMBC_OFFSET UNITYSDK_OFFSET(0x17CE2010)
#define AMJIOCDAIJO_ELIMGHEDGAF_LJIPJIJFIIA_OFFSET UNITYSDK_OFFSET(0x17CE2050)
#define AMJIOCDAIJO_ELIMGHEDGAF__CTOR_OFFSET UNITYSDK_OFFSET(0x17CE2000)

inline static constexpr unsigned int AMJIOCDAIJO_ELIMGHEDGAF_TypeDefinitionIndex = 83693;

class AMJIOCDAIJO_ELIMGHEDGAF : public ::System::Object
{
public:
	::PNJDGHBEMLK* MCMCPFDOEDK; // 0x10

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + AMJIOCDAIJO_ELIMGHEDGAF__CTOR_OFFSET))(this);
	}

	::System::Void FFIEPFPDMBC(::UnityEngine::Texture* IMLLDOHDCNC, ::System::Int32 HBJOLKHGGDD)
	{
		return ((::System::Void(*)(::PVOID, ::UnityEngine::Texture*, ::System::Int32))((::PBYTE)hIl2Cpp + AMJIOCDAIJO_ELIMGHEDGAF_FFIEPFPDMBC_OFFSET))(this, IMLLDOHDCNC, HBJOLKHGGDD);
	}

	::System::Void LJIPJIJFIIA(::UnityEngine::Texture* IMLLDOHDCNC, ::System::Int32 HBJOLKHGGDD)
	{
		return ((::System::Void(*)(::PVOID, ::UnityEngine::Texture*, ::System::Int32))((::PBYTE)hIl2Cpp + AMJIOCDAIJO_ELIMGHEDGAF_LJIPJIJFIIA_OFFSET))(this, IMLLDOHDCNC, HBJOLKHGGDD);
	}
};
