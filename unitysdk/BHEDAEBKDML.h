#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/Foundation/AssetPath.h"
#include "unitysdk/MLLEMLENJAO.h"
#include "unitysdk/System/Object.h"

class KGBFLHNJHHN;
namespace System { class String; }

#define BHEDAEBKDML_ABGGGFIDPMO_OFFSET UNITYSDK_OFFSET(0x1C515D50)
#define BHEDAEBKDML_BODIPAAMBBJ_OFFSET UNITYSDK_OFFSET(0x1C516010)
#define BHEDAEBKDML_CIJEEEKMKDP_OFFSET UNITYSDK_OFFSET(0x1C515EB0)
#define BHEDAEBKDML_COFGIJJOFLP_OFFSET UNITYSDK_OFFSET(0x1C5163B0)
#define BHEDAEBKDML_EOAPGMILKNM_OFFSET UNITYSDK_OFFSET(0x1C515BF0)
#define BHEDAEBKDML_FDKAEKHLJNF_OFFSET UNITYSDK_OFFSET(0x1C5165E0)
#define BHEDAEBKDML_FOCAOAGCLCK_OFFSET UNITYSDK_OFFSET(0x1C516890)
#define BHEDAEBKDML_LJANCIBECFG_OFFSET UNITYSDK_OFFSET(0x1C5168A0)
#define BHEDAEBKDML_MEIDENMKIFB_OFFSET UNITYSDK_OFFSET(0x1C5164A0)
#define BHEDAEBKDML_MPNOMNHBINN_OFFSET UNITYSDK_OFFSET(0x1C5162A0)
#define BHEDAEBKDML_PCLCOIPMHEE_OFFSET UNITYSDK_OFFSET(0x1C516740)
#define BHEDAEBKDML_PPIFNHNGCGO_OFFSET UNITYSDK_OFFSET(0x1C516160)
#define BHEDAEBKDML__CTOR_OFFSET UNITYSDK_OFFSET(0x1C515BE0)

inline static constexpr unsigned int BHEDAEBKDML_TypeDefinitionIndex = 13758;

class BHEDAEBKDML : public ::System::Object
{
public:
	::Foundation::AssetPath DMOCGDOPJAP; // 0x10
	::Foundation::AssetPath HDOCIFJJGIM; // 0x20
	::Foundation::AssetPath EGBIAEOHAMA; // 0x30
	::KGBFLHNJHHN* JAIHFLGIDCA; // 0x40
	::MLLEMLENJAO HBDPAIKANDB; // 0x48
	::System::String* OFNPMFEJFIM; // 0x58
	::System::UInt64 DEHEEKHDHDF; // 0x60
	::System::UInt64 ELBMEJIJEGL; // 0x68
	::System::Boolean _EBJDBPALMML_k__BackingField; // 0x70
	::System::Byte ACIOBDEBDNK; // 0x71
	::System::Byte CNIAANMNOCF; // 0x72
	::System::Byte GCHCDJCFCEG; // 0x73
	::System::Int32 PCMOJLNOPPM; // 0x74
	::System::Int32 GBLGOHBNLOP; // 0x78
	::System::Byte _padding0[0x4];
	::System::UInt64 BKIBECJIIME; // 0x80

	::System::Void _ctor(::MLLEMLENJAO LJBPECKCCEA, ::KGBFLHNJHHN* NKMKJFCBBCK)
	{
		return ((::System::Void(*)(::PVOID, ::MLLEMLENJAO, ::KGBFLHNJHHN*))((::PBYTE)hIl2Cpp + BHEDAEBKDML__CTOR_OFFSET))(this, LJBPECKCCEA, NKMKJFCBBCK);
	}

	::System::UInt64 EOAPGMILKNM()
	{
		return ((::System::UInt64(*)(::PVOID))((::PBYTE)hIl2Cpp + BHEDAEBKDML_EOAPGMILKNM_OFFSET))(this);
	}

	::Foundation::AssetPath ABGGGFIDPMO()
	{
		return ((::Foundation::AssetPath(*)(::PVOID))((::PBYTE)hIl2Cpp + BHEDAEBKDML_ABGGGFIDPMO_OFFSET))(this);
	}

	::Foundation::AssetPath CIJEEEKMKDP()
	{
		return ((::Foundation::AssetPath(*)(::PVOID))((::PBYTE)hIl2Cpp + BHEDAEBKDML_CIJEEEKMKDP_OFFSET))(this);
	}

	::System::Int32 PPIFNHNGCGO()
	{
		return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + BHEDAEBKDML_PPIFNHNGCGO_OFFSET))(this);
	}

	::System::String* MPNOMNHBINN()
	{
		return ((::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + BHEDAEBKDML_MPNOMNHBINN_OFFSET))(this);
	}

	::System::Void COFGIJJOFLP()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + BHEDAEBKDML_COFGIJJOFLP_OFFSET))(this);
	}

	::System::Int32 MEIDENMKIFB()
	{
		return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + BHEDAEBKDML_MEIDENMKIFB_OFFSET))(this);
	}

	::Foundation::AssetPath FDKAEKHLJNF()
	{
		return ((::Foundation::AssetPath(*)(::PVOID))((::PBYTE)hIl2Cpp + BHEDAEBKDML_FDKAEKHLJNF_OFFSET))(this);
	}

	::System::Void FOCAOAGCLCK(::System::Boolean EGEGIMGMJHN)
	{
		return ((::System::Void(*)(::PVOID, ::System::Boolean))((::PBYTE)hIl2Cpp + BHEDAEBKDML_FOCAOAGCLCK_OFFSET))(this, EGEGIMGMJHN);
	}

	::System::UInt64 BODIPAAMBBJ()
	{
		return ((::System::UInt64(*)(::PVOID))((::PBYTE)hIl2Cpp + BHEDAEBKDML_BODIPAAMBBJ_OFFSET))(this);
	}

	::System::Boolean LJANCIBECFG()
	{
		return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + BHEDAEBKDML_LJANCIBECFG_OFFSET))(this);
	}

	::System::UInt64 PCLCOIPMHEE()
	{
		return ((::System::UInt64(*)(::PVOID))((::PBYTE)hIl2Cpp + BHEDAEBKDML_PCLCOIPMHEE_OFFSET))(this);
	}
};
