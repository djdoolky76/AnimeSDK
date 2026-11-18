#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/KECPLIFGOCJ.h"
#include "unitysdk/NEIPPDJECLD.h"
#include "unitysdk/System/Object.h"

class KMJECECBGEM;
namespace System { class Action; }
namespace System::Collections::Generic { template <typename T1, typename T2> class Dictionary_2; }

#define BIDPBLHACKE_BHLAEBMEOLO_OFFSET UNITYSDK_OFFSET(0x19AC5940)
#define BIDPBLHACKE_BMNMLAIJJGF_OFFSET UNITYSDK_OFFSET(0x19AC5700)
#define BIDPBLHACKE_CHLEALKAOJO_OFFSET UNITYSDK_OFFSET(0x19AC5880)
#define BIDPBLHACKE_FINALIZE_OFFSET UNITYSDK_OFFSET(0x19AC5A20)
#define BIDPBLHACKE_FPMKEGMLNHG_OFFSET UNITYSDK_OFFSET(0x19AC5710)
#define BIDPBLHACKE_IFDPKDOFOJD_OFFSET UNITYSDK_OFFSET(0x19AC5D30)
#define BIDPBLHACKE_KMIMGEDAMCE_OFFSET UNITYSDK_OFFSET(0x19AC5B60)
#define BIDPBLHACKE_LNFENFDLMIG_OFFSET UNITYSDK_OFFSET(0x19AC5350)
#define BIDPBLHACKE_NAMKJOJBAOA_OFFSET UNITYSDK_OFFSET(0x19AC5F20)
#define BIDPBLHACKE_OFHECOHPAKG_OFFSET UNITYSDK_OFFSET(0x19AC5330)
#define BIDPBLHACKE_PHOADBJGFBE_OFFSET UNITYSDK_OFFSET(0x19AC5610)
#define BIDPBLHACKE__CTOR_OFFSET UNITYSDK_OFFSET(0x19AC5B50)

inline static constexpr unsigned int BIDPBLHACKE_TypeDefinitionIndex = 9541;

class BIDPBLHACKE : public ::System::Object
{
public:
	::System::Collections::Generic::Dictionary_2<::System::Int32, ::System::Int32>* FLBOKGKPECD; // 0x10
	::System::Action* PLDOELOOFLL; // 0x18
	::NEIPPDJECLD DHDJDGFNBOA; // 0x20
	::Il2CppArray<::KMJECECBGEM*>* OJMBOGGMIKO; // 0x38
	::System::Int32 IJDGGCANOFI; // 0x40
	::System::Boolean DLGKLGKOMHK; // 0x44

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + BIDPBLHACKE__CTOR_OFFSET))(this);
	}

	::System::Boolean OFHECOHPAKG()
	{
		return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + BIDPBLHACKE_OFHECOHPAKG_OFFSET))(this);
	}

	::System::Void LNFENFDLMIG()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + BIDPBLHACKE_LNFENFDLMIG_OFFSET))(this);
	}

	::System::Void FPMKEGMLNHG(::System::Action* EJGDHCIBCJH)
	{
		return ((::System::Void(*)(::PVOID, ::System::Action*))((::PBYTE)hIl2Cpp + BIDPBLHACKE_FPMKEGMLNHG_OFFSET))(this, EJGDHCIBCJH);
	}

	::System::Void BMNMLAIJJGF(::KECPLIFGOCJ GFCJHNHLFEF)
	{
		return ((::System::Void(*)(::PVOID, ::KECPLIFGOCJ))((::PBYTE)hIl2Cpp + BIDPBLHACKE_BMNMLAIJJGF_OFFSET))(this, GFCJHNHLFEF);
	}

	::System::Void PHOADBJGFBE()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + BIDPBLHACKE_PHOADBJGFBE_OFFSET))(this);
	}

	::System::Void BHLAEBMEOLO()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + BIDPBLHACKE_BHLAEBMEOLO_OFFSET))(this);
	}

	::System::Void Finalize()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + BIDPBLHACKE_FINALIZE_OFFSET))(this);
	}

	::System::Void KMIMGEDAMCE(::Il2CppArray<::System::Byte>* LJBPECKCCEA)
	{
		return ((::System::Void(*)(::PVOID, ::Il2CppArray<::System::Byte>*))((::PBYTE)hIl2Cpp + BIDPBLHACKE_KMIMGEDAMCE_OFFSET))(this, LJBPECKCCEA);
	}

	::System::Void CHLEALKAOJO()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + BIDPBLHACKE_CHLEALKAOJO_OFFSET))(this);
	}

	::KMJECECBGEM* IFDPKDOFOJD(::System::Int32 MGMDLMBEDJF)
	{
		return ((::KMJECECBGEM*(*)(::PVOID, ::System::Int32))((::PBYTE)hIl2Cpp + BIDPBLHACKE_IFDPKDOFOJD_OFFSET))(this, MGMDLMBEDJF);
	}

	::System::Void NAMKJOJBAOA()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + BIDPBLHACKE_NAMKJOJBAOA_OFFSET))(this);
	}
};
