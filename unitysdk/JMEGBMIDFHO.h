#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/KECPLIFGOCJ.h"
#include "unitysdk/MNCJOKJANCC.h"
#include "unitysdk/System/Object.h"

class AMBIDMNKPFO;
namespace System { class Action; }
namespace System::Collections::Generic { template <typename T1, typename T2> class Dictionary_2; }
namespace System::Collections::Generic { template <typename T> class HashSet_1; }

#define JMEGBMIDFHO_BHLAEBMEOLO_OFFSET UNITYSDK_OFFSET(0x18BCF4B0)
#define JMEGBMIDFHO_BMNMLAIJJGF_OFFSET UNITYSDK_OFFSET(0x18BCF270)
#define JMEGBMIDFHO_CHLEALKAOJO_OFFSET UNITYSDK_OFFSET(0x18BCF3F0)
#define JMEGBMIDFHO_FINALIZE_OFFSET UNITYSDK_OFFSET(0x18BCF590)
#define JMEGBMIDFHO_FPMKEGMLNHG_OFFSET UNITYSDK_OFFSET(0x18BCF280)
#define JMEGBMIDFHO_IFDPKDOFOJD_OFFSET UNITYSDK_OFFSET(0x18BCF8E0)
#define JMEGBMIDFHO_KMIMGEDAMCE_OFFSET UNITYSDK_OFFSET(0x18BCF710)
#define JMEGBMIDFHO_LNFENFDLMIG_OFFSET UNITYSDK_OFFSET(0x18BCEEC0)
#define JMEGBMIDFHO_NAMKJOJBAOA_OFFSET UNITYSDK_OFFSET(0x18BCFB10)
#define JMEGBMIDFHO_OFHECOHPAKG_OFFSET UNITYSDK_OFFSET(0x18BCEEA0)
#define JMEGBMIDFHO_PHOADBJGFBE_OFFSET UNITYSDK_OFFSET(0x18BCF180)
#define JMEGBMIDFHO__CTOR_OFFSET UNITYSDK_OFFSET(0x18BCF6C0)

inline static constexpr unsigned int JMEGBMIDFHO_TypeDefinitionIndex = 11564;

class JMEGBMIDFHO : public ::System::Object
{
public:
	::System::Action* PLDOELOOFLL; // 0x10
	::System::Collections::Generic::HashSet_1<::System::Int32>* LHINHLCKHNE; // 0x18
	::System::Collections::Generic::Dictionary_2<::System::Int32, ::System::Int32>* FLBOKGKPECD; // 0x20
	::MNCJOKJANCC DHDJDGFNBOA; // 0x28
	::Il2CppArray<::AMBIDMNKPFO*>* OJMBOGGMIKO; // 0x40
	::System::Boolean DLGKLGKOMHK; // 0x48
	::System::Byte _padding0[0x3];
	::System::Int32 IJDGGCANOFI; // 0x4C

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + JMEGBMIDFHO__CTOR_OFFSET))(this);
	}

	::System::Boolean OFHECOHPAKG()
	{
		return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + JMEGBMIDFHO_OFHECOHPAKG_OFFSET))(this);
	}

	::System::Void LNFENFDLMIG()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + JMEGBMIDFHO_LNFENFDLMIG_OFFSET))(this);
	}

	::System::Void FPMKEGMLNHG(::System::Action* EJGDHCIBCJH)
	{
		return ((::System::Void(*)(::PVOID, ::System::Action*))((::PBYTE)hIl2Cpp + JMEGBMIDFHO_FPMKEGMLNHG_OFFSET))(this, EJGDHCIBCJH);
	}

	::System::Void BMNMLAIJJGF(::KECPLIFGOCJ GFCJHNHLFEF)
	{
		return ((::System::Void(*)(::PVOID, ::KECPLIFGOCJ))((::PBYTE)hIl2Cpp + JMEGBMIDFHO_BMNMLAIJJGF_OFFSET))(this, GFCJHNHLFEF);
	}

	::System::Void PHOADBJGFBE()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + JMEGBMIDFHO_PHOADBJGFBE_OFFSET))(this);
	}

	::System::Void BHLAEBMEOLO()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + JMEGBMIDFHO_BHLAEBMEOLO_OFFSET))(this);
	}

	::System::Void Finalize()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + JMEGBMIDFHO_FINALIZE_OFFSET))(this);
	}

	::System::Void KMIMGEDAMCE(::Il2CppArray<::System::Byte>* LJBPECKCCEA)
	{
		return ((::System::Void(*)(::PVOID, ::Il2CppArray<::System::Byte>*))((::PBYTE)hIl2Cpp + JMEGBMIDFHO_KMIMGEDAMCE_OFFSET))(this, LJBPECKCCEA);
	}

	::System::Void CHLEALKAOJO()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + JMEGBMIDFHO_CHLEALKAOJO_OFFSET))(this);
	}

	::AMBIDMNKPFO* IFDPKDOFOJD(::System::Int32 MGMDLMBEDJF)
	{
		return ((::AMBIDMNKPFO*(*)(::PVOID, ::System::Int32))((::PBYTE)hIl2Cpp + JMEGBMIDFHO_IFDPKDOFOJD_OFFSET))(this, MGMDLMBEDJF);
	}

	::System::Void NAMKJOJBAOA()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + JMEGBMIDFHO_NAMKJOJBAOA_OFFSET))(this);
	}
};
