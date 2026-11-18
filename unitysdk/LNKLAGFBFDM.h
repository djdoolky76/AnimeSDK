#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/KECPLIFGOCJ.h"
#include "unitysdk/PNIHNLOBPGO.h"
#include "unitysdk/System/Object.h"

class EELMEDOFMGF;
namespace System { class Action; }
namespace System::Collections::Generic { template <typename T1, typename T2> class Dictionary_2; }

#define LNKLAGFBFDM_BHLAEBMEOLO_OFFSET UNITYSDK_OFFSET(0x19101CA0)
#define LNKLAGFBFDM_BMNMLAIJJGF_OFFSET UNITYSDK_OFFSET(0x19101A70)
#define LNKLAGFBFDM_CHLEALKAOJO_OFFSET UNITYSDK_OFFSET(0x19101BE0)
#define LNKLAGFBFDM_FINALIZE_OFFSET UNITYSDK_OFFSET(0x19101D80)
#define LNKLAGFBFDM_FPMKEGMLNHG_OFFSET UNITYSDK_OFFSET(0x19101A80)
#define LNKLAGFBFDM_IFDPKDOFOJD_OFFSET UNITYSDK_OFFSET(0x19101EC0)
#define LNKLAGFBFDM_KMIMGEDAMCE_OFFSET UNITYSDK_OFFSET(0x191020D0)
#define LNKLAGFBFDM_LNFENFDLMIG_OFFSET UNITYSDK_OFFSET(0x191016D0)
#define LNKLAGFBFDM_NAMKJOJBAOA_OFFSET UNITYSDK_OFFSET(0x191020B0)
#define LNKLAGFBFDM_OFHECOHPAKG_OFFSET UNITYSDK_OFFSET(0x191016B0)
#define LNKLAGFBFDM_PHOADBJGFBE_OFFSET UNITYSDK_OFFSET(0x19101990)
#define LNKLAGFBFDM__CTOR_OFFSET UNITYSDK_OFFSET(0x19101EB0)

inline static constexpr unsigned int LNKLAGFBFDM_TypeDefinitionIndex = 14688;

class LNKLAGFBFDM : public ::System::Object
{
public:
	::System::Action* PLDOELOOFLL; // 0x10
	::Il2CppArray<::EELMEDOFMGF*>* OJMBOGGMIKO; // 0x18
	::System::Collections::Generic::Dictionary_2<::System::Int32, ::System::Int32>* FLBOKGKPECD; // 0x20
	::PNIHNLOBPGO DHDJDGFNBOA; // 0x28
	::System::Boolean DLGKLGKOMHK; // 0x40
	::System::Byte _padding0[0x3];
	::System::Int32 IJDGGCANOFI; // 0x44

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + LNKLAGFBFDM__CTOR_OFFSET))(this);
	}

	::System::Boolean OFHECOHPAKG()
	{
		return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + LNKLAGFBFDM_OFHECOHPAKG_OFFSET))(this);
	}

	::System::Void LNFENFDLMIG()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + LNKLAGFBFDM_LNFENFDLMIG_OFFSET))(this);
	}

	::System::Void FPMKEGMLNHG(::System::Action* EJGDHCIBCJH)
	{
		return ((::System::Void(*)(::PVOID, ::System::Action*))((::PBYTE)hIl2Cpp + LNKLAGFBFDM_FPMKEGMLNHG_OFFSET))(this, EJGDHCIBCJH);
	}

	::System::Void BMNMLAIJJGF(::KECPLIFGOCJ GFCJHNHLFEF)
	{
		return ((::System::Void(*)(::PVOID, ::KECPLIFGOCJ))((::PBYTE)hIl2Cpp + LNKLAGFBFDM_BMNMLAIJJGF_OFFSET))(this, GFCJHNHLFEF);
	}

	::System::Void PHOADBJGFBE()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + LNKLAGFBFDM_PHOADBJGFBE_OFFSET))(this);
	}

	::System::Void BHLAEBMEOLO()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + LNKLAGFBFDM_BHLAEBMEOLO_OFFSET))(this);
	}

	::System::Void Finalize()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + LNKLAGFBFDM_FINALIZE_OFFSET))(this);
	}

	::EELMEDOFMGF* IFDPKDOFOJD(::System::Int32 MGMDLMBEDJF)
	{
		return ((::EELMEDOFMGF*(*)(::PVOID, ::System::Int32))((::PBYTE)hIl2Cpp + LNKLAGFBFDM_IFDPKDOFOJD_OFFSET))(this, MGMDLMBEDJF);
	}

	::System::Void KMIMGEDAMCE(::Il2CppArray<::System::Byte>* LJBPECKCCEA)
	{
		return ((::System::Void(*)(::PVOID, ::Il2CppArray<::System::Byte>*))((::PBYTE)hIl2Cpp + LNKLAGFBFDM_KMIMGEDAMCE_OFFSET))(this, LJBPECKCCEA);
	}

	::System::Void NAMKJOJBAOA()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + LNKLAGFBFDM_NAMKJOJBAOA_OFFSET))(this);
	}

	::System::Void CHLEALKAOJO()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + LNKLAGFBFDM_CHLEALKAOJO_OFFSET))(this);
	}
};
