#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/DDEMMLKKBPA.h"
#include "unitysdk/KECPLIFGOCJ.h"
#include "unitysdk/System/Object.h"

class LJCFFEHCCLF;
namespace System { class Action; }
namespace System::Collections::Generic { template <typename T1, typename T2> class Dictionary_2; }
namespace System::Collections::Generic { template <typename T> class HashSet_1; }

#define ABKEDKFIAAI_BHLAEBMEOLO_OFFSET UNITYSDK_OFFSET(0x17741AB0)
#define ABKEDKFIAAI_BMNMLAIJJGF_OFFSET UNITYSDK_OFFSET(0x17741830)
#define ABKEDKFIAAI_CHLEALKAOJO_OFFSET UNITYSDK_OFFSET(0x17741840)
#define ABKEDKFIAAI_FINALIZE_OFFSET UNITYSDK_OFFSET(0x17741900)
#define ABKEDKFIAAI_FPMKEGMLNHG_OFFSET UNITYSDK_OFFSET(0x17741A30)
#define ABKEDKFIAAI_IFDPKDOFOJD_OFFSET UNITYSDK_OFFSET(0x17741EB0)
#define ABKEDKFIAAI_KMIMGEDAMCE_OFFSET UNITYSDK_OFFSET(0x17741C00)
#define ABKEDKFIAAI_LNFENFDLMIG_OFFSET UNITYSDK_OFFSET(0x17741480)
#define ABKEDKFIAAI_NAMKJOJBAOA_OFFSET UNITYSDK_OFFSET(0x17741BE0)
#define ABKEDKFIAAI_OFHECOHPAKG_OFFSET UNITYSDK_OFFSET(0x17741460)
#define ABKEDKFIAAI_PHOADBJGFBE_OFFSET UNITYSDK_OFFSET(0x17741740)
#define ABKEDKFIAAI__CTOR_OFFSET UNITYSDK_OFFSET(0x17741B90)

inline static constexpr unsigned int ABKEDKFIAAI_TypeDefinitionIndex = 13203;

class ABKEDKFIAAI : public ::System::Object
{
public:
	::Il2CppArray<::LJCFFEHCCLF*>* OJMBOGGMIKO; // 0x10
	::DDEMMLKKBPA DHDJDGFNBOA; // 0x18
	::System::Collections::Generic::Dictionary_2<::System::Int32, ::System::Int32>* FLBOKGKPECD; // 0x30
	::System::Collections::Generic::HashSet_1<::System::Int32>* LHINHLCKHNE; // 0x38
	::System::Action* PLDOELOOFLL; // 0x40
	::System::Boolean DLGKLGKOMHK; // 0x48
	::System::Byte _padding0[0x3];
	::System::Int32 IJDGGCANOFI; // 0x4C

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + ABKEDKFIAAI__CTOR_OFFSET))(this);
	}

	::System::Boolean OFHECOHPAKG()
	{
		return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + ABKEDKFIAAI_OFHECOHPAKG_OFFSET))(this);
	}

	::System::Void LNFENFDLMIG()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + ABKEDKFIAAI_LNFENFDLMIG_OFFSET))(this);
	}

	::System::Void PHOADBJGFBE()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + ABKEDKFIAAI_PHOADBJGFBE_OFFSET))(this);
	}

	::System::Void Finalize()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + ABKEDKFIAAI_FINALIZE_OFFSET))(this);
	}

	::System::Void FPMKEGMLNHG(::System::Action* EJGDHCIBCJH)
	{
		return ((::System::Void(*)(::PVOID, ::System::Action*))((::PBYTE)hIl2Cpp + ABKEDKFIAAI_FPMKEGMLNHG_OFFSET))(this, EJGDHCIBCJH);
	}

	::System::Void BMNMLAIJJGF(::KECPLIFGOCJ GFCJHNHLFEF)
	{
		return ((::System::Void(*)(::PVOID, ::KECPLIFGOCJ))((::PBYTE)hIl2Cpp + ABKEDKFIAAI_BMNMLAIJJGF_OFFSET))(this, GFCJHNHLFEF);
	}

	::System::Void BHLAEBMEOLO()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + ABKEDKFIAAI_BHLAEBMEOLO_OFFSET))(this);
	}

	::System::Void NAMKJOJBAOA()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + ABKEDKFIAAI_NAMKJOJBAOA_OFFSET))(this);
	}

	::System::Void KMIMGEDAMCE(::Il2CppArray<::System::Byte>* LJBPECKCCEA)
	{
		return ((::System::Void(*)(::PVOID, ::Il2CppArray<::System::Byte>*))((::PBYTE)hIl2Cpp + ABKEDKFIAAI_KMIMGEDAMCE_OFFSET))(this, LJBPECKCCEA);
	}

	::System::Void CHLEALKAOJO()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + ABKEDKFIAAI_CHLEALKAOJO_OFFSET))(this);
	}

	::LJCFFEHCCLF* IFDPKDOFOJD(::System::Int32 MGMDLMBEDJF)
	{
		return ((::LJCFFEHCCLF*(*)(::PVOID, ::System::Int32))((::PBYTE)hIl2Cpp + ABKEDKFIAAI_IFDPKDOFOJD_OFFSET))(this, MGMDLMBEDJF);
	}
};
