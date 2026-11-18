#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/JCCANNLBCFO.h"
#include "unitysdk/KECPLIFGOCJ.h"
#include "unitysdk/System/Object.h"

class FJCKCOBLCDE;
namespace System { class Action; }
namespace System::Collections::Generic { template <typename T1, typename T2> class Dictionary_2; }

#define KANLBDGGIGJ_BHLAEBMEOLO_OFFSET UNITYSDK_OFFSET(0x1A506E30)
#define KANLBDGGIGJ_BMNMLAIJJGF_OFFSET UNITYSDK_OFFSET(0x1A506BF0)
#define KANLBDGGIGJ_CHLEALKAOJO_OFFSET UNITYSDK_OFFSET(0x1A506D70)
#define KANLBDGGIGJ_FINALIZE_OFFSET UNITYSDK_OFFSET(0x1A506F10)
#define KANLBDGGIGJ_FPMKEGMLNHG_OFFSET UNITYSDK_OFFSET(0x1A506C00)
#define KANLBDGGIGJ_KMIMGEDAMCE_OFFSET UNITYSDK_OFFSET(0x1A507050)
#define KANLBDGGIGJ_LNFENFDLMIG_OFFSET UNITYSDK_OFFSET(0x1A506840)
#define KANLBDGGIGJ_OFHECOHPAKG_OFFSET UNITYSDK_OFFSET(0x1A506820)
#define KANLBDGGIGJ_PHOADBJGFBE_OFFSET UNITYSDK_OFFSET(0x1A506B00)
#define KANLBDGGIGJ__CTOR_OFFSET UNITYSDK_OFFSET(0x1A507040)

inline static constexpr unsigned int KANLBDGGIGJ_TypeDefinitionIndex = 14721;

class KANLBDGGIGJ : public ::System::Object
{
public:
	::Il2CppArray<::FJCKCOBLCDE*>* OJMBOGGMIKO; // 0x10
	::System::Action* PLDOELOOFLL; // 0x18
	::JCCANNLBCFO DHDJDGFNBOA; // 0x20
	::System::Collections::Generic::Dictionary_2<::System::Int32, ::System::Int32>* FLBOKGKPECD; // 0x38
	::System::Boolean DLGKLGKOMHK; // 0x40
	::System::Byte _padding0[0x3];
	::System::Int32 IJDGGCANOFI; // 0x44

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + KANLBDGGIGJ__CTOR_OFFSET))(this);
	}

	::System::Boolean OFHECOHPAKG()
	{
		return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + KANLBDGGIGJ_OFHECOHPAKG_OFFSET))(this);
	}

	::System::Void LNFENFDLMIG()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + KANLBDGGIGJ_LNFENFDLMIG_OFFSET))(this);
	}

	::System::Void FPMKEGMLNHG(::System::Action* EJGDHCIBCJH)
	{
		return ((::System::Void(*)(::PVOID, ::System::Action*))((::PBYTE)hIl2Cpp + KANLBDGGIGJ_FPMKEGMLNHG_OFFSET))(this, EJGDHCIBCJH);
	}

	::System::Void BMNMLAIJJGF(::KECPLIFGOCJ GFCJHNHLFEF)
	{
		return ((::System::Void(*)(::PVOID, ::KECPLIFGOCJ))((::PBYTE)hIl2Cpp + KANLBDGGIGJ_BMNMLAIJJGF_OFFSET))(this, GFCJHNHLFEF);
	}

	::System::Void PHOADBJGFBE()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + KANLBDGGIGJ_PHOADBJGFBE_OFFSET))(this);
	}

	::System::Void BHLAEBMEOLO()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + KANLBDGGIGJ_BHLAEBMEOLO_OFFSET))(this);
	}

	::System::Void Finalize()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + KANLBDGGIGJ_FINALIZE_OFFSET))(this);
	}

	::System::Void CHLEALKAOJO()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + KANLBDGGIGJ_CHLEALKAOJO_OFFSET))(this);
	}

	::System::Void KMIMGEDAMCE(::Il2CppArray<::System::Byte>* LJBPECKCCEA)
	{
		return ((::System::Void(*)(::PVOID, ::Il2CppArray<::System::Byte>*))((::PBYTE)hIl2Cpp + KANLBDGGIGJ_KMIMGEDAMCE_OFFSET))(this, LJBPECKCCEA);
	}
};
