#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/KECPLIFGOCJ.h"
#include "unitysdk/System/Object.h"

class PPBEIMGMNFD;
namespace System { class Action; }
namespace System::Collections::Generic { template <typename T1, typename T2> class Dictionary_2; }

#define GIMAJLADHCK_BMNMLAIJJGF_OFFSET UNITYSDK_OFFSET(0x19AFB050)
#define GIMAJLADHCK_BOOBBFDGMFA_OFFSET UNITYSDK_OFFSET(0x19AFAFC0)
#define GIMAJLADHCK_FPMKEGMLNHG_OFFSET UNITYSDK_OFFSET(0x19AFB070)
#define GIMAJLADHCK_IFDPKDOFOJD_OFFSET UNITYSDK_OFFSET(0x19AFB220)
#define GIMAJLADHCK_LNFENFDLMIG_OFFSET UNITYSDK_OFFSET(0x19AFAEC0)
#define GIMAJLADHCK_OFHECOHPAKG_OFFSET UNITYSDK_OFFSET(0x19AFAE30)
#define GIMAJLADHCK_PHOADBJGFBE_OFFSET UNITYSDK_OFFSET(0x19AFB060)
#define GIMAJLADHCK__CTOR_OFFSET UNITYSDK_OFFSET(0x19AFB190)

inline static constexpr unsigned int GIMAJLADHCK_TypeDefinitionIndex = 13118;

class GIMAJLADHCK : public ::System::Object
{
public:
	::System::Collections::Generic::Dictionary_2<::System::Int32, ::PPBEIMGMNFD*>* FEPKHDKDONG; // 0x10

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + GIMAJLADHCK__CTOR_OFFSET))(this);
	}

	::System::Boolean OFHECOHPAKG()
	{
		return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + GIMAJLADHCK_OFHECOHPAKG_OFFSET))(this);
	}

	::System::Void LNFENFDLMIG()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + GIMAJLADHCK_LNFENFDLMIG_OFFSET))(this);
	}

	::System::Void PHOADBJGFBE()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + GIMAJLADHCK_PHOADBJGFBE_OFFSET))(this);
	}

	::System::Void FPMKEGMLNHG(::System::Action* EJGDHCIBCJH)
	{
		return ((::System::Void(*)(::PVOID, ::System::Action*))((::PBYTE)hIl2Cpp + GIMAJLADHCK_FPMKEGMLNHG_OFFSET))(this, EJGDHCIBCJH);
	}

	::System::Void BMNMLAIJJGF(::KECPLIFGOCJ GFCJHNHLFEF)
	{
		return ((::System::Void(*)(::PVOID, ::KECPLIFGOCJ))((::PBYTE)hIl2Cpp + GIMAJLADHCK_BMNMLAIJJGF_OFFSET))(this, GFCJHNHLFEF);
	}

	::PPBEIMGMNFD* IFDPKDOFOJD(::System::Int32 NDFDFHOJHJN)
	{
		return ((::PPBEIMGMNFD*(*)(::PVOID, ::System::Int32))((::PBYTE)hIl2Cpp + GIMAJLADHCK_IFDPKDOFOJD_OFFSET))(this, NDFDFHOJHJN);
	}

	::System::Void BOOBBFDGMFA(::PPBEIMGMNFD* KADOGCNBMCO)
	{
		return ((::System::Void(*)(::PVOID, ::PPBEIMGMNFD*))((::PBYTE)hIl2Cpp + GIMAJLADHCK_BOOBBFDGMFA_OFFSET))(this, KADOGCNBMCO);
	}
};
