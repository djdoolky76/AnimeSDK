#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/KECPLIFGOCJ.h"
#include "unitysdk/MMEHACCEOGE.h"
#include "unitysdk/System/Object.h"

class HDGEPIGEMFF;
namespace System { class Action; }
namespace System::Collections::Generic { template <typename T1, typename T2> class Dictionary_2; }
namespace System::Collections::Generic { template <typename T> class HashSet_1; }

#define POHGIMDGNOB_BHLAEBMEOLO_OFFSET UNITYSDK_OFFSET(0x1BF946D0)
#define POHGIMDGNOB_BMNMLAIJJGF_OFFSET UNITYSDK_OFFSET(0x1BF944A0)
#define POHGIMDGNOB_CHLEALKAOJO_OFFSET UNITYSDK_OFFSET(0x1BF94610)
#define POHGIMDGNOB_FINALIZE_OFFSET UNITYSDK_OFFSET(0x1BF947B0)
#define POHGIMDGNOB_FPMKEGMLNHG_OFFSET UNITYSDK_OFFSET(0x1BF944B0)
#define POHGIMDGNOB_IFDPKDOFOJD_OFFSET UNITYSDK_OFFSET(0x1BF94930)
#define POHGIMDGNOB_KMIMGEDAMCE_OFFSET UNITYSDK_OFFSET(0x1BF94B80)
#define POHGIMDGNOB_LNFENFDLMIG_OFFSET UNITYSDK_OFFSET(0x1BF94100)
#define POHGIMDGNOB_NAMKJOJBAOA_OFFSET UNITYSDK_OFFSET(0x1BF94B60)
#define POHGIMDGNOB_OFHECOHPAKG_OFFSET UNITYSDK_OFFSET(0x1BF940E0)
#define POHGIMDGNOB_PHOADBJGFBE_OFFSET UNITYSDK_OFFSET(0x1BF943C0)
#define POHGIMDGNOB__CTOR_OFFSET UNITYSDK_OFFSET(0x1BF948E0)

inline static constexpr unsigned int POHGIMDGNOB_TypeDefinitionIndex = 13535;

class POHGIMDGNOB : public ::System::Object
{
public:
	::MMEHACCEOGE DHDJDGFNBOA; // 0x10
	::Il2CppArray<::HDGEPIGEMFF*>* OJMBOGGMIKO; // 0x28
	::System::Collections::Generic::Dictionary_2<::System::Int32, ::System::Int32>* FLBOKGKPECD; // 0x30
	::System::Action* PLDOELOOFLL; // 0x38
	::System::Collections::Generic::HashSet_1<::System::Int32>* LHINHLCKHNE; // 0x40
	::System::Boolean DLGKLGKOMHK; // 0x48
	::System::Byte _padding0[0x3];
	::System::Int32 IJDGGCANOFI; // 0x4C

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + POHGIMDGNOB__CTOR_OFFSET))(this);
	}

	::System::Boolean OFHECOHPAKG()
	{
		return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + POHGIMDGNOB_OFHECOHPAKG_OFFSET))(this);
	}

	::System::Void LNFENFDLMIG()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + POHGIMDGNOB_LNFENFDLMIG_OFFSET))(this);
	}

	::System::Void FPMKEGMLNHG(::System::Action* EJGDHCIBCJH)
	{
		return ((::System::Void(*)(::PVOID, ::System::Action*))((::PBYTE)hIl2Cpp + POHGIMDGNOB_FPMKEGMLNHG_OFFSET))(this, EJGDHCIBCJH);
	}

	::System::Void BMNMLAIJJGF(::KECPLIFGOCJ GFCJHNHLFEF)
	{
		return ((::System::Void(*)(::PVOID, ::KECPLIFGOCJ))((::PBYTE)hIl2Cpp + POHGIMDGNOB_BMNMLAIJJGF_OFFSET))(this, GFCJHNHLFEF);
	}

	::System::Void PHOADBJGFBE()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + POHGIMDGNOB_PHOADBJGFBE_OFFSET))(this);
	}

	::System::Void BHLAEBMEOLO()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + POHGIMDGNOB_BHLAEBMEOLO_OFFSET))(this);
	}

	::System::Void Finalize()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + POHGIMDGNOB_FINALIZE_OFFSET))(this);
	}

	::HDGEPIGEMFF* IFDPKDOFOJD(::System::Int32 MGMDLMBEDJF)
	{
		return ((::HDGEPIGEMFF*(*)(::PVOID, ::System::Int32))((::PBYTE)hIl2Cpp + POHGIMDGNOB_IFDPKDOFOJD_OFFSET))(this, MGMDLMBEDJF);
	}

	::System::Void CHLEALKAOJO()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + POHGIMDGNOB_CHLEALKAOJO_OFFSET))(this);
	}

	::System::Void KMIMGEDAMCE(::Il2CppArray<::System::Byte>* LJBPECKCCEA)
	{
		return ((::System::Void(*)(::PVOID, ::Il2CppArray<::System::Byte>*))((::PBYTE)hIl2Cpp + POHGIMDGNOB_KMIMGEDAMCE_OFFSET))(this, LJBPECKCCEA);
	}

	::System::Void NAMKJOJBAOA()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + POHGIMDGNOB_NAMKJOJBAOA_OFFSET))(this);
	}
};
