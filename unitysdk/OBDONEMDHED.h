#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/KECPLIFGOCJ.h"
#include "unitysdk/KNJJDHNGDLM.h"
#include "unitysdk/System/Object.h"

class BELLLMMNGMA;
namespace System { class Action; }
namespace System::Collections::Generic { template <typename T1, typename T2> class Dictionary_2; }
namespace System::Collections::Generic { template <typename T> class HashSet_1; }

#define OBDONEMDHED_BHLAEBMEOLO_OFFSET UNITYSDK_OFFSET(0x1CFF45E0)
#define OBDONEMDHED_BMNMLAIJJGF_OFFSET UNITYSDK_OFFSET(0x1CFF43A0)
#define OBDONEMDHED_CHLEALKAOJO_OFFSET UNITYSDK_OFFSET(0x1CFF4520)
#define OBDONEMDHED_FINALIZE_OFFSET UNITYSDK_OFFSET(0x1CFF46C0)
#define OBDONEMDHED_FPMKEGMLNHG_OFFSET UNITYSDK_OFFSET(0x1CFF43B0)
#define OBDONEMDHED_IFDPKDOFOJD_OFFSET UNITYSDK_OFFSET(0x1CFF4840)
#define OBDONEMDHED_KMIMGEDAMCE_OFFSET UNITYSDK_OFFSET(0x1CFF4A90)
#define OBDONEMDHED_LNFENFDLMIG_OFFSET UNITYSDK_OFFSET(0x1CFF3FF0)
#define OBDONEMDHED_NAMKJOJBAOA_OFFSET UNITYSDK_OFFSET(0x1CFF4A70)
#define OBDONEMDHED_OFHECOHPAKG_OFFSET UNITYSDK_OFFSET(0x1CFF3FD0)
#define OBDONEMDHED_PHOADBJGFBE_OFFSET UNITYSDK_OFFSET(0x1CFF42B0)
#define OBDONEMDHED__CTOR_OFFSET UNITYSDK_OFFSET(0x1CFF47F0)

inline static constexpr unsigned int OBDONEMDHED_TypeDefinitionIndex = 9976;

class OBDONEMDHED : public ::System::Object
{
public:
	::Il2CppArray<::BELLLMMNGMA*>* OJMBOGGMIKO; // 0x10
	::KNJJDHNGDLM DHDJDGFNBOA; // 0x18
	::System::Collections::Generic::Dictionary_2<::System::Int32, ::System::Int32>* FLBOKGKPECD; // 0x30
	::System::Action* PLDOELOOFLL; // 0x38
	::System::Collections::Generic::HashSet_1<::System::Int32>* LHINHLCKHNE; // 0x40
	::System::Boolean DLGKLGKOMHK; // 0x48
	::System::Byte _padding0[0x3];
	::System::Int32 IJDGGCANOFI; // 0x4C

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + OBDONEMDHED__CTOR_OFFSET))(this);
	}

	::System::Boolean OFHECOHPAKG()
	{
		return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + OBDONEMDHED_OFHECOHPAKG_OFFSET))(this);
	}

	::System::Void LNFENFDLMIG()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + OBDONEMDHED_LNFENFDLMIG_OFFSET))(this);
	}

	::System::Void FPMKEGMLNHG(::System::Action* EJGDHCIBCJH)
	{
		return ((::System::Void(*)(::PVOID, ::System::Action*))((::PBYTE)hIl2Cpp + OBDONEMDHED_FPMKEGMLNHG_OFFSET))(this, EJGDHCIBCJH);
	}

	::System::Void BMNMLAIJJGF(::KECPLIFGOCJ GFCJHNHLFEF)
	{
		return ((::System::Void(*)(::PVOID, ::KECPLIFGOCJ))((::PBYTE)hIl2Cpp + OBDONEMDHED_BMNMLAIJJGF_OFFSET))(this, GFCJHNHLFEF);
	}

	::System::Void PHOADBJGFBE()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + OBDONEMDHED_PHOADBJGFBE_OFFSET))(this);
	}

	::System::Void BHLAEBMEOLO()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + OBDONEMDHED_BHLAEBMEOLO_OFFSET))(this);
	}

	::System::Void Finalize()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + OBDONEMDHED_FINALIZE_OFFSET))(this);
	}

	::BELLLMMNGMA* IFDPKDOFOJD(::System::Int32 MGMDLMBEDJF)
	{
		return ((::BELLLMMNGMA*(*)(::PVOID, ::System::Int32))((::PBYTE)hIl2Cpp + OBDONEMDHED_IFDPKDOFOJD_OFFSET))(this, MGMDLMBEDJF);
	}

	::System::Void KMIMGEDAMCE(::Il2CppArray<::System::Byte>* LJBPECKCCEA)
	{
		return ((::System::Void(*)(::PVOID, ::Il2CppArray<::System::Byte>*))((::PBYTE)hIl2Cpp + OBDONEMDHED_KMIMGEDAMCE_OFFSET))(this, LJBPECKCCEA);
	}

	::System::Void CHLEALKAOJO()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + OBDONEMDHED_CHLEALKAOJO_OFFSET))(this);
	}

	::System::Void NAMKJOJBAOA()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + OBDONEMDHED_NAMKJOJBAOA_OFFSET))(this);
	}
};
