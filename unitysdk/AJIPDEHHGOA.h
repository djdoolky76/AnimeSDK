#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/MHMFINLCNFN.h"
#include "unitysdk/LGCNEDCMPKM.h"

class CPABOPKIGAL;
class EKOMAFPIPMA_MKHNHHPDENB;
class LGAFMFNMCOG;
class MKBBPOFGLOF;
class ODCBCMEIOGG;
class OIMAALLHMNL;
namespace System { class String; }
namespace System::Collections::Generic { template <typename T> class List_1; }
template <typename T> class KCMIFNGABDC_1;

#define AJIPDEHHGOA_CMLGEPFPNKL_OFFSET UNITYSDK_OFFSET(0x12CFD930)
#define AJIPDEHHGOA_ELMEFBBHCEG_OFFSET UNITYSDK_OFFSET(0x12CFC970)
#define AJIPDEHHGOA_FEDNEKFMGNF_OFFSET UNITYSDK_OFFSET(0x12CFC4D0)
#define AJIPDEHHGOA_GDEOPIBNOIN_OFFSET UNITYSDK_OFFSET(0x12CFEB00)
#define AJIPDEHHGOA_IFPGNBOGHBP_OFFSET UNITYSDK_OFFSET(0x12CFEB10)
#define AJIPDEHHGOA_JFBDALLPLBA_OFFSET UNITYSDK_OFFSET(0x12CFE340)
#define AJIPDEHHGOA_MLAAFFHCOJE_OFFSET UNITYSDK_OFFSET(0x12CFC2F0)
#define AJIPDEHHGOA_NKPAGONEHCH_OFFSET UNITYSDK_OFFSET(0x12CFE3D0)
#define AJIPDEHHGOA_PADCLPACCBA_OFFSET UNITYSDK_OFFSET(0x12CFDF30)
#define AJIPDEHHGOA__CTOR_OFFSET UNITYSDK_OFFSET(0x12CFDB40)

inline static constexpr unsigned int AJIPDEHHGOA_TypeDefinitionIndex = 43550;

class AJIPDEHHGOA : public ::MHMFINLCNFN
{
public:
	::KCMIFNGABDC_1<::System::Int32>* NMGJJLAOGNB; // 0x28
	::KCMIFNGABDC_1<::System::Collections::Generic::List_1<::System::String*>*>* MGCJOFFFNCN; // 0x30
	::KCMIFNGABDC_1<::System::String*>* GGPDDKIDFAN; // 0x38
	::KCMIFNGABDC_1<::System::Collections::Generic::List_1<::System::Int32>*>* APIGHMANLKG; // 0x40
	::CPABOPKIGAL* ALPLCAFJPDO; // 0x48
	::OIMAALLHMNL* NEENCHEAKKI; // 0x50
	::KCMIFNGABDC_1<::System::Collections::Generic::List_1<::System::Int32>*>* GPNLCKFAKII; // 0x58
	::KCMIFNGABDC_1<::System::Collections::Generic::List_1<::System::Int32>*>* NDNHIAFIMBC; // 0x60
	::MKBBPOFGLOF* IDBCBGMPMGN; // 0x68
	::KCMIFNGABDC_1<::System::Int32>* IFBKNJHLHMD; // 0x70
	::KCMIFNGABDC_1<::ODCBCMEIOGG*>* NPFGGHIKAHM; // 0x78
	::KCMIFNGABDC_1<::System::Int32>* HGPAEGALPFE; // 0x80
	::CPABOPKIGAL* EGCCIODCJIA; // 0x88

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + AJIPDEHHGOA__CTOR_OFFSET))(this);
	}

	::System::Void MLAAFFHCOJE(::LGAFMFNMCOG* ONBDAIKININ)
	{
		return ((::System::Void(*)(::PVOID, ::LGAFMFNMCOG*))((::PBYTE)hIl2Cpp + AJIPDEHHGOA_MLAAFFHCOJE_OFFSET))(this, ONBDAIKININ);
	}

	::System::Void FEDNEKFMGNF()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + AJIPDEHHGOA_FEDNEKFMGNF_OFFSET))(this);
	}

	::System::Void ELMEFBBHCEG(::LGCNEDCMPKM& BKBGPKNGNMF)
	{
		return ((::System::Void(*)(::PVOID, ::LGCNEDCMPKM&))((::PBYTE)hIl2Cpp + AJIPDEHHGOA_ELMEFBBHCEG_OFFSET))(this, BKBGPKNGNMF);
	}

	::System::Void PADCLPACCBA(::System::Collections::Generic::List_1<::System::Int32>* JFDHFKNFPAJ)
	{
		return ((::System::Void(*)(::PVOID, ::System::Collections::Generic::List_1<::System::Int32>*))((::PBYTE)hIl2Cpp + AJIPDEHHGOA_PADCLPACCBA_OFFSET))(this, JFDHFKNFPAJ);
	}

	::System::Void JFBDALLPLBA(::LGAFMFNMCOG* MIALFKCCCPI)
	{
		return ((::System::Void(*)(::PVOID, ::LGAFMFNMCOG*))((::PBYTE)hIl2Cpp + AJIPDEHHGOA_JFBDALLPLBA_OFFSET))(this, MIALFKCCCPI);
	}

	::System::Void NKPAGONEHCH()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + AJIPDEHHGOA_NKPAGONEHCH_OFFSET))(this);
	}

	::System::Void GDEOPIBNOIN()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + AJIPDEHHGOA_GDEOPIBNOIN_OFFSET))(this);
	}

	::EKOMAFPIPMA_MKHNHHPDENB* CMLGEPFPNKL()
	{
		return ((::EKOMAFPIPMA_MKHNHHPDENB*(*)(::PVOID))((::PBYTE)hIl2Cpp + AJIPDEHHGOA_CMLGEPFPNKL_OFFSET))(this);
	}

	::System::Void IFPGNBOGHBP()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + AJIPDEHHGOA_IFPGNBOGHBP_OFFSET))(this);
	}
};
