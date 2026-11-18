#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/JGABMFBIABN.h"
#include "unitysdk/System/Nullable_1.h"
#include "unitysdk/System/Object.h"

class NNAMAFIPLGB;
namespace System::Collections::Generic { template <typename T> class List_1; }

#define FJOKOGDDBIN_AHFCNBJFPMP_OFFSET UNITYSDK_OFFSET(0x116B68E0)
#define FJOKOGDDBIN_AIFMPKANMEL_OFFSET UNITYSDK_OFFSET(0x116B6C40)
#define FJOKOGDDBIN_BLGFJHCJCEO_OFFSET UNITYSDK_OFFSET(0x116B6D50)
#define FJOKOGDDBIN_CLCHFBGFEMK_OFFSET UNITYSDK_OFFSET(0x116B6850)
#define FJOKOGDDBIN_ENJDKPHIBLG_OFFSET UNITYSDK_OFFSET(0x116B70B0)
#define FJOKOGDDBIN_LBGOPHPOLFD_OFFSET UNITYSDK_OFFSET(0x116B6E40)
#define FJOKOGDDBIN_MMGFEOOAOCO_OFFSET UNITYSDK_OFFSET(0x116B69D0)
#define FJOKOGDDBIN_OAJEIDFGCII_OFFSET UNITYSDK_OFFSET(0x116B7190)
#define FJOKOGDDBIN__CTOR_OFFSET UNITYSDK_OFFSET(0x116B6840)

inline static constexpr unsigned int FJOKOGDDBIN_TypeDefinitionIndex = 85129;

class FJOKOGDDBIN : public ::System::Object
{
public:
	::System::Collections::Generic::List_1<::NNAMAFIPLGB*>* KGALMGDBPAP; // 0x10
	::System::Int32 MAEJNIABPHI; // 0x18
	::JGABMFBIABN EBGAAGGJCCE; // 0x1C
	::System::Int32 ODLLCNGPBAA; // 0x20
	::System::Nullable_1<::System::Boolean> MHHAIIIMHLB; // 0x24
	::System::Int32 PCKJFBDMOIC; // 0x28

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + FJOKOGDDBIN__CTOR_OFFSET))(this);
	}

	::NNAMAFIPLGB* CLCHFBGFEMK(::System::Int32 HBJOLKHGGDD)
	{
		return ((::NNAMAFIPLGB*(*)(::PVOID, ::System::Int32))((::PBYTE)hIl2Cpp + FJOKOGDDBIN_CLCHFBGFEMK_OFFSET))(this, HBJOLKHGGDD);
	}

	::System::Void AHFCNBJFPMP(::System::Int32 MDJFJPHNGCK, ::System::Int32 GOKEGHENOGP)
	{
		return ((::System::Void(*)(::PVOID, ::System::Int32, ::System::Int32))((::PBYTE)hIl2Cpp + FJOKOGDDBIN_AHFCNBJFPMP_OFFSET))(this, MDJFJPHNGCK, GOKEGHENOGP);
	}

	::System::Void MMGFEOOAOCO(::System::Nullable_1<::System::Int32> JGDAHIOOOKH)
	{
		return ((::System::Void(*)(::PVOID, ::System::Nullable_1<::System::Int32>))((::PBYTE)hIl2Cpp + FJOKOGDDBIN_MMGFEOOAOCO_OFFSET))(this, JGDAHIOOOKH);
	}

	::System::Void AIFMPKANMEL(::System::Int32 MDJFJPHNGCK, ::System::Single MFMMNDAHFAD)
	{
		return ((::System::Void(*)(::PVOID, ::System::Int32, ::System::Single))((::PBYTE)hIl2Cpp + FJOKOGDDBIN_AIFMPKANMEL_OFFSET))(this, MDJFJPHNGCK, MFMMNDAHFAD);
	}

	::System::Void BLGFJHCJCEO(::System::Int32 MDJFJPHNGCK, ::System::Int32 JGDAHIOOOKH)
	{
		return ((::System::Void(*)(::PVOID, ::System::Int32, ::System::Int32))((::PBYTE)hIl2Cpp + FJOKOGDDBIN_BLGFJHCJCEO_OFFSET))(this, MDJFJPHNGCK, JGDAHIOOOKH);
	}

	::System::Void LBGOPHPOLFD(::System::Nullable_1<::System::Int32> GOKEGHENOGP)
	{
		return ((::System::Void(*)(::PVOID, ::System::Nullable_1<::System::Int32>))((::PBYTE)hIl2Cpp + FJOKOGDDBIN_LBGOPHPOLFD_OFFSET))(this, GOKEGHENOGP);
	}

	::NNAMAFIPLGB* ENJDKPHIBLG(::System::Int32 MDJFJPHNGCK)
	{
		return ((::NNAMAFIPLGB*(*)(::PVOID, ::System::Int32))((::PBYTE)hIl2Cpp + FJOKOGDDBIN_ENJDKPHIBLG_OFFSET))(this, MDJFJPHNGCK);
	}

	::System::Boolean OAJEIDFGCII()
	{
		return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + FJOKOGDDBIN_OAJEIDFGCII_OFFSET))(this);
	}
};
