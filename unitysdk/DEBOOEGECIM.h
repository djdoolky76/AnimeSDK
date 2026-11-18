#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/DEGFLEDKFGF.h"
#include "unitysdk/ENGKPGFGGLM.h"

namespace System { class String; }

#define DEBOOEGECIM_CNHBDOMKKDE_OFFSET UNITYSDK_OFFSET(0x12404E90)
#define DEBOOEGECIM_DPIHOJBBGLA_OFFSET UNITYSDK_OFFSET(0x12404E50)
#define DEBOOEGECIM_ECEIFPLMCFI_OFFSET UNITYSDK_OFFSET(0x12404F50)
#define DEBOOEGECIM_FHCEFIPPBBO_OFFSET UNITYSDK_OFFSET(0x12404F70)
#define DEBOOEGECIM_FIGPAOKNJLN_OFFSET UNITYSDK_OFFSET(0x12404DB0)
#define DEBOOEGECIM_GCDIGLPEOGH_OFFSET UNITYSDK_OFFSET(0x12404D00)
#define DEBOOEGECIM_GCDOBCADFPF_OFFSET UNITYSDK_OFFSET(0x12404F60)
#define DEBOOEGECIM_MJFJBMPCCHO_OFFSET UNITYSDK_OFFSET(0x12404E40)
#define DEBOOEGECIM_NABKMBKDKAI_OFFSET UNITYSDK_OFFSET(0x12404D90)
#define DEBOOEGECIM_OEABEEEJLML_OFFSET UNITYSDK_OFFSET(0x12404DA0)
#define DEBOOEGECIM_TOSTRING_OFFSET UNITYSDK_OFFSET(0x12404B70)
#define DEBOOEGECIM__CCTOR_OFFSET UNITYSDK_OFFSET(0x12404C80)
#define DEBOOEGECIM__CTOR_OFFSET UNITYSDK_OFFSET(0x12404CF0)

inline static constexpr unsigned int DEBOOEGECIM_TypeDefinitionIndex = 46901;

class DEBOOEGECIM : public ::ENGKPGFGGLM
{
public:
	// static const ::System::UInt16 GBKNNOFLGDJ = 0x12; // 0x0
	::System::Single _BEHAILAJGKL_k__BackingField; // 0x20
	::DEGFLEDKFGF _ALJHPFGOGLN_k__BackingField; // 0x24
	::System::Single _LINLJBEBKPK_k__BackingField; // 0x28

	static ::System::Void _cctor()
	{
		return ((::System::Void(*)())((::PBYTE)hIl2Cpp + DEBOOEGECIM__CCTOR_OFFSET))();
	}

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + DEBOOEGECIM__CTOR_OFFSET))(this);
	}

	::System::String* ToString()
	{
		return ((::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + DEBOOEGECIM_TOSTRING_OFFSET))(this);
	}

	::System::Void GCDIGLPEOGH()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + DEBOOEGECIM_GCDIGLPEOGH_OFFSET))(this);
	}

	::System::Single NABKMBKDKAI()
	{
		return ((::System::Single(*)(::PVOID))((::PBYTE)hIl2Cpp + DEBOOEGECIM_NABKMBKDKAI_OFFSET))(this);
	}

	::System::Single OEABEEEJLML()
	{
		return ((::System::Single(*)(::PVOID))((::PBYTE)hIl2Cpp + DEBOOEGECIM_OEABEEEJLML_OFFSET))(this);
	}

	::System::Void FIGPAOKNJLN()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + DEBOOEGECIM_FIGPAOKNJLN_OFFSET))(this);
	}

	::System::Void MJFJBMPCCHO(::System::Single EGEGIMGMJHN)
	{
		return ((::System::Void(*)(::PVOID, ::System::Single))((::PBYTE)hIl2Cpp + DEBOOEGECIM_MJFJBMPCCHO_OFFSET))(this, EGEGIMGMJHN);
	}

	::System::String* DPIHOJBBGLA()
	{
		return ((::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + DEBOOEGECIM_DPIHOJBBGLA_OFFSET))(this);
	}

	::System::Void CNHBDOMKKDE(::System::UInt32 DKBGLBIECBN, ::DEGFLEDKFGF GDCOFHCJFKI, ::System::Single HBEKKMCBGBK, ::System::Single EJAOAGGJHHA)
	{
		return ((::System::Void(*)(::PVOID, ::System::UInt32, ::DEGFLEDKFGF, ::System::Single, ::System::Single))((::PBYTE)hIl2Cpp + DEBOOEGECIM_CNHBDOMKKDE_OFFSET))(this, DKBGLBIECBN, GDCOFHCJFKI, HBEKKMCBGBK, EJAOAGGJHHA);
	}

	::System::Void ECEIFPLMCFI(::System::Single EGEGIMGMJHN)
	{
		return ((::System::Void(*)(::PVOID, ::System::Single))((::PBYTE)hIl2Cpp + DEBOOEGECIM_ECEIFPLMCFI_OFFSET))(this, EGEGIMGMJHN);
	}

	::DEGFLEDKFGF GCDOBCADFPF()
	{
		return ((::DEGFLEDKFGF(*)(::PVOID))((::PBYTE)hIl2Cpp + DEBOOEGECIM_GCDOBCADFPF_OFFSET))(this);
	}

	::System::Void FHCEFIPPBBO(::DEGFLEDKFGF EGEGIMGMJHN)
	{
		return ((::System::Void(*)(::PVOID, ::DEGFLEDKFGF))((::PBYTE)hIl2Cpp + DEBOOEGECIM_FHCEFIPPBBO_OFFSET))(this, EGEGIMGMJHN);
	}
};
