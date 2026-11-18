#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/FHOIMAHOKKM.h"
#include "unitysdk/KECPLIFGOCJ.h"
#include "unitysdk/System/Object.h"

class HKOBAEJBPNH;
namespace System { class Action; }
namespace System::Collections::Generic { template <typename T1, typename T2> class Dictionary_2; }
namespace System::Collections::Generic { template <typename T> class HashSet_1; }

#define PAMDHLIDHEN_BHLAEBMEOLO_OFFSET UNITYSDK_OFFSET(0x1B3453F0)
#define PAMDHLIDHEN_BMNMLAIJJGF_OFFSET UNITYSDK_OFFSET(0x1B3451B0)
#define PAMDHLIDHEN_CHLEALKAOJO_OFFSET UNITYSDK_OFFSET(0x1B345330)
#define PAMDHLIDHEN_FINALIZE_OFFSET UNITYSDK_OFFSET(0x1B3454D0)
#define PAMDHLIDHEN_FPMKEGMLNHG_OFFSET UNITYSDK_OFFSET(0x1B3451C0)
#define PAMDHLIDHEN_IFDPKDOFOJD_OFFSET UNITYSDK_OFFSET(0x1B345650)
#define PAMDHLIDHEN_KMIMGEDAMCE_OFFSET UNITYSDK_OFFSET(0x1B3458A0)
#define PAMDHLIDHEN_LNFENFDLMIG_OFFSET UNITYSDK_OFFSET(0x1B344E00)
#define PAMDHLIDHEN_NAMKJOJBAOA_OFFSET UNITYSDK_OFFSET(0x1B345880)
#define PAMDHLIDHEN_OFHECOHPAKG_OFFSET UNITYSDK_OFFSET(0x1B344DE0)
#define PAMDHLIDHEN_PHOADBJGFBE_OFFSET UNITYSDK_OFFSET(0x1B3450C0)
#define PAMDHLIDHEN__CTOR_OFFSET UNITYSDK_OFFSET(0x1B345600)

inline static constexpr unsigned int PAMDHLIDHEN_TypeDefinitionIndex = 13416;

class PAMDHLIDHEN : public ::System::Object
{
public:
	::System::Action* PLDOELOOFLL; // 0x10
	::FHOIMAHOKKM DHDJDGFNBOA; // 0x18
	::System::Collections::Generic::Dictionary_2<::System::Int32, ::System::Int32>* FLBOKGKPECD; // 0x30
	::System::Collections::Generic::HashSet_1<::System::Int32>* LHINHLCKHNE; // 0x38
	::Il2CppArray<::HKOBAEJBPNH*>* OJMBOGGMIKO; // 0x40
	::System::Boolean DLGKLGKOMHK; // 0x48
	::System::Byte _padding0[0x3];
	::System::Int32 IJDGGCANOFI; // 0x4C

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + PAMDHLIDHEN__CTOR_OFFSET))(this);
	}

	::System::Boolean OFHECOHPAKG()
	{
		return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + PAMDHLIDHEN_OFHECOHPAKG_OFFSET))(this);
	}

	::System::Void LNFENFDLMIG()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + PAMDHLIDHEN_LNFENFDLMIG_OFFSET))(this);
	}

	::System::Void FPMKEGMLNHG(::System::Action* EJGDHCIBCJH)
	{
		return ((::System::Void(*)(::PVOID, ::System::Action*))((::PBYTE)hIl2Cpp + PAMDHLIDHEN_FPMKEGMLNHG_OFFSET))(this, EJGDHCIBCJH);
	}

	::System::Void BMNMLAIJJGF(::KECPLIFGOCJ GFCJHNHLFEF)
	{
		return ((::System::Void(*)(::PVOID, ::KECPLIFGOCJ))((::PBYTE)hIl2Cpp + PAMDHLIDHEN_BMNMLAIJJGF_OFFSET))(this, GFCJHNHLFEF);
	}

	::System::Void PHOADBJGFBE()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + PAMDHLIDHEN_PHOADBJGFBE_OFFSET))(this);
	}

	::System::Void BHLAEBMEOLO()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + PAMDHLIDHEN_BHLAEBMEOLO_OFFSET))(this);
	}

	::System::Void Finalize()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + PAMDHLIDHEN_FINALIZE_OFFSET))(this);
	}

	::HKOBAEJBPNH* IFDPKDOFOJD(::System::Int32 MGMDLMBEDJF)
	{
		return ((::HKOBAEJBPNH*(*)(::PVOID, ::System::Int32))((::PBYTE)hIl2Cpp + PAMDHLIDHEN_IFDPKDOFOJD_OFFSET))(this, MGMDLMBEDJF);
	}

	::System::Void CHLEALKAOJO()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + PAMDHLIDHEN_CHLEALKAOJO_OFFSET))(this);
	}

	::System::Void KMIMGEDAMCE(::Il2CppArray<::System::Byte>* LJBPECKCCEA)
	{
		return ((::System::Void(*)(::PVOID, ::Il2CppArray<::System::Byte>*))((::PBYTE)hIl2Cpp + PAMDHLIDHEN_KMIMGEDAMCE_OFFSET))(this, LJBPECKCCEA);
	}

	::System::Void NAMKJOJBAOA()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + PAMDHLIDHEN_NAMKJOJBAOA_OFFSET))(this);
	}
};
