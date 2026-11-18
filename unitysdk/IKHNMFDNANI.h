#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/KECPLIFGOCJ.h"
#include "unitysdk/KJEBMCPFEJA.h"
#include "unitysdk/System/Object.h"

class CJNGKDMBMDA;
namespace System { class Action; }
namespace System::Collections::Generic { template <typename T1, typename T2> class Dictionary_2; }
namespace System::Collections::Generic { template <typename T> class HashSet_1; }

#define IKHNMFDNANI_BHLAEBMEOLO_OFFSET UNITYSDK_OFFSET(0x1B7CFE00)
#define IKHNMFDNANI_BMNMLAIJJGF_OFFSET UNITYSDK_OFFSET(0x1B7CFBC0)
#define IKHNMFDNANI_CHLEALKAOJO_OFFSET UNITYSDK_OFFSET(0x1B7CFD40)
#define IKHNMFDNANI_FINALIZE_OFFSET UNITYSDK_OFFSET(0x1B7CFEE0)
#define IKHNMFDNANI_FPMKEGMLNHG_OFFSET UNITYSDK_OFFSET(0x1B7CFBD0)
#define IKHNMFDNANI_IFDPKDOFOJD_OFFSET UNITYSDK_OFFSET(0x1B7D0080)
#define IKHNMFDNANI_KMIMGEDAMCE_OFFSET UNITYSDK_OFFSET(0x1B7D02B0)
#define IKHNMFDNANI_LNFENFDLMIG_OFFSET UNITYSDK_OFFSET(0x1B7CF810)
#define IKHNMFDNANI_NAMKJOJBAOA_OFFSET UNITYSDK_OFFSET(0x1B7D0060)
#define IKHNMFDNANI_OFHECOHPAKG_OFFSET UNITYSDK_OFFSET(0x1B7CF7F0)
#define IKHNMFDNANI_PHOADBJGFBE_OFFSET UNITYSDK_OFFSET(0x1B7CFAD0)
#define IKHNMFDNANI__CTOR_OFFSET UNITYSDK_OFFSET(0x1B7D0010)

inline static constexpr unsigned int IKHNMFDNANI_TypeDefinitionIndex = 13525;

class IKHNMFDNANI : public ::System::Object
{
public:
	::Il2CppArray<::CJNGKDMBMDA*>* OJMBOGGMIKO; // 0x10
	::System::Collections::Generic::HashSet_1<::System::Int32>* LHINHLCKHNE; // 0x18
	::System::Action* PLDOELOOFLL; // 0x20
	::System::Collections::Generic::Dictionary_2<::System::Int32, ::System::Int32>* FLBOKGKPECD; // 0x28
	::KJEBMCPFEJA DHDJDGFNBOA; // 0x30
	::System::Boolean DLGKLGKOMHK; // 0x48
	::System::Byte _padding0[0x3];
	::System::Int32 IJDGGCANOFI; // 0x4C

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + IKHNMFDNANI__CTOR_OFFSET))(this);
	}

	::System::Boolean OFHECOHPAKG()
	{
		return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + IKHNMFDNANI_OFHECOHPAKG_OFFSET))(this);
	}

	::System::Void LNFENFDLMIG()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + IKHNMFDNANI_LNFENFDLMIG_OFFSET))(this);
	}

	::System::Void FPMKEGMLNHG(::System::Action* EJGDHCIBCJH)
	{
		return ((::System::Void(*)(::PVOID, ::System::Action*))((::PBYTE)hIl2Cpp + IKHNMFDNANI_FPMKEGMLNHG_OFFSET))(this, EJGDHCIBCJH);
	}

	::System::Void BMNMLAIJJGF(::KECPLIFGOCJ GFCJHNHLFEF)
	{
		return ((::System::Void(*)(::PVOID, ::KECPLIFGOCJ))((::PBYTE)hIl2Cpp + IKHNMFDNANI_BMNMLAIJJGF_OFFSET))(this, GFCJHNHLFEF);
	}

	::System::Void PHOADBJGFBE()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + IKHNMFDNANI_PHOADBJGFBE_OFFSET))(this);
	}

	::System::Void BHLAEBMEOLO()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + IKHNMFDNANI_BHLAEBMEOLO_OFFSET))(this);
	}

	::System::Void Finalize()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + IKHNMFDNANI_FINALIZE_OFFSET))(this);
	}

	::System::Void NAMKJOJBAOA()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + IKHNMFDNANI_NAMKJOJBAOA_OFFSET))(this);
	}

	::CJNGKDMBMDA* IFDPKDOFOJD(::System::Int32 MGMDLMBEDJF)
	{
		return ((::CJNGKDMBMDA*(*)(::PVOID, ::System::Int32))((::PBYTE)hIl2Cpp + IKHNMFDNANI_IFDPKDOFOJD_OFFSET))(this, MGMDLMBEDJF);
	}

	::System::Void KMIMGEDAMCE(::Il2CppArray<::System::Byte>* LJBPECKCCEA)
	{
		return ((::System::Void(*)(::PVOID, ::Il2CppArray<::System::Byte>*))((::PBYTE)hIl2Cpp + IKHNMFDNANI_KMIMGEDAMCE_OFFSET))(this, LJBPECKCCEA);
	}

	::System::Void CHLEALKAOJO()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + IKHNMFDNANI_CHLEALKAOJO_OFFSET))(this);
	}
};
