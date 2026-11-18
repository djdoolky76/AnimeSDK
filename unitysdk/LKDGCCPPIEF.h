#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/FFAKCPPPFIK.h"
#include "unitysdk/KECPLIFGOCJ.h"
#include "unitysdk/System/Object.h"

class JBLOIMOFKJF;
namespace System { class Action; }
namespace System::Collections::Generic { template <typename T1, typename T2> class Dictionary_2; }

#define LKDGCCPPIEF_BHLAEBMEOLO_OFFSET UNITYSDK_OFFSET(0x1BA8A440)
#define LKDGCCPPIEF_BMNMLAIJJGF_OFFSET UNITYSDK_OFFSET(0x1BA8A200)
#define LKDGCCPPIEF_CHLEALKAOJO_OFFSET UNITYSDK_OFFSET(0x1BA8A380)
#define LKDGCCPPIEF_FINALIZE_OFFSET UNITYSDK_OFFSET(0x1BA8A520)
#define LKDGCCPPIEF_FPMKEGMLNHG_OFFSET UNITYSDK_OFFSET(0x1BA8A210)
#define LKDGCCPPIEF_IFDPKDOFOJD_OFFSET UNITYSDK_OFFSET(0x1BA8A660)
#define LKDGCCPPIEF_KMIMGEDAMCE_OFFSET UNITYSDK_OFFSET(0x1BA8A870)
#define LKDGCCPPIEF_LNFENFDLMIG_OFFSET UNITYSDK_OFFSET(0x1BA89E50)
#define LKDGCCPPIEF_NAMKJOJBAOA_OFFSET UNITYSDK_OFFSET(0x1BA8A850)
#define LKDGCCPPIEF_OFHECOHPAKG_OFFSET UNITYSDK_OFFSET(0x1BA89E30)
#define LKDGCCPPIEF_PHOADBJGFBE_OFFSET UNITYSDK_OFFSET(0x1BA8A110)
#define LKDGCCPPIEF__CTOR_OFFSET UNITYSDK_OFFSET(0x1BA8A650)

inline static constexpr unsigned int LKDGCCPPIEF_TypeDefinitionIndex = 12451;

class LKDGCCPPIEF : public ::System::Object
{
public:
	::System::Collections::Generic::Dictionary_2<::System::Int32, ::System::Int32>* FLBOKGKPECD; // 0x10
	::System::Action* PLDOELOOFLL; // 0x18
	::FFAKCPPPFIK DHDJDGFNBOA; // 0x20
	::Il2CppArray<::JBLOIMOFKJF*>* OJMBOGGMIKO; // 0x38
	::System::Boolean DLGKLGKOMHK; // 0x40
	::System::Byte _padding0[0x3];
	::System::Int32 IJDGGCANOFI; // 0x44

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + LKDGCCPPIEF__CTOR_OFFSET))(this);
	}

	::System::Boolean OFHECOHPAKG()
	{
		return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + LKDGCCPPIEF_OFHECOHPAKG_OFFSET))(this);
	}

	::System::Void LNFENFDLMIG()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + LKDGCCPPIEF_LNFENFDLMIG_OFFSET))(this);
	}

	::System::Void FPMKEGMLNHG(::System::Action* EJGDHCIBCJH)
	{
		return ((::System::Void(*)(::PVOID, ::System::Action*))((::PBYTE)hIl2Cpp + LKDGCCPPIEF_FPMKEGMLNHG_OFFSET))(this, EJGDHCIBCJH);
	}

	::System::Void BMNMLAIJJGF(::KECPLIFGOCJ GFCJHNHLFEF)
	{
		return ((::System::Void(*)(::PVOID, ::KECPLIFGOCJ))((::PBYTE)hIl2Cpp + LKDGCCPPIEF_BMNMLAIJJGF_OFFSET))(this, GFCJHNHLFEF);
	}

	::System::Void PHOADBJGFBE()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + LKDGCCPPIEF_PHOADBJGFBE_OFFSET))(this);
	}

	::System::Void BHLAEBMEOLO()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + LKDGCCPPIEF_BHLAEBMEOLO_OFFSET))(this);
	}

	::System::Void Finalize()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + LKDGCCPPIEF_FINALIZE_OFFSET))(this);
	}

	::System::Void CHLEALKAOJO()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + LKDGCCPPIEF_CHLEALKAOJO_OFFSET))(this);
	}

	::JBLOIMOFKJF* IFDPKDOFOJD(::System::Int32 MGMDLMBEDJF)
	{
		return ((::JBLOIMOFKJF*(*)(::PVOID, ::System::Int32))((::PBYTE)hIl2Cpp + LKDGCCPPIEF_IFDPKDOFOJD_OFFSET))(this, MGMDLMBEDJF);
	}

	::System::Void NAMKJOJBAOA()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + LKDGCCPPIEF_NAMKJOJBAOA_OFFSET))(this);
	}

	::System::Void KMIMGEDAMCE(::Il2CppArray<::System::Byte>* LJBPECKCCEA)
	{
		return ((::System::Void(*)(::PVOID, ::Il2CppArray<::System::Byte>*))((::PBYTE)hIl2Cpp + LKDGCCPPIEF_KMIMGEDAMCE_OFFSET))(this, LJBPECKCCEA);
	}
};
