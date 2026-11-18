#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/CMNHCAPJGPL.h"
#include "unitysdk/KECPLIFGOCJ.h"
#include "unitysdk/System/Object.h"

class GNEDCJAANOG;
namespace System { class Action; }
namespace System::Collections::Generic { template <typename T1, typename T2> class Dictionary_2; }
namespace System::Collections::Generic { template <typename T> class HashSet_1; }

#define NKNHKGKKEBF_BHLAEBMEOLO_OFFSET UNITYSDK_OFFSET(0x18E21A00)
#define NKNHKGKKEBF_BMNMLAIJJGF_OFFSET UNITYSDK_OFFSET(0x18E21780)
#define NKNHKGKKEBF_CHLEALKAOJO_OFFSET UNITYSDK_OFFSET(0x18E21790)
#define NKNHKGKKEBF_FINALIZE_OFFSET UNITYSDK_OFFSET(0x18E21850)
#define NKNHKGKKEBF_FPMKEGMLNHG_OFFSET UNITYSDK_OFFSET(0x18E21980)
#define NKNHKGKKEBF_IFDPKDOFOJD_OFFSET UNITYSDK_OFFSET(0x18E21B50)
#define NKNHKGKKEBF_KMIMGEDAMCE_OFFSET UNITYSDK_OFFSET(0x18E21D80)
#define NKNHKGKKEBF_LNFENFDLMIG_OFFSET UNITYSDK_OFFSET(0x18E213D0)
#define NKNHKGKKEBF_NAMKJOJBAOA_OFFSET UNITYSDK_OFFSET(0x18E21B30)
#define NKNHKGKKEBF_OFHECOHPAKG_OFFSET UNITYSDK_OFFSET(0x18E213B0)
#define NKNHKGKKEBF_PHOADBJGFBE_OFFSET UNITYSDK_OFFSET(0x18E21690)
#define NKNHKGKKEBF__CTOR_OFFSET UNITYSDK_OFFSET(0x18E21AE0)

inline static constexpr unsigned int NKNHKGKKEBF_TypeDefinitionIndex = 16108;

class NKNHKGKKEBF : public ::System::Object
{
public:
	::System::Collections::Generic::Dictionary_2<::System::Int32, ::System::Int32>* FLBOKGKPECD; // 0x10
	::System::Collections::Generic::HashSet_1<::System::Int32>* LHINHLCKHNE; // 0x18
	::CMNHCAPJGPL DHDJDGFNBOA; // 0x20
	::Il2CppArray<::GNEDCJAANOG*>* OJMBOGGMIKO; // 0x38
	::System::Action* PLDOELOOFLL; // 0x40
	::System::Int32 IJDGGCANOFI; // 0x48
	::System::Boolean DLGKLGKOMHK; // 0x4C

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + NKNHKGKKEBF__CTOR_OFFSET))(this);
	}

	::System::Boolean OFHECOHPAKG()
	{
		return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + NKNHKGKKEBF_OFHECOHPAKG_OFFSET))(this);
	}

	::System::Void LNFENFDLMIG()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + NKNHKGKKEBF_LNFENFDLMIG_OFFSET))(this);
	}

	::System::Void PHOADBJGFBE()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + NKNHKGKKEBF_PHOADBJGFBE_OFFSET))(this);
	}

	::System::Void Finalize()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + NKNHKGKKEBF_FINALIZE_OFFSET))(this);
	}

	::System::Void FPMKEGMLNHG(::System::Action* EJGDHCIBCJH)
	{
		return ((::System::Void(*)(::PVOID, ::System::Action*))((::PBYTE)hIl2Cpp + NKNHKGKKEBF_FPMKEGMLNHG_OFFSET))(this, EJGDHCIBCJH);
	}

	::System::Void BMNMLAIJJGF(::KECPLIFGOCJ GFCJHNHLFEF)
	{
		return ((::System::Void(*)(::PVOID, ::KECPLIFGOCJ))((::PBYTE)hIl2Cpp + NKNHKGKKEBF_BMNMLAIJJGF_OFFSET))(this, GFCJHNHLFEF);
	}

	::System::Void BHLAEBMEOLO()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + NKNHKGKKEBF_BHLAEBMEOLO_OFFSET))(this);
	}

	::System::Void NAMKJOJBAOA()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + NKNHKGKKEBF_NAMKJOJBAOA_OFFSET))(this);
	}

	::GNEDCJAANOG* IFDPKDOFOJD(::System::Int32 MGMDLMBEDJF)
	{
		return ((::GNEDCJAANOG*(*)(::PVOID, ::System::Int32))((::PBYTE)hIl2Cpp + NKNHKGKKEBF_IFDPKDOFOJD_OFFSET))(this, MGMDLMBEDJF);
	}

	::System::Void CHLEALKAOJO()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + NKNHKGKKEBF_CHLEALKAOJO_OFFSET))(this);
	}

	::System::Void KMIMGEDAMCE(::Il2CppArray<::System::Byte>* LJBPECKCCEA)
	{
		return ((::System::Void(*)(::PVOID, ::Il2CppArray<::System::Byte>*))((::PBYTE)hIl2Cpp + NKNHKGKKEBF_KMIMGEDAMCE_OFFSET))(this, LJBPECKCCEA);
	}
};
