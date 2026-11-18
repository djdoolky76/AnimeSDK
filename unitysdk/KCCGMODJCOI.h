#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/KECPLIFGOCJ.h"
#include "unitysdk/MBFMBACIIBH.h"
#include "unitysdk/System/Object.h"

class AAKADCIFGAH;
namespace System { class Action; }
namespace System::Collections::Generic { template <typename T1, typename T2> class Dictionary_2; }
namespace System::Collections::Generic { template <typename T> class HashSet_1; }

#define KCCGMODJCOI_BHLAEBMEOLO_OFFSET UNITYSDK_OFFSET(0x16120BF0)
#define KCCGMODJCOI_BMNMLAIJJGF_OFFSET UNITYSDK_OFFSET(0x161209B0)
#define KCCGMODJCOI_CHLEALKAOJO_OFFSET UNITYSDK_OFFSET(0x16120B30)
#define KCCGMODJCOI_FINALIZE_OFFSET UNITYSDK_OFFSET(0x16120CD0)
#define KCCGMODJCOI_FPMKEGMLNHG_OFFSET UNITYSDK_OFFSET(0x161209C0)
#define KCCGMODJCOI_IFDPKDOFOJD_OFFSET UNITYSDK_OFFSET(0x16121040)
#define KCCGMODJCOI_KMIMGEDAMCE_OFFSET UNITYSDK_OFFSET(0x16120E70)
#define KCCGMODJCOI_LNFENFDLMIG_OFFSET UNITYSDK_OFFSET(0x16120600)
#define KCCGMODJCOI_NAMKJOJBAOA_OFFSET UNITYSDK_OFFSET(0x16120E50)
#define KCCGMODJCOI_OFHECOHPAKG_OFFSET UNITYSDK_OFFSET(0x161205E0)
#define KCCGMODJCOI_PHOADBJGFBE_OFFSET UNITYSDK_OFFSET(0x161208C0)
#define KCCGMODJCOI__CTOR_OFFSET UNITYSDK_OFFSET(0x16120E00)

inline static constexpr unsigned int KCCGMODJCOI_TypeDefinitionIndex = 16542;

class KCCGMODJCOI : public ::System::Object
{
public:
	::Il2CppArray<::AAKADCIFGAH*>* OJMBOGGMIKO; // 0x10
	::MBFMBACIIBH DHDJDGFNBOA; // 0x18
	::System::Action* PLDOELOOFLL; // 0x30
	::System::Collections::Generic::Dictionary_2<::System::Int32, ::System::Int32>* FLBOKGKPECD; // 0x38
	::System::Collections::Generic::HashSet_1<::System::Int32>* LHINHLCKHNE; // 0x40
	::System::Boolean DLGKLGKOMHK; // 0x48
	::System::Byte _padding0[0x3];
	::System::Int32 IJDGGCANOFI; // 0x4C

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + KCCGMODJCOI__CTOR_OFFSET))(this);
	}

	::System::Boolean OFHECOHPAKG()
	{
		return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + KCCGMODJCOI_OFHECOHPAKG_OFFSET))(this);
	}

	::System::Void LNFENFDLMIG()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + KCCGMODJCOI_LNFENFDLMIG_OFFSET))(this);
	}

	::System::Void FPMKEGMLNHG(::System::Action* EJGDHCIBCJH)
	{
		return ((::System::Void(*)(::PVOID, ::System::Action*))((::PBYTE)hIl2Cpp + KCCGMODJCOI_FPMKEGMLNHG_OFFSET))(this, EJGDHCIBCJH);
	}

	::System::Void BMNMLAIJJGF(::KECPLIFGOCJ GFCJHNHLFEF)
	{
		return ((::System::Void(*)(::PVOID, ::KECPLIFGOCJ))((::PBYTE)hIl2Cpp + KCCGMODJCOI_BMNMLAIJJGF_OFFSET))(this, GFCJHNHLFEF);
	}

	::System::Void PHOADBJGFBE()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + KCCGMODJCOI_PHOADBJGFBE_OFFSET))(this);
	}

	::System::Void BHLAEBMEOLO()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + KCCGMODJCOI_BHLAEBMEOLO_OFFSET))(this);
	}

	::System::Void Finalize()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + KCCGMODJCOI_FINALIZE_OFFSET))(this);
	}

	::System::Void NAMKJOJBAOA()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + KCCGMODJCOI_NAMKJOJBAOA_OFFSET))(this);
	}

	::System::Void KMIMGEDAMCE(::Il2CppArray<::System::Byte>* LJBPECKCCEA)
	{
		return ((::System::Void(*)(::PVOID, ::Il2CppArray<::System::Byte>*))((::PBYTE)hIl2Cpp + KCCGMODJCOI_KMIMGEDAMCE_OFFSET))(this, LJBPECKCCEA);
	}

	::System::Void CHLEALKAOJO()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + KCCGMODJCOI_CHLEALKAOJO_OFFSET))(this);
	}

	::AAKADCIFGAH* IFDPKDOFOJD(::System::Int32 MGMDLMBEDJF)
	{
		return ((::AAKADCIFGAH*(*)(::PVOID, ::System::Int32))((::PBYTE)hIl2Cpp + KCCGMODJCOI_IFDPKDOFOJD_OFFSET))(this, MGMDLMBEDJF);
	}
};
