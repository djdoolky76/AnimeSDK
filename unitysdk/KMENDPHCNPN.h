#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/KECPLIFGOCJ.h"
#include "unitysdk/LMONLDFBOJA.h"
#include "unitysdk/System/Object.h"

class PLMEIMHGDBG;
namespace System { class Action; }
namespace System::Collections::Generic { template <typename T1, typename T2> class Dictionary_2; }

#define KMENDPHCNPN_BHLAEBMEOLO_OFFSET UNITYSDK_OFFSET(0x19581B50)
#define KMENDPHCNPN_BMNMLAIJJGF_OFFSET UNITYSDK_OFFSET(0x19581920)
#define KMENDPHCNPN_CHLEALKAOJO_OFFSET UNITYSDK_OFFSET(0x19581A90)
#define KMENDPHCNPN_FINALIZE_OFFSET UNITYSDK_OFFSET(0x19581C30)
#define KMENDPHCNPN_FPMKEGMLNHG_OFFSET UNITYSDK_OFFSET(0x19581930)
#define KMENDPHCNPN_IFDPKDOFOJD_OFFSET UNITYSDK_OFFSET(0x19581D70)
#define KMENDPHCNPN_KMIMGEDAMCE_OFFSET UNITYSDK_OFFSET(0x19582150)
#define KMENDPHCNPN_LNFENFDLMIG_OFFSET UNITYSDK_OFFSET(0x195815C0)
#define KMENDPHCNPN_NAMKJOJBAOA_OFFSET UNITYSDK_OFFSET(0x19582130)
#define KMENDPHCNPN_OFHECOHPAKG_OFFSET UNITYSDK_OFFSET(0x195815A0)
#define KMENDPHCNPN_PHOADBJGFBE_OFFSET UNITYSDK_OFFSET(0x19581840)
#define KMENDPHCNPN__CTOR_OFFSET UNITYSDK_OFFSET(0x19581D60)

inline static constexpr unsigned int KMENDPHCNPN_TypeDefinitionIndex = 9640;

class KMENDPHCNPN : public ::System::Object
{
public:
	::System::Collections::Generic::Dictionary_2<::System::Int32, ::System::Collections::Generic::Dictionary_2<::System::Int32, ::System::Int32>*>* FLBOKGKPECD; // 0x10
	::Il2CppArray<::PLMEIMHGDBG*>* OJMBOGGMIKO; // 0x18
	::LMONLDFBOJA DHDJDGFNBOA; // 0x20
	::System::Action* PLDOELOOFLL; // 0x38
	::System::Int32 IJDGGCANOFI; // 0x40
	::System::Boolean DLGKLGKOMHK; // 0x44

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + KMENDPHCNPN__CTOR_OFFSET))(this);
	}

	::System::Boolean OFHECOHPAKG()
	{
		return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + KMENDPHCNPN_OFHECOHPAKG_OFFSET))(this);
	}

	::System::Void LNFENFDLMIG()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + KMENDPHCNPN_LNFENFDLMIG_OFFSET))(this);
	}

	::System::Void FPMKEGMLNHG(::System::Action* EJGDHCIBCJH)
	{
		return ((::System::Void(*)(::PVOID, ::System::Action*))((::PBYTE)hIl2Cpp + KMENDPHCNPN_FPMKEGMLNHG_OFFSET))(this, EJGDHCIBCJH);
	}

	::System::Void BMNMLAIJJGF(::KECPLIFGOCJ GFCJHNHLFEF)
	{
		return ((::System::Void(*)(::PVOID, ::KECPLIFGOCJ))((::PBYTE)hIl2Cpp + KMENDPHCNPN_BMNMLAIJJGF_OFFSET))(this, GFCJHNHLFEF);
	}

	::System::Void PHOADBJGFBE()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + KMENDPHCNPN_PHOADBJGFBE_OFFSET))(this);
	}

	::System::Void BHLAEBMEOLO()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + KMENDPHCNPN_BHLAEBMEOLO_OFFSET))(this);
	}

	::System::Void Finalize()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + KMENDPHCNPN_FINALIZE_OFFSET))(this);
	}

	::PLMEIMHGDBG* IFDPKDOFOJD(::System::Int32 EBCCPPJHLND, ::System::Int32 HFKIDEMMMBN)
	{
		return ((::PLMEIMHGDBG*(*)(::PVOID, ::System::Int32, ::System::Int32))((::PBYTE)hIl2Cpp + KMENDPHCNPN_IFDPKDOFOJD_OFFSET))(this, EBCCPPJHLND, HFKIDEMMMBN);
	}

	::System::Void KMIMGEDAMCE(::Il2CppArray<::System::Byte>* LJBPECKCCEA)
	{
		return ((::System::Void(*)(::PVOID, ::Il2CppArray<::System::Byte>*))((::PBYTE)hIl2Cpp + KMENDPHCNPN_KMIMGEDAMCE_OFFSET))(this, LJBPECKCCEA);
	}

	::System::Void NAMKJOJBAOA()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + KMENDPHCNPN_NAMKJOJBAOA_OFFSET))(this);
	}

	::System::Void CHLEALKAOJO()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + KMENDPHCNPN_CHLEALKAOJO_OFFSET))(this);
	}
};
