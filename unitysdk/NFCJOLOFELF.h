#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/KECPLIFGOCJ.h"
#include "unitysdk/MACLNMHAAHD.h"
#include "unitysdk/System/Object.h"

class HPBGCPIJEOF;
namespace System { class Action; }
namespace System::Collections::Generic { template <typename T1, typename T2> class Dictionary_2; }
namespace System::Collections::Generic { template <typename T> class HashSet_1; }

#define NFCJOLOFELF_BHLAEBMEOLO_OFFSET UNITYSDK_OFFSET(0x1CFE8390)
#define NFCJOLOFELF_BMNMLAIJJGF_OFFSET UNITYSDK_OFFSET(0x1CFE8110)
#define NFCJOLOFELF_CHLEALKAOJO_OFFSET UNITYSDK_OFFSET(0x1CFE8120)
#define NFCJOLOFELF_FINALIZE_OFFSET UNITYSDK_OFFSET(0x1CFE81E0)
#define NFCJOLOFELF_FPMKEGMLNHG_OFFSET UNITYSDK_OFFSET(0x1CFE8310)
#define NFCJOLOFELF_IFDPKDOFOJD_OFFSET UNITYSDK_OFFSET(0x1CFE8770)
#define NFCJOLOFELF_KMIMGEDAMCE_OFFSET UNITYSDK_OFFSET(0x1CFE84C0)
#define NFCJOLOFELF_LNFENFDLMIG_OFFSET UNITYSDK_OFFSET(0x1CFE7D60)
#define NFCJOLOFELF_NAMKJOJBAOA_OFFSET UNITYSDK_OFFSET(0x1CFE89A0)
#define NFCJOLOFELF_OFHECOHPAKG_OFFSET UNITYSDK_OFFSET(0x1CFE7D40)
#define NFCJOLOFELF_PHOADBJGFBE_OFFSET UNITYSDK_OFFSET(0x1CFE8020)
#define NFCJOLOFELF__CTOR_OFFSET UNITYSDK_OFFSET(0x1CFE8470)

inline static constexpr unsigned int NFCJOLOFELF_TypeDefinitionIndex = 15614;

class NFCJOLOFELF : public ::System::Object
{
public:
	::System::Collections::Generic::HashSet_1<::System::Int32>* LHINHLCKHNE; // 0x10
	::System::Action* PLDOELOOFLL; // 0x18
	::System::Collections::Generic::Dictionary_2<::System::Int32, ::System::Int32>* FLBOKGKPECD; // 0x20
	::MACLNMHAAHD DHDJDGFNBOA; // 0x28
	::Il2CppArray<::HPBGCPIJEOF*>* OJMBOGGMIKO; // 0x40
	::System::Int32 IJDGGCANOFI; // 0x48
	::System::Boolean DLGKLGKOMHK; // 0x4C

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + NFCJOLOFELF__CTOR_OFFSET))(this);
	}

	::System::Boolean OFHECOHPAKG()
	{
		return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + NFCJOLOFELF_OFHECOHPAKG_OFFSET))(this);
	}

	::System::Void LNFENFDLMIG()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + NFCJOLOFELF_LNFENFDLMIG_OFFSET))(this);
	}

	::System::Void PHOADBJGFBE()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + NFCJOLOFELF_PHOADBJGFBE_OFFSET))(this);
	}

	::System::Void Finalize()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + NFCJOLOFELF_FINALIZE_OFFSET))(this);
	}

	::System::Void FPMKEGMLNHG(::System::Action* EJGDHCIBCJH)
	{
		return ((::System::Void(*)(::PVOID, ::System::Action*))((::PBYTE)hIl2Cpp + NFCJOLOFELF_FPMKEGMLNHG_OFFSET))(this, EJGDHCIBCJH);
	}

	::System::Void BMNMLAIJJGF(::KECPLIFGOCJ GFCJHNHLFEF)
	{
		return ((::System::Void(*)(::PVOID, ::KECPLIFGOCJ))((::PBYTE)hIl2Cpp + NFCJOLOFELF_BMNMLAIJJGF_OFFSET))(this, GFCJHNHLFEF);
	}

	::System::Void BHLAEBMEOLO()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + NFCJOLOFELF_BHLAEBMEOLO_OFFSET))(this);
	}

	::System::Void KMIMGEDAMCE(::Il2CppArray<::System::Byte>* LJBPECKCCEA)
	{
		return ((::System::Void(*)(::PVOID, ::Il2CppArray<::System::Byte>*))((::PBYTE)hIl2Cpp + NFCJOLOFELF_KMIMGEDAMCE_OFFSET))(this, LJBPECKCCEA);
	}

	::HPBGCPIJEOF* IFDPKDOFOJD(::System::Int32 MGMDLMBEDJF)
	{
		return ((::HPBGCPIJEOF*(*)(::PVOID, ::System::Int32))((::PBYTE)hIl2Cpp + NFCJOLOFELF_IFDPKDOFOJD_OFFSET))(this, MGMDLMBEDJF);
	}

	::System::Void CHLEALKAOJO()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + NFCJOLOFELF_CHLEALKAOJO_OFFSET))(this);
	}

	::System::Void NAMKJOJBAOA()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + NFCJOLOFELF_NAMKJOJBAOA_OFFSET))(this);
	}
};
