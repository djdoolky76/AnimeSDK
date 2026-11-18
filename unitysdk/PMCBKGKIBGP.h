#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/KECPLIFGOCJ.h"
#include "unitysdk/PABAIEBHLFA.h"
#include "unitysdk/System/Object.h"

class OMLJEEKLELP;
namespace System { class Action; }
namespace System::Collections::Generic { template <typename T1, typename T2> class Dictionary_2; }
namespace System::Collections::Generic { template <typename T> class HashSet_1; }

#define PMCBKGKIBGP_BHLAEBMEOLO_OFFSET UNITYSDK_OFFSET(0x17FEE350)
#define PMCBKGKIBGP_BMNMLAIJJGF_OFFSET UNITYSDK_OFFSET(0x17FEE120)
#define PMCBKGKIBGP_CHLEALKAOJO_OFFSET UNITYSDK_OFFSET(0x17FEE290)
#define PMCBKGKIBGP_FINALIZE_OFFSET UNITYSDK_OFFSET(0x17FEE430)
#define PMCBKGKIBGP_FPMKEGMLNHG_OFFSET UNITYSDK_OFFSET(0x17FEE130)
#define PMCBKGKIBGP_IFDPKDOFOJD_OFFSET UNITYSDK_OFFSET(0x17FEE7A0)
#define PMCBKGKIBGP_KMIMGEDAMCE_OFFSET UNITYSDK_OFFSET(0x17FEE5B0)
#define PMCBKGKIBGP_LNFENFDLMIG_OFFSET UNITYSDK_OFFSET(0x17FEDD80)
#define PMCBKGKIBGP_NAMKJOJBAOA_OFFSET UNITYSDK_OFFSET(0x17FEE780)
#define PMCBKGKIBGP_OFHECOHPAKG_OFFSET UNITYSDK_OFFSET(0x17FEDD60)
#define PMCBKGKIBGP_PHOADBJGFBE_OFFSET UNITYSDK_OFFSET(0x17FEE040)
#define PMCBKGKIBGP__CTOR_OFFSET UNITYSDK_OFFSET(0x17FEE560)

inline static constexpr unsigned int PMCBKGKIBGP_TypeDefinitionIndex = 12957;

class PMCBKGKIBGP : public ::System::Object
{
public:
	::System::Collections::Generic::Dictionary_2<::System::Int32, ::System::Int32>* FLBOKGKPECD; // 0x10
	::Il2CppArray<::OMLJEEKLELP*>* OJMBOGGMIKO; // 0x18
	::System::Action* PLDOELOOFLL; // 0x20
	::PABAIEBHLFA DHDJDGFNBOA; // 0x28
	::System::Collections::Generic::HashSet_1<::System::Int32>* LHINHLCKHNE; // 0x40
	::System::Boolean DLGKLGKOMHK; // 0x48
	::System::Byte _padding0[0x3];
	::System::Int32 IJDGGCANOFI; // 0x4C

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + PMCBKGKIBGP__CTOR_OFFSET))(this);
	}

	::System::Boolean OFHECOHPAKG()
	{
		return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + PMCBKGKIBGP_OFHECOHPAKG_OFFSET))(this);
	}

	::System::Void LNFENFDLMIG()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + PMCBKGKIBGP_LNFENFDLMIG_OFFSET))(this);
	}

	::System::Void FPMKEGMLNHG(::System::Action* EJGDHCIBCJH)
	{
		return ((::System::Void(*)(::PVOID, ::System::Action*))((::PBYTE)hIl2Cpp + PMCBKGKIBGP_FPMKEGMLNHG_OFFSET))(this, EJGDHCIBCJH);
	}

	::System::Void BMNMLAIJJGF(::KECPLIFGOCJ GFCJHNHLFEF)
	{
		return ((::System::Void(*)(::PVOID, ::KECPLIFGOCJ))((::PBYTE)hIl2Cpp + PMCBKGKIBGP_BMNMLAIJJGF_OFFSET))(this, GFCJHNHLFEF);
	}

	::System::Void PHOADBJGFBE()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + PMCBKGKIBGP_PHOADBJGFBE_OFFSET))(this);
	}

	::System::Void BHLAEBMEOLO()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + PMCBKGKIBGP_BHLAEBMEOLO_OFFSET))(this);
	}

	::System::Void Finalize()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + PMCBKGKIBGP_FINALIZE_OFFSET))(this);
	}

	::System::Void KMIMGEDAMCE(::Il2CppArray<::System::Byte>* LJBPECKCCEA)
	{
		return ((::System::Void(*)(::PVOID, ::Il2CppArray<::System::Byte>*))((::PBYTE)hIl2Cpp + PMCBKGKIBGP_KMIMGEDAMCE_OFFSET))(this, LJBPECKCCEA);
	}

	::System::Void NAMKJOJBAOA()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + PMCBKGKIBGP_NAMKJOJBAOA_OFFSET))(this);
	}

	::OMLJEEKLELP* IFDPKDOFOJD(::System::Int32 MGMDLMBEDJF)
	{
		return ((::OMLJEEKLELP*(*)(::PVOID, ::System::Int32))((::PBYTE)hIl2Cpp + PMCBKGKIBGP_IFDPKDOFOJD_OFFSET))(this, MGMDLMBEDJF);
	}

	::System::Void CHLEALKAOJO()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + PMCBKGKIBGP_CHLEALKAOJO_OFFSET))(this);
	}
};
