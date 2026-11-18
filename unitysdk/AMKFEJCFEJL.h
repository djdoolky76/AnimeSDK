#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/BFLIALHPGDK.h"
#include "unitysdk/KECPLIFGOCJ.h"
#include "unitysdk/System/Object.h"

class ODADHLMBIGG;
namespace System { class Action; }
namespace System::Collections::Generic { template <typename T1, typename T2> class Dictionary_2; }
namespace System::Collections::Generic { template <typename T> class HashSet_1; }

#define AMKFEJCFEJL_BHLAEBMEOLO_OFFSET UNITYSDK_OFFSET(0x1A5236F0)
#define AMKFEJCFEJL_BMNMLAIJJGF_OFFSET UNITYSDK_OFFSET(0x1A5234B0)
#define AMKFEJCFEJL_CHLEALKAOJO_OFFSET UNITYSDK_OFFSET(0x1A523630)
#define AMKFEJCFEJL_FINALIZE_OFFSET UNITYSDK_OFFSET(0x1A5237D0)
#define AMKFEJCFEJL_FPMKEGMLNHG_OFFSET UNITYSDK_OFFSET(0x1A5234C0)
#define AMKFEJCFEJL_IFDPKDOFOJD_OFFSET UNITYSDK_OFFSET(0x1A523950)
#define AMKFEJCFEJL_KMIMGEDAMCE_OFFSET UNITYSDK_OFFSET(0x1A523BA0)
#define AMKFEJCFEJL_LNFENFDLMIG_OFFSET UNITYSDK_OFFSET(0x1A523100)
#define AMKFEJCFEJL_NAMKJOJBAOA_OFFSET UNITYSDK_OFFSET(0x1A523B80)
#define AMKFEJCFEJL_OFHECOHPAKG_OFFSET UNITYSDK_OFFSET(0x1A5230E0)
#define AMKFEJCFEJL_PHOADBJGFBE_OFFSET UNITYSDK_OFFSET(0x1A5233C0)
#define AMKFEJCFEJL__CTOR_OFFSET UNITYSDK_OFFSET(0x1A523900)

inline static constexpr unsigned int AMKFEJCFEJL_TypeDefinitionIndex = 11205;

class AMKFEJCFEJL : public ::System::Object
{
public:
	::System::Collections::Generic::HashSet_1<::System::Int32>* LHINHLCKHNE; // 0x10
	::BFLIALHPGDK DHDJDGFNBOA; // 0x18
	::Il2CppArray<::ODADHLMBIGG*>* OJMBOGGMIKO; // 0x30
	::System::Action* PLDOELOOFLL; // 0x38
	::System::Collections::Generic::Dictionary_2<::System::Int32, ::System::Int32>* FLBOKGKPECD; // 0x40
	::System::Boolean DLGKLGKOMHK; // 0x48
	::System::Byte _padding0[0x3];
	::System::Int32 IJDGGCANOFI; // 0x4C

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + AMKFEJCFEJL__CTOR_OFFSET))(this);
	}

	::System::Boolean OFHECOHPAKG()
	{
		return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + AMKFEJCFEJL_OFHECOHPAKG_OFFSET))(this);
	}

	::System::Void LNFENFDLMIG()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + AMKFEJCFEJL_LNFENFDLMIG_OFFSET))(this);
	}

	::System::Void FPMKEGMLNHG(::System::Action* EJGDHCIBCJH)
	{
		return ((::System::Void(*)(::PVOID, ::System::Action*))((::PBYTE)hIl2Cpp + AMKFEJCFEJL_FPMKEGMLNHG_OFFSET))(this, EJGDHCIBCJH);
	}

	::System::Void BMNMLAIJJGF(::KECPLIFGOCJ GFCJHNHLFEF)
	{
		return ((::System::Void(*)(::PVOID, ::KECPLIFGOCJ))((::PBYTE)hIl2Cpp + AMKFEJCFEJL_BMNMLAIJJGF_OFFSET))(this, GFCJHNHLFEF);
	}

	::System::Void PHOADBJGFBE()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + AMKFEJCFEJL_PHOADBJGFBE_OFFSET))(this);
	}

	::System::Void BHLAEBMEOLO()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + AMKFEJCFEJL_BHLAEBMEOLO_OFFSET))(this);
	}

	::System::Void Finalize()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + AMKFEJCFEJL_FINALIZE_OFFSET))(this);
	}

	::ODADHLMBIGG* IFDPKDOFOJD(::System::Int32 MGMDLMBEDJF)
	{
		return ((::ODADHLMBIGG*(*)(::PVOID, ::System::Int32))((::PBYTE)hIl2Cpp + AMKFEJCFEJL_IFDPKDOFOJD_OFFSET))(this, MGMDLMBEDJF);
	}

	::System::Void KMIMGEDAMCE(::Il2CppArray<::System::Byte>* LJBPECKCCEA)
	{
		return ((::System::Void(*)(::PVOID, ::Il2CppArray<::System::Byte>*))((::PBYTE)hIl2Cpp + AMKFEJCFEJL_KMIMGEDAMCE_OFFSET))(this, LJBPECKCCEA);
	}

	::System::Void NAMKJOJBAOA()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + AMKFEJCFEJL_NAMKJOJBAOA_OFFSET))(this);
	}

	::System::Void CHLEALKAOJO()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + AMKFEJCFEJL_CHLEALKAOJO_OFFSET))(this);
	}
};
