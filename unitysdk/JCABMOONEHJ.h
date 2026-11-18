#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/KECPLIFGOCJ.h"
#include "unitysdk/LJEHCOKEBCC.h"
#include "unitysdk/System/Object.h"

class FILMMAHCEPJ;
namespace System { class Action; }
namespace System::Collections::Generic { template <typename T1, typename T2> class Dictionary_2; }
namespace System::Collections::Generic { template <typename T> class HashSet_1; }

#define JCABMOONEHJ_BHLAEBMEOLO_OFFSET UNITYSDK_OFFSET(0x1B62EF40)
#define JCABMOONEHJ_BMNMLAIJJGF_OFFSET UNITYSDK_OFFSET(0x1B62ECC0)
#define JCABMOONEHJ_CHLEALKAOJO_OFFSET UNITYSDK_OFFSET(0x1B62ECD0)
#define JCABMOONEHJ_FINALIZE_OFFSET UNITYSDK_OFFSET(0x1B62ED90)
#define JCABMOONEHJ_FPMKEGMLNHG_OFFSET UNITYSDK_OFFSET(0x1B62EEC0)
#define JCABMOONEHJ_IFDPKDOFOJD_OFFSET UNITYSDK_OFFSET(0x1B62F090)
#define JCABMOONEHJ_KMIMGEDAMCE_OFFSET UNITYSDK_OFFSET(0x1B62F2C0)
#define JCABMOONEHJ_LNFENFDLMIG_OFFSET UNITYSDK_OFFSET(0x1B62E910)
#define JCABMOONEHJ_NAMKJOJBAOA_OFFSET UNITYSDK_OFFSET(0x1B62F070)
#define JCABMOONEHJ_OFHECOHPAKG_OFFSET UNITYSDK_OFFSET(0x1B62E8F0)
#define JCABMOONEHJ_PHOADBJGFBE_OFFSET UNITYSDK_OFFSET(0x1B62EBD0)
#define JCABMOONEHJ__CTOR_OFFSET UNITYSDK_OFFSET(0x1B62F020)

inline static constexpr unsigned int JCABMOONEHJ_TypeDefinitionIndex = 15184;

class JCABMOONEHJ : public ::System::Object
{
public:
	::Il2CppArray<::FILMMAHCEPJ*>* OJMBOGGMIKO; // 0x10
	::LJEHCOKEBCC DHDJDGFNBOA; // 0x18
	::System::Collections::Generic::Dictionary_2<::System::Int32, ::System::Int32>* FLBOKGKPECD; // 0x30
	::System::Action* PLDOELOOFLL; // 0x38
	::System::Collections::Generic::HashSet_1<::System::Int32>* LHINHLCKHNE; // 0x40
	::System::Boolean DLGKLGKOMHK; // 0x48
	::System::Byte _padding0[0x3];
	::System::Int32 IJDGGCANOFI; // 0x4C

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + JCABMOONEHJ__CTOR_OFFSET))(this);
	}

	::System::Boolean OFHECOHPAKG()
	{
		return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + JCABMOONEHJ_OFHECOHPAKG_OFFSET))(this);
	}

	::System::Void LNFENFDLMIG()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + JCABMOONEHJ_LNFENFDLMIG_OFFSET))(this);
	}

	::System::Void PHOADBJGFBE()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + JCABMOONEHJ_PHOADBJGFBE_OFFSET))(this);
	}

	::System::Void Finalize()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + JCABMOONEHJ_FINALIZE_OFFSET))(this);
	}

	::System::Void FPMKEGMLNHG(::System::Action* EJGDHCIBCJH)
	{
		return ((::System::Void(*)(::PVOID, ::System::Action*))((::PBYTE)hIl2Cpp + JCABMOONEHJ_FPMKEGMLNHG_OFFSET))(this, EJGDHCIBCJH);
	}

	::System::Void BMNMLAIJJGF(::KECPLIFGOCJ GFCJHNHLFEF)
	{
		return ((::System::Void(*)(::PVOID, ::KECPLIFGOCJ))((::PBYTE)hIl2Cpp + JCABMOONEHJ_BMNMLAIJJGF_OFFSET))(this, GFCJHNHLFEF);
	}

	::System::Void BHLAEBMEOLO()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + JCABMOONEHJ_BHLAEBMEOLO_OFFSET))(this);
	}

	::System::Void NAMKJOJBAOA()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + JCABMOONEHJ_NAMKJOJBAOA_OFFSET))(this);
	}

	::System::Void CHLEALKAOJO()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + JCABMOONEHJ_CHLEALKAOJO_OFFSET))(this);
	}

	::FILMMAHCEPJ* IFDPKDOFOJD(::System::Int32 MGMDLMBEDJF)
	{
		return ((::FILMMAHCEPJ*(*)(::PVOID, ::System::Int32))((::PBYTE)hIl2Cpp + JCABMOONEHJ_IFDPKDOFOJD_OFFSET))(this, MGMDLMBEDJF);
	}

	::System::Void KMIMGEDAMCE(::Il2CppArray<::System::Byte>* LJBPECKCCEA)
	{
		return ((::System::Void(*)(::PVOID, ::Il2CppArray<::System::Byte>*))((::PBYTE)hIl2Cpp + JCABMOONEHJ_KMIMGEDAMCE_OFFSET))(this, LJBPECKCCEA);
	}
};
