#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/BHCNEOGINLK.h"
#include "unitysdk/KECPLIFGOCJ.h"
#include "unitysdk/System/Object.h"

class FOLMJNLFPPO;
namespace System { class Action; }
namespace System::Collections::Generic { template <typename T1, typename T2> class Dictionary_2; }
namespace System::Collections::Generic { template <typename T> class HashSet_1; }

#define OJFCBGLFEMJ_BHLAEBMEOLO_OFFSET UNITYSDK_OFFSET(0x1BAB6BF0)
#define OJFCBGLFEMJ_BMNMLAIJJGF_OFFSET UNITYSDK_OFFSET(0x1BAB69B0)
#define OJFCBGLFEMJ_CHLEALKAOJO_OFFSET UNITYSDK_OFFSET(0x1BAB6B30)
#define OJFCBGLFEMJ_FINALIZE_OFFSET UNITYSDK_OFFSET(0x1BAB6CD0)
#define OJFCBGLFEMJ_FPMKEGMLNHG_OFFSET UNITYSDK_OFFSET(0x1BAB69C0)
#define OJFCBGLFEMJ_IFDPKDOFOJD_OFFSET UNITYSDK_OFFSET(0x1BAB7020)
#define OJFCBGLFEMJ_KMIMGEDAMCE_OFFSET UNITYSDK_OFFSET(0x1BAB6E50)
#define OJFCBGLFEMJ_LNFENFDLMIG_OFFSET UNITYSDK_OFFSET(0x1BAB6600)
#define OJFCBGLFEMJ_NAMKJOJBAOA_OFFSET UNITYSDK_OFFSET(0x1BAB7250)
#define OJFCBGLFEMJ_OFHECOHPAKG_OFFSET UNITYSDK_OFFSET(0x1BAB65E0)
#define OJFCBGLFEMJ_PHOADBJGFBE_OFFSET UNITYSDK_OFFSET(0x1BAB68C0)
#define OJFCBGLFEMJ__CTOR_OFFSET UNITYSDK_OFFSET(0x1BAB6E00)

inline static constexpr unsigned int OJFCBGLFEMJ_TypeDefinitionIndex = 9196;

class OJFCBGLFEMJ : public ::System::Object
{
public:
	::BHCNEOGINLK DHDJDGFNBOA; // 0x10
	::System::Collections::Generic::Dictionary_2<::System::Int32, ::System::Int32>* FLBOKGKPECD; // 0x28
	::System::Collections::Generic::HashSet_1<::System::Int32>* LHINHLCKHNE; // 0x30
	::Il2CppArray<::FOLMJNLFPPO*>* OJMBOGGMIKO; // 0x38
	::System::Action* PLDOELOOFLL; // 0x40
	::System::Int32 IJDGGCANOFI; // 0x48
	::System::Boolean DLGKLGKOMHK; // 0x4C

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + OJFCBGLFEMJ__CTOR_OFFSET))(this);
	}

	::System::Boolean OFHECOHPAKG()
	{
		return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + OJFCBGLFEMJ_OFHECOHPAKG_OFFSET))(this);
	}

	::System::Void LNFENFDLMIG()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + OJFCBGLFEMJ_LNFENFDLMIG_OFFSET))(this);
	}

	::System::Void FPMKEGMLNHG(::System::Action* EJGDHCIBCJH)
	{
		return ((::System::Void(*)(::PVOID, ::System::Action*))((::PBYTE)hIl2Cpp + OJFCBGLFEMJ_FPMKEGMLNHG_OFFSET))(this, EJGDHCIBCJH);
	}

	::System::Void BMNMLAIJJGF(::KECPLIFGOCJ GFCJHNHLFEF)
	{
		return ((::System::Void(*)(::PVOID, ::KECPLIFGOCJ))((::PBYTE)hIl2Cpp + OJFCBGLFEMJ_BMNMLAIJJGF_OFFSET))(this, GFCJHNHLFEF);
	}

	::System::Void PHOADBJGFBE()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + OJFCBGLFEMJ_PHOADBJGFBE_OFFSET))(this);
	}

	::System::Void BHLAEBMEOLO()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + OJFCBGLFEMJ_BHLAEBMEOLO_OFFSET))(this);
	}

	::System::Void Finalize()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + OJFCBGLFEMJ_FINALIZE_OFFSET))(this);
	}

	::System::Void KMIMGEDAMCE(::Il2CppArray<::System::Byte>* LJBPECKCCEA)
	{
		return ((::System::Void(*)(::PVOID, ::Il2CppArray<::System::Byte>*))((::PBYTE)hIl2Cpp + OJFCBGLFEMJ_KMIMGEDAMCE_OFFSET))(this, LJBPECKCCEA);
	}

	::FOLMJNLFPPO* IFDPKDOFOJD(::System::Int32 MGMDLMBEDJF)
	{
		return ((::FOLMJNLFPPO*(*)(::PVOID, ::System::Int32))((::PBYTE)hIl2Cpp + OJFCBGLFEMJ_IFDPKDOFOJD_OFFSET))(this, MGMDLMBEDJF);
	}

	::System::Void NAMKJOJBAOA()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + OJFCBGLFEMJ_NAMKJOJBAOA_OFFSET))(this);
	}

	::System::Void CHLEALKAOJO()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + OJFCBGLFEMJ_CHLEALKAOJO_OFFSET))(this);
	}
};
