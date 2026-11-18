#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/JHLIKDLCNKF.h"

class AODIFLIBBJA;
namespace MoleMole::Config { class PhotoCameraModeOverride; }
namespace System { class String; }

#define FKLFIIJOIGD_BFJFIIBEGNF_OFFSET UNITYSDK_OFFSET(0x11C57E90)
#define FKLFIIJOIGD_EABKJNNCHCD_OFFSET UNITYSDK_OFFSET(0x11C57EA0)
#define FKLFIIJOIGD_IDNCOKIKHFK_OFFSET UNITYSDK_OFFSET(0x11C57D90)
#define FKLFIIJOIGD_JDAPDDEOCEA_OFFSET UNITYSDK_OFFSET(0x11C57EB0)
#define FKLFIIJOIGD_KEFMBIMDCNB_OFFSET UNITYSDK_OFFSET(0x11C57E20)
#define FKLFIIJOIGD_LGBJNGGNKON_OFFSET UNITYSDK_OFFSET(0x11C57E80)
#define FKLFIIJOIGD_LPLBADIMIJI_OFFSET UNITYSDK_OFFSET(0x11C57E70)
#define FKLFIIJOIGD_MHHJPBJILBJ_OFFSET UNITYSDK_OFFSET(0x11C57DE0)
#define FKLFIIJOIGD_NIBFKKPJLBE_OFFSET UNITYSDK_OFFSET(0x11C57A90)
#define FKLFIIJOIGD_ODBAMOBDKHL_OFFSET UNITYSDK_OFFSET(0x11C57C30)
#define FKLFIIJOIGD__CTOR_1_OFFSET UNITYSDK_OFFSET(0x11C57C20)
#define FKLFIIJOIGD__CTOR_OFFSET UNITYSDK_OFFSET(0x11C57A80)

inline static constexpr unsigned int FKLFIIJOIGD_TypeDefinitionIndex = 61234;

class FKLFIIJOIGD : public ::JHLIKDLCNKF
{
public:
	::MoleMole::Config::PhotoCameraModeOverride* _FKFPIPNPIFF_k__BackingField; // 0x18
	::System::Int32 _GMMMJPFKIJG_k__BackingField; // 0x20

	::System::Void _ctor(::System::String* OIIHCACKLHD)
	{
		return ((::System::Void(*)(::PVOID, ::System::String*))((::PBYTE)hIl2Cpp + FKLFIIJOIGD__CTOR_OFFSET))(this, OIIHCACKLHD);
	}

	::System::Void _ctor_1(::System::Int32 FBLFGJMNAKL)
	{
		return ((::System::Void(*)(::PVOID, ::System::Int32))((::PBYTE)hIl2Cpp + FKLFIIJOIGD__CTOR_1_OFFSET))(this, FBLFGJMNAKL);
	}

	::System::Void IDNCOKIKHFK(::AODIFLIBBJA* GEJCKFFFKCL)
	{
		return ((::System::Void(*)(::PVOID, ::AODIFLIBBJA*))((::PBYTE)hIl2Cpp + FKLFIIJOIGD_IDNCOKIKHFK_OFFSET))(this, GEJCKFFFKCL);
	}

	::System::Void MHHJPBJILBJ()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + FKLFIIJOIGD_MHHJPBJILBJ_OFFSET))(this);
	}

	::System::Void KEFMBIMDCNB(::MoleMole::Config::PhotoCameraModeOverride* EKPAIOGJEPO)
	{
		return ((::System::Void(*)(::PVOID, ::MoleMole::Config::PhotoCameraModeOverride*))((::PBYTE)hIl2Cpp + FKLFIIJOIGD_KEFMBIMDCNB_OFFSET))(this, EKPAIOGJEPO);
	}

	::System::Void LPLBADIMIJI(::System::Int32 EGEGIMGMJHN)
	{
		return ((::System::Void(*)(::PVOID, ::System::Int32))((::PBYTE)hIl2Cpp + FKLFIIJOIGD_LPLBADIMIJI_OFFSET))(this, EGEGIMGMJHN);
	}

	::System::Void LGBJNGGNKON(::MoleMole::Config::PhotoCameraModeOverride* EGEGIMGMJHN)
	{
		return ((::System::Void(*)(::PVOID, ::MoleMole::Config::PhotoCameraModeOverride*))((::PBYTE)hIl2Cpp + FKLFIIJOIGD_LGBJNGGNKON_OFFSET))(this, EGEGIMGMJHN);
	}

	::System::Void ODBAMOBDKHL(::System::Int32 FBLFGJMNAKL)
	{
		return ((::System::Void(*)(::PVOID, ::System::Int32))((::PBYTE)hIl2Cpp + FKLFIIJOIGD_ODBAMOBDKHL_OFFSET))(this, FBLFGJMNAKL);
	}

	::System::Int32 BFJFIIBEGNF()
	{
		return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + FKLFIIJOIGD_BFJFIIBEGNF_OFFSET))(this);
	}

	::MoleMole::Config::PhotoCameraModeOverride* EABKJNNCHCD()
	{
		return ((::MoleMole::Config::PhotoCameraModeOverride*(*)(::PVOID))((::PBYTE)hIl2Cpp + FKLFIIJOIGD_EABKJNNCHCD_OFFSET))(this);
	}

	::System::Void NIBFKKPJLBE(::System::String* OIIHCACKLHD)
	{
		return ((::System::Void(*)(::PVOID, ::System::String*))((::PBYTE)hIl2Cpp + FKLFIIJOIGD_NIBFKKPJLBE_OFFSET))(this, OIIHCACKLHD);
	}

	::System::Boolean JDAPDDEOCEA()
	{
		return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + FKLFIIJOIGD_JDAPDDEOCEA_OFFSET))(this);
	}
};
