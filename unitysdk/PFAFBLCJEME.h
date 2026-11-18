#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/KECPLIFGOCJ.h"
#include "unitysdk/PBBNACHOIOP.h"
#include "unitysdk/System/Object.h"

class BKDDIPDHIDE;
namespace System { class Action; }
namespace System::Collections::Generic { template <typename T1, typename T2> class Dictionary_2; }
namespace System::Collections::Generic { template <typename T> class HashSet_1; }

#define PFAFBLCJEME_BHLAEBMEOLO_OFFSET UNITYSDK_OFFSET(0x1C1A84E0)
#define PFAFBLCJEME_BMNMLAIJJGF_OFFSET UNITYSDK_OFFSET(0x1C1A82A0)
#define PFAFBLCJEME_CHLEALKAOJO_OFFSET UNITYSDK_OFFSET(0x1C1A8420)
#define PFAFBLCJEME_FINALIZE_OFFSET UNITYSDK_OFFSET(0x1C1A85C0)
#define PFAFBLCJEME_FPMKEGMLNHG_OFFSET UNITYSDK_OFFSET(0x1C1A82B0)
#define PFAFBLCJEME_IFDPKDOFOJD_OFFSET UNITYSDK_OFFSET(0x1C1A8740)
#define PFAFBLCJEME_KMIMGEDAMCE_OFFSET UNITYSDK_OFFSET(0x1C1A8990)
#define PFAFBLCJEME_LNFENFDLMIG_OFFSET UNITYSDK_OFFSET(0x1C1A7EF0)
#define PFAFBLCJEME_NAMKJOJBAOA_OFFSET UNITYSDK_OFFSET(0x1C1A8970)
#define PFAFBLCJEME_OFHECOHPAKG_OFFSET UNITYSDK_OFFSET(0x1C1A7ED0)
#define PFAFBLCJEME_PHOADBJGFBE_OFFSET UNITYSDK_OFFSET(0x1C1A81B0)
#define PFAFBLCJEME__CTOR_OFFSET UNITYSDK_OFFSET(0x1C1A86F0)

inline static constexpr unsigned int PFAFBLCJEME_TypeDefinitionIndex = 17429;

class PFAFBLCJEME : public ::System::Object
{
public:
	::System::Collections::Generic::Dictionary_2<::System::Int32, ::System::Int32>* FLBOKGKPECD; // 0x10
	::PBBNACHOIOP DHDJDGFNBOA; // 0x18
	::System::Collections::Generic::HashSet_1<::System::Int32>* LHINHLCKHNE; // 0x30
	::Il2CppArray<::BKDDIPDHIDE*>* OJMBOGGMIKO; // 0x38
	::System::Action* PLDOELOOFLL; // 0x40
	::System::Boolean DLGKLGKOMHK; // 0x48
	::System::Byte _padding0[0x3];
	::System::Int32 IJDGGCANOFI; // 0x4C

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + PFAFBLCJEME__CTOR_OFFSET))(this);
	}

	::System::Boolean OFHECOHPAKG()
	{
		return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + PFAFBLCJEME_OFHECOHPAKG_OFFSET))(this);
	}

	::System::Void LNFENFDLMIG()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + PFAFBLCJEME_LNFENFDLMIG_OFFSET))(this);
	}

	::System::Void FPMKEGMLNHG(::System::Action* EJGDHCIBCJH)
	{
		return ((::System::Void(*)(::PVOID, ::System::Action*))((::PBYTE)hIl2Cpp + PFAFBLCJEME_FPMKEGMLNHG_OFFSET))(this, EJGDHCIBCJH);
	}

	::System::Void BMNMLAIJJGF(::KECPLIFGOCJ GFCJHNHLFEF)
	{
		return ((::System::Void(*)(::PVOID, ::KECPLIFGOCJ))((::PBYTE)hIl2Cpp + PFAFBLCJEME_BMNMLAIJJGF_OFFSET))(this, GFCJHNHLFEF);
	}

	::System::Void PHOADBJGFBE()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + PFAFBLCJEME_PHOADBJGFBE_OFFSET))(this);
	}

	::System::Void BHLAEBMEOLO()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + PFAFBLCJEME_BHLAEBMEOLO_OFFSET))(this);
	}

	::System::Void Finalize()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + PFAFBLCJEME_FINALIZE_OFFSET))(this);
	}

	::BKDDIPDHIDE* IFDPKDOFOJD(::System::Int32 MGMDLMBEDJF)
	{
		return ((::BKDDIPDHIDE*(*)(::PVOID, ::System::Int32))((::PBYTE)hIl2Cpp + PFAFBLCJEME_IFDPKDOFOJD_OFFSET))(this, MGMDLMBEDJF);
	}

	::System::Void KMIMGEDAMCE(::Il2CppArray<::System::Byte>* LJBPECKCCEA)
	{
		return ((::System::Void(*)(::PVOID, ::Il2CppArray<::System::Byte>*))((::PBYTE)hIl2Cpp + PFAFBLCJEME_KMIMGEDAMCE_OFFSET))(this, LJBPECKCCEA);
	}

	::System::Void NAMKJOJBAOA()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + PFAFBLCJEME_NAMKJOJBAOA_OFFSET))(this);
	}

	::System::Void CHLEALKAOJO()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + PFAFBLCJEME_CHLEALKAOJO_OFFSET))(this);
	}
};
