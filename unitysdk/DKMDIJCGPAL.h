#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/DEJLENHBCIF.h"
#include "unitysdk/KECPLIFGOCJ.h"
#include "unitysdk/System/Object.h"

class KDGCMJOMEKL;
namespace System { class Action; }
namespace System::Collections::Generic { template <typename T1, typename T2> class Dictionary_2; }
namespace System::Collections::Generic { template <typename T> class HashSet_1; }

#define DKMDIJCGPAL_BHLAEBMEOLO_OFFSET UNITYSDK_OFFSET(0x15753050)
#define DKMDIJCGPAL_BMNMLAIJJGF_OFFSET UNITYSDK_OFFSET(0x15752E20)
#define DKMDIJCGPAL_CHLEALKAOJO_OFFSET UNITYSDK_OFFSET(0x15752F90)
#define DKMDIJCGPAL_FINALIZE_OFFSET UNITYSDK_OFFSET(0x15753130)
#define DKMDIJCGPAL_FPMKEGMLNHG_OFFSET UNITYSDK_OFFSET(0x15752E30)
#define DKMDIJCGPAL_IFDPKDOFOJD_OFFSET UNITYSDK_OFFSET(0x157534A0)
#define DKMDIJCGPAL_KMIMGEDAMCE_OFFSET UNITYSDK_OFFSET(0x157532B0)
#define DKMDIJCGPAL_LNFENFDLMIG_OFFSET UNITYSDK_OFFSET(0x15752A80)
#define DKMDIJCGPAL_NAMKJOJBAOA_OFFSET UNITYSDK_OFFSET(0x15753480)
#define DKMDIJCGPAL_OFHECOHPAKG_OFFSET UNITYSDK_OFFSET(0x15752A60)
#define DKMDIJCGPAL_PHOADBJGFBE_OFFSET UNITYSDK_OFFSET(0x15752D40)
#define DKMDIJCGPAL__CTOR_OFFSET UNITYSDK_OFFSET(0x15753260)

inline static constexpr unsigned int DKMDIJCGPAL_TypeDefinitionIndex = 10377;

class DKMDIJCGPAL : public ::System::Object
{
public:
	::System::Collections::Generic::HashSet_1<::System::Int32>* LHINHLCKHNE; // 0x10
	::DEJLENHBCIF DHDJDGFNBOA; // 0x18
	::System::Action* PLDOELOOFLL; // 0x30
	::System::Collections::Generic::Dictionary_2<::System::Int32, ::System::Int32>* FLBOKGKPECD; // 0x38
	::Il2CppArray<::KDGCMJOMEKL*>* OJMBOGGMIKO; // 0x40
	::System::Int32 IJDGGCANOFI; // 0x48
	::System::Boolean DLGKLGKOMHK; // 0x4C

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + DKMDIJCGPAL__CTOR_OFFSET))(this);
	}

	::System::Boolean OFHECOHPAKG()
	{
		return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + DKMDIJCGPAL_OFHECOHPAKG_OFFSET))(this);
	}

	::System::Void LNFENFDLMIG()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + DKMDIJCGPAL_LNFENFDLMIG_OFFSET))(this);
	}

	::System::Void FPMKEGMLNHG(::System::Action* EJGDHCIBCJH)
	{
		return ((::System::Void(*)(::PVOID, ::System::Action*))((::PBYTE)hIl2Cpp + DKMDIJCGPAL_FPMKEGMLNHG_OFFSET))(this, EJGDHCIBCJH);
	}

	::System::Void BMNMLAIJJGF(::KECPLIFGOCJ GFCJHNHLFEF)
	{
		return ((::System::Void(*)(::PVOID, ::KECPLIFGOCJ))((::PBYTE)hIl2Cpp + DKMDIJCGPAL_BMNMLAIJJGF_OFFSET))(this, GFCJHNHLFEF);
	}

	::System::Void PHOADBJGFBE()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + DKMDIJCGPAL_PHOADBJGFBE_OFFSET))(this);
	}

	::System::Void BHLAEBMEOLO()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + DKMDIJCGPAL_BHLAEBMEOLO_OFFSET))(this);
	}

	::System::Void Finalize()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + DKMDIJCGPAL_FINALIZE_OFFSET))(this);
	}

	::System::Void KMIMGEDAMCE(::Il2CppArray<::System::Byte>* LJBPECKCCEA)
	{
		return ((::System::Void(*)(::PVOID, ::Il2CppArray<::System::Byte>*))((::PBYTE)hIl2Cpp + DKMDIJCGPAL_KMIMGEDAMCE_OFFSET))(this, LJBPECKCCEA);
	}

	::System::Void CHLEALKAOJO()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + DKMDIJCGPAL_CHLEALKAOJO_OFFSET))(this);
	}

	::System::Void NAMKJOJBAOA()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + DKMDIJCGPAL_NAMKJOJBAOA_OFFSET))(this);
	}

	::KDGCMJOMEKL* IFDPKDOFOJD(::System::Int32 MGMDLMBEDJF)
	{
		return ((::KDGCMJOMEKL*(*)(::PVOID, ::System::Int32))((::PBYTE)hIl2Cpp + DKMDIJCGPAL_IFDPKDOFOJD_OFFSET))(this, MGMDLMBEDJF);
	}
};
