#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/KECPLIFGOCJ.h"
#include "unitysdk/LBDPANHIMOA.h"
#include "unitysdk/System/Object.h"

class CEBHBGMODMN;
namespace System { class Action; }
namespace System::Collections::Generic { template <typename T1, typename T2> class Dictionary_2; }

#define APIIEIMBMBO_BHLAEBMEOLO_OFFSET UNITYSDK_OFFSET(0x1A575A80)
#define APIIEIMBMBO_BMNMLAIJJGF_OFFSET UNITYSDK_OFFSET(0x1A575850)
#define APIIEIMBMBO_CHLEALKAOJO_OFFSET UNITYSDK_OFFSET(0x1A5759C0)
#define APIIEIMBMBO_FINALIZE_OFFSET UNITYSDK_OFFSET(0x1A575B60)
#define APIIEIMBMBO_FPMKEGMLNHG_OFFSET UNITYSDK_OFFSET(0x1A575860)
#define APIIEIMBMBO_IFDPKDOFOJD_OFFSET UNITYSDK_OFFSET(0x1A575E90)
#define APIIEIMBMBO_KMIMGEDAMCE_OFFSET UNITYSDK_OFFSET(0x1A575CA0)
#define APIIEIMBMBO_LNFENFDLMIG_OFFSET UNITYSDK_OFFSET(0x1A5754B0)
#define APIIEIMBMBO_NAMKJOJBAOA_OFFSET UNITYSDK_OFFSET(0x1A575E70)
#define APIIEIMBMBO_OFHECOHPAKG_OFFSET UNITYSDK_OFFSET(0x1A575490)
#define APIIEIMBMBO_PHOADBJGFBE_OFFSET UNITYSDK_OFFSET(0x1A575770)
#define APIIEIMBMBO__CTOR_OFFSET UNITYSDK_OFFSET(0x1A575C90)

inline static constexpr unsigned int APIIEIMBMBO_TypeDefinitionIndex = 11668;

class APIIEIMBMBO : public ::System::Object
{
public:
	::Il2CppArray<::CEBHBGMODMN*>* OJMBOGGMIKO; // 0x10
	::System::Collections::Generic::Dictionary_2<::System::Int32, ::System::Int32>* FLBOKGKPECD; // 0x18
	::LBDPANHIMOA DHDJDGFNBOA; // 0x20
	::System::Action* PLDOELOOFLL; // 0x38
	::System::Boolean DLGKLGKOMHK; // 0x40
	::System::Byte _padding0[0x3];
	::System::Int32 IJDGGCANOFI; // 0x44

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + APIIEIMBMBO__CTOR_OFFSET))(this);
	}

	::System::Boolean OFHECOHPAKG()
	{
		return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + APIIEIMBMBO_OFHECOHPAKG_OFFSET))(this);
	}

	::System::Void LNFENFDLMIG()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + APIIEIMBMBO_LNFENFDLMIG_OFFSET))(this);
	}

	::System::Void FPMKEGMLNHG(::System::Action* EJGDHCIBCJH)
	{
		return ((::System::Void(*)(::PVOID, ::System::Action*))((::PBYTE)hIl2Cpp + APIIEIMBMBO_FPMKEGMLNHG_OFFSET))(this, EJGDHCIBCJH);
	}

	::System::Void BMNMLAIJJGF(::KECPLIFGOCJ GFCJHNHLFEF)
	{
		return ((::System::Void(*)(::PVOID, ::KECPLIFGOCJ))((::PBYTE)hIl2Cpp + APIIEIMBMBO_BMNMLAIJJGF_OFFSET))(this, GFCJHNHLFEF);
	}

	::System::Void PHOADBJGFBE()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + APIIEIMBMBO_PHOADBJGFBE_OFFSET))(this);
	}

	::System::Void BHLAEBMEOLO()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + APIIEIMBMBO_BHLAEBMEOLO_OFFSET))(this);
	}

	::System::Void Finalize()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + APIIEIMBMBO_FINALIZE_OFFSET))(this);
	}

	::System::Void CHLEALKAOJO()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + APIIEIMBMBO_CHLEALKAOJO_OFFSET))(this);
	}

	::System::Void KMIMGEDAMCE(::Il2CppArray<::System::Byte>* LJBPECKCCEA)
	{
		return ((::System::Void(*)(::PVOID, ::Il2CppArray<::System::Byte>*))((::PBYTE)hIl2Cpp + APIIEIMBMBO_KMIMGEDAMCE_OFFSET))(this, LJBPECKCCEA);
	}

	::System::Void NAMKJOJBAOA()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + APIIEIMBMBO_NAMKJOJBAOA_OFFSET))(this);
	}

	::CEBHBGMODMN* IFDPKDOFOJD(::System::Int32 MGMDLMBEDJF)
	{
		return ((::CEBHBGMODMN*(*)(::PVOID, ::System::Int32))((::PBYTE)hIl2Cpp + APIIEIMBMBO_IFDPKDOFOJD_OFFSET))(this, MGMDLMBEDJF);
	}
};
