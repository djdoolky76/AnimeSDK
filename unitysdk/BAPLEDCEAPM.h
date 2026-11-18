#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

#define BAPLEDCEAPM_CMDNDBCEMAN_OFFSET UNITYSDK_OFFSET(0x11BE6990)
#define BAPLEDCEAPM_EFOFHMNBJJN_OFFSET UNITYSDK_OFFSET(0x11BE67A0)
#define BAPLEDCEAPM_FHJDEDNNNLN_OFFSET UNITYSDK_OFFSET(0x11BE6540)
#define BAPLEDCEAPM_HFGKNNMFJOO_OFFSET UNITYSDK_OFFSET(0x11BE6610)
#define BAPLEDCEAPM_JJKFANDPDAI_OFFSET UNITYSDK_OFFSET(0x11BE6900)
#define BAPLEDCEAPM_JNMPOOAHPCK_OFFSET UNITYSDK_OFFSET(0x11BE6440)
#define BAPLEDCEAPM_MPKLCFIJENO_OFFSET UNITYSDK_OFFSET(0x11BE64A0)
#define BAPLEDCEAPM_NAPPGJMLEIO_OFFSET UNITYSDK_OFFSET(0x11BE6580)
#define BAPLEDCEAPM_PFEJOLNBCGO_OFFSET UNITYSDK_OFFSET(0x11BE6700)

inline static constexpr unsigned int BAPLEDCEAPM_TypeDefinitionIndex = 77976;

class BAPLEDCEAPM : public ::System::Object
{
public:
	static ::System::Single* StaticGet_GFONMHOPKEL()
	{
		return (::System::Single*)Il2CppClass::FromTypeDefinitionIndex(BAPLEDCEAPM_TypeDefinitionIndex)->GetStaticField(0xED00);
	}

	static ::System::Boolean JNMPOOAHPCK(::System::Single PKHPPCCOKOM)
	{
		return ((::System::Boolean(*)(::System::Single))((::PBYTE)hIl2Cpp + BAPLEDCEAPM_JNMPOOAHPCK_OFFSET))(PKHPPCCOKOM);
	}

	static ::System::Void MPKLCFIJENO()
	{
		return ((::System::Void(*)())((::PBYTE)hIl2Cpp + BAPLEDCEAPM_MPKLCFIJENO_OFFSET))();
	}

	static ::System::Void NAPPGJMLEIO()
	{
		return ((::System::Void(*)())((::PBYTE)hIl2Cpp + BAPLEDCEAPM_NAPPGJMLEIO_OFFSET))();
	}

	static ::System::Void HFGKNNMFJOO(::System::Int32 CDPDJDNDHOH)
	{
		return ((::System::Void(*)(::System::Int32))((::PBYTE)hIl2Cpp + BAPLEDCEAPM_HFGKNNMFJOO_OFFSET))(CDPDJDNDHOH);
	}

	static ::System::Void PFEJOLNBCGO()
	{
		return ((::System::Void(*)())((::PBYTE)hIl2Cpp + BAPLEDCEAPM_PFEJOLNBCGO_OFFSET))();
	}

	static ::System::Void EFOFHMNBJJN(::System::Int32 FBHDLAEDGOH)
	{
		return ((::System::Void(*)(::System::Int32))((::PBYTE)hIl2Cpp + BAPLEDCEAPM_EFOFHMNBJJN_OFFSET))(FBHDLAEDGOH);
	}

	static ::System::Void JJKFANDPDAI()
	{
		return ((::System::Void(*)())((::PBYTE)hIl2Cpp + BAPLEDCEAPM_JJKFANDPDAI_OFFSET))();
	}

	static ::System::Void CMDNDBCEMAN()
	{
		return ((::System::Void(*)())((::PBYTE)hIl2Cpp + BAPLEDCEAPM_CMDNDBCEMAN_OFFSET))();
	}

	static ::System::Void FHJDEDNNNLN()
	{
		return ((::System::Void(*)())((::PBYTE)hIl2Cpp + BAPLEDCEAPM_FHJDEDNNNLN_OFFSET))();
	}
};
