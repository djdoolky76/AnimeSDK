#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/AFIIIDECGCB.h"
#include "unitysdk/KECPLIFGOCJ.h"
#include "unitysdk/System/Object.h"

class CBAELLLNHCD;
namespace System { class Action; }
namespace System::Collections::Generic { template <typename T1, typename T2> class Dictionary_2; }
namespace System::Collections::Generic { template <typename T> class HashSet_1; }

#define DHMFAICOPHB_BHLAEBMEOLO_OFFSET UNITYSDK_OFFSET(0x1B9A6B50)
#define DHMFAICOPHB_BMNMLAIJJGF_OFFSET UNITYSDK_OFFSET(0x1B9A68D0)
#define DHMFAICOPHB_CHLEALKAOJO_OFFSET UNITYSDK_OFFSET(0x1B9A68E0)
#define DHMFAICOPHB_FINALIZE_OFFSET UNITYSDK_OFFSET(0x1B9A69A0)
#define DHMFAICOPHB_FPMKEGMLNHG_OFFSET UNITYSDK_OFFSET(0x1B9A6AD0)
#define DHMFAICOPHB_IFDPKDOFOJD_OFFSET UNITYSDK_OFFSET(0x1B9A6C80)
#define DHMFAICOPHB_KMIMGEDAMCE_OFFSET UNITYSDK_OFFSET(0x1B9A6ED0)
#define DHMFAICOPHB_LNFENFDLMIG_OFFSET UNITYSDK_OFFSET(0x1B9A6520)
#define DHMFAICOPHB_NAMKJOJBAOA_OFFSET UNITYSDK_OFFSET(0x1B9A6EB0)
#define DHMFAICOPHB_OFHECOHPAKG_OFFSET UNITYSDK_OFFSET(0x1B9A6500)
#define DHMFAICOPHB_PHOADBJGFBE_OFFSET UNITYSDK_OFFSET(0x1B9A67E0)
#define DHMFAICOPHB__CTOR_OFFSET UNITYSDK_OFFSET(0x1B9A6C30)

inline static constexpr unsigned int DHMFAICOPHB_TypeDefinitionIndex = 13349;

class DHMFAICOPHB : public ::System::Object
{
public:
	::Il2CppArray<::CBAELLLNHCD*>* OJMBOGGMIKO; // 0x10
	::System::Action* PLDOELOOFLL; // 0x18
	::System::Collections::Generic::HashSet_1<::System::Int32>* LHINHLCKHNE; // 0x20
	::AFIIIDECGCB DHDJDGFNBOA; // 0x28
	::System::Collections::Generic::Dictionary_2<::System::Int32, ::System::Int32>* FLBOKGKPECD; // 0x40
	::System::Int32 IJDGGCANOFI; // 0x48
	::System::Boolean DLGKLGKOMHK; // 0x4C

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + DHMFAICOPHB__CTOR_OFFSET))(this);
	}

	::System::Boolean OFHECOHPAKG()
	{
		return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + DHMFAICOPHB_OFHECOHPAKG_OFFSET))(this);
	}

	::System::Void LNFENFDLMIG()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + DHMFAICOPHB_LNFENFDLMIG_OFFSET))(this);
	}

	::System::Void PHOADBJGFBE()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + DHMFAICOPHB_PHOADBJGFBE_OFFSET))(this);
	}

	::System::Void Finalize()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + DHMFAICOPHB_FINALIZE_OFFSET))(this);
	}

	::System::Void FPMKEGMLNHG(::System::Action* EJGDHCIBCJH)
	{
		return ((::System::Void(*)(::PVOID, ::System::Action*))((::PBYTE)hIl2Cpp + DHMFAICOPHB_FPMKEGMLNHG_OFFSET))(this, EJGDHCIBCJH);
	}

	::System::Void BMNMLAIJJGF(::KECPLIFGOCJ GFCJHNHLFEF)
	{
		return ((::System::Void(*)(::PVOID, ::KECPLIFGOCJ))((::PBYTE)hIl2Cpp + DHMFAICOPHB_BMNMLAIJJGF_OFFSET))(this, GFCJHNHLFEF);
	}

	::System::Void BHLAEBMEOLO()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + DHMFAICOPHB_BHLAEBMEOLO_OFFSET))(this);
	}

	::CBAELLLNHCD* IFDPKDOFOJD(::System::Int32 MGMDLMBEDJF)
	{
		return ((::CBAELLLNHCD*(*)(::PVOID, ::System::Int32))((::PBYTE)hIl2Cpp + DHMFAICOPHB_IFDPKDOFOJD_OFFSET))(this, MGMDLMBEDJF);
	}

	::System::Void NAMKJOJBAOA()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + DHMFAICOPHB_NAMKJOJBAOA_OFFSET))(this);
	}

	::System::Void CHLEALKAOJO()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + DHMFAICOPHB_CHLEALKAOJO_OFFSET))(this);
	}

	::System::Void KMIMGEDAMCE(::Il2CppArray<::System::Byte>* LJBPECKCCEA)
	{
		return ((::System::Void(*)(::PVOID, ::Il2CppArray<::System::Byte>*))((::PBYTE)hIl2Cpp + DHMFAICOPHB_KMIMGEDAMCE_OFFSET))(this, LJBPECKCCEA);
	}
};
