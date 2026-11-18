#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/KECPLIFGOCJ.h"
#include "unitysdk/MBNJKFDPNID.h"
#include "unitysdk/System/Object.h"

class CLKBHPBNKHE;
namespace System { class Action; }
namespace System::Collections::Generic { template <typename T1, typename T2> class Dictionary_2; }
namespace System::Collections::Generic { template <typename T> class HashSet_1; }

#define NHNDBKKGOPK_BHLAEBMEOLO_OFFSET UNITYSDK_OFFSET(0x17FD5D00)
#define NHNDBKKGOPK_BMNMLAIJJGF_OFFSET UNITYSDK_OFFSET(0x17FD5AC0)
#define NHNDBKKGOPK_CHLEALKAOJO_OFFSET UNITYSDK_OFFSET(0x17FD5C40)
#define NHNDBKKGOPK_FINALIZE_OFFSET UNITYSDK_OFFSET(0x17FD5DE0)
#define NHNDBKKGOPK_FPMKEGMLNHG_OFFSET UNITYSDK_OFFSET(0x17FD5AD0)
#define NHNDBKKGOPK_IFDPKDOFOJD_OFFSET UNITYSDK_OFFSET(0x17FD6150)
#define NHNDBKKGOPK_KMIMGEDAMCE_OFFSET UNITYSDK_OFFSET(0x17FD5F80)
#define NHNDBKKGOPK_LNFENFDLMIG_OFFSET UNITYSDK_OFFSET(0x17FD5710)
#define NHNDBKKGOPK_NAMKJOJBAOA_OFFSET UNITYSDK_OFFSET(0x17FD5F60)
#define NHNDBKKGOPK_OFHECOHPAKG_OFFSET UNITYSDK_OFFSET(0x17FD56F0)
#define NHNDBKKGOPK_PHOADBJGFBE_OFFSET UNITYSDK_OFFSET(0x17FD59D0)
#define NHNDBKKGOPK__CTOR_OFFSET UNITYSDK_OFFSET(0x17FD5F10)

inline static constexpr unsigned int NHNDBKKGOPK_TypeDefinitionIndex = 11333;

class NHNDBKKGOPK : public ::System::Object
{
public:
	::System::Collections::Generic::HashSet_1<::System::Int32>* LHINHLCKHNE; // 0x10
	::System::Collections::Generic::Dictionary_2<::System::Int32, ::System::Int32>* FLBOKGKPECD; // 0x18
	::System::Action* PLDOELOOFLL; // 0x20
	::Il2CppArray<::CLKBHPBNKHE*>* OJMBOGGMIKO; // 0x28
	::MBNJKFDPNID DHDJDGFNBOA; // 0x30
	::System::Boolean DLGKLGKOMHK; // 0x48
	::System::Byte _padding0[0x3];
	::System::Int32 IJDGGCANOFI; // 0x4C

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + NHNDBKKGOPK__CTOR_OFFSET))(this);
	}

	::System::Boolean OFHECOHPAKG()
	{
		return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + NHNDBKKGOPK_OFHECOHPAKG_OFFSET))(this);
	}

	::System::Void LNFENFDLMIG()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + NHNDBKKGOPK_LNFENFDLMIG_OFFSET))(this);
	}

	::System::Void FPMKEGMLNHG(::System::Action* EJGDHCIBCJH)
	{
		return ((::System::Void(*)(::PVOID, ::System::Action*))((::PBYTE)hIl2Cpp + NHNDBKKGOPK_FPMKEGMLNHG_OFFSET))(this, EJGDHCIBCJH);
	}

	::System::Void BMNMLAIJJGF(::KECPLIFGOCJ GFCJHNHLFEF)
	{
		return ((::System::Void(*)(::PVOID, ::KECPLIFGOCJ))((::PBYTE)hIl2Cpp + NHNDBKKGOPK_BMNMLAIJJGF_OFFSET))(this, GFCJHNHLFEF);
	}

	::System::Void PHOADBJGFBE()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + NHNDBKKGOPK_PHOADBJGFBE_OFFSET))(this);
	}

	::System::Void BHLAEBMEOLO()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + NHNDBKKGOPK_BHLAEBMEOLO_OFFSET))(this);
	}

	::System::Void Finalize()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + NHNDBKKGOPK_FINALIZE_OFFSET))(this);
	}

	::System::Void NAMKJOJBAOA()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + NHNDBKKGOPK_NAMKJOJBAOA_OFFSET))(this);
	}

	::System::Void KMIMGEDAMCE(::Il2CppArray<::System::Byte>* LJBPECKCCEA)
	{
		return ((::System::Void(*)(::PVOID, ::Il2CppArray<::System::Byte>*))((::PBYTE)hIl2Cpp + NHNDBKKGOPK_KMIMGEDAMCE_OFFSET))(this, LJBPECKCCEA);
	}

	::System::Void CHLEALKAOJO()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + NHNDBKKGOPK_CHLEALKAOJO_OFFSET))(this);
	}

	::CLKBHPBNKHE* IFDPKDOFOJD(::System::Int32 MGMDLMBEDJF)
	{
		return ((::CLKBHPBNKHE*(*)(::PVOID, ::System::Int32))((::PBYTE)hIl2Cpp + NHNDBKKGOPK_IFDPKDOFOJD_OFFSET))(this, MGMDLMBEDJF);
	}
};
