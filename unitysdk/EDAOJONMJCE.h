#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/JNOGAGBMLEO.h"
#include "unitysdk/KECPLIFGOCJ.h"
#include "unitysdk/System/Object.h"

class HHIAFLMAHNI;
namespace System { class Action; }
namespace System::Collections::Generic { template <typename T1, typename T2> class Dictionary_2; }

#define EDAOJONMJCE_BHLAEBMEOLO_OFFSET UNITYSDK_OFFSET(0x1A198450)
#define EDAOJONMJCE_BMNMLAIJJGF_OFFSET UNITYSDK_OFFSET(0x1A198220)
#define EDAOJONMJCE_CHLEALKAOJO_OFFSET UNITYSDK_OFFSET(0x1A198390)
#define EDAOJONMJCE_FINALIZE_OFFSET UNITYSDK_OFFSET(0x1A198530)
#define EDAOJONMJCE_FPMKEGMLNHG_OFFSET UNITYSDK_OFFSET(0x1A198230)
#define EDAOJONMJCE_IFDPKDOFOJD_OFFSET UNITYSDK_OFFSET(0x1A198670)
#define EDAOJONMJCE_KMIMGEDAMCE_OFFSET UNITYSDK_OFFSET(0x1A198880)
#define EDAOJONMJCE_LNFENFDLMIG_OFFSET UNITYSDK_OFFSET(0x1A197E80)
#define EDAOJONMJCE_NAMKJOJBAOA_OFFSET UNITYSDK_OFFSET(0x1A198860)
#define EDAOJONMJCE_OFHECOHPAKG_OFFSET UNITYSDK_OFFSET(0x1A197E60)
#define EDAOJONMJCE_PHOADBJGFBE_OFFSET UNITYSDK_OFFSET(0x1A198140)
#define EDAOJONMJCE__CTOR_OFFSET UNITYSDK_OFFSET(0x1A198660)

inline static constexpr unsigned int EDAOJONMJCE_TypeDefinitionIndex = 10314;

class EDAOJONMJCE : public ::System::Object
{
public:
	::System::Collections::Generic::Dictionary_2<::System::Int32, ::System::Int32>* FLBOKGKPECD; // 0x10
	::Il2CppArray<::HHIAFLMAHNI*>* OJMBOGGMIKO; // 0x18
	::System::Action* PLDOELOOFLL; // 0x20
	::JNOGAGBMLEO DHDJDGFNBOA; // 0x28
	::System::Boolean DLGKLGKOMHK; // 0x40
	::System::Byte _padding0[0x3];
	::System::Int32 IJDGGCANOFI; // 0x44

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + EDAOJONMJCE__CTOR_OFFSET))(this);
	}

	::System::Boolean OFHECOHPAKG()
	{
		return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + EDAOJONMJCE_OFHECOHPAKG_OFFSET))(this);
	}

	::System::Void LNFENFDLMIG()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + EDAOJONMJCE_LNFENFDLMIG_OFFSET))(this);
	}

	::System::Void FPMKEGMLNHG(::System::Action* EJGDHCIBCJH)
	{
		return ((::System::Void(*)(::PVOID, ::System::Action*))((::PBYTE)hIl2Cpp + EDAOJONMJCE_FPMKEGMLNHG_OFFSET))(this, EJGDHCIBCJH);
	}

	::System::Void BMNMLAIJJGF(::KECPLIFGOCJ GFCJHNHLFEF)
	{
		return ((::System::Void(*)(::PVOID, ::KECPLIFGOCJ))((::PBYTE)hIl2Cpp + EDAOJONMJCE_BMNMLAIJJGF_OFFSET))(this, GFCJHNHLFEF);
	}

	::System::Void PHOADBJGFBE()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + EDAOJONMJCE_PHOADBJGFBE_OFFSET))(this);
	}

	::System::Void BHLAEBMEOLO()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + EDAOJONMJCE_BHLAEBMEOLO_OFFSET))(this);
	}

	::System::Void Finalize()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + EDAOJONMJCE_FINALIZE_OFFSET))(this);
	}

	::HHIAFLMAHNI* IFDPKDOFOJD(::System::Int32 MGMDLMBEDJF)
	{
		return ((::HHIAFLMAHNI*(*)(::PVOID, ::System::Int32))((::PBYTE)hIl2Cpp + EDAOJONMJCE_IFDPKDOFOJD_OFFSET))(this, MGMDLMBEDJF);
	}

	::System::Void KMIMGEDAMCE(::Il2CppArray<::System::Byte>* LJBPECKCCEA)
	{
		return ((::System::Void(*)(::PVOID, ::Il2CppArray<::System::Byte>*))((::PBYTE)hIl2Cpp + EDAOJONMJCE_KMIMGEDAMCE_OFFSET))(this, LJBPECKCCEA);
	}

	::System::Void CHLEALKAOJO()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + EDAOJONMJCE_CHLEALKAOJO_OFFSET))(this);
	}

	::System::Void NAMKJOJBAOA()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + EDAOJONMJCE_NAMKJOJBAOA_OFFSET))(this);
	}
};
