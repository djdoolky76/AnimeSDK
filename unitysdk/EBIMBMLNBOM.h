#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

class IHCADCOJCHL;
namespace System { class String; }

#define EBIMBMLNBOM_ALGDLJGCEHD_OFFSET UNITYSDK_OFFSET(0xFDD0190)
#define EBIMBMLNBOM_BMGHHLJNCIH_OFFSET UNITYSDK_OFFSET(0xFDD02E0)
#define EBIMBMLNBOM_COPIDBEMEIE_OFFSET UNITYSDK_OFFSET(0xFDD01A0)
#define EBIMBMLNBOM_GKJFEIFEMFJ_OFFSET UNITYSDK_OFFSET(0xFDD0070)
#define EBIMBMLNBOM_IDHOMHHFPOH_OFFSET UNITYSDK_OFFSET(0xFDD0140)
#define EBIMBMLNBOM_IMCGCBECGMN_OFFSET UNITYSDK_OFFSET(0xFDD0340)
#define EBIMBMLNBOM_OAJJHNOMAJN_OFFSET UNITYSDK_OFFSET(0xFDD01C0)
#define EBIMBMLNBOM_OPIAMPMCMFA_OFFSET UNITYSDK_OFFSET(0xFDD01B0)
#define EBIMBMLNBOM_PFPMFENMCFO_OFFSET UNITYSDK_OFFSET(0xFDD0330)
#define EBIMBMLNBOM_PPIFNHNGCGO_OFFSET UNITYSDK_OFFSET(0xFDD0320)
#define EBIMBMLNBOM__CTOR_OFFSET UNITYSDK_OFFSET(0xFDCFDD0)

inline static constexpr unsigned int EBIMBMLNBOM_TypeDefinitionIndex = 38955;

class EBIMBMLNBOM : public ::System::Object
{
public:
	::IHCADCOJCHL* _HPMJLHGNENP_k__BackingField; // 0x10
	::System::Boolean _APHEMALHACK_k__BackingField; // 0x18
	::System::Byte _padding0[0x3];
	::System::Int32 _HHNNKGPFJNO_k__BackingField; // 0x1C

	::System::Void _ctor(::System::Int32 MGMDLMBEDJF)
	{
		return ((::System::Void(*)(::PVOID, ::System::Int32))((::PBYTE)hIl2Cpp + EBIMBMLNBOM__CTOR_OFFSET))(this, MGMDLMBEDJF);
	}

	::System::String* GKJFEIFEMFJ()
	{
		return ((::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + EBIMBMLNBOM_GKJFEIFEMFJ_OFFSET))(this);
	}

	::System::Boolean IDHOMHHFPOH()
	{
		return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + EBIMBMLNBOM_IDHOMHHFPOH_OFFSET))(this);
	}

	::System::Void ALGDLJGCEHD(::System::Int32 EGEGIMGMJHN)
	{
		return ((::System::Void(*)(::PVOID, ::System::Int32))((::PBYTE)hIl2Cpp + EBIMBMLNBOM_ALGDLJGCEHD_OFFSET))(this, EGEGIMGMJHN);
	}

	::IHCADCOJCHL* COPIDBEMEIE()
	{
		return ((::IHCADCOJCHL*(*)(::PVOID))((::PBYTE)hIl2Cpp + EBIMBMLNBOM_COPIDBEMEIE_OFFSET))(this);
	}

	::System::Void OPIAMPMCMFA(::IHCADCOJCHL* EGEGIMGMJHN)
	{
		return ((::System::Void(*)(::PVOID, ::IHCADCOJCHL*))((::PBYTE)hIl2Cpp + EBIMBMLNBOM_OPIAMPMCMFA_OFFSET))(this, EGEGIMGMJHN);
	}

	::System::String* OAJJHNOMAJN()
	{
		return ((::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + EBIMBMLNBOM_OAJJHNOMAJN_OFFSET))(this);
	}

	::System::Boolean BMGHHLJNCIH()
	{
		return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + EBIMBMLNBOM_BMGHHLJNCIH_OFFSET))(this);
	}

	::System::Int32 PPIFNHNGCGO()
	{
		return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + EBIMBMLNBOM_PPIFNHNGCGO_OFFSET))(this);
	}

	::System::Boolean PFPMFENMCFO()
	{
		return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + EBIMBMLNBOM_PFPMFENMCFO_OFFSET))(this);
	}

	::System::Void IMCGCBECGMN(::System::Boolean EGEGIMGMJHN)
	{
		return ((::System::Void(*)(::PVOID, ::System::Boolean))((::PBYTE)hIl2Cpp + EBIMBMLNBOM_IMCGCBECGMN_OFFSET))(this, EGEGIMGMJHN);
	}
};
