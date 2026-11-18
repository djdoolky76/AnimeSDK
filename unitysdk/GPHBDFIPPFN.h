#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/APGOKGEOJJJ.h"
#include "unitysdk/CPGCOBNECDL.h"

namespace System { class String; }
namespace System::Collections::Generic { template <typename T> class IList_1; }

#define GPHBDFIPPFN_DPIHOJBBGLA_OFFSET UNITYSDK_OFFSET(0x17A2DBB0)
#define GPHBDFIPPFN_FCFOEJGPDNO_OFFSET UNITYSDK_OFFSET(0x17A2D890)
#define GPHBDFIPPFN_JLCCJELKGDC_OFFSET UNITYSDK_OFFSET(0x17A2DC00)
#define GPHBDFIPPFN_JOJDEGMHKKD_OFFSET UNITYSDK_OFFSET(0x17A2DBA0)
#define GPHBDFIPPFN_LJOIMGHANDG_OFFSET UNITYSDK_OFFSET(0x17A2DBF0)
#define GPHBDFIPPFN_TOSTRING_OFFSET UNITYSDK_OFFSET(0x17A2DA30)
#define GPHBDFIPPFN__CTOR_OFFSET UNITYSDK_OFFSET(0x17A2D880)

inline static constexpr unsigned int GPHBDFIPPFN_TypeDefinitionIndex = 71247;

class GPHBDFIPPFN : public ::APGOKGEOJJJ
{
public:
	::APGOKGEOJJJ* _NLJNMDGAAOB_k__BackingField; // 0x10
	::APGOKGEOJJJ* _ADFPJDCNPKM_k__BackingField; // 0x18
	::CPGCOBNECDL _HGEFPNFCPHE_k__BackingField; // 0x20

	::System::Void _ctor(::APGOKGEOJJJ* KILPCOMOCMD, ::CPGCOBNECDL IIDKBMFGAOL, ::APGOKGEOJJJ* BBCODANAFGI)
	{
		return ((::System::Void(*)(::PVOID, ::APGOKGEOJJJ*, ::CPGCOBNECDL, ::APGOKGEOJJJ*))((::PBYTE)hIl2Cpp + GPHBDFIPPFN__CTOR_OFFSET))(this, KILPCOMOCMD, IIDKBMFGAOL, BBCODANAFGI);
	}

	::System::Boolean FCFOEJGPDNO(::System::Collections::Generic::IList_1<::System::Int32>* HGKANJHHLMF)
	{
		return ((::System::Boolean(*)(::PVOID, ::System::Collections::Generic::IList_1<::System::Int32>*))((::PBYTE)hIl2Cpp + GPHBDFIPPFN_FCFOEJGPDNO_OFFSET))(this, HGKANJHHLMF);
	}

	::System::String* ToString()
	{
		return ((::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + GPHBDFIPPFN_TOSTRING_OFFSET))(this);
	}

	::APGOKGEOJJJ* JOJDEGMHKKD()
	{
		return ((::APGOKGEOJJJ*(*)(::PVOID))((::PBYTE)hIl2Cpp + GPHBDFIPPFN_JOJDEGMHKKD_OFFSET))(this);
	}

	::System::String* DPIHOJBBGLA()
	{
		return ((::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + GPHBDFIPPFN_DPIHOJBBGLA_OFFSET))(this);
	}

	::CPGCOBNECDL LJOIMGHANDG()
	{
		return ((::CPGCOBNECDL(*)(::PVOID))((::PBYTE)hIl2Cpp + GPHBDFIPPFN_LJOIMGHANDG_OFFSET))(this);
	}

	::APGOKGEOJJJ* JLCCJELKGDC()
	{
		return ((::APGOKGEOJJJ*(*)(::PVOID))((::PBYTE)hIl2Cpp + GPHBDFIPPFN_JLCCJELKGDC_OFFSET))(this);
	}
};
