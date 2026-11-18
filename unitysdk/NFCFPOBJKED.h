#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/EANGOCHKBBC.h"
#include "unitysdk/KECPLIFGOCJ.h"
#include "unitysdk/System/Object.h"

class EMDBEPNHFOD;
namespace System { class Action; }
namespace System::Collections::Generic { template <typename T1, typename T2> class Dictionary_2; }
namespace System::Collections::Generic { template <typename T> class HashSet_1; }

#define NFCFPOBJKED_BHLAEBMEOLO_OFFSET UNITYSDK_OFFSET(0x1C18C860)
#define NFCFPOBJKED_BMNMLAIJJGF_OFFSET UNITYSDK_OFFSET(0x1C18C620)
#define NFCFPOBJKED_CHLEALKAOJO_OFFSET UNITYSDK_OFFSET(0x1C18C7A0)
#define NFCFPOBJKED_FINALIZE_OFFSET UNITYSDK_OFFSET(0x1C18C940)
#define NFCFPOBJKED_FPMKEGMLNHG_OFFSET UNITYSDK_OFFSET(0x1C18C630)
#define NFCFPOBJKED_IFDPKDOFOJD_OFFSET UNITYSDK_OFFSET(0x1C18CAC0)
#define NFCFPOBJKED_KMIMGEDAMCE_OFFSET UNITYSDK_OFFSET(0x1C18CD10)
#define NFCFPOBJKED_LNFENFDLMIG_OFFSET UNITYSDK_OFFSET(0x1C18C270)
#define NFCFPOBJKED_NAMKJOJBAOA_OFFSET UNITYSDK_OFFSET(0x1C18CCF0)
#define NFCFPOBJKED_OFHECOHPAKG_OFFSET UNITYSDK_OFFSET(0x1C18C250)
#define NFCFPOBJKED_PHOADBJGFBE_OFFSET UNITYSDK_OFFSET(0x1C18C530)
#define NFCFPOBJKED__CTOR_OFFSET UNITYSDK_OFFSET(0x1C18CA70)

inline static constexpr unsigned int NFCFPOBJKED_TypeDefinitionIndex = 11258;

class NFCFPOBJKED : public ::System::Object
{
public:
	::Il2CppArray<::EMDBEPNHFOD*>* OJMBOGGMIKO; // 0x10
	::System::Action* PLDOELOOFLL; // 0x18
	::EANGOCHKBBC DHDJDGFNBOA; // 0x20
	::System::Collections::Generic::HashSet_1<::System::Int32>* LHINHLCKHNE; // 0x38
	::System::Collections::Generic::Dictionary_2<::System::Int32, ::System::Int32>* FLBOKGKPECD; // 0x40
	::System::Boolean DLGKLGKOMHK; // 0x48
	::System::Byte _padding0[0x3];
	::System::Int32 IJDGGCANOFI; // 0x4C

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + NFCFPOBJKED__CTOR_OFFSET))(this);
	}

	::System::Boolean OFHECOHPAKG()
	{
		return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + NFCFPOBJKED_OFHECOHPAKG_OFFSET))(this);
	}

	::System::Void LNFENFDLMIG()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + NFCFPOBJKED_LNFENFDLMIG_OFFSET))(this);
	}

	::System::Void FPMKEGMLNHG(::System::Action* EJGDHCIBCJH)
	{
		return ((::System::Void(*)(::PVOID, ::System::Action*))((::PBYTE)hIl2Cpp + NFCFPOBJKED_FPMKEGMLNHG_OFFSET))(this, EJGDHCIBCJH);
	}

	::System::Void BMNMLAIJJGF(::KECPLIFGOCJ GFCJHNHLFEF)
	{
		return ((::System::Void(*)(::PVOID, ::KECPLIFGOCJ))((::PBYTE)hIl2Cpp + NFCFPOBJKED_BMNMLAIJJGF_OFFSET))(this, GFCJHNHLFEF);
	}

	::System::Void PHOADBJGFBE()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + NFCFPOBJKED_PHOADBJGFBE_OFFSET))(this);
	}

	::System::Void BHLAEBMEOLO()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + NFCFPOBJKED_BHLAEBMEOLO_OFFSET))(this);
	}

	::System::Void Finalize()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + NFCFPOBJKED_FINALIZE_OFFSET))(this);
	}

	::EMDBEPNHFOD* IFDPKDOFOJD(::System::Int32 MGMDLMBEDJF)
	{
		return ((::EMDBEPNHFOD*(*)(::PVOID, ::System::Int32))((::PBYTE)hIl2Cpp + NFCFPOBJKED_IFDPKDOFOJD_OFFSET))(this, MGMDLMBEDJF);
	}

	::System::Void KMIMGEDAMCE(::Il2CppArray<::System::Byte>* LJBPECKCCEA)
	{
		return ((::System::Void(*)(::PVOID, ::Il2CppArray<::System::Byte>*))((::PBYTE)hIl2Cpp + NFCFPOBJKED_KMIMGEDAMCE_OFFSET))(this, LJBPECKCCEA);
	}

	::System::Void CHLEALKAOJO()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + NFCFPOBJKED_CHLEALKAOJO_OFFSET))(this);
	}

	::System::Void NAMKJOJBAOA()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + NFCFPOBJKED_NAMKJOJBAOA_OFFSET))(this);
	}
};
