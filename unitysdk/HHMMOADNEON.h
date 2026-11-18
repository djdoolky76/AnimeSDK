#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/KECPLIFGOCJ.h"
#include "unitysdk/NDHJOICOFGM.h"
#include "unitysdk/System/Object.h"

class GFBNEMLLJPF;
namespace System { class Action; }
namespace System::Collections::Generic { template <typename T1, typename T2> class Dictionary_2; }
namespace System::Collections::Generic { template <typename T> class HashSet_1; }

#define HHMMOADNEON_BHLAEBMEOLO_OFFSET UNITYSDK_OFFSET(0x18BAF970)
#define HHMMOADNEON_BMNMLAIJJGF_OFFSET UNITYSDK_OFFSET(0x18BAF6F0)
#define HHMMOADNEON_CHLEALKAOJO_OFFSET UNITYSDK_OFFSET(0x18BAF700)
#define HHMMOADNEON_FINALIZE_OFFSET UNITYSDK_OFFSET(0x18BAF7C0)
#define HHMMOADNEON_FPMKEGMLNHG_OFFSET UNITYSDK_OFFSET(0x18BAF8F0)
#define HHMMOADNEON_IFDPKDOFOJD_OFFSET UNITYSDK_OFFSET(0x18BAFAA0)
#define HHMMOADNEON_KMIMGEDAMCE_OFFSET UNITYSDK_OFFSET(0x18BAFCF0)
#define HHMMOADNEON_LNFENFDLMIG_OFFSET UNITYSDK_OFFSET(0x18BAF350)
#define HHMMOADNEON_NAMKJOJBAOA_OFFSET UNITYSDK_OFFSET(0x18BAFCD0)
#define HHMMOADNEON_OFHECOHPAKG_OFFSET UNITYSDK_OFFSET(0x18BAF330)
#define HHMMOADNEON_PHOADBJGFBE_OFFSET UNITYSDK_OFFSET(0x18BAF610)
#define HHMMOADNEON__CTOR_OFFSET UNITYSDK_OFFSET(0x18BAFA50)

inline static constexpr unsigned int HHMMOADNEON_TypeDefinitionIndex = 13819;

class HHMMOADNEON : public ::System::Object
{
public:
	::System::Action* PLDOELOOFLL; // 0x10
	::System::Collections::Generic::HashSet_1<::System::Int32>* LHINHLCKHNE; // 0x18
	::Il2CppArray<::GFBNEMLLJPF*>* OJMBOGGMIKO; // 0x20
	::System::Collections::Generic::Dictionary_2<::System::Int32, ::System::Int32>* FLBOKGKPECD; // 0x28
	::NDHJOICOFGM DHDJDGFNBOA; // 0x30
	::System::Boolean DLGKLGKOMHK; // 0x48
	::System::Byte _padding0[0x3];
	::System::Int32 IJDGGCANOFI; // 0x4C

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + HHMMOADNEON__CTOR_OFFSET))(this);
	}

	::System::Boolean OFHECOHPAKG()
	{
		return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + HHMMOADNEON_OFHECOHPAKG_OFFSET))(this);
	}

	::System::Void LNFENFDLMIG()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + HHMMOADNEON_LNFENFDLMIG_OFFSET))(this);
	}

	::System::Void PHOADBJGFBE()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + HHMMOADNEON_PHOADBJGFBE_OFFSET))(this);
	}

	::System::Void Finalize()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + HHMMOADNEON_FINALIZE_OFFSET))(this);
	}

	::System::Void FPMKEGMLNHG(::System::Action* EJGDHCIBCJH)
	{
		return ((::System::Void(*)(::PVOID, ::System::Action*))((::PBYTE)hIl2Cpp + HHMMOADNEON_FPMKEGMLNHG_OFFSET))(this, EJGDHCIBCJH);
	}

	::System::Void BMNMLAIJJGF(::KECPLIFGOCJ GFCJHNHLFEF)
	{
		return ((::System::Void(*)(::PVOID, ::KECPLIFGOCJ))((::PBYTE)hIl2Cpp + HHMMOADNEON_BMNMLAIJJGF_OFFSET))(this, GFCJHNHLFEF);
	}

	::System::Void BHLAEBMEOLO()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + HHMMOADNEON_BHLAEBMEOLO_OFFSET))(this);
	}

	::GFBNEMLLJPF* IFDPKDOFOJD(::System::Int32 MGMDLMBEDJF)
	{
		return ((::GFBNEMLLJPF*(*)(::PVOID, ::System::Int32))((::PBYTE)hIl2Cpp + HHMMOADNEON_IFDPKDOFOJD_OFFSET))(this, MGMDLMBEDJF);
	}

	::System::Void CHLEALKAOJO()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + HHMMOADNEON_CHLEALKAOJO_OFFSET))(this);
	}

	::System::Void NAMKJOJBAOA()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + HHMMOADNEON_NAMKJOJBAOA_OFFSET))(this);
	}

	::System::Void KMIMGEDAMCE(::Il2CppArray<::System::Byte>* LJBPECKCCEA)
	{
		return ((::System::Void(*)(::PVOID, ::Il2CppArray<::System::Byte>*))((::PBYTE)hIl2Cpp + HHMMOADNEON_KMIMGEDAMCE_OFFSET))(this, LJBPECKCCEA);
	}
};
