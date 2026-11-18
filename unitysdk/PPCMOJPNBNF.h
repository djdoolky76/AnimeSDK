#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/BHOMHLLNACG.h"
#include "unitysdk/KECPLIFGOCJ.h"
#include "unitysdk/System/Object.h"

class OIPEJDCMOOJ;
namespace System { class Action; }
namespace System::Collections::Generic { template <typename T1, typename T2> class Dictionary_2; }
namespace System::Collections::Generic { template <typename T> class HashSet_1; }

#define PPCMOJPNBNF_BHLAEBMEOLO_OFFSET UNITYSDK_OFFSET(0x1FD7EEF0)
#define PPCMOJPNBNF_BMNMLAIJJGF_OFFSET UNITYSDK_OFFSET(0x1FD7ECC0)
#define PPCMOJPNBNF_CHLEALKAOJO_OFFSET UNITYSDK_OFFSET(0x1FD7EE30)
#define PPCMOJPNBNF_FINALIZE_OFFSET UNITYSDK_OFFSET(0x1FD7EFD0)
#define PPCMOJPNBNF_FPMKEGMLNHG_OFFSET UNITYSDK_OFFSET(0x1FD7ECD0)
#define PPCMOJPNBNF_IFDPKDOFOJD_OFFSET UNITYSDK_OFFSET(0x1FD7F150)
#define PPCMOJPNBNF_KMIMGEDAMCE_OFFSET UNITYSDK_OFFSET(0x1FD7F3A0)
#define PPCMOJPNBNF_LNFENFDLMIG_OFFSET UNITYSDK_OFFSET(0x1FD7E920)
#define PPCMOJPNBNF_NAMKJOJBAOA_OFFSET UNITYSDK_OFFSET(0x1FD7F380)
#define PPCMOJPNBNF_OFHECOHPAKG_OFFSET UNITYSDK_OFFSET(0x1FD7E900)
#define PPCMOJPNBNF_PHOADBJGFBE_OFFSET UNITYSDK_OFFSET(0x1FD7EBE0)
#define PPCMOJPNBNF__CTOR_OFFSET UNITYSDK_OFFSET(0x1FD7F100)

inline static constexpr unsigned int PPCMOJPNBNF_TypeDefinitionIndex = 10591;

class PPCMOJPNBNF : public ::System::Object
{
public:
	::System::Collections::Generic::HashSet_1<::System::Int32>* LHINHLCKHNE; // 0x10
	::System::Collections::Generic::Dictionary_2<::System::Int32, ::System::Int32>* FLBOKGKPECD; // 0x18
	::Il2CppArray<::OIPEJDCMOOJ*>* OJMBOGGMIKO; // 0x20
	::System::Action* PLDOELOOFLL; // 0x28
	::BHOMHLLNACG DHDJDGFNBOA; // 0x30
	::System::Int32 IJDGGCANOFI; // 0x48
	::System::Boolean DLGKLGKOMHK; // 0x4C

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + PPCMOJPNBNF__CTOR_OFFSET))(this);
	}

	::System::Boolean OFHECOHPAKG()
	{
		return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + PPCMOJPNBNF_OFHECOHPAKG_OFFSET))(this);
	}

	::System::Void LNFENFDLMIG()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + PPCMOJPNBNF_LNFENFDLMIG_OFFSET))(this);
	}

	::System::Void FPMKEGMLNHG(::System::Action* EJGDHCIBCJH)
	{
		return ((::System::Void(*)(::PVOID, ::System::Action*))((::PBYTE)hIl2Cpp + PPCMOJPNBNF_FPMKEGMLNHG_OFFSET))(this, EJGDHCIBCJH);
	}

	::System::Void BMNMLAIJJGF(::KECPLIFGOCJ GFCJHNHLFEF)
	{
		return ((::System::Void(*)(::PVOID, ::KECPLIFGOCJ))((::PBYTE)hIl2Cpp + PPCMOJPNBNF_BMNMLAIJJGF_OFFSET))(this, GFCJHNHLFEF);
	}

	::System::Void PHOADBJGFBE()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + PPCMOJPNBNF_PHOADBJGFBE_OFFSET))(this);
	}

	::System::Void BHLAEBMEOLO()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + PPCMOJPNBNF_BHLAEBMEOLO_OFFSET))(this);
	}

	::System::Void Finalize()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + PPCMOJPNBNF_FINALIZE_OFFSET))(this);
	}

	::OIPEJDCMOOJ* IFDPKDOFOJD(::System::Int32 MGMDLMBEDJF)
	{
		return ((::OIPEJDCMOOJ*(*)(::PVOID, ::System::Int32))((::PBYTE)hIl2Cpp + PPCMOJPNBNF_IFDPKDOFOJD_OFFSET))(this, MGMDLMBEDJF);
	}

	::System::Void KMIMGEDAMCE(::Il2CppArray<::System::Byte>* LJBPECKCCEA)
	{
		return ((::System::Void(*)(::PVOID, ::Il2CppArray<::System::Byte>*))((::PBYTE)hIl2Cpp + PPCMOJPNBNF_KMIMGEDAMCE_OFFSET))(this, LJBPECKCCEA);
	}

	::System::Void NAMKJOJBAOA()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + PPCMOJPNBNF_NAMKJOJBAOA_OFFSET))(this);
	}

	::System::Void CHLEALKAOJO()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + PPCMOJPNBNF_CHLEALKAOJO_OFFSET))(this);
	}
};
