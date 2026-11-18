#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/CAFMFKGBBPA.h"
#include "unitysdk/KECPLIFGOCJ.h"
#include "unitysdk/System/Object.h"

class HMLJJCHDJDO;
namespace System { class Action; }
namespace System::Collections::Generic { template <typename T1, typename T2> class Dictionary_2; }

#define JNBPBCMPIHH_BHLAEBMEOLO_OFFSET UNITYSDK_OFFSET(0x1BAFD180)
#define JNBPBCMPIHH_BMNMLAIJJGF_OFFSET UNITYSDK_OFFSET(0x1BAFCF50)
#define JNBPBCMPIHH_CHLEALKAOJO_OFFSET UNITYSDK_OFFSET(0x1BAFD0C0)
#define JNBPBCMPIHH_FINALIZE_OFFSET UNITYSDK_OFFSET(0x1BAFD260)
#define JNBPBCMPIHH_FPMKEGMLNHG_OFFSET UNITYSDK_OFFSET(0x1BAFCF60)
#define JNBPBCMPIHH_IFDPKDOFOJD_OFFSET UNITYSDK_OFFSET(0x1BAFD3C0)
#define JNBPBCMPIHH_KMIMGEDAMCE_OFFSET UNITYSDK_OFFSET(0x1BAFD5B0)
#define JNBPBCMPIHH_LNFENFDLMIG_OFFSET UNITYSDK_OFFSET(0x1BAFCBB0)
#define JNBPBCMPIHH_NAMKJOJBAOA_OFFSET UNITYSDK_OFFSET(0x1BAFD3A0)
#define JNBPBCMPIHH_OFHECOHPAKG_OFFSET UNITYSDK_OFFSET(0x1BAFCB90)
#define JNBPBCMPIHH_PHOADBJGFBE_OFFSET UNITYSDK_OFFSET(0x1BAFCE70)
#define JNBPBCMPIHH__CTOR_OFFSET UNITYSDK_OFFSET(0x1BAFD390)

inline static constexpr unsigned int JNBPBCMPIHH_TypeDefinitionIndex = 15008;

class JNBPBCMPIHH : public ::System::Object
{
public:
	::System::Collections::Generic::Dictionary_2<::System::Int32, ::System::Int32>* FLBOKGKPECD; // 0x10
	::Il2CppArray<::HMLJJCHDJDO*>* OJMBOGGMIKO; // 0x18
	::System::Action* PLDOELOOFLL; // 0x20
	::CAFMFKGBBPA DHDJDGFNBOA; // 0x28
	::System::Boolean DLGKLGKOMHK; // 0x40
	::System::Byte _padding0[0x3];
	::System::Int32 IJDGGCANOFI; // 0x44

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + JNBPBCMPIHH__CTOR_OFFSET))(this);
	}

	::System::Boolean OFHECOHPAKG()
	{
		return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + JNBPBCMPIHH_OFHECOHPAKG_OFFSET))(this);
	}

	::System::Void LNFENFDLMIG()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + JNBPBCMPIHH_LNFENFDLMIG_OFFSET))(this);
	}

	::System::Void FPMKEGMLNHG(::System::Action* EJGDHCIBCJH)
	{
		return ((::System::Void(*)(::PVOID, ::System::Action*))((::PBYTE)hIl2Cpp + JNBPBCMPIHH_FPMKEGMLNHG_OFFSET))(this, EJGDHCIBCJH);
	}

	::System::Void BMNMLAIJJGF(::KECPLIFGOCJ GFCJHNHLFEF)
	{
		return ((::System::Void(*)(::PVOID, ::KECPLIFGOCJ))((::PBYTE)hIl2Cpp + JNBPBCMPIHH_BMNMLAIJJGF_OFFSET))(this, GFCJHNHLFEF);
	}

	::System::Void PHOADBJGFBE()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + JNBPBCMPIHH_PHOADBJGFBE_OFFSET))(this);
	}

	::System::Void BHLAEBMEOLO()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + JNBPBCMPIHH_BHLAEBMEOLO_OFFSET))(this);
	}

	::System::Void Finalize()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + JNBPBCMPIHH_FINALIZE_OFFSET))(this);
	}

	::System::Void CHLEALKAOJO()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + JNBPBCMPIHH_CHLEALKAOJO_OFFSET))(this);
	}

	::System::Void NAMKJOJBAOA()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + JNBPBCMPIHH_NAMKJOJBAOA_OFFSET))(this);
	}

	::HMLJJCHDJDO* IFDPKDOFOJD(::System::Int32 MGMDLMBEDJF)
	{
		return ((::HMLJJCHDJDO*(*)(::PVOID, ::System::Int32))((::PBYTE)hIl2Cpp + JNBPBCMPIHH_IFDPKDOFOJD_OFFSET))(this, MGMDLMBEDJF);
	}

	::System::Void KMIMGEDAMCE(::Il2CppArray<::System::Byte>* LJBPECKCCEA)
	{
		return ((::System::Void(*)(::PVOID, ::Il2CppArray<::System::Byte>*))((::PBYTE)hIl2Cpp + JNBPBCMPIHH_KMIMGEDAMCE_OFFSET))(this, LJBPECKCCEA);
	}
};
