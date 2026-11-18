#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/EBPHJHLCEOI.h"
#include "unitysdk/KECPLIFGOCJ.h"
#include "unitysdk/System/Object.h"

class DBMLGNBFJCD;
namespace System { class Action; }
namespace System::Collections::Generic { template <typename T1, typename T2> class Dictionary_2; }
namespace System::Collections::Generic { template <typename T> class HashSet_1; }

#define NFDHKJLFEFM_BHLAEBMEOLO_OFFSET UNITYSDK_OFFSET(0x1BF6AAE0)
#define NFDHKJLFEFM_BMNMLAIJJGF_OFFSET UNITYSDK_OFFSET(0x1BF6A860)
#define NFDHKJLFEFM_CHLEALKAOJO_OFFSET UNITYSDK_OFFSET(0x1BF6A870)
#define NFDHKJLFEFM_FINALIZE_OFFSET UNITYSDK_OFFSET(0x1BF6A930)
#define NFDHKJLFEFM_FPMKEGMLNHG_OFFSET UNITYSDK_OFFSET(0x1BF6AA60)
#define NFDHKJLFEFM_IFDPKDOFOJD_OFFSET UNITYSDK_OFFSET(0x1BF6AEE0)
#define NFDHKJLFEFM_KMIMGEDAMCE_OFFSET UNITYSDK_OFFSET(0x1BF6AC10)
#define NFDHKJLFEFM_LNFENFDLMIG_OFFSET UNITYSDK_OFFSET(0x1BF6A4B0)
#define NFDHKJLFEFM_NAMKJOJBAOA_OFFSET UNITYSDK_OFFSET(0x1BF6AEC0)
#define NFDHKJLFEFM_OFHECOHPAKG_OFFSET UNITYSDK_OFFSET(0x1BF6A490)
#define NFDHKJLFEFM_PHOADBJGFBE_OFFSET UNITYSDK_OFFSET(0x1BF6A770)
#define NFDHKJLFEFM__CTOR_OFFSET UNITYSDK_OFFSET(0x1BF6ABC0)

inline static constexpr unsigned int NFDHKJLFEFM_TypeDefinitionIndex = 12265;

class NFDHKJLFEFM : public ::System::Object
{
public:
	::EBPHJHLCEOI DHDJDGFNBOA; // 0x10
	::System::Collections::Generic::Dictionary_2<::System::Int32, ::System::Int32>* FLBOKGKPECD; // 0x28
	::System::Collections::Generic::HashSet_1<::System::Int32>* LHINHLCKHNE; // 0x30
	::System::Action* PLDOELOOFLL; // 0x38
	::Il2CppArray<::DBMLGNBFJCD*>* OJMBOGGMIKO; // 0x40
	::System::Int32 IJDGGCANOFI; // 0x48
	::System::Boolean DLGKLGKOMHK; // 0x4C

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + NFDHKJLFEFM__CTOR_OFFSET))(this);
	}

	::System::Boolean OFHECOHPAKG()
	{
		return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + NFDHKJLFEFM_OFHECOHPAKG_OFFSET))(this);
	}

	::System::Void LNFENFDLMIG()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + NFDHKJLFEFM_LNFENFDLMIG_OFFSET))(this);
	}

	::System::Void PHOADBJGFBE()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + NFDHKJLFEFM_PHOADBJGFBE_OFFSET))(this);
	}

	::System::Void Finalize()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + NFDHKJLFEFM_FINALIZE_OFFSET))(this);
	}

	::System::Void FPMKEGMLNHG(::System::Action* EJGDHCIBCJH)
	{
		return ((::System::Void(*)(::PVOID, ::System::Action*))((::PBYTE)hIl2Cpp + NFDHKJLFEFM_FPMKEGMLNHG_OFFSET))(this, EJGDHCIBCJH);
	}

	::System::Void BMNMLAIJJGF(::KECPLIFGOCJ GFCJHNHLFEF)
	{
		return ((::System::Void(*)(::PVOID, ::KECPLIFGOCJ))((::PBYTE)hIl2Cpp + NFDHKJLFEFM_BMNMLAIJJGF_OFFSET))(this, GFCJHNHLFEF);
	}

	::System::Void BHLAEBMEOLO()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + NFDHKJLFEFM_BHLAEBMEOLO_OFFSET))(this);
	}

	::System::Void CHLEALKAOJO()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + NFDHKJLFEFM_CHLEALKAOJO_OFFSET))(this);
	}

	::System::Void KMIMGEDAMCE(::Il2CppArray<::System::Byte>* LJBPECKCCEA)
	{
		return ((::System::Void(*)(::PVOID, ::Il2CppArray<::System::Byte>*))((::PBYTE)hIl2Cpp + NFDHKJLFEFM_KMIMGEDAMCE_OFFSET))(this, LJBPECKCCEA);
	}

	::System::Void NAMKJOJBAOA()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + NFDHKJLFEFM_NAMKJOJBAOA_OFFSET))(this);
	}

	::DBMLGNBFJCD* IFDPKDOFOJD(::System::Int32 MGMDLMBEDJF)
	{
		return ((::DBMLGNBFJCD*(*)(::PVOID, ::System::Int32))((::PBYTE)hIl2Cpp + NFDHKJLFEFM_IFDPKDOFOJD_OFFSET))(this, MGMDLMBEDJF);
	}
};
