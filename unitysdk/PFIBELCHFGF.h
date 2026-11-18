#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/JBCOBNLPKGF.h"
#include "unitysdk/KECPLIFGOCJ.h"
#include "unitysdk/System/Object.h"

class NLAFBCGOIIA;
namespace System { class Action; }

#define PFIBELCHFGF_BHLAEBMEOLO_OFFSET UNITYSDK_OFFSET(0x19DD9800)
#define PFIBELCHFGF_BMNMLAIJJGF_OFFSET UNITYSDK_OFFSET(0x19DD95D0)
#define PFIBELCHFGF_CHLEALKAOJO_OFFSET UNITYSDK_OFFSET(0x19DD95E0)
#define PFIBELCHFGF_EKHHIIJOEFN_OFFSET UNITYSDK_OFFSET(0x19DD98D0)
#define PFIBELCHFGF_FINALIZE_OFFSET UNITYSDK_OFFSET(0x19DD9680)
#define PFIBELCHFGF_FPMKEGMLNHG_OFFSET UNITYSDK_OFFSET(0x19DD9780)
#define PFIBELCHFGF_KMIMGEDAMCE_OFFSET UNITYSDK_OFFSET(0x19DD98E0)
#define PFIBELCHFGF_LFDIBLLPICO_OFFSET UNITYSDK_OFFSET(0x19DD98C0)
#define PFIBELCHFGF_LNFENFDLMIG_OFFSET UNITYSDK_OFFSET(0x19DD9380)
#define PFIBELCHFGF_OFHECOHPAKG_OFFSET UNITYSDK_OFFSET(0x19DD9360)
#define PFIBELCHFGF_PHOADBJGFBE_OFFSET UNITYSDK_OFFSET(0x19DD9510)
#define PFIBELCHFGF__CTOR_OFFSET UNITYSDK_OFFSET(0x19DD98B0)

inline static constexpr unsigned int PFIBELCHFGF_TypeDefinitionIndex = 12795;

class PFIBELCHFGF : public ::System::Object
{
public:
	::System::Action* PLDOELOOFLL; // 0x10
	::NLAFBCGOIIA* _KMJDPDLPPFE_k__BackingField; // 0x18
	::NLAFBCGOIIA* EFFAONJBCOG; // 0x20
	::JBCOBNLPKGF DHDJDGFNBOA; // 0x28
	::System::Int32 IJDGGCANOFI; // 0x38
	::System::Boolean DLGKLGKOMHK; // 0x3C

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + PFIBELCHFGF__CTOR_OFFSET))(this);
	}

	::System::Boolean OFHECOHPAKG()
	{
		return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + PFIBELCHFGF_OFHECOHPAKG_OFFSET))(this);
	}

	::System::Void LNFENFDLMIG()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + PFIBELCHFGF_LNFENFDLMIG_OFFSET))(this);
	}

	::System::Void PHOADBJGFBE()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + PFIBELCHFGF_PHOADBJGFBE_OFFSET))(this);
	}

	::System::Void Finalize()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + PFIBELCHFGF_FINALIZE_OFFSET))(this);
	}

	::System::Void FPMKEGMLNHG(::System::Action* EJGDHCIBCJH)
	{
		return ((::System::Void(*)(::PVOID, ::System::Action*))((::PBYTE)hIl2Cpp + PFIBELCHFGF_FPMKEGMLNHG_OFFSET))(this, EJGDHCIBCJH);
	}

	::System::Void BMNMLAIJJGF(::KECPLIFGOCJ GFCJHNHLFEF)
	{
		return ((::System::Void(*)(::PVOID, ::KECPLIFGOCJ))((::PBYTE)hIl2Cpp + PFIBELCHFGF_BMNMLAIJJGF_OFFSET))(this, GFCJHNHLFEF);
	}

	::System::Void BHLAEBMEOLO()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + PFIBELCHFGF_BHLAEBMEOLO_OFFSET))(this);
	}

	::System::Void CHLEALKAOJO()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + PFIBELCHFGF_CHLEALKAOJO_OFFSET))(this);
	}

	::System::Void LFDIBLLPICO(::NLAFBCGOIIA* EGEGIMGMJHN)
	{
		return ((::System::Void(*)(::PVOID, ::NLAFBCGOIIA*))((::PBYTE)hIl2Cpp + PFIBELCHFGF_LFDIBLLPICO_OFFSET))(this, EGEGIMGMJHN);
	}

	::NLAFBCGOIIA* EKHHIIJOEFN()
	{
		return ((::NLAFBCGOIIA*(*)(::PVOID))((::PBYTE)hIl2Cpp + PFIBELCHFGF_EKHHIIJOEFN_OFFSET))(this);
	}

	::System::Void KMIMGEDAMCE(::Il2CppArray<::System::Byte>* LJBPECKCCEA)
	{
		return ((::System::Void(*)(::PVOID, ::Il2CppArray<::System::Byte>*))((::PBYTE)hIl2Cpp + PFIBELCHFGF_KMIMGEDAMCE_OFFSET))(this, LJBPECKCCEA);
	}
};
