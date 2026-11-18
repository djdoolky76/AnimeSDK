#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/EIEIPJAECCK.h"
#include "unitysdk/KECPLIFGOCJ.h"
#include "unitysdk/System/Object.h"

class FAMDNMHFEKC;
namespace System { class Action; }
namespace System::Collections::Generic { template <typename T1, typename T2> class Dictionary_2; }
namespace System::Collections::Generic { template <typename T> class HashSet_1; }

#define MMMNAGKLLFC_BHLAEBMEOLO_OFFSET UNITYSDK_OFFSET(0x1AD77FD0)
#define MMMNAGKLLFC_BMNMLAIJJGF_OFFSET UNITYSDK_OFFSET(0x1AD77DA0)
#define MMMNAGKLLFC_CHLEALKAOJO_OFFSET UNITYSDK_OFFSET(0x1AD77F10)
#define MMMNAGKLLFC_FINALIZE_OFFSET UNITYSDK_OFFSET(0x1AD780B0)
#define MMMNAGKLLFC_FPMKEGMLNHG_OFFSET UNITYSDK_OFFSET(0x1AD77DB0)
#define MMMNAGKLLFC_IFDPKDOFOJD_OFFSET UNITYSDK_OFFSET(0x1AD78420)
#define MMMNAGKLLFC_KMIMGEDAMCE_OFFSET UNITYSDK_OFFSET(0x1AD78250)
#define MMMNAGKLLFC_LNFENFDLMIG_OFFSET UNITYSDK_OFFSET(0x1AD77A00)
#define MMMNAGKLLFC_NAMKJOJBAOA_OFFSET UNITYSDK_OFFSET(0x1AD78230)
#define MMMNAGKLLFC_OFHECOHPAKG_OFFSET UNITYSDK_OFFSET(0x1AD779E0)
#define MMMNAGKLLFC_PHOADBJGFBE_OFFSET UNITYSDK_OFFSET(0x1AD77CC0)
#define MMMNAGKLLFC__CTOR_OFFSET UNITYSDK_OFFSET(0x1AD781E0)

inline static constexpr unsigned int MMMNAGKLLFC_TypeDefinitionIndex = 9343;

class MMMNAGKLLFC : public ::System::Object
{
public:
	::EIEIPJAECCK DHDJDGFNBOA; // 0x10
	::System::Collections::Generic::HashSet_1<::System::Int32>* LHINHLCKHNE; // 0x28
	::System::Action* PLDOELOOFLL; // 0x30
	::Il2CppArray<::FAMDNMHFEKC*>* OJMBOGGMIKO; // 0x38
	::System::Collections::Generic::Dictionary_2<::System::Int32, ::System::Int32>* FLBOKGKPECD; // 0x40
	::System::Boolean DLGKLGKOMHK; // 0x48
	::System::Byte _padding0[0x3];
	::System::Int32 IJDGGCANOFI; // 0x4C

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MMMNAGKLLFC__CTOR_OFFSET))(this);
	}

	::System::Boolean OFHECOHPAKG()
	{
		return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + MMMNAGKLLFC_OFHECOHPAKG_OFFSET))(this);
	}

	::System::Void LNFENFDLMIG()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MMMNAGKLLFC_LNFENFDLMIG_OFFSET))(this);
	}

	::System::Void FPMKEGMLNHG(::System::Action* EJGDHCIBCJH)
	{
		return ((::System::Void(*)(::PVOID, ::System::Action*))((::PBYTE)hIl2Cpp + MMMNAGKLLFC_FPMKEGMLNHG_OFFSET))(this, EJGDHCIBCJH);
	}

	::System::Void BMNMLAIJJGF(::KECPLIFGOCJ GFCJHNHLFEF)
	{
		return ((::System::Void(*)(::PVOID, ::KECPLIFGOCJ))((::PBYTE)hIl2Cpp + MMMNAGKLLFC_BMNMLAIJJGF_OFFSET))(this, GFCJHNHLFEF);
	}

	::System::Void PHOADBJGFBE()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MMMNAGKLLFC_PHOADBJGFBE_OFFSET))(this);
	}

	::System::Void BHLAEBMEOLO()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MMMNAGKLLFC_BHLAEBMEOLO_OFFSET))(this);
	}

	::System::Void Finalize()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MMMNAGKLLFC_FINALIZE_OFFSET))(this);
	}

	::System::Void NAMKJOJBAOA()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MMMNAGKLLFC_NAMKJOJBAOA_OFFSET))(this);
	}

	::System::Void CHLEALKAOJO()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MMMNAGKLLFC_CHLEALKAOJO_OFFSET))(this);
	}

	::System::Void KMIMGEDAMCE(::Il2CppArray<::System::Byte>* LJBPECKCCEA)
	{
		return ((::System::Void(*)(::PVOID, ::Il2CppArray<::System::Byte>*))((::PBYTE)hIl2Cpp + MMMNAGKLLFC_KMIMGEDAMCE_OFFSET))(this, LJBPECKCCEA);
	}

	::FAMDNMHFEKC* IFDPKDOFOJD(::System::Int32 MGMDLMBEDJF)
	{
		return ((::FAMDNMHFEKC*(*)(::PVOID, ::System::Int32))((::PBYTE)hIl2Cpp + MMMNAGKLLFC_IFDPKDOFOJD_OFFSET))(this, MGMDLMBEDJF);
	}
};
