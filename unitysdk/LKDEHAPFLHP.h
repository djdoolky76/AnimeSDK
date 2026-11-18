#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/KECPLIFGOCJ.h"
#include "unitysdk/MKLIOEOCJBG.h"
#include "unitysdk/System/Object.h"

class GFDMLJDEIJB;
namespace System { class Action; }
namespace System::Collections::Generic { template <typename T1, typename T2> class Dictionary_2; }
namespace System::Collections::Generic { template <typename T> class HashSet_1; }

#define LKDEHAPFLHP_BHLAEBMEOLO_OFFSET UNITYSDK_OFFSET(0x1BA89640)
#define LKDEHAPFLHP_BMNMLAIJJGF_OFFSET UNITYSDK_OFFSET(0x1BA89400)
#define LKDEHAPFLHP_CHLEALKAOJO_OFFSET UNITYSDK_OFFSET(0x1BA89580)
#define LKDEHAPFLHP_FINALIZE_OFFSET UNITYSDK_OFFSET(0x1BA89720)
#define LKDEHAPFLHP_FPMKEGMLNHG_OFFSET UNITYSDK_OFFSET(0x1BA89410)
#define LKDEHAPFLHP_IFDPKDOFOJD_OFFSET UNITYSDK_OFFSET(0x1BA89AA0)
#define LKDEHAPFLHP_KMIMGEDAMCE_OFFSET UNITYSDK_OFFSET(0x1BA898A0)
#define LKDEHAPFLHP_LNFENFDLMIG_OFFSET UNITYSDK_OFFSET(0x1BA88F80)
#define LKDEHAPFLHP_NAMKJOJBAOA_OFFSET UNITYSDK_OFFSET(0x1BA89A80)
#define LKDEHAPFLHP_OFHECOHPAKG_OFFSET UNITYSDK_OFFSET(0x1BA88F50)
#define LKDEHAPFLHP_PHOADBJGFBE_OFFSET UNITYSDK_OFFSET(0x1BA89240)
#define LKDEHAPFLHP__CTOR_OFFSET UNITYSDK_OFFSET(0x1BA89850)

inline static constexpr unsigned int LKDEHAPFLHP_TypeDefinitionIndex = 11940;

class LKDEHAPFLHP : public ::System::Object
{
public:
	::System::Collections::Generic::Dictionary_2<::System::Int32, ::System::Int32>* FLBOKGKPECD; // 0x10
	::System::Action* PLDOELOOFLL; // 0x18
	::System::Collections::Generic::HashSet_1<::System::Int32>* LHINHLCKHNE; // 0x20
	::Il2CppArray<::GFDMLJDEIJB*>* OJMBOGGMIKO; // 0x28
	::MKLIOEOCJBG DHDJDGFNBOA; // 0x30
	::System::Int32 IJDGGCANOFI; // 0x48
	::System::Boolean DLGKLGKOMHK; // 0x4C

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + LKDEHAPFLHP__CTOR_OFFSET))(this);
	}

	::System::Boolean OFHECOHPAKG()
	{
		return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + LKDEHAPFLHP_OFHECOHPAKG_OFFSET))(this);
	}

	::System::Void LNFENFDLMIG()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + LKDEHAPFLHP_LNFENFDLMIG_OFFSET))(this);
	}

	::System::Void FPMKEGMLNHG(::System::Action* EJGDHCIBCJH)
	{
		return ((::System::Void(*)(::PVOID, ::System::Action*))((::PBYTE)hIl2Cpp + LKDEHAPFLHP_FPMKEGMLNHG_OFFSET))(this, EJGDHCIBCJH);
	}

	::System::Void BMNMLAIJJGF(::KECPLIFGOCJ GFCJHNHLFEF)
	{
		return ((::System::Void(*)(::PVOID, ::KECPLIFGOCJ))((::PBYTE)hIl2Cpp + LKDEHAPFLHP_BMNMLAIJJGF_OFFSET))(this, GFCJHNHLFEF);
	}

	::System::Void PHOADBJGFBE()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + LKDEHAPFLHP_PHOADBJGFBE_OFFSET))(this);
	}

	::System::Void BHLAEBMEOLO()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + LKDEHAPFLHP_BHLAEBMEOLO_OFFSET))(this);
	}

	::System::Void Finalize()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + LKDEHAPFLHP_FINALIZE_OFFSET))(this);
	}

	::System::Void KMIMGEDAMCE(::Il2CppArray<::System::Byte>* LJBPECKCCEA)
	{
		return ((::System::Void(*)(::PVOID, ::Il2CppArray<::System::Byte>*))((::PBYTE)hIl2Cpp + LKDEHAPFLHP_KMIMGEDAMCE_OFFSET))(this, LJBPECKCCEA);
	}

	::System::Void NAMKJOJBAOA()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + LKDEHAPFLHP_NAMKJOJBAOA_OFFSET))(this);
	}

	::GFDMLJDEIJB* IFDPKDOFOJD(::System::Int32 MGMDLMBEDJF)
	{
		return ((::GFDMLJDEIJB*(*)(::PVOID, ::System::Int32))((::PBYTE)hIl2Cpp + LKDEHAPFLHP_IFDPKDOFOJD_OFFSET))(this, MGMDLMBEDJF);
	}

	::System::Void CHLEALKAOJO()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + LKDEHAPFLHP_CHLEALKAOJO_OFFSET))(this);
	}
};
