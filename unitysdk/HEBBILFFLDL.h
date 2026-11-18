#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/HIFGMKFNLMI.h"
#include "unitysdk/KECPLIFGOCJ.h"
#include "unitysdk/System/Object.h"

class LIOFOAGENEL;
namespace System { class Action; }
namespace System::Collections::Generic { template <typename T1, typename T2> class Dictionary_2; }
namespace System::Collections::Generic { template <typename T> class HashSet_1; }

#define HEBBILFFLDL_BHLAEBMEOLO_OFFSET UNITYSDK_OFFSET(0x18BAE5C0)
#define HEBBILFFLDL_BMNMLAIJJGF_OFFSET UNITYSDK_OFFSET(0x18BAE380)
#define HEBBILFFLDL_CHLEALKAOJO_OFFSET UNITYSDK_OFFSET(0x18BAE500)
#define HEBBILFFLDL_FINALIZE_OFFSET UNITYSDK_OFFSET(0x18BAE6A0)
#define HEBBILFFLDL_FPMKEGMLNHG_OFFSET UNITYSDK_OFFSET(0x18BAE390)
#define HEBBILFFLDL_IFDPKDOFOJD_OFFSET UNITYSDK_OFFSET(0x18BAE840)
#define HEBBILFFLDL_KMIMGEDAMCE_OFFSET UNITYSDK_OFFSET(0x18BAEA70)
#define HEBBILFFLDL_LNFENFDLMIG_OFFSET UNITYSDK_OFFSET(0x18BADFD0)
#define HEBBILFFLDL_NAMKJOJBAOA_OFFSET UNITYSDK_OFFSET(0x18BAE820)
#define HEBBILFFLDL_OFHECOHPAKG_OFFSET UNITYSDK_OFFSET(0x18BADFB0)
#define HEBBILFFLDL_PHOADBJGFBE_OFFSET UNITYSDK_OFFSET(0x18BAE290)
#define HEBBILFFLDL__CTOR_OFFSET UNITYSDK_OFFSET(0x18BAE7D0)

inline static constexpr unsigned int HEBBILFFLDL_TypeDefinitionIndex = 15661;

class HEBBILFFLDL : public ::System::Object
{
public:
	::System::Action* PLDOELOOFLL; // 0x10
	::System::Collections::Generic::Dictionary_2<::System::Int32, ::System::Int32>* FLBOKGKPECD; // 0x18
	::HIFGMKFNLMI DHDJDGFNBOA; // 0x20
	::Il2CppArray<::LIOFOAGENEL*>* OJMBOGGMIKO; // 0x38
	::System::Collections::Generic::HashSet_1<::System::Int32>* LHINHLCKHNE; // 0x40
	::System::Boolean DLGKLGKOMHK; // 0x48
	::System::Byte _padding0[0x3];
	::System::Int32 IJDGGCANOFI; // 0x4C

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + HEBBILFFLDL__CTOR_OFFSET))(this);
	}

	::System::Boolean OFHECOHPAKG()
	{
		return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + HEBBILFFLDL_OFHECOHPAKG_OFFSET))(this);
	}

	::System::Void LNFENFDLMIG()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + HEBBILFFLDL_LNFENFDLMIG_OFFSET))(this);
	}

	::System::Void FPMKEGMLNHG(::System::Action* EJGDHCIBCJH)
	{
		return ((::System::Void(*)(::PVOID, ::System::Action*))((::PBYTE)hIl2Cpp + HEBBILFFLDL_FPMKEGMLNHG_OFFSET))(this, EJGDHCIBCJH);
	}

	::System::Void BMNMLAIJJGF(::KECPLIFGOCJ GFCJHNHLFEF)
	{
		return ((::System::Void(*)(::PVOID, ::KECPLIFGOCJ))((::PBYTE)hIl2Cpp + HEBBILFFLDL_BMNMLAIJJGF_OFFSET))(this, GFCJHNHLFEF);
	}

	::System::Void PHOADBJGFBE()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + HEBBILFFLDL_PHOADBJGFBE_OFFSET))(this);
	}

	::System::Void BHLAEBMEOLO()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + HEBBILFFLDL_BHLAEBMEOLO_OFFSET))(this);
	}

	::System::Void Finalize()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + HEBBILFFLDL_FINALIZE_OFFSET))(this);
	}

	::System::Void NAMKJOJBAOA()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + HEBBILFFLDL_NAMKJOJBAOA_OFFSET))(this);
	}

	::LIOFOAGENEL* IFDPKDOFOJD(::System::Int32 MGMDLMBEDJF)
	{
		return ((::LIOFOAGENEL*(*)(::PVOID, ::System::Int32))((::PBYTE)hIl2Cpp + HEBBILFFLDL_IFDPKDOFOJD_OFFSET))(this, MGMDLMBEDJF);
	}

	::System::Void CHLEALKAOJO()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + HEBBILFFLDL_CHLEALKAOJO_OFFSET))(this);
	}

	::System::Void KMIMGEDAMCE(::Il2CppArray<::System::Byte>* LJBPECKCCEA)
	{
		return ((::System::Void(*)(::PVOID, ::Il2CppArray<::System::Byte>*))((::PBYTE)hIl2Cpp + HEBBILFFLDL_KMIMGEDAMCE_OFFSET))(this, LJBPECKCCEA);
	}
};
