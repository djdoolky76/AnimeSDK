#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/ENGKPGFGGLM.h"

class CEFNBKMCNND_AIGAAOFPICA;
namespace System { class String; }

#define CEFNBKMCNND_APKGKDBAHDP_OFFSET UNITYSDK_OFFSET(0x139A67B0)
#define CEFNBKMCNND_CBOKMAKCPML_OFFSET UNITYSDK_OFFSET(0x139A6710)
#define CEFNBKMCNND_CNHBDOMKKDE_OFFSET UNITYSDK_OFFSET(0x139A6600)
#define CEFNBKMCNND_FIGPAOKNJLN_OFFSET UNITYSDK_OFFSET(0x139A6720)
#define CEFNBKMCNND_GCDIGLPEOGH_OFFSET UNITYSDK_OFFSET(0x139A6570)
#define CEFNBKMCNND_OHFHFOHMBJH_OFFSET UNITYSDK_OFFSET(0x139A6670)
#define CEFNBKMCNND_PHOADBJGFBE_OFFSET UNITYSDK_OFFSET(0x139A6450)
#define CEFNBKMCNND__CCTOR_OFFSET UNITYSDK_OFFSET(0x139A64F0)
#define CEFNBKMCNND__CTOR_OFFSET UNITYSDK_OFFSET(0x139A6560)

inline static constexpr unsigned int CEFNBKMCNND_TypeDefinitionIndex = 60777;

class CEFNBKMCNND : public ::ENGKPGFGGLM
{
public:
	// static const ::System::UInt16 GBKNNOFLGDJ = 0x125; // 0x0
	::CEFNBKMCNND_AIGAAOFPICA* MBEAGMGPOLM; // 0x20
	::System::String* KPIAFDELPJL; // 0x28
	::System::Boolean _PCCJJJILNIK_k__BackingField; // 0x30
	::System::Byte _padding0[0x3];
	::System::UInt32 AOBBAMIMMJM; // 0x34

	static ::System::Void _cctor()
	{
		return ((::System::Void(*)())((::PBYTE)hIl2Cpp + CEFNBKMCNND__CCTOR_OFFSET))();
	}

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CEFNBKMCNND__CTOR_OFFSET))(this);
	}

	::System::Void PHOADBJGFBE()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CEFNBKMCNND_PHOADBJGFBE_OFFSET))(this);
	}

	::System::Void GCDIGLPEOGH()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CEFNBKMCNND_GCDIGLPEOGH_OFFSET))(this);
	}

	::System::Void CNHBDOMKKDE(::System::String* FFNKDGGHBPP, ::System::UInt32 BKLGNCBNEGM)
	{
		return ((::System::Void(*)(::PVOID, ::System::String*, ::System::UInt32))((::PBYTE)hIl2Cpp + CEFNBKMCNND_CNHBDOMKKDE_OFFSET))(this, FFNKDGGHBPP, BKLGNCBNEGM);
	}

	::System::Void OHFHFOHMBJH()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CEFNBKMCNND_OHFHFOHMBJH_OFFSET))(this);
	}

	::System::Boolean CBOKMAKCPML()
	{
		return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + CEFNBKMCNND_CBOKMAKCPML_OFFSET))(this);
	}

	::System::Void FIGPAOKNJLN()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CEFNBKMCNND_FIGPAOKNJLN_OFFSET))(this);
	}

	::System::Void APKGKDBAHDP(::System::Boolean EGEGIMGMJHN)
	{
		return ((::System::Void(*)(::PVOID, ::System::Boolean))((::PBYTE)hIl2Cpp + CEFNBKMCNND_APKGKDBAHDP_OFFSET))(this, EGEGIMGMJHN);
	}
};
