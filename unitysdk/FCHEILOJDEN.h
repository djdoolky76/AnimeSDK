#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/GNHFFAKIDJH.h"
#include "unitysdk/KECPLIFGOCJ.h"
#include "unitysdk/System/Object.h"

class DAJJFENFJNN;
namespace System { class Action; }
namespace System::Collections::Generic { template <typename T1, typename T2> class Dictionary_2; }
namespace System::Collections::Generic { template <typename T> class HashSet_1; }

#define FCHEILOJDEN_BHLAEBMEOLO_OFFSET UNITYSDK_OFFSET(0x19AEDEB0)
#define FCHEILOJDEN_BMNMLAIJJGF_OFFSET UNITYSDK_OFFSET(0x19AEDC70)
#define FCHEILOJDEN_CHLEALKAOJO_OFFSET UNITYSDK_OFFSET(0x19AEDDF0)
#define FCHEILOJDEN_FINALIZE_OFFSET UNITYSDK_OFFSET(0x19AEDF90)
#define FCHEILOJDEN_FPMKEGMLNHG_OFFSET UNITYSDK_OFFSET(0x19AEDC80)
#define FCHEILOJDEN_IFDPKDOFOJD_OFFSET UNITYSDK_OFFSET(0x19AEE2E0)
#define FCHEILOJDEN_KMIMGEDAMCE_OFFSET UNITYSDK_OFFSET(0x19AEE110)
#define FCHEILOJDEN_LNFENFDLMIG_OFFSET UNITYSDK_OFFSET(0x19AED8C0)
#define FCHEILOJDEN_NAMKJOJBAOA_OFFSET UNITYSDK_OFFSET(0x19AEE510)
#define FCHEILOJDEN_OFHECOHPAKG_OFFSET UNITYSDK_OFFSET(0x19AED8A0)
#define FCHEILOJDEN_PHOADBJGFBE_OFFSET UNITYSDK_OFFSET(0x19AEDB80)
#define FCHEILOJDEN__CTOR_OFFSET UNITYSDK_OFFSET(0x19AEE0C0)

inline static constexpr unsigned int FCHEILOJDEN_TypeDefinitionIndex = 14587;

class FCHEILOJDEN : public ::System::Object
{
public:
	::GNHFFAKIDJH DHDJDGFNBOA; // 0x10
	::System::Collections::Generic::Dictionary_2<::System::Int32, ::System::Int32>* FLBOKGKPECD; // 0x28
	::System::Collections::Generic::HashSet_1<::System::Int32>* LHINHLCKHNE; // 0x30
	::Il2CppArray<::DAJJFENFJNN*>* OJMBOGGMIKO; // 0x38
	::System::Action* PLDOELOOFLL; // 0x40
	::System::Int32 IJDGGCANOFI; // 0x48
	::System::Boolean DLGKLGKOMHK; // 0x4C

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + FCHEILOJDEN__CTOR_OFFSET))(this);
	}

	::System::Boolean OFHECOHPAKG()
	{
		return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + FCHEILOJDEN_OFHECOHPAKG_OFFSET))(this);
	}

	::System::Void LNFENFDLMIG()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + FCHEILOJDEN_LNFENFDLMIG_OFFSET))(this);
	}

	::System::Void FPMKEGMLNHG(::System::Action* EJGDHCIBCJH)
	{
		return ((::System::Void(*)(::PVOID, ::System::Action*))((::PBYTE)hIl2Cpp + FCHEILOJDEN_FPMKEGMLNHG_OFFSET))(this, EJGDHCIBCJH);
	}

	::System::Void BMNMLAIJJGF(::KECPLIFGOCJ GFCJHNHLFEF)
	{
		return ((::System::Void(*)(::PVOID, ::KECPLIFGOCJ))((::PBYTE)hIl2Cpp + FCHEILOJDEN_BMNMLAIJJGF_OFFSET))(this, GFCJHNHLFEF);
	}

	::System::Void PHOADBJGFBE()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + FCHEILOJDEN_PHOADBJGFBE_OFFSET))(this);
	}

	::System::Void BHLAEBMEOLO()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + FCHEILOJDEN_BHLAEBMEOLO_OFFSET))(this);
	}

	::System::Void Finalize()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + FCHEILOJDEN_FINALIZE_OFFSET))(this);
	}

	::System::Void KMIMGEDAMCE(::Il2CppArray<::System::Byte>* LJBPECKCCEA)
	{
		return ((::System::Void(*)(::PVOID, ::Il2CppArray<::System::Byte>*))((::PBYTE)hIl2Cpp + FCHEILOJDEN_KMIMGEDAMCE_OFFSET))(this, LJBPECKCCEA);
	}

	::System::Void CHLEALKAOJO()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + FCHEILOJDEN_CHLEALKAOJO_OFFSET))(this);
	}

	::DAJJFENFJNN* IFDPKDOFOJD(::System::Int32 MGMDLMBEDJF)
	{
		return ((::DAJJFENFJNN*(*)(::PVOID, ::System::Int32))((::PBYTE)hIl2Cpp + FCHEILOJDEN_IFDPKDOFOJD_OFFSET))(this, MGMDLMBEDJF);
	}

	::System::Void NAMKJOJBAOA()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + FCHEILOJDEN_NAMKJOJBAOA_OFFSET))(this);
	}
};
