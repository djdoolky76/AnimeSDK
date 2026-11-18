#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

#define NBCIGBMMOPB_CNIICAMIINL_OFFSET UNITYSDK_OFFSET(0x105A90F0)
#define NBCIGBMMOPB_EJEJBDMMKKE_OFFSET UNITYSDK_OFFSET(0x105A9100)
#define NBCIGBMMOPB_EPJPIOIBEKO_OFFSET UNITYSDK_OFFSET(0x105A8E90)
#define NBCIGBMMOPB_GPIOJBLKFAJ_OFFSET UNITYSDK_OFFSET(0x105A8EA0)
#define NBCIGBMMOPB_HHCLHBPGAAK_OFFSET UNITYSDK_OFFSET(0x105A9350)
#define NBCIGBMMOPB_IDHOMHHFPOH_OFFSET UNITYSDK_OFFSET(0x105A8F70)
#define NBCIGBMMOPB_MCNGMIGNAGN_OFFSET UNITYSDK_OFFSET(0x105A90A0)
#define NBCIGBMMOPB_NGFKBKCFPLK_OFFSET UNITYSDK_OFFSET(0x105A9090)
#define NBCIGBMMOPB_NODELEEKAIF_OFFSET UNITYSDK_OFFSET(0x105A8FC0)
#define NBCIGBMMOPB_PAKGLAOCLKB_OFFSET UNITYSDK_OFFSET(0x105A9110)
#define NBCIGBMMOPB_PBFBICMFFFN_OFFSET UNITYSDK_OFFSET(0x105A91A0)
#define NBCIGBMMOPB_PHOADBJGFBE_OFFSET UNITYSDK_OFFSET(0x105A9270)
#define NBCIGBMMOPB__CTOR_OFFSET UNITYSDK_OFFSET(0x105A8D90)

inline static constexpr unsigned int NBCIGBMMOPB_TypeDefinitionIndex = 57666;

class NBCIGBMMOPB : public ::System::Object
{
public:
	::Il2CppArray<::System::Single>* LJBPECKCCEA; // 0x10
	::System::Int32 HBCDAPAOMFC; // 0x18
	::System::Int32 JHFKDGBCOBA; // 0x1C
	::System::Int32 GHFAPBKLIPE; // 0x20
	::System::Int32 LDADJIPGKAE; // 0x24

	::System::Void _ctor(::System::Int32 GHFAPBKLIPE)
	{
		return ((::System::Void(*)(::PVOID, ::System::Int32))((::PBYTE)hIl2Cpp + NBCIGBMMOPB__CTOR_OFFSET))(this, GHFAPBKLIPE);
	}

	::System::Int32 EPJPIOIBEKO()
	{
		return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + NBCIGBMMOPB_EPJPIOIBEKO_OFFSET))(this);
	}

	::System::Single GPIOJBLKFAJ(::System::Int32 ABHBKFJKINO)
	{
		return ((::System::Single(*)(::PVOID, ::System::Int32))((::PBYTE)hIl2Cpp + NBCIGBMMOPB_GPIOJBLKFAJ_OFFSET))(this, ABHBKFJKINO);
	}

	::System::Boolean NODELEEKAIF(::System::Int32& FKGNDKNHAEH, ::System::Int32 OKCJOFEPMMH)
	{
		return ((::System::Boolean(*)(::PVOID, ::System::Int32&, ::System::Int32))((::PBYTE)hIl2Cpp + NBCIGBMMOPB_NODELEEKAIF_OFFSET))(this, FKGNDKNHAEH, OKCJOFEPMMH);
	}

	::System::Int32 NGFKBKCFPLK()
	{
		return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + NBCIGBMMOPB_NGFKBKCFPLK_OFFSET))(this);
	}

	::System::Boolean MCNGMIGNAGN()
	{
		return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + NBCIGBMMOPB_MCNGMIGNAGN_OFFSET))(this);
	}

	::System::Int32 CNIICAMIINL()
	{
		return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + NBCIGBMMOPB_CNIICAMIINL_OFFSET))(this);
	}

	::System::Int32 EJEJBDMMKKE()
	{
		return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + NBCIGBMMOPB_EJEJBDMMKKE_OFFSET))(this);
	}

	::System::Void PAKGLAOCLKB()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + NBCIGBMMOPB_PAKGLAOCLKB_OFFSET))(this);
	}

	::System::Boolean IDHOMHHFPOH()
	{
		return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + NBCIGBMMOPB_IDHOMHHFPOH_OFFSET))(this);
	}

	::System::Void PBFBICMFFFN(::System::Single NFFNEFLKPDG)
	{
		return ((::System::Void(*)(::PVOID, ::System::Single))((::PBYTE)hIl2Cpp + NBCIGBMMOPB_PBFBICMFFFN_OFFSET))(this, NFFNEFLKPDG);
	}

	::System::Void PHOADBJGFBE()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + NBCIGBMMOPB_PHOADBJGFBE_OFFSET))(this);
	}

	::System::Void HHCLHBPGAAK(::System::Single GEGOALONGBI)
	{
		return ((::System::Void(*)(::PVOID, ::System::Single))((::PBYTE)hIl2Cpp + NBCIGBMMOPB_HHCLHBPGAAK_OFFSET))(this, GEGOALONGBI);
	}
};
