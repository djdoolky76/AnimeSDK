#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/FEKLIDDJGIK.h"
#include "unitysdk/KECPLIFGOCJ.h"
#include "unitysdk/System/Object.h"

class KAENJJFIHPO;
namespace System { class Action; }
namespace System::Collections::Generic { template <typename T1, typename T2> class Dictionary_2; }
namespace System::Collections::Generic { template <typename T> class HashSet_1; }

#define DFPAJFJKJJL_BHLAEBMEOLO_OFFSET UNITYSDK_OFFSET(0x187980E0)
#define DFPAJFJKJJL_BMNMLAIJJGF_OFFSET UNITYSDK_OFFSET(0x18797EA0)
#define DFPAJFJKJJL_CHLEALKAOJO_OFFSET UNITYSDK_OFFSET(0x18798020)
#define DFPAJFJKJJL_FINALIZE_OFFSET UNITYSDK_OFFSET(0x187981C0)
#define DFPAJFJKJJL_FPMKEGMLNHG_OFFSET UNITYSDK_OFFSET(0x18797EB0)
#define DFPAJFJKJJL_IFDPKDOFOJD_OFFSET UNITYSDK_OFFSET(0x18798530)
#define DFPAJFJKJJL_KMIMGEDAMCE_OFFSET UNITYSDK_OFFSET(0x18798340)
#define DFPAJFJKJJL_LNFENFDLMIG_OFFSET UNITYSDK_OFFSET(0x18797AF0)
#define DFPAJFJKJJL_NAMKJOJBAOA_OFFSET UNITYSDK_OFFSET(0x18798510)
#define DFPAJFJKJJL_OFHECOHPAKG_OFFSET UNITYSDK_OFFSET(0x18797AD0)
#define DFPAJFJKJJL_PHOADBJGFBE_OFFSET UNITYSDK_OFFSET(0x18797DB0)
#define DFPAJFJKJJL__CTOR_OFFSET UNITYSDK_OFFSET(0x187982F0)

inline static constexpr unsigned int DFPAJFJKJJL_TypeDefinitionIndex = 15866;

class DFPAJFJKJJL : public ::System::Object
{
public:
	::System::Action* PLDOELOOFLL; // 0x10
	::FEKLIDDJGIK DHDJDGFNBOA; // 0x18
	::System::Collections::Generic::Dictionary_2<::System::Int32, ::System::Int32>* FLBOKGKPECD; // 0x30
	::System::Collections::Generic::HashSet_1<::System::Int32>* LHINHLCKHNE; // 0x38
	::Il2CppArray<::KAENJJFIHPO*>* OJMBOGGMIKO; // 0x40
	::System::Boolean DLGKLGKOMHK; // 0x48
	::System::Byte _padding0[0x3];
	::System::Int32 IJDGGCANOFI; // 0x4C

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + DFPAJFJKJJL__CTOR_OFFSET))(this);
	}

	::System::Boolean OFHECOHPAKG()
	{
		return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + DFPAJFJKJJL_OFHECOHPAKG_OFFSET))(this);
	}

	::System::Void LNFENFDLMIG()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + DFPAJFJKJJL_LNFENFDLMIG_OFFSET))(this);
	}

	::System::Void FPMKEGMLNHG(::System::Action* EJGDHCIBCJH)
	{
		return ((::System::Void(*)(::PVOID, ::System::Action*))((::PBYTE)hIl2Cpp + DFPAJFJKJJL_FPMKEGMLNHG_OFFSET))(this, EJGDHCIBCJH);
	}

	::System::Void BMNMLAIJJGF(::KECPLIFGOCJ GFCJHNHLFEF)
	{
		return ((::System::Void(*)(::PVOID, ::KECPLIFGOCJ))((::PBYTE)hIl2Cpp + DFPAJFJKJJL_BMNMLAIJJGF_OFFSET))(this, GFCJHNHLFEF);
	}

	::System::Void PHOADBJGFBE()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + DFPAJFJKJJL_PHOADBJGFBE_OFFSET))(this);
	}

	::System::Void BHLAEBMEOLO()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + DFPAJFJKJJL_BHLAEBMEOLO_OFFSET))(this);
	}

	::System::Void Finalize()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + DFPAJFJKJJL_FINALIZE_OFFSET))(this);
	}

	::System::Void CHLEALKAOJO()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + DFPAJFJKJJL_CHLEALKAOJO_OFFSET))(this);
	}

	::System::Void KMIMGEDAMCE(::Il2CppArray<::System::Byte>* LJBPECKCCEA)
	{
		return ((::System::Void(*)(::PVOID, ::Il2CppArray<::System::Byte>*))((::PBYTE)hIl2Cpp + DFPAJFJKJJL_KMIMGEDAMCE_OFFSET))(this, LJBPECKCCEA);
	}

	::System::Void NAMKJOJBAOA()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + DFPAJFJKJJL_NAMKJOJBAOA_OFFSET))(this);
	}

	::KAENJJFIHPO* IFDPKDOFOJD(::System::Int32 MGMDLMBEDJF)
	{
		return ((::KAENJJFIHPO*(*)(::PVOID, ::System::Int32))((::PBYTE)hIl2Cpp + DFPAJFJKJJL_IFDPKDOFOJD_OFFSET))(this, MGMDLMBEDJF);
	}
};
