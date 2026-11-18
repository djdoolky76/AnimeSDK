#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/LCJBFABIOLG.h"

#define FDEAPLFKCIJ_DKNKNENGHFC_OFFSET UNITYSDK_OFFSET(0x191B04B0)
#define FDEAPLFKCIJ_GCDEENNNGKN_OFFSET UNITYSDK_OFFSET(0x191B05F0)
#define FDEAPLFKCIJ_NJLLMPCDOEB_OFFSET UNITYSDK_OFFSET(0x191B04C0)
#define FDEAPLFKCIJ_ONCLOSE_OFFSET UNITYSDK_OFFSET(0x191B03D0)
#define FDEAPLFKCIJ_ONSHOW_OFFSET UNITYSDK_OFFSET(0x191B02B0)
#define FDEAPLFKCIJ__CTOR_OFFSET UNITYSDK_OFFSET(0x191B0420)

inline static constexpr unsigned int FDEAPLFKCIJ_TypeDefinitionIndex = 47961;

class FDEAPLFKCIJ : public ::LCJBFABIOLG
{
public:
	static ::FDEAPLFKCIJ** StaticGet_PMKINFHDLFD()
	{
		return (::FDEAPLFKCIJ**)Il2CppClass::FromTypeDefinitionIndex(FDEAPLFKCIJ_TypeDefinitionIndex)->GetStaticField(0x4F460);
	}

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + FDEAPLFKCIJ__CTOR_OFFSET))(this);
	}

	::System::Void OnShow()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + FDEAPLFKCIJ_ONSHOW_OFFSET))(this);
	}

	::System::Void OnClose()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + FDEAPLFKCIJ_ONCLOSE_OFFSET))(this);
	}

	::System::Void DKNKNENGHFC()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + FDEAPLFKCIJ_DKNKNENGHFC_OFFSET))(this);
	}

	static ::FDEAPLFKCIJ* NJLLMPCDOEB()
	{
		return ((::FDEAPLFKCIJ*(*)())((::PBYTE)hIl2Cpp + FDEAPLFKCIJ_NJLLMPCDOEB_OFFSET))();
	}

	::System::Void GCDEENNNGKN()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + FDEAPLFKCIJ_GCDEENNNGKN_OFFSET))(this);
	}
};
