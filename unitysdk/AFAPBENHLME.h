#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/FEFJCJNLOBE.h"
#include "unitysdk/KECPLIFGOCJ.h"
#include "unitysdk/System/Object.h"

class CFBNCNNJFCC;
namespace System { class Action; }
namespace System::Collections::Generic { template <typename T1, typename T2> class Dictionary_2; }

#define AFAPBENHLME_BHLAEBMEOLO_OFFSET UNITYSDK_OFFSET(0x1576E7B0)
#define AFAPBENHLME_BMNMLAIJJGF_OFFSET UNITYSDK_OFFSET(0x1576E580)
#define AFAPBENHLME_CHLEALKAOJO_OFFSET UNITYSDK_OFFSET(0x1576E6F0)
#define AFAPBENHLME_FINALIZE_OFFSET UNITYSDK_OFFSET(0x1576E890)
#define AFAPBENHLME_FPMKEGMLNHG_OFFSET UNITYSDK_OFFSET(0x1576E590)
#define AFAPBENHLME_IFDPKDOFOJD_OFFSET UNITYSDK_OFFSET(0x1576E9D0)
#define AFAPBENHLME_KMIMGEDAMCE_OFFSET UNITYSDK_OFFSET(0x1576EBE0)
#define AFAPBENHLME_LNFENFDLMIG_OFFSET UNITYSDK_OFFSET(0x1576E1E0)
#define AFAPBENHLME_NAMKJOJBAOA_OFFSET UNITYSDK_OFFSET(0x1576EBC0)
#define AFAPBENHLME_OFHECOHPAKG_OFFSET UNITYSDK_OFFSET(0x1576E1C0)
#define AFAPBENHLME_PHOADBJGFBE_OFFSET UNITYSDK_OFFSET(0x1576E4A0)
#define AFAPBENHLME__CTOR_OFFSET UNITYSDK_OFFSET(0x1576E9C0)

inline static constexpr unsigned int AFAPBENHLME_TypeDefinitionIndex = 17404;

class AFAPBENHLME : public ::System::Object
{
public:
	::Il2CppArray<::CFBNCNNJFCC*>* OJMBOGGMIKO; // 0x10
	::System::Collections::Generic::Dictionary_2<::System::Int32, ::System::Int32>* FLBOKGKPECD; // 0x18
	::System::Action* PLDOELOOFLL; // 0x20
	::FEFJCJNLOBE DHDJDGFNBOA; // 0x28
	::System::Boolean DLGKLGKOMHK; // 0x40
	::System::Byte _padding0[0x3];
	::System::Int32 IJDGGCANOFI; // 0x44

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + AFAPBENHLME__CTOR_OFFSET))(this);
	}

	::System::Boolean OFHECOHPAKG()
	{
		return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + AFAPBENHLME_OFHECOHPAKG_OFFSET))(this);
	}

	::System::Void LNFENFDLMIG()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + AFAPBENHLME_LNFENFDLMIG_OFFSET))(this);
	}

	::System::Void FPMKEGMLNHG(::System::Action* EJGDHCIBCJH)
	{
		return ((::System::Void(*)(::PVOID, ::System::Action*))((::PBYTE)hIl2Cpp + AFAPBENHLME_FPMKEGMLNHG_OFFSET))(this, EJGDHCIBCJH);
	}

	::System::Void BMNMLAIJJGF(::KECPLIFGOCJ GFCJHNHLFEF)
	{
		return ((::System::Void(*)(::PVOID, ::KECPLIFGOCJ))((::PBYTE)hIl2Cpp + AFAPBENHLME_BMNMLAIJJGF_OFFSET))(this, GFCJHNHLFEF);
	}

	::System::Void PHOADBJGFBE()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + AFAPBENHLME_PHOADBJGFBE_OFFSET))(this);
	}

	::System::Void BHLAEBMEOLO()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + AFAPBENHLME_BHLAEBMEOLO_OFFSET))(this);
	}

	::System::Void Finalize()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + AFAPBENHLME_FINALIZE_OFFSET))(this);
	}

	::System::Void CHLEALKAOJO()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + AFAPBENHLME_CHLEALKAOJO_OFFSET))(this);
	}

	::CFBNCNNJFCC* IFDPKDOFOJD(::System::Int32 MGMDLMBEDJF)
	{
		return ((::CFBNCNNJFCC*(*)(::PVOID, ::System::Int32))((::PBYTE)hIl2Cpp + AFAPBENHLME_IFDPKDOFOJD_OFFSET))(this, MGMDLMBEDJF);
	}

	::System::Void NAMKJOJBAOA()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + AFAPBENHLME_NAMKJOJBAOA_OFFSET))(this);
	}

	::System::Void KMIMGEDAMCE(::Il2CppArray<::System::Byte>* LJBPECKCCEA)
	{
		return ((::System::Void(*)(::PVOID, ::Il2CppArray<::System::Byte>*))((::PBYTE)hIl2Cpp + AFAPBENHLME_KMIMGEDAMCE_OFFSET))(this, LJBPECKCCEA);
	}
};
