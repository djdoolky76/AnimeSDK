#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/ACDAOHFNJPE.h"
#include "unitysdk/KECPLIFGOCJ.h"
#include "unitysdk/System/Object.h"

class LKBGFLNLBNN;
namespace System { class Action; }
namespace System::Collections::Generic { template <typename T1, typename T2> class Dictionary_2; }

#define IEDNFNPBDLK_BHLAEBMEOLO_OFFSET UNITYSDK_OFFSET(0x1B621930)
#define IEDNFNPBDLK_BMNMLAIJJGF_OFFSET UNITYSDK_OFFSET(0x1B621700)
#define IEDNFNPBDLK_CHLEALKAOJO_OFFSET UNITYSDK_OFFSET(0x1B621870)
#define IEDNFNPBDLK_FINALIZE_OFFSET UNITYSDK_OFFSET(0x1B621A10)
#define IEDNFNPBDLK_FPMKEGMLNHG_OFFSET UNITYSDK_OFFSET(0x1B621710)
#define IEDNFNPBDLK_KMIMGEDAMCE_OFFSET UNITYSDK_OFFSET(0x1B621B50)
#define IEDNFNPBDLK_LNFENFDLMIG_OFFSET UNITYSDK_OFFSET(0x1B621360)
#define IEDNFNPBDLK_OFHECOHPAKG_OFFSET UNITYSDK_OFFSET(0x1B621340)
#define IEDNFNPBDLK_PHOADBJGFBE_OFFSET UNITYSDK_OFFSET(0x1B621620)
#define IEDNFNPBDLK__CTOR_OFFSET UNITYSDK_OFFSET(0x1B621B40)

inline static constexpr unsigned int IEDNFNPBDLK_TypeDefinitionIndex = 10814;

class IEDNFNPBDLK : public ::System::Object
{
public:
	::ACDAOHFNJPE DHDJDGFNBOA; // 0x10
	::System::Collections::Generic::Dictionary_2<::System::Int32, ::System::Int32>* FLBOKGKPECD; // 0x28
	::Il2CppArray<::LKBGFLNLBNN*>* OJMBOGGMIKO; // 0x30
	::System::Action* PLDOELOOFLL; // 0x38
	::System::Boolean DLGKLGKOMHK; // 0x40
	::System::Byte _padding0[0x3];
	::System::Int32 IJDGGCANOFI; // 0x44

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + IEDNFNPBDLK__CTOR_OFFSET))(this);
	}

	::System::Boolean OFHECOHPAKG()
	{
		return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + IEDNFNPBDLK_OFHECOHPAKG_OFFSET))(this);
	}

	::System::Void LNFENFDLMIG()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + IEDNFNPBDLK_LNFENFDLMIG_OFFSET))(this);
	}

	::System::Void FPMKEGMLNHG(::System::Action* EJGDHCIBCJH)
	{
		return ((::System::Void(*)(::PVOID, ::System::Action*))((::PBYTE)hIl2Cpp + IEDNFNPBDLK_FPMKEGMLNHG_OFFSET))(this, EJGDHCIBCJH);
	}

	::System::Void BMNMLAIJJGF(::KECPLIFGOCJ GFCJHNHLFEF)
	{
		return ((::System::Void(*)(::PVOID, ::KECPLIFGOCJ))((::PBYTE)hIl2Cpp + IEDNFNPBDLK_BMNMLAIJJGF_OFFSET))(this, GFCJHNHLFEF);
	}

	::System::Void PHOADBJGFBE()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + IEDNFNPBDLK_PHOADBJGFBE_OFFSET))(this);
	}

	::System::Void BHLAEBMEOLO()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + IEDNFNPBDLK_BHLAEBMEOLO_OFFSET))(this);
	}

	::System::Void Finalize()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + IEDNFNPBDLK_FINALIZE_OFFSET))(this);
	}

	::System::Void CHLEALKAOJO()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + IEDNFNPBDLK_CHLEALKAOJO_OFFSET))(this);
	}

	::System::Void KMIMGEDAMCE(::Il2CppArray<::System::Byte>* LJBPECKCCEA)
	{
		return ((::System::Void(*)(::PVOID, ::Il2CppArray<::System::Byte>*))((::PBYTE)hIl2Cpp + IEDNFNPBDLK_KMIMGEDAMCE_OFFSET))(this, LJBPECKCCEA);
	}
};
