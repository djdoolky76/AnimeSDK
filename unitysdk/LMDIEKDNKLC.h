#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/CJAICNOMNOA.h"
#include "unitysdk/KECPLIFGOCJ.h"
#include "unitysdk/System/Object.h"

class EMDGOFKIPHO;
class MHFGKGCPCOA;
namespace System { class Action; }
namespace System::Collections::Generic { template <typename T1, typename T2> class Dictionary_2; }
namespace System::Collections::Generic { template <typename T> class HashSet_1; }

#define LMDIEKDNKLC_BHLAEBMEOLO_OFFSET UNITYSDK_OFFSET(0x17FB7050)
#define LMDIEKDNKLC_BMNMLAIJJGF_OFFSET UNITYSDK_OFFSET(0x17FB6DD0)
#define LMDIEKDNKLC_CHLEALKAOJO_OFFSET UNITYSDK_OFFSET(0x17FB6DE0)
#define LMDIEKDNKLC_FINALIZE_OFFSET UNITYSDK_OFFSET(0x17FB6EA0)
#define LMDIEKDNKLC_FPMKEGMLNHG_OFFSET UNITYSDK_OFFSET(0x17FB6FD0)
#define LMDIEKDNKLC_IFDPKDOFOJD_OFFSET UNITYSDK_OFFSET(0x17FB7450)
#define LMDIEKDNKLC_KMIMGEDAMCE_OFFSET UNITYSDK_OFFSET(0x17FB7180)
#define LMDIEKDNKLC_LNFENFDLMIG_OFFSET UNITYSDK_OFFSET(0x17FB6A20)
#define LMDIEKDNKLC_NAMKJOJBAOA_OFFSET UNITYSDK_OFFSET(0x17FB7430)
#define LMDIEKDNKLC_OFHECOHPAKG_OFFSET UNITYSDK_OFFSET(0x17FB6A00)
#define LMDIEKDNKLC_PHOADBJGFBE_OFFSET UNITYSDK_OFFSET(0x17FB6CE0)
#define LMDIEKDNKLC__CTOR_OFFSET UNITYSDK_OFFSET(0x17FB7130)

inline static constexpr unsigned int LMDIEKDNKLC_TypeDefinitionIndex = 13321;

class LMDIEKDNKLC : public ::System::Object
{
public:
	::Il2CppArray<::EMDGOFKIPHO*>* OJMBOGGMIKO; // 0x10
	::System::Collections::Generic::HashSet_1<::System::Int32>* LHINHLCKHNE; // 0x18
	::CJAICNOMNOA DHDJDGFNBOA; // 0x20
	::System::Collections::Generic::Dictionary_2<::System::Int32, ::System::Int32>* FLBOKGKPECD; // 0x38
	::System::Action* PLDOELOOFLL; // 0x40
	::System::Int32 IJDGGCANOFI; // 0x48
	::System::Boolean DLGKLGKOMHK; // 0x4C

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + LMDIEKDNKLC__CTOR_OFFSET))(this);
	}

	::System::Boolean OFHECOHPAKG()
	{
		return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + LMDIEKDNKLC_OFHECOHPAKG_OFFSET))(this);
	}

	::System::Void LNFENFDLMIG()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + LMDIEKDNKLC_LNFENFDLMIG_OFFSET))(this);
	}

	::System::Void PHOADBJGFBE()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + LMDIEKDNKLC_PHOADBJGFBE_OFFSET))(this);
	}

	::System::Void Finalize()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + LMDIEKDNKLC_FINALIZE_OFFSET))(this);
	}

	::System::Void FPMKEGMLNHG(::System::Action* EJGDHCIBCJH)
	{
		return ((::System::Void(*)(::PVOID, ::System::Action*))((::PBYTE)hIl2Cpp + LMDIEKDNKLC_FPMKEGMLNHG_OFFSET))(this, EJGDHCIBCJH);
	}

	::System::Void BMNMLAIJJGF(::KECPLIFGOCJ GFCJHNHLFEF)
	{
		return ((::System::Void(*)(::PVOID, ::KECPLIFGOCJ))((::PBYTE)hIl2Cpp + LMDIEKDNKLC_BMNMLAIJJGF_OFFSET))(this, GFCJHNHLFEF);
	}

	::System::Void BHLAEBMEOLO()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + LMDIEKDNKLC_BHLAEBMEOLO_OFFSET))(this);
	}

	::System::Void KMIMGEDAMCE(::Il2CppArray<::System::Byte>* LJBPECKCCEA)
	{
		return ((::System::Void(*)(::PVOID, ::Il2CppArray<::System::Byte>*))((::PBYTE)hIl2Cpp + LMDIEKDNKLC_KMIMGEDAMCE_OFFSET))(this, LJBPECKCCEA);
	}

	::System::Void NAMKJOJBAOA()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + LMDIEKDNKLC_NAMKJOJBAOA_OFFSET))(this);
	}

	::MHFGKGCPCOA* IFDPKDOFOJD(::System::Int32 MGMDLMBEDJF)
	{
		return ((::MHFGKGCPCOA*(*)(::PVOID, ::System::Int32))((::PBYTE)hIl2Cpp + LMDIEKDNKLC_IFDPKDOFOJD_OFFSET))(this, MGMDLMBEDJF);
	}

	::System::Void CHLEALKAOJO()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + LMDIEKDNKLC_CHLEALKAOJO_OFFSET))(this);
	}
};
