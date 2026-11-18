#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/KECPLIFGOCJ.h"
#include "unitysdk/MCGKIOOKACB.h"
#include "unitysdk/System/Object.h"

class GBFOFKGHPDG;
namespace System { class Action; }
namespace System::Collections::Generic { template <typename T1, typename T2> class Dictionary_2; }
namespace System::Collections::Generic { template <typename T> class HashSet_1; }

#define NIGBHCCLGKB_BHLAEBMEOLO_OFFSET UNITYSDK_OFFSET(0x17353210)
#define NIGBHCCLGKB_BMNMLAIJJGF_OFFSET UNITYSDK_OFFSET(0x17352EB0)
#define NIGBHCCLGKB_CHLEALKAOJO_OFFSET UNITYSDK_OFFSET(0x17353020)
#define NIGBHCCLGKB_FINALIZE_OFFSET UNITYSDK_OFFSET(0x173530E0)
#define NIGBHCCLGKB_FPMKEGMLNHG_OFFSET UNITYSDK_OFFSET(0x17352EC0)
#define NIGBHCCLGKB_IFDPKDOFOJD_OFFSET UNITYSDK_OFFSET(0x17353360)
#define NIGBHCCLGKB_KMIMGEDAMCE_OFFSET UNITYSDK_OFFSET(0x17353590)
#define NIGBHCCLGKB_LNFENFDLMIG_OFFSET UNITYSDK_OFFSET(0x17352B10)
#define NIGBHCCLGKB_NAMKJOJBAOA_OFFSET UNITYSDK_OFFSET(0x17353340)
#define NIGBHCCLGKB_OFHECOHPAKG_OFFSET UNITYSDK_OFFSET(0x17352AF0)
#define NIGBHCCLGKB_PHOADBJGFBE_OFFSET UNITYSDK_OFFSET(0x17352DD0)
#define NIGBHCCLGKB__CTOR_OFFSET UNITYSDK_OFFSET(0x173532F0)

inline static constexpr unsigned int NIGBHCCLGKB_TypeDefinitionIndex = 11113;

class NIGBHCCLGKB : public ::System::Object
{
public:
	::MCGKIOOKACB DHDJDGFNBOA; // 0x10
	::System::Collections::Generic::HashSet_1<::System::Int32>* LHINHLCKHNE; // 0x28
	::System::Collections::Generic::Dictionary_2<::System::Int32, ::System::Int32>* FLBOKGKPECD; // 0x30
	::Il2CppArray<::GBFOFKGHPDG*>* OJMBOGGMIKO; // 0x38
	::System::Action* PLDOELOOFLL; // 0x40
	::System::Int32 IJDGGCANOFI; // 0x48
	::System::Boolean DLGKLGKOMHK; // 0x4C

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + NIGBHCCLGKB__CTOR_OFFSET))(this);
	}

	::System::Boolean OFHECOHPAKG()
	{
		return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + NIGBHCCLGKB_OFHECOHPAKG_OFFSET))(this);
	}

	::System::Void LNFENFDLMIG()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + NIGBHCCLGKB_LNFENFDLMIG_OFFSET))(this);
	}

	::System::Void FPMKEGMLNHG(::System::Action* EJGDHCIBCJH)
	{
		return ((::System::Void(*)(::PVOID, ::System::Action*))((::PBYTE)hIl2Cpp + NIGBHCCLGKB_FPMKEGMLNHG_OFFSET))(this, EJGDHCIBCJH);
	}

	::System::Void PHOADBJGFBE()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + NIGBHCCLGKB_PHOADBJGFBE_OFFSET))(this);
	}

	::System::Void Finalize()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + NIGBHCCLGKB_FINALIZE_OFFSET))(this);
	}

	::System::Void BMNMLAIJJGF(::KECPLIFGOCJ GFCJHNHLFEF)
	{
		return ((::System::Void(*)(::PVOID, ::KECPLIFGOCJ))((::PBYTE)hIl2Cpp + NIGBHCCLGKB_BMNMLAIJJGF_OFFSET))(this, GFCJHNHLFEF);
	}

	::System::Void BHLAEBMEOLO()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + NIGBHCCLGKB_BHLAEBMEOLO_OFFSET))(this);
	}

	::System::Void NAMKJOJBAOA()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + NIGBHCCLGKB_NAMKJOJBAOA_OFFSET))(this);
	}

	::GBFOFKGHPDG* IFDPKDOFOJD(::System::Int32 MGMDLMBEDJF)
	{
		return ((::GBFOFKGHPDG*(*)(::PVOID, ::System::Int32))((::PBYTE)hIl2Cpp + NIGBHCCLGKB_IFDPKDOFOJD_OFFSET))(this, MGMDLMBEDJF);
	}

	::System::Void CHLEALKAOJO()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + NIGBHCCLGKB_CHLEALKAOJO_OFFSET))(this);
	}

	::System::Void KMIMGEDAMCE(::Il2CppArray<::System::Byte>* LJBPECKCCEA)
	{
		return ((::System::Void(*)(::PVOID, ::Il2CppArray<::System::Byte>*))((::PBYTE)hIl2Cpp + NIGBHCCLGKB_KMIMGEDAMCE_OFFSET))(this, LJBPECKCCEA);
	}
};
