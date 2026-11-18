#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/EDGHLICAMPB.h"
#include "unitysdk/KECPLIFGOCJ.h"
#include "unitysdk/System/Object.h"

class NKJOPMILEFM;
namespace System { class Action; }
namespace System::Collections::Generic { template <typename T1, typename T2> class Dictionary_2; }
namespace System::Collections::Generic { template <typename T> class HashSet_1; }

#define AGLEFNBPIHG_BHLAEBMEOLO_OFFSET UNITYSDK_OFFSET(0x15720880)
#define AGLEFNBPIHG_BMNMLAIJJGF_OFFSET UNITYSDK_OFFSET(0x15720600)
#define AGLEFNBPIHG_CHLEALKAOJO_OFFSET UNITYSDK_OFFSET(0x15720610)
#define AGLEFNBPIHG_FINALIZE_OFFSET UNITYSDK_OFFSET(0x157206D0)
#define AGLEFNBPIHG_FPMKEGMLNHG_OFFSET UNITYSDK_OFFSET(0x15720800)
#define AGLEFNBPIHG_IFDPKDOFOJD_OFFSET UNITYSDK_OFFSET(0x157209B0)
#define AGLEFNBPIHG_KMIMGEDAMCE_OFFSET UNITYSDK_OFFSET(0x15720C00)
#define AGLEFNBPIHG_LNFENFDLMIG_OFFSET UNITYSDK_OFFSET(0x15720250)
#define AGLEFNBPIHG_NAMKJOJBAOA_OFFSET UNITYSDK_OFFSET(0x15720BE0)
#define AGLEFNBPIHG_OFHECOHPAKG_OFFSET UNITYSDK_OFFSET(0x15720230)
#define AGLEFNBPIHG_PHOADBJGFBE_OFFSET UNITYSDK_OFFSET(0x15720510)
#define AGLEFNBPIHG__CTOR_OFFSET UNITYSDK_OFFSET(0x15720960)

inline static constexpr unsigned int AGLEFNBPIHG_TypeDefinitionIndex = 9651;

class AGLEFNBPIHG : public ::System::Object
{
public:
	::System::Collections::Generic::Dictionary_2<::System::Int32, ::System::Int32>* FLBOKGKPECD; // 0x10
	::System::Action* PLDOELOOFLL; // 0x18
	::EDGHLICAMPB DHDJDGFNBOA; // 0x20
	::System::Collections::Generic::HashSet_1<::System::Int32>* LHINHLCKHNE; // 0x38
	::Il2CppArray<::NKJOPMILEFM*>* OJMBOGGMIKO; // 0x40
	::System::Int32 IJDGGCANOFI; // 0x48
	::System::Boolean DLGKLGKOMHK; // 0x4C

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + AGLEFNBPIHG__CTOR_OFFSET))(this);
	}

	::System::Boolean OFHECOHPAKG()
	{
		return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + AGLEFNBPIHG_OFHECOHPAKG_OFFSET))(this);
	}

	::System::Void LNFENFDLMIG()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + AGLEFNBPIHG_LNFENFDLMIG_OFFSET))(this);
	}

	::System::Void PHOADBJGFBE()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + AGLEFNBPIHG_PHOADBJGFBE_OFFSET))(this);
	}

	::System::Void Finalize()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + AGLEFNBPIHG_FINALIZE_OFFSET))(this);
	}

	::System::Void FPMKEGMLNHG(::System::Action* EJGDHCIBCJH)
	{
		return ((::System::Void(*)(::PVOID, ::System::Action*))((::PBYTE)hIl2Cpp + AGLEFNBPIHG_FPMKEGMLNHG_OFFSET))(this, EJGDHCIBCJH);
	}

	::System::Void BMNMLAIJJGF(::KECPLIFGOCJ GFCJHNHLFEF)
	{
		return ((::System::Void(*)(::PVOID, ::KECPLIFGOCJ))((::PBYTE)hIl2Cpp + AGLEFNBPIHG_BMNMLAIJJGF_OFFSET))(this, GFCJHNHLFEF);
	}

	::System::Void BHLAEBMEOLO()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + AGLEFNBPIHG_BHLAEBMEOLO_OFFSET))(this);
	}

	::NKJOPMILEFM* IFDPKDOFOJD(::System::Int32 MGMDLMBEDJF)
	{
		return ((::NKJOPMILEFM*(*)(::PVOID, ::System::Int32))((::PBYTE)hIl2Cpp + AGLEFNBPIHG_IFDPKDOFOJD_OFFSET))(this, MGMDLMBEDJF);
	}

	::System::Void KMIMGEDAMCE(::Il2CppArray<::System::Byte>* LJBPECKCCEA)
	{
		return ((::System::Void(*)(::PVOID, ::Il2CppArray<::System::Byte>*))((::PBYTE)hIl2Cpp + AGLEFNBPIHG_KMIMGEDAMCE_OFFSET))(this, LJBPECKCCEA);
	}

	::System::Void NAMKJOJBAOA()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + AGLEFNBPIHG_NAMKJOJBAOA_OFFSET))(this);
	}

	::System::Void CHLEALKAOJO()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + AGLEFNBPIHG_CHLEALKAOJO_OFFSET))(this);
	}
};
