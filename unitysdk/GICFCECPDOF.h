#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/ILBDOONOKJF.h"
#include "unitysdk/KECPLIFGOCJ.h"
#include "unitysdk/System/Object.h"

class JCJMGACCIBO;
namespace System { class Action; }
namespace System::Collections::Generic { template <typename T1, typename T2> class Dictionary_2; }

#define GICFCECPDOF_BHLAEBMEOLO_OFFSET UNITYSDK_OFFSET(0x19334A80)
#define GICFCECPDOF_BMNMLAIJJGF_OFFSET UNITYSDK_OFFSET(0x19334840)
#define GICFCECPDOF_CHLEALKAOJO_OFFSET UNITYSDK_OFFSET(0x193349C0)
#define GICFCECPDOF_FINALIZE_OFFSET UNITYSDK_OFFSET(0x19334B60)
#define GICFCECPDOF_FPMKEGMLNHG_OFFSET UNITYSDK_OFFSET(0x19334850)
#define GICFCECPDOF_IFDPKDOFOJD_OFFSET UNITYSDK_OFFSET(0x19334E90)
#define GICFCECPDOF_KMIMGEDAMCE_OFFSET UNITYSDK_OFFSET(0x19334CA0)
#define GICFCECPDOF_LNFENFDLMIG_OFFSET UNITYSDK_OFFSET(0x19334490)
#define GICFCECPDOF_NAMKJOJBAOA_OFFSET UNITYSDK_OFFSET(0x19334E70)
#define GICFCECPDOF_OFHECOHPAKG_OFFSET UNITYSDK_OFFSET(0x19334470)
#define GICFCECPDOF_PHOADBJGFBE_OFFSET UNITYSDK_OFFSET(0x19334750)
#define GICFCECPDOF__CTOR_OFFSET UNITYSDK_OFFSET(0x19334C90)

inline static constexpr unsigned int GICFCECPDOF_TypeDefinitionIndex = 17343;

class GICFCECPDOF : public ::System::Object
{
public:
	::System::Collections::Generic::Dictionary_2<::System::Int32, ::System::Int32>* FLBOKGKPECD; // 0x10
	::ILBDOONOKJF DHDJDGFNBOA; // 0x18
	::Il2CppArray<::JCJMGACCIBO*>* OJMBOGGMIKO; // 0x30
	::System::Action* PLDOELOOFLL; // 0x38
	::System::Int32 IJDGGCANOFI; // 0x40
	::System::Boolean DLGKLGKOMHK; // 0x44

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + GICFCECPDOF__CTOR_OFFSET))(this);
	}

	::System::Boolean OFHECOHPAKG()
	{
		return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + GICFCECPDOF_OFHECOHPAKG_OFFSET))(this);
	}

	::System::Void LNFENFDLMIG()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + GICFCECPDOF_LNFENFDLMIG_OFFSET))(this);
	}

	::System::Void FPMKEGMLNHG(::System::Action* EJGDHCIBCJH)
	{
		return ((::System::Void(*)(::PVOID, ::System::Action*))((::PBYTE)hIl2Cpp + GICFCECPDOF_FPMKEGMLNHG_OFFSET))(this, EJGDHCIBCJH);
	}

	::System::Void BMNMLAIJJGF(::KECPLIFGOCJ GFCJHNHLFEF)
	{
		return ((::System::Void(*)(::PVOID, ::KECPLIFGOCJ))((::PBYTE)hIl2Cpp + GICFCECPDOF_BMNMLAIJJGF_OFFSET))(this, GFCJHNHLFEF);
	}

	::System::Void PHOADBJGFBE()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + GICFCECPDOF_PHOADBJGFBE_OFFSET))(this);
	}

	::System::Void BHLAEBMEOLO()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + GICFCECPDOF_BHLAEBMEOLO_OFFSET))(this);
	}

	::System::Void Finalize()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + GICFCECPDOF_FINALIZE_OFFSET))(this);
	}

	::System::Void CHLEALKAOJO()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + GICFCECPDOF_CHLEALKAOJO_OFFSET))(this);
	}

	::System::Void KMIMGEDAMCE(::Il2CppArray<::System::Byte>* LJBPECKCCEA)
	{
		return ((::System::Void(*)(::PVOID, ::Il2CppArray<::System::Byte>*))((::PBYTE)hIl2Cpp + GICFCECPDOF_KMIMGEDAMCE_OFFSET))(this, LJBPECKCCEA);
	}

	::System::Void NAMKJOJBAOA()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + GICFCECPDOF_NAMKJOJBAOA_OFFSET))(this);
	}

	::JCJMGACCIBO* IFDPKDOFOJD(::System::Int32 MGMDLMBEDJF)
	{
		return ((::JCJMGACCIBO*(*)(::PVOID, ::System::Int32))((::PBYTE)hIl2Cpp + GICFCECPDOF_IFDPKDOFOJD_OFFSET))(this, MGMDLMBEDJF);
	}
};
