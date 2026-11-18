#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/KECPLIFGOCJ.h"
#include "unitysdk/LNAINNLHDBI.h"
#include "unitysdk/System/Object.h"

class LDKMNGJOHCJ;
namespace System { class Action; }
namespace System::Collections::Generic { template <typename T1, typename T2> class Dictionary_2; }

#define PEGHGANNGLO_BHLAEBMEOLO_OFFSET UNITYSDK_OFFSET(0x1EDFD1A0)
#define PEGHGANNGLO_BMNMLAIJJGF_OFFSET UNITYSDK_OFFSET(0x1AB42100)
#define PEGHGANNGLO_CHLEALKAOJO_OFFSET UNITYSDK_OFFSET(0x1EDFD280)
#define PEGHGANNGLO_FINALIZE_OFFSET UNITYSDK_OFFSET(0x1EDFD340)
#define PEGHGANNGLO_FPMKEGMLNHG_OFFSET UNITYSDK_OFFSET(0x1AB42110)
#define PEGHGANNGLO_IFDPKDOFOJD_OFFSET UNITYSDK_OFFSET(0x1EDFD3C0)
#define PEGHGANNGLO_KMIMGEDAMCE_OFFSET UNITYSDK_OFFSET(0x1EDFD5D0)
#define PEGHGANNGLO_LNFENFDLMIG_OFFSET UNITYSDK_OFFSET(0x1AB41D50)
#define PEGHGANNGLO_NAMKJOJBAOA_OFFSET UNITYSDK_OFFSET(0x1EDFD5B0)
#define PEGHGANNGLO_OFHECOHPAKG_OFFSET UNITYSDK_OFFSET(0x1AB41D30)
#define PEGHGANNGLO_PHOADBJGFBE_OFFSET UNITYSDK_OFFSET(0x1AB42010)
#define PEGHGANNGLO__CTOR_OFFSET UNITYSDK_OFFSET(0x1EDFD3B0)

inline static constexpr unsigned int PEGHGANNGLO_TypeDefinitionIndex = 14261;

class PEGHGANNGLO : public ::System::Object
{
public:
	::Il2CppArray<::LDKMNGJOHCJ*>* OJMBOGGMIKO; // 0x10
	::LNAINNLHDBI DHDJDGFNBOA; // 0x18
	::System::Action* PLDOELOOFLL; // 0x30
	::System::Collections::Generic::Dictionary_2<::System::Int32, ::System::Int32>* FLBOKGKPECD; // 0x38
	::System::Boolean DLGKLGKOMHK; // 0x40
	::System::Byte _padding0[0x3];
	::System::Int32 IJDGGCANOFI; // 0x44

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + PEGHGANNGLO__CTOR_OFFSET))(this);
	}

	::System::Boolean OFHECOHPAKG()
	{
		return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + PEGHGANNGLO_OFHECOHPAKG_OFFSET))(this);
	}

	::System::Void LNFENFDLMIG()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + PEGHGANNGLO_LNFENFDLMIG_OFFSET))(this);
	}

	::System::Void FPMKEGMLNHG(::System::Action* EJGDHCIBCJH)
	{
		return ((::System::Void(*)(::PVOID, ::System::Action*))((::PBYTE)hIl2Cpp + PEGHGANNGLO_FPMKEGMLNHG_OFFSET))(this, EJGDHCIBCJH);
	}

	::System::Void BMNMLAIJJGF(::KECPLIFGOCJ GFCJHNHLFEF)
	{
		return ((::System::Void(*)(::PVOID, ::KECPLIFGOCJ))((::PBYTE)hIl2Cpp + PEGHGANNGLO_BMNMLAIJJGF_OFFSET))(this, GFCJHNHLFEF);
	}

	::System::Void PHOADBJGFBE()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + PEGHGANNGLO_PHOADBJGFBE_OFFSET))(this);
	}

	::System::Void BHLAEBMEOLO()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + PEGHGANNGLO_BHLAEBMEOLO_OFFSET))(this);
	}

	::System::Void Finalize()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + PEGHGANNGLO_FINALIZE_OFFSET))(this);
	}

	::LDKMNGJOHCJ* IFDPKDOFOJD(::System::Int32 MGMDLMBEDJF)
	{
		return ((::LDKMNGJOHCJ*(*)(::PVOID, ::System::Int32))((::PBYTE)hIl2Cpp + PEGHGANNGLO_IFDPKDOFOJD_OFFSET))(this, MGMDLMBEDJF);
	}

	::System::Void CHLEALKAOJO()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + PEGHGANNGLO_CHLEALKAOJO_OFFSET))(this);
	}

	::System::Void NAMKJOJBAOA()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + PEGHGANNGLO_NAMKJOJBAOA_OFFSET))(this);
	}

	::System::Void KMIMGEDAMCE(::Il2CppArray<::System::Byte>* LJBPECKCCEA)
	{
		return ((::System::Void(*)(::PVOID, ::Il2CppArray<::System::Byte>*))((::PBYTE)hIl2Cpp + PEGHGANNGLO_KMIMGEDAMCE_OFFSET))(this, LJBPECKCCEA);
	}
};
