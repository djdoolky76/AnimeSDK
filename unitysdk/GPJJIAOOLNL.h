#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

#define GPJJIAOOLNL_BKJNDOCOGBL_OFFSET UNITYSDK_OFFSET(0x125F0750)
#define GPJJIAOOLNL_GKOGEIIFPBL_OFFSET UNITYSDK_OFFSET(0x125F0680)
#define GPJJIAOOLNL_IKCJELOENPI_OFFSET UNITYSDK_OFFSET(0x125F0640)
#define GPJJIAOOLNL_MHIFMDHJIJH_OFFSET UNITYSDK_OFFSET(0x125F0590)
#define GPJJIAOOLNL_MKAJHNFKMMB_OFFSET UNITYSDK_OFFSET(0x125F07B0)
#define GPJJIAOOLNL_MLGOBAMJKIG_OFFSET UNITYSDK_OFFSET(0x125F0700)
#define GPJJIAOOLNL_PLPONJAKNEB_OFFSET UNITYSDK_OFFSET(0x125F0540)
#define GPJJIAOOLNL__CCTOR_OFFSET UNITYSDK_OFFSET(0x125F0500)
#define GPJJIAOOLNL__CTOR_OFFSET UNITYSDK_OFFSET(0x125F04D0)

inline static constexpr unsigned int GPJJIAOOLNL_TypeDefinitionIndex = 74507;

class GPJJIAOOLNL : public ::System::Object
{
public:
	static ::System::Int32* StaticGet_NJIHKHEPFNK()
	{
		return (::System::Int32*)Il2CppClass::FromTypeDefinitionIndex(GPJJIAOOLNL_TypeDefinitionIndex)->GetStaticField(0x126F0);
	}
	::System::Single BOJODJALEAJ; // 0x10
	::System::Boolean JKEIGNHKJGD; // 0x14
	::System::Byte _padding0[0x3];
	::System::Single HKLFOAJLIAE; // 0x18
	::System::Single EPPCCEEAHLN; // 0x1C

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + GPJJIAOOLNL__CTOR_OFFSET))(this);
	}

	static ::System::Void _cctor()
	{
		return ((::System::Void(*)())((::PBYTE)hIl2Cpp + GPJJIAOOLNL__CCTOR_OFFSET))();
	}

	::System::Void PLPONJAKNEB()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + GPJJIAOOLNL_PLPONJAKNEB_OFFSET))(this);
	}

	::System::Void IKCJELOENPI()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + GPJJIAOOLNL_IKCJELOENPI_OFFSET))(this);
	}

	::System::Void GKOGEIIFPBL(::System::Single DPFPODLJNEM, ::System::Boolean ACCKOJFBNLF)
	{
		return ((::System::Void(*)(::PVOID, ::System::Single, ::System::Boolean))((::PBYTE)hIl2Cpp + GPJJIAOOLNL_GKOGEIIFPBL_OFFSET))(this, DPFPODLJNEM, ACCKOJFBNLF);
	}

	::System::Void MLGOBAMJKIG()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + GPJJIAOOLNL_MLGOBAMJKIG_OFFSET))(this);
	}

	::System::Void BKJNDOCOGBL(::System::Boolean ACCKOJFBNLF)
	{
		return ((::System::Void(*)(::PVOID, ::System::Boolean))((::PBYTE)hIl2Cpp + GPJJIAOOLNL_BKJNDOCOGBL_OFFSET))(this, ACCKOJFBNLF);
	}

	::System::Void MKAJHNFKMMB(::System::Boolean MGAEJGJAINP)
	{
		return ((::System::Void(*)(::PVOID, ::System::Boolean))((::PBYTE)hIl2Cpp + GPJJIAOOLNL_MKAJHNFKMMB_OFFSET))(this, MGAEJGJAINP);
	}

	::System::Void MHIFMDHJIJH()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + GPJJIAOOLNL_MHIFMDHJIJH_OFFSET))(this);
	}
};
