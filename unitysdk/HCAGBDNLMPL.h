#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/KECPLIFGOCJ.h"
#include "unitysdk/NNIPFPAKKOL.h"
#include "unitysdk/System/Object.h"

class CFLJMMGJIBN;
namespace System { class Action; }
namespace System::Collections::Generic { template <typename T1, typename T2> class Dictionary_2; }
namespace System::Collections::Generic { template <typename T> class HashSet_1; }

#define HCAGBDNLMPL_BHLAEBMEOLO_OFFSET UNITYSDK_OFFSET(0x1B7C1570)
#define HCAGBDNLMPL_BMNMLAIJJGF_OFFSET UNITYSDK_OFFSET(0x1B7C12F0)
#define HCAGBDNLMPL_CHLEALKAOJO_OFFSET UNITYSDK_OFFSET(0x1B7C1300)
#define HCAGBDNLMPL_FINALIZE_OFFSET UNITYSDK_OFFSET(0x1B7C13C0)
#define HCAGBDNLMPL_FPMKEGMLNHG_OFFSET UNITYSDK_OFFSET(0x1B7C14F0)
#define HCAGBDNLMPL_IFDPKDOFOJD_OFFSET UNITYSDK_OFFSET(0x1B7C1950)
#define HCAGBDNLMPL_KMIMGEDAMCE_OFFSET UNITYSDK_OFFSET(0x1B7C16A0)
#define HCAGBDNLMPL_LNFENFDLMIG_OFFSET UNITYSDK_OFFSET(0x1B7C0F40)
#define HCAGBDNLMPL_NAMKJOJBAOA_OFFSET UNITYSDK_OFFSET(0x1B7C1B80)
#define HCAGBDNLMPL_OFHECOHPAKG_OFFSET UNITYSDK_OFFSET(0x1B7C0F20)
#define HCAGBDNLMPL_PHOADBJGFBE_OFFSET UNITYSDK_OFFSET(0x1B7C1200)
#define HCAGBDNLMPL__CTOR_OFFSET UNITYSDK_OFFSET(0x1B7C1650)

inline static constexpr unsigned int HCAGBDNLMPL_TypeDefinitionIndex = 14970;

class HCAGBDNLMPL : public ::System::Object
{
public:
	::System::Collections::Generic::Dictionary_2<::System::Int32, ::System::Int32>* FLBOKGKPECD; // 0x10
	::NNIPFPAKKOL DHDJDGFNBOA; // 0x18
	::Il2CppArray<::CFLJMMGJIBN*>* OJMBOGGMIKO; // 0x30
	::System::Action* PLDOELOOFLL; // 0x38
	::System::Collections::Generic::HashSet_1<::System::Int32>* LHINHLCKHNE; // 0x40
	::System::Boolean DLGKLGKOMHK; // 0x48
	::System::Byte _padding0[0x3];
	::System::Int32 IJDGGCANOFI; // 0x4C

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + HCAGBDNLMPL__CTOR_OFFSET))(this);
	}

	::System::Boolean OFHECOHPAKG()
	{
		return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + HCAGBDNLMPL_OFHECOHPAKG_OFFSET))(this);
	}

	::System::Void LNFENFDLMIG()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + HCAGBDNLMPL_LNFENFDLMIG_OFFSET))(this);
	}

	::System::Void PHOADBJGFBE()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + HCAGBDNLMPL_PHOADBJGFBE_OFFSET))(this);
	}

	::System::Void Finalize()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + HCAGBDNLMPL_FINALIZE_OFFSET))(this);
	}

	::System::Void FPMKEGMLNHG(::System::Action* EJGDHCIBCJH)
	{
		return ((::System::Void(*)(::PVOID, ::System::Action*))((::PBYTE)hIl2Cpp + HCAGBDNLMPL_FPMKEGMLNHG_OFFSET))(this, EJGDHCIBCJH);
	}

	::System::Void BMNMLAIJJGF(::KECPLIFGOCJ GFCJHNHLFEF)
	{
		return ((::System::Void(*)(::PVOID, ::KECPLIFGOCJ))((::PBYTE)hIl2Cpp + HCAGBDNLMPL_BMNMLAIJJGF_OFFSET))(this, GFCJHNHLFEF);
	}

	::System::Void BHLAEBMEOLO()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + HCAGBDNLMPL_BHLAEBMEOLO_OFFSET))(this);
	}

	::System::Void KMIMGEDAMCE(::Il2CppArray<::System::Byte>* LJBPECKCCEA)
	{
		return ((::System::Void(*)(::PVOID, ::Il2CppArray<::System::Byte>*))((::PBYTE)hIl2Cpp + HCAGBDNLMPL_KMIMGEDAMCE_OFFSET))(this, LJBPECKCCEA);
	}

	::CFLJMMGJIBN* IFDPKDOFOJD(::System::Int32 MGMDLMBEDJF)
	{
		return ((::CFLJMMGJIBN*(*)(::PVOID, ::System::Int32))((::PBYTE)hIl2Cpp + HCAGBDNLMPL_IFDPKDOFOJD_OFFSET))(this, MGMDLMBEDJF);
	}

	::System::Void NAMKJOJBAOA()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + HCAGBDNLMPL_NAMKJOJBAOA_OFFSET))(this);
	}

	::System::Void CHLEALKAOJO()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + HCAGBDNLMPL_CHLEALKAOJO_OFFSET))(this);
	}
};
