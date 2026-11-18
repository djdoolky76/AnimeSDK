#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/KECPLIFGOCJ.h"
#include "unitysdk/LBFKMNKNBFD.h"
#include "unitysdk/System/Object.h"

class GDFPGHJFECF;
namespace System { class Action; }
namespace System::Collections::Generic { template <typename T1, typename T2> class Dictionary_2; }
namespace System::Collections::Generic { template <typename T> class HashSet_1; }

#define PJJADHBMBAJ_BHLAEBMEOLO_OFFSET UNITYSDK_OFFSET(0x1BAC6860)
#define PJJADHBMBAJ_BMNMLAIJJGF_OFFSET UNITYSDK_OFFSET(0x1BAC6620)
#define PJJADHBMBAJ_CHLEALKAOJO_OFFSET UNITYSDK_OFFSET(0x1BAC67A0)
#define PJJADHBMBAJ_FINALIZE_OFFSET UNITYSDK_OFFSET(0x1BAC6940)
#define PJJADHBMBAJ_FPMKEGMLNHG_OFFSET UNITYSDK_OFFSET(0x1BAC6630)
#define PJJADHBMBAJ_IFDPKDOFOJD_OFFSET UNITYSDK_OFFSET(0x1BAC6AC0)
#define PJJADHBMBAJ_KMIMGEDAMCE_OFFSET UNITYSDK_OFFSET(0x1BAC6D10)
#define PJJADHBMBAJ_LNFENFDLMIG_OFFSET UNITYSDK_OFFSET(0x1BAC6270)
#define PJJADHBMBAJ_NAMKJOJBAOA_OFFSET UNITYSDK_OFFSET(0x1BAC6CF0)
#define PJJADHBMBAJ_OFHECOHPAKG_OFFSET UNITYSDK_OFFSET(0x1BAC6250)
#define PJJADHBMBAJ_PHOADBJGFBE_OFFSET UNITYSDK_OFFSET(0x1BAC6530)
#define PJJADHBMBAJ__CTOR_OFFSET UNITYSDK_OFFSET(0x1BAC6A70)

inline static constexpr unsigned int PJJADHBMBAJ_TypeDefinitionIndex = 15953;

class PJJADHBMBAJ : public ::System::Object
{
public:
	::LBFKMNKNBFD DHDJDGFNBOA; // 0x10
	::System::Action* PLDOELOOFLL; // 0x28
	::Il2CppArray<::GDFPGHJFECF*>* OJMBOGGMIKO; // 0x30
	::System::Collections::Generic::HashSet_1<::System::Int32>* LHINHLCKHNE; // 0x38
	::System::Collections::Generic::Dictionary_2<::System::Int32, ::System::Int32>* FLBOKGKPECD; // 0x40
	::System::Boolean DLGKLGKOMHK; // 0x48
	::System::Byte _padding0[0x3];
	::System::Int32 IJDGGCANOFI; // 0x4C

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + PJJADHBMBAJ__CTOR_OFFSET))(this);
	}

	::System::Boolean OFHECOHPAKG()
	{
		return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + PJJADHBMBAJ_OFHECOHPAKG_OFFSET))(this);
	}

	::System::Void LNFENFDLMIG()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + PJJADHBMBAJ_LNFENFDLMIG_OFFSET))(this);
	}

	::System::Void FPMKEGMLNHG(::System::Action* EJGDHCIBCJH)
	{
		return ((::System::Void(*)(::PVOID, ::System::Action*))((::PBYTE)hIl2Cpp + PJJADHBMBAJ_FPMKEGMLNHG_OFFSET))(this, EJGDHCIBCJH);
	}

	::System::Void BMNMLAIJJGF(::KECPLIFGOCJ GFCJHNHLFEF)
	{
		return ((::System::Void(*)(::PVOID, ::KECPLIFGOCJ))((::PBYTE)hIl2Cpp + PJJADHBMBAJ_BMNMLAIJJGF_OFFSET))(this, GFCJHNHLFEF);
	}

	::System::Void PHOADBJGFBE()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + PJJADHBMBAJ_PHOADBJGFBE_OFFSET))(this);
	}

	::System::Void BHLAEBMEOLO()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + PJJADHBMBAJ_BHLAEBMEOLO_OFFSET))(this);
	}

	::System::Void Finalize()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + PJJADHBMBAJ_FINALIZE_OFFSET))(this);
	}

	::GDFPGHJFECF* IFDPKDOFOJD(::System::Int32 MGMDLMBEDJF)
	{
		return ((::GDFPGHJFECF*(*)(::PVOID, ::System::Int32))((::PBYTE)hIl2Cpp + PJJADHBMBAJ_IFDPKDOFOJD_OFFSET))(this, MGMDLMBEDJF);
	}

	::System::Void KMIMGEDAMCE(::Il2CppArray<::System::Byte>* LJBPECKCCEA)
	{
		return ((::System::Void(*)(::PVOID, ::Il2CppArray<::System::Byte>*))((::PBYTE)hIl2Cpp + PJJADHBMBAJ_KMIMGEDAMCE_OFFSET))(this, LJBPECKCCEA);
	}

	::System::Void NAMKJOJBAOA()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + PJJADHBMBAJ_NAMKJOJBAOA_OFFSET))(this);
	}

	::System::Void CHLEALKAOJO()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + PJJADHBMBAJ_CHLEALKAOJO_OFFSET))(this);
	}
};
