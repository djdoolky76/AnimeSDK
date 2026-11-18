#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/AJEILDJMGDC.h"
#include "unitysdk/KECPLIFGOCJ.h"
#include "unitysdk/System/Object.h"

class CMKOKLEELJH;
namespace System { class Action; }
namespace System::Collections::Generic { template <typename T1, typename T2> class Dictionary_2; }
namespace System::Collections::Generic { template <typename T> class HashSet_1; }

#define GDHIEBFCJFD_BHLAEBMEOLO_OFFSET UNITYSDK_OFFSET(0x1B7B6AB0)
#define GDHIEBFCJFD_BMNMLAIJJGF_OFFSET UNITYSDK_OFFSET(0x1B7B6870)
#define GDHIEBFCJFD_CHLEALKAOJO_OFFSET UNITYSDK_OFFSET(0x1B7B69F0)
#define GDHIEBFCJFD_FINALIZE_OFFSET UNITYSDK_OFFSET(0x1B7B6B90)
#define GDHIEBFCJFD_FPMKEGMLNHG_OFFSET UNITYSDK_OFFSET(0x1B7B6880)
#define GDHIEBFCJFD_IFDPKDOFOJD_OFFSET UNITYSDK_OFFSET(0x1B7B6EE0)
#define GDHIEBFCJFD_KMIMGEDAMCE_OFFSET UNITYSDK_OFFSET(0x1B7B6D10)
#define GDHIEBFCJFD_LNFENFDLMIG_OFFSET UNITYSDK_OFFSET(0x1B7B64C0)
#define GDHIEBFCJFD_NAMKJOJBAOA_OFFSET UNITYSDK_OFFSET(0x1B7B7110)
#define GDHIEBFCJFD_OFHECOHPAKG_OFFSET UNITYSDK_OFFSET(0x1B7B64A0)
#define GDHIEBFCJFD_PHOADBJGFBE_OFFSET UNITYSDK_OFFSET(0x1B7B6780)
#define GDHIEBFCJFD__CTOR_OFFSET UNITYSDK_OFFSET(0x1B7B6CC0)

inline static constexpr unsigned int GDHIEBFCJFD_TypeDefinitionIndex = 11299;

class GDHIEBFCJFD : public ::System::Object
{
public:
	::AJEILDJMGDC DHDJDGFNBOA; // 0x10
	::Il2CppArray<::CMKOKLEELJH*>* OJMBOGGMIKO; // 0x28
	::System::Collections::Generic::HashSet_1<::System::Int32>* LHINHLCKHNE; // 0x30
	::System::Action* PLDOELOOFLL; // 0x38
	::System::Collections::Generic::Dictionary_2<::System::Int32, ::System::Int32>* FLBOKGKPECD; // 0x40
	::System::Boolean DLGKLGKOMHK; // 0x48
	::System::Byte _padding0[0x3];
	::System::Int32 IJDGGCANOFI; // 0x4C

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + GDHIEBFCJFD__CTOR_OFFSET))(this);
	}

	::System::Boolean OFHECOHPAKG()
	{
		return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + GDHIEBFCJFD_OFHECOHPAKG_OFFSET))(this);
	}

	::System::Void LNFENFDLMIG()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + GDHIEBFCJFD_LNFENFDLMIG_OFFSET))(this);
	}

	::System::Void FPMKEGMLNHG(::System::Action* EJGDHCIBCJH)
	{
		return ((::System::Void(*)(::PVOID, ::System::Action*))((::PBYTE)hIl2Cpp + GDHIEBFCJFD_FPMKEGMLNHG_OFFSET))(this, EJGDHCIBCJH);
	}

	::System::Void BMNMLAIJJGF(::KECPLIFGOCJ GFCJHNHLFEF)
	{
		return ((::System::Void(*)(::PVOID, ::KECPLIFGOCJ))((::PBYTE)hIl2Cpp + GDHIEBFCJFD_BMNMLAIJJGF_OFFSET))(this, GFCJHNHLFEF);
	}

	::System::Void PHOADBJGFBE()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + GDHIEBFCJFD_PHOADBJGFBE_OFFSET))(this);
	}

	::System::Void BHLAEBMEOLO()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + GDHIEBFCJFD_BHLAEBMEOLO_OFFSET))(this);
	}

	::System::Void Finalize()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + GDHIEBFCJFD_FINALIZE_OFFSET))(this);
	}

	::System::Void KMIMGEDAMCE(::Il2CppArray<::System::Byte>* LJBPECKCCEA)
	{
		return ((::System::Void(*)(::PVOID, ::Il2CppArray<::System::Byte>*))((::PBYTE)hIl2Cpp + GDHIEBFCJFD_KMIMGEDAMCE_OFFSET))(this, LJBPECKCCEA);
	}

	::CMKOKLEELJH* IFDPKDOFOJD(::System::Int32 MGMDLMBEDJF)
	{
		return ((::CMKOKLEELJH*(*)(::PVOID, ::System::Int32))((::PBYTE)hIl2Cpp + GDHIEBFCJFD_IFDPKDOFOJD_OFFSET))(this, MGMDLMBEDJF);
	}

	::System::Void CHLEALKAOJO()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + GDHIEBFCJFD_CHLEALKAOJO_OFFSET))(this);
	}

	::System::Void NAMKJOJBAOA()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + GDHIEBFCJFD_NAMKJOJBAOA_OFFSET))(this);
	}
};
