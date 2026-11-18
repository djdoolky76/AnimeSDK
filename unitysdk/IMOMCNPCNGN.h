#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/KECPLIFGOCJ.h"
#include "unitysdk/KGPCBMDOAMG.h"
#include "unitysdk/System/Object.h"

class GGPBJGLCMCC;
namespace System { class Action; }
namespace System::Collections::Generic { template <typename T1, typename T2> class Dictionary_2; }
namespace System::Collections::Generic { template <typename T> class HashSet_1; }

#define IMOMCNPCNGN_BHLAEBMEOLO_OFFSET UNITYSDK_OFFSET(0x1A5E3170)
#define IMOMCNPCNGN_BMNMLAIJJGF_OFFSET UNITYSDK_OFFSET(0x1A5E2F40)
#define IMOMCNPCNGN_CHLEALKAOJO_OFFSET UNITYSDK_OFFSET(0x1A5E30B0)
#define IMOMCNPCNGN_FINALIZE_OFFSET UNITYSDK_OFFSET(0x1A5E3250)
#define IMOMCNPCNGN_FPMKEGMLNHG_OFFSET UNITYSDK_OFFSET(0x1A5E2F50)
#define IMOMCNPCNGN_IFDPKDOFOJD_OFFSET UNITYSDK_OFFSET(0x1A5E35A0)
#define IMOMCNPCNGN_KMIMGEDAMCE_OFFSET UNITYSDK_OFFSET(0x1A5E33D0)
#define IMOMCNPCNGN_LNFENFDLMIG_OFFSET UNITYSDK_OFFSET(0x1A5E2BA0)
#define IMOMCNPCNGN_NAMKJOJBAOA_OFFSET UNITYSDK_OFFSET(0x1A5E37D0)
#define IMOMCNPCNGN_OFHECOHPAKG_OFFSET UNITYSDK_OFFSET(0x1A5E2B80)
#define IMOMCNPCNGN_PHOADBJGFBE_OFFSET UNITYSDK_OFFSET(0x1A5E2E60)
#define IMOMCNPCNGN__CTOR_OFFSET UNITYSDK_OFFSET(0x1A5E3380)

inline static constexpr unsigned int IMOMCNPCNGN_TypeDefinitionIndex = 17089;

class IMOMCNPCNGN : public ::System::Object
{
public:
	::System::Action* PLDOELOOFLL; // 0x10
	::System::Collections::Generic::Dictionary_2<::System::Int32, ::System::Int32>* FLBOKGKPECD; // 0x18
	::Il2CppArray<::GGPBJGLCMCC*>* OJMBOGGMIKO; // 0x20
	::KGPCBMDOAMG DHDJDGFNBOA; // 0x28
	::System::Collections::Generic::HashSet_1<::System::Int32>* LHINHLCKHNE; // 0x40
	::System::Boolean DLGKLGKOMHK; // 0x48
	::System::Byte _padding0[0x3];
	::System::Int32 IJDGGCANOFI; // 0x4C

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + IMOMCNPCNGN__CTOR_OFFSET))(this);
	}

	::System::Boolean OFHECOHPAKG()
	{
		return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + IMOMCNPCNGN_OFHECOHPAKG_OFFSET))(this);
	}

	::System::Void LNFENFDLMIG()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + IMOMCNPCNGN_LNFENFDLMIG_OFFSET))(this);
	}

	::System::Void FPMKEGMLNHG(::System::Action* EJGDHCIBCJH)
	{
		return ((::System::Void(*)(::PVOID, ::System::Action*))((::PBYTE)hIl2Cpp + IMOMCNPCNGN_FPMKEGMLNHG_OFFSET))(this, EJGDHCIBCJH);
	}

	::System::Void BMNMLAIJJGF(::KECPLIFGOCJ GFCJHNHLFEF)
	{
		return ((::System::Void(*)(::PVOID, ::KECPLIFGOCJ))((::PBYTE)hIl2Cpp + IMOMCNPCNGN_BMNMLAIJJGF_OFFSET))(this, GFCJHNHLFEF);
	}

	::System::Void PHOADBJGFBE()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + IMOMCNPCNGN_PHOADBJGFBE_OFFSET))(this);
	}

	::System::Void BHLAEBMEOLO()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + IMOMCNPCNGN_BHLAEBMEOLO_OFFSET))(this);
	}

	::System::Void Finalize()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + IMOMCNPCNGN_FINALIZE_OFFSET))(this);
	}

	::System::Void KMIMGEDAMCE(::Il2CppArray<::System::Byte>* LJBPECKCCEA)
	{
		return ((::System::Void(*)(::PVOID, ::Il2CppArray<::System::Byte>*))((::PBYTE)hIl2Cpp + IMOMCNPCNGN_KMIMGEDAMCE_OFFSET))(this, LJBPECKCCEA);
	}

	::GGPBJGLCMCC* IFDPKDOFOJD(::System::Int32 MGMDLMBEDJF)
	{
		return ((::GGPBJGLCMCC*(*)(::PVOID, ::System::Int32))((::PBYTE)hIl2Cpp + IMOMCNPCNGN_IFDPKDOFOJD_OFFSET))(this, MGMDLMBEDJF);
	}

	::System::Void NAMKJOJBAOA()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + IMOMCNPCNGN_NAMKJOJBAOA_OFFSET))(this);
	}

	::System::Void CHLEALKAOJO()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + IMOMCNPCNGN_CHLEALKAOJO_OFFSET))(this);
	}
};
