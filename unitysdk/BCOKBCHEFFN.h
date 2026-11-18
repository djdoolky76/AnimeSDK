#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/KECPLIFGOCJ.h"
#include "unitysdk/NENOKDMMICL.h"
#include "unitysdk/System/Object.h"

class GLFMMJBOLFB;
namespace System { class Action; }
namespace System::Collections::Generic { template <typename T1, typename T2> class Dictionary_2; }
namespace System::Collections::Generic { template <typename T> class HashSet_1; }

#define BCOKBCHEFFN_BHLAEBMEOLO_OFFSET UNITYSDK_OFFSET(0x1A16A490)
#define BCOKBCHEFFN_BMNMLAIJJGF_OFFSET UNITYSDK_OFFSET(0x1A16A250)
#define BCOKBCHEFFN_CHLEALKAOJO_OFFSET UNITYSDK_OFFSET(0x1A16A3D0)
#define BCOKBCHEFFN_FINALIZE_OFFSET UNITYSDK_OFFSET(0x1A16A570)
#define BCOKBCHEFFN_FPMKEGMLNHG_OFFSET UNITYSDK_OFFSET(0x1A16A260)
#define BCOKBCHEFFN_IFDPKDOFOJD_OFFSET UNITYSDK_OFFSET(0x1A16A8E0)
#define BCOKBCHEFFN_KMIMGEDAMCE_OFFSET UNITYSDK_OFFSET(0x1A16A710)
#define BCOKBCHEFFN_LNFENFDLMIG_OFFSET UNITYSDK_OFFSET(0x1A169EA0)
#define BCOKBCHEFFN_NAMKJOJBAOA_OFFSET UNITYSDK_OFFSET(0x1A16A6F0)
#define BCOKBCHEFFN_OFHECOHPAKG_OFFSET UNITYSDK_OFFSET(0x1A169E80)
#define BCOKBCHEFFN_PHOADBJGFBE_OFFSET UNITYSDK_OFFSET(0x1A16A160)
#define BCOKBCHEFFN__CTOR_OFFSET UNITYSDK_OFFSET(0x1A16A6A0)

inline static constexpr unsigned int BCOKBCHEFFN_TypeDefinitionIndex = 16279;

class BCOKBCHEFFN : public ::System::Object
{
public:
	::System::Collections::Generic::Dictionary_2<::System::Int32, ::System::Int32>* FLBOKGKPECD; // 0x10
	::System::Action* PLDOELOOFLL; // 0x18
	::NENOKDMMICL DHDJDGFNBOA; // 0x20
	::System::Collections::Generic::HashSet_1<::System::Int32>* LHINHLCKHNE; // 0x38
	::Il2CppArray<::GLFMMJBOLFB*>* OJMBOGGMIKO; // 0x40
	::System::Boolean DLGKLGKOMHK; // 0x48
	::System::Byte _padding0[0x3];
	::System::Int32 IJDGGCANOFI; // 0x4C

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + BCOKBCHEFFN__CTOR_OFFSET))(this);
	}

	::System::Boolean OFHECOHPAKG()
	{
		return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + BCOKBCHEFFN_OFHECOHPAKG_OFFSET))(this);
	}

	::System::Void LNFENFDLMIG()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + BCOKBCHEFFN_LNFENFDLMIG_OFFSET))(this);
	}

	::System::Void FPMKEGMLNHG(::System::Action* EJGDHCIBCJH)
	{
		return ((::System::Void(*)(::PVOID, ::System::Action*))((::PBYTE)hIl2Cpp + BCOKBCHEFFN_FPMKEGMLNHG_OFFSET))(this, EJGDHCIBCJH);
	}

	::System::Void BMNMLAIJJGF(::KECPLIFGOCJ GFCJHNHLFEF)
	{
		return ((::System::Void(*)(::PVOID, ::KECPLIFGOCJ))((::PBYTE)hIl2Cpp + BCOKBCHEFFN_BMNMLAIJJGF_OFFSET))(this, GFCJHNHLFEF);
	}

	::System::Void PHOADBJGFBE()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + BCOKBCHEFFN_PHOADBJGFBE_OFFSET))(this);
	}

	::System::Void BHLAEBMEOLO()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + BCOKBCHEFFN_BHLAEBMEOLO_OFFSET))(this);
	}

	::System::Void Finalize()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + BCOKBCHEFFN_FINALIZE_OFFSET))(this);
	}

	::System::Void NAMKJOJBAOA()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + BCOKBCHEFFN_NAMKJOJBAOA_OFFSET))(this);
	}

	::System::Void KMIMGEDAMCE(::Il2CppArray<::System::Byte>* LJBPECKCCEA)
	{
		return ((::System::Void(*)(::PVOID, ::Il2CppArray<::System::Byte>*))((::PBYTE)hIl2Cpp + BCOKBCHEFFN_KMIMGEDAMCE_OFFSET))(this, LJBPECKCCEA);
	}

	::GLFMMJBOLFB* IFDPKDOFOJD(::System::Int32 MGMDLMBEDJF)
	{
		return ((::GLFMMJBOLFB*(*)(::PVOID, ::System::Int32))((::PBYTE)hIl2Cpp + BCOKBCHEFFN_IFDPKDOFOJD_OFFSET))(this, MGMDLMBEDJF);
	}

	::System::Void CHLEALKAOJO()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + BCOKBCHEFFN_CHLEALKAOJO_OFFSET))(this);
	}
};
