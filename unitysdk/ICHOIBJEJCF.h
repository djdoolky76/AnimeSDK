#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/AJAMFGEBIEI.h"
#include "unitysdk/KECPLIFGOCJ.h"
#include "unitysdk/System/Object.h"

class DBNHOOPNCEN;
namespace System { class Action; }
namespace System::Collections::Generic { template <typename T1, typename T2> class Dictionary_2; }
namespace System::Collections::Generic { template <typename T> class HashSet_1; }

#define ICHOIBJEJCF_BHLAEBMEOLO_OFFSET UNITYSDK_OFFSET(0x1B4E9B60)
#define ICHOIBJEJCF_BMNMLAIJJGF_OFFSET UNITYSDK_OFFSET(0x1B4E98E0)
#define ICHOIBJEJCF_CHLEALKAOJO_OFFSET UNITYSDK_OFFSET(0x1B4E98F0)
#define ICHOIBJEJCF_FINALIZE_OFFSET UNITYSDK_OFFSET(0x1B4E99B0)
#define ICHOIBJEJCF_FPMKEGMLNHG_OFFSET UNITYSDK_OFFSET(0x1B4E9AE0)
#define ICHOIBJEJCF_IFDPKDOFOJD_OFFSET UNITYSDK_OFFSET(0x1B4E9F40)
#define ICHOIBJEJCF_KMIMGEDAMCE_OFFSET UNITYSDK_OFFSET(0x1B4E9C90)
#define ICHOIBJEJCF_LNFENFDLMIG_OFFSET UNITYSDK_OFFSET(0x1B4E9540)
#define ICHOIBJEJCF_NAMKJOJBAOA_OFFSET UNITYSDK_OFFSET(0x1B4EA170)
#define ICHOIBJEJCF_OFHECOHPAKG_OFFSET UNITYSDK_OFFSET(0x1B4E9520)
#define ICHOIBJEJCF_PHOADBJGFBE_OFFSET UNITYSDK_OFFSET(0x1B4E9800)
#define ICHOIBJEJCF__CTOR_OFFSET UNITYSDK_OFFSET(0x1B4E9C40)

inline static constexpr unsigned int ICHOIBJEJCF_TypeDefinitionIndex = 14791;

class ICHOIBJEJCF : public ::System::Object
{
public:
	::Il2CppArray<::DBNHOOPNCEN*>* OJMBOGGMIKO; // 0x10
	::System::Collections::Generic::Dictionary_2<::System::Int32, ::System::Int32>* FLBOKGKPECD; // 0x18
	::AJAMFGEBIEI DHDJDGFNBOA; // 0x20
	::System::Collections::Generic::HashSet_1<::System::Int32>* LHINHLCKHNE; // 0x38
	::System::Action* PLDOELOOFLL; // 0x40
	::System::Int32 IJDGGCANOFI; // 0x48
	::System::Boolean DLGKLGKOMHK; // 0x4C

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + ICHOIBJEJCF__CTOR_OFFSET))(this);
	}

	::System::Boolean OFHECOHPAKG()
	{
		return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + ICHOIBJEJCF_OFHECOHPAKG_OFFSET))(this);
	}

	::System::Void LNFENFDLMIG()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + ICHOIBJEJCF_LNFENFDLMIG_OFFSET))(this);
	}

	::System::Void PHOADBJGFBE()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + ICHOIBJEJCF_PHOADBJGFBE_OFFSET))(this);
	}

	::System::Void Finalize()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + ICHOIBJEJCF_FINALIZE_OFFSET))(this);
	}

	::System::Void FPMKEGMLNHG(::System::Action* EJGDHCIBCJH)
	{
		return ((::System::Void(*)(::PVOID, ::System::Action*))((::PBYTE)hIl2Cpp + ICHOIBJEJCF_FPMKEGMLNHG_OFFSET))(this, EJGDHCIBCJH);
	}

	::System::Void BMNMLAIJJGF(::KECPLIFGOCJ GFCJHNHLFEF)
	{
		return ((::System::Void(*)(::PVOID, ::KECPLIFGOCJ))((::PBYTE)hIl2Cpp + ICHOIBJEJCF_BMNMLAIJJGF_OFFSET))(this, GFCJHNHLFEF);
	}

	::System::Void BHLAEBMEOLO()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + ICHOIBJEJCF_BHLAEBMEOLO_OFFSET))(this);
	}

	::System::Void KMIMGEDAMCE(::Il2CppArray<::System::Byte>* LJBPECKCCEA)
	{
		return ((::System::Void(*)(::PVOID, ::Il2CppArray<::System::Byte>*))((::PBYTE)hIl2Cpp + ICHOIBJEJCF_KMIMGEDAMCE_OFFSET))(this, LJBPECKCCEA);
	}

	::DBNHOOPNCEN* IFDPKDOFOJD(::System::Int32 MGMDLMBEDJF)
	{
		return ((::DBNHOOPNCEN*(*)(::PVOID, ::System::Int32))((::PBYTE)hIl2Cpp + ICHOIBJEJCF_IFDPKDOFOJD_OFFSET))(this, MGMDLMBEDJF);
	}

	::System::Void NAMKJOJBAOA()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + ICHOIBJEJCF_NAMKJOJBAOA_OFFSET))(this);
	}

	::System::Void CHLEALKAOJO()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + ICHOIBJEJCF_CHLEALKAOJO_OFFSET))(this);
	}
};
