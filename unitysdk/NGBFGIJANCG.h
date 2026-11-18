#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/CFBPPGAAHAG.h"
#include "unitysdk/System/Object.h"

#define NGBFGIJANCG_BAICKPPPCJC_OFFSET UNITYSDK_OFFSET(0x12101050)
#define NGBFGIJANCG_JOGDDLNMABH_OFFSET UNITYSDK_OFFSET(0x12101040)
#define NGBFGIJANCG__CCTOR_OFFSET UNITYSDK_OFFSET(0x12100F80)
#define NGBFGIJANCG__CTOR_OFFSET UNITYSDK_OFFSET(0x12100F70)

inline static constexpr unsigned int NGBFGIJANCG_TypeDefinitionIndex = 39450;

class NGBFGIJANCG : public ::System::Object
{
public:
	static ::NGBFGIJANCG** StaticGet_NFKANAGINAF()
	{
		return (::NGBFGIJANCG**)Il2CppClass::FromTypeDefinitionIndex(NGBFGIJANCG_TypeDefinitionIndex)->GetStaticField(0x32700);
	}
	static ::NGBFGIJANCG** StaticGet_CGICCOBHACH()
	{
		return (::NGBFGIJANCG**)Il2CppClass::FromTypeDefinitionIndex(NGBFGIJANCG_TypeDefinitionIndex)->GetStaticField(0x32708);
	}
	static ::NGBFGIJANCG** StaticGet_LFAJDLJFEKG()
	{
		return (::NGBFGIJANCG**)Il2CppClass::FromTypeDefinitionIndex(NGBFGIJANCG_TypeDefinitionIndex)->GetStaticField(0x32710);
	}
	::CFBPPGAAHAG _BJIBFCDGPFM_k__BackingField; // 0x10

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + NGBFGIJANCG__CTOR_OFFSET))(this);
	}

	static ::System::Void _cctor()
	{
		return ((::System::Void(*)())((::PBYTE)hIl2Cpp + NGBFGIJANCG__CCTOR_OFFSET))();
	}

	::System::Void JOGDDLNMABH(::CFBPPGAAHAG EGEGIMGMJHN)
	{
		return ((::System::Void(*)(::PVOID, ::CFBPPGAAHAG))((::PBYTE)hIl2Cpp + NGBFGIJANCG_JOGDDLNMABH_OFFSET))(this, EGEGIMGMJHN);
	}

	::CFBPPGAAHAG BAICKPPPCJC()
	{
		return ((::CFBPPGAAHAG(*)(::PVOID))((::PBYTE)hIl2Cpp + NGBFGIJANCG_BAICKPPPCJC_OFFSET))(this);
	}
};
