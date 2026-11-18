#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/HPILMANOFJB.h"
#include "unitysdk/KECPLIFGOCJ.h"
#include "unitysdk/System/Object.h"

class CDKEFKCCEMM;
namespace System { class Action; }
namespace System::Collections::Generic { template <typename T1, typename T2> class Dictionary_2; }
namespace System::Collections::Generic { template <typename T> class HashSet_1; }

#define EHFNFPCNBCL_BHLAEBMEOLO_OFFSET UNITYSDK_OFFSET(0x195204E0)
#define EHFNFPCNBCL_BMNMLAIJJGF_OFFSET UNITYSDK_OFFSET(0x19520260)
#define EHFNFPCNBCL_CHLEALKAOJO_OFFSET UNITYSDK_OFFSET(0x19520270)
#define EHFNFPCNBCL_FINALIZE_OFFSET UNITYSDK_OFFSET(0x19520330)
#define EHFNFPCNBCL_FPMKEGMLNHG_OFFSET UNITYSDK_OFFSET(0x19520460)
#define EHFNFPCNBCL_IFDPKDOFOJD_OFFSET UNITYSDK_OFFSET(0x195208E0)
#define EHFNFPCNBCL_KMIMGEDAMCE_OFFSET UNITYSDK_OFFSET(0x19520610)
#define EHFNFPCNBCL_LNFENFDLMIG_OFFSET UNITYSDK_OFFSET(0x1951FEC0)
#define EHFNFPCNBCL_NAMKJOJBAOA_OFFSET UNITYSDK_OFFSET(0x195208C0)
#define EHFNFPCNBCL_OFHECOHPAKG_OFFSET UNITYSDK_OFFSET(0x1951FEA0)
#define EHFNFPCNBCL_PHOADBJGFBE_OFFSET UNITYSDK_OFFSET(0x19520180)
#define EHFNFPCNBCL__CTOR_OFFSET UNITYSDK_OFFSET(0x195205C0)

inline static constexpr unsigned int EHFNFPCNBCL_TypeDefinitionIndex = 10511;

class EHFNFPCNBCL : public ::System::Object
{
public:
	::HPILMANOFJB DHDJDGFNBOA; // 0x10
	::Il2CppArray<::CDKEFKCCEMM*>* OJMBOGGMIKO; // 0x28
	::System::Collections::Generic::Dictionary_2<::System::Int32, ::System::Int32>* FLBOKGKPECD; // 0x30
	::System::Collections::Generic::HashSet_1<::System::Int32>* LHINHLCKHNE; // 0x38
	::System::Action* PLDOELOOFLL; // 0x40
	::System::Boolean DLGKLGKOMHK; // 0x48
	::System::Byte _padding0[0x3];
	::System::Int32 IJDGGCANOFI; // 0x4C

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + EHFNFPCNBCL__CTOR_OFFSET))(this);
	}

	::System::Boolean OFHECOHPAKG()
	{
		return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + EHFNFPCNBCL_OFHECOHPAKG_OFFSET))(this);
	}

	::System::Void LNFENFDLMIG()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + EHFNFPCNBCL_LNFENFDLMIG_OFFSET))(this);
	}

	::System::Void PHOADBJGFBE()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + EHFNFPCNBCL_PHOADBJGFBE_OFFSET))(this);
	}

	::System::Void Finalize()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + EHFNFPCNBCL_FINALIZE_OFFSET))(this);
	}

	::System::Void FPMKEGMLNHG(::System::Action* EJGDHCIBCJH)
	{
		return ((::System::Void(*)(::PVOID, ::System::Action*))((::PBYTE)hIl2Cpp + EHFNFPCNBCL_FPMKEGMLNHG_OFFSET))(this, EJGDHCIBCJH);
	}

	::System::Void BMNMLAIJJGF(::KECPLIFGOCJ GFCJHNHLFEF)
	{
		return ((::System::Void(*)(::PVOID, ::KECPLIFGOCJ))((::PBYTE)hIl2Cpp + EHFNFPCNBCL_BMNMLAIJJGF_OFFSET))(this, GFCJHNHLFEF);
	}

	::System::Void BHLAEBMEOLO()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + EHFNFPCNBCL_BHLAEBMEOLO_OFFSET))(this);
	}

	::System::Void KMIMGEDAMCE(::Il2CppArray<::System::Byte>* LJBPECKCCEA)
	{
		return ((::System::Void(*)(::PVOID, ::Il2CppArray<::System::Byte>*))((::PBYTE)hIl2Cpp + EHFNFPCNBCL_KMIMGEDAMCE_OFFSET))(this, LJBPECKCCEA);
	}

	::System::Void NAMKJOJBAOA()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + EHFNFPCNBCL_NAMKJOJBAOA_OFFSET))(this);
	}

	::System::Void CHLEALKAOJO()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + EHFNFPCNBCL_CHLEALKAOJO_OFFSET))(this);
	}

	::CDKEFKCCEMM* IFDPKDOFOJD(::System::Int32 MGMDLMBEDJF)
	{
		return ((::CDKEFKCCEMM*(*)(::PVOID, ::System::Int32))((::PBYTE)hIl2Cpp + EHFNFPCNBCL_IFDPKDOFOJD_OFFSET))(this, MGMDLMBEDJF);
	}
};
