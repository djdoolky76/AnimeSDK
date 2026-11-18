#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/KECPLIFGOCJ.h"
#include "unitysdk/LDPPGNPLAKD.h"
#include "unitysdk/System/Object.h"

class PNLJLPNEDHF;
namespace System { class Action; }
namespace System::Collections::Generic { template <typename T1, typename T2> class Dictionary_2; }
namespace System::Collections::Generic { template <typename T> class HashSet_1; }

#define HNCOEJHKGND_BHLAEBMEOLO_OFFSET UNITYSDK_OFFSET(0x152DD0E0)
#define HNCOEJHKGND_BMNMLAIJJGF_OFFSET UNITYSDK_OFFSET(0x152DCEA0)
#define HNCOEJHKGND_CHLEALKAOJO_OFFSET UNITYSDK_OFFSET(0x152DD020)
#define HNCOEJHKGND_FINALIZE_OFFSET UNITYSDK_OFFSET(0x152DD1C0)
#define HNCOEJHKGND_FPMKEGMLNHG_OFFSET UNITYSDK_OFFSET(0x152DCEB0)
#define HNCOEJHKGND_IFDPKDOFOJD_OFFSET UNITYSDK_OFFSET(0x152DD340)
#define HNCOEJHKGND_KMIMGEDAMCE_OFFSET UNITYSDK_OFFSET(0x152DD590)
#define HNCOEJHKGND_LNFENFDLMIG_OFFSET UNITYSDK_OFFSET(0x152DCAF0)
#define HNCOEJHKGND_NAMKJOJBAOA_OFFSET UNITYSDK_OFFSET(0x152DD570)
#define HNCOEJHKGND_OFHECOHPAKG_OFFSET UNITYSDK_OFFSET(0x152DCAD0)
#define HNCOEJHKGND_PHOADBJGFBE_OFFSET UNITYSDK_OFFSET(0x152DCDB0)
#define HNCOEJHKGND__CTOR_OFFSET UNITYSDK_OFFSET(0x152DD2F0)

inline static constexpr unsigned int HNCOEJHKGND_TypeDefinitionIndex = 11768;

class HNCOEJHKGND : public ::System::Object
{
public:
	::Il2CppArray<::PNLJLPNEDHF*>* OJMBOGGMIKO; // 0x10
	::System::Action* PLDOELOOFLL; // 0x18
	::System::Collections::Generic::HashSet_1<::System::Int32>* LHINHLCKHNE; // 0x20
	::LDPPGNPLAKD DHDJDGFNBOA; // 0x28
	::System::Collections::Generic::Dictionary_2<::System::Int32, ::System::Int32>* FLBOKGKPECD; // 0x40
	::System::Boolean DLGKLGKOMHK; // 0x48
	::System::Byte _padding0[0x3];
	::System::Int32 IJDGGCANOFI; // 0x4C

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + HNCOEJHKGND__CTOR_OFFSET))(this);
	}

	::System::Boolean OFHECOHPAKG()
	{
		return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + HNCOEJHKGND_OFHECOHPAKG_OFFSET))(this);
	}

	::System::Void LNFENFDLMIG()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + HNCOEJHKGND_LNFENFDLMIG_OFFSET))(this);
	}

	::System::Void FPMKEGMLNHG(::System::Action* EJGDHCIBCJH)
	{
		return ((::System::Void(*)(::PVOID, ::System::Action*))((::PBYTE)hIl2Cpp + HNCOEJHKGND_FPMKEGMLNHG_OFFSET))(this, EJGDHCIBCJH);
	}

	::System::Void BMNMLAIJJGF(::KECPLIFGOCJ GFCJHNHLFEF)
	{
		return ((::System::Void(*)(::PVOID, ::KECPLIFGOCJ))((::PBYTE)hIl2Cpp + HNCOEJHKGND_BMNMLAIJJGF_OFFSET))(this, GFCJHNHLFEF);
	}

	::System::Void PHOADBJGFBE()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + HNCOEJHKGND_PHOADBJGFBE_OFFSET))(this);
	}

	::System::Void BHLAEBMEOLO()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + HNCOEJHKGND_BHLAEBMEOLO_OFFSET))(this);
	}

	::System::Void Finalize()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + HNCOEJHKGND_FINALIZE_OFFSET))(this);
	}

	::System::Void CHLEALKAOJO()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + HNCOEJHKGND_CHLEALKAOJO_OFFSET))(this);
	}

	::PNLJLPNEDHF* IFDPKDOFOJD(::System::Int32 MGMDLMBEDJF)
	{
		return ((::PNLJLPNEDHF*(*)(::PVOID, ::System::Int32))((::PBYTE)hIl2Cpp + HNCOEJHKGND_IFDPKDOFOJD_OFFSET))(this, MGMDLMBEDJF);
	}

	::System::Void KMIMGEDAMCE(::Il2CppArray<::System::Byte>* LJBPECKCCEA)
	{
		return ((::System::Void(*)(::PVOID, ::Il2CppArray<::System::Byte>*))((::PBYTE)hIl2Cpp + HNCOEJHKGND_KMIMGEDAMCE_OFFSET))(this, LJBPECKCCEA);
	}

	::System::Void NAMKJOJBAOA()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + HNCOEJHKGND_NAMKJOJBAOA_OFFSET))(this);
	}
};
