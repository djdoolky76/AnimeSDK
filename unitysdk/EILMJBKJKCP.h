#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/BOEDIKDFEPJ.h"
#include "unitysdk/KECPLIFGOCJ.h"
#include "unitysdk/System/Object.h"

class GCFAONFMNIB;
namespace System { class Action; }
namespace System::Collections::Generic { template <typename T1, typename T2> class Dictionary_2; }

#define EILMJBKJKCP_BHLAEBMEOLO_OFFSET UNITYSDK_OFFSET(0x1A19F540)
#define EILMJBKJKCP_BMNMLAIJJGF_OFFSET UNITYSDK_OFFSET(0x1A19F310)
#define EILMJBKJKCP_CHLEALKAOJO_OFFSET UNITYSDK_OFFSET(0x1A19F480)
#define EILMJBKJKCP_FINALIZE_OFFSET UNITYSDK_OFFSET(0x1A19F620)
#define EILMJBKJKCP_FPMKEGMLNHG_OFFSET UNITYSDK_OFFSET(0x1A19F320)
#define EILMJBKJKCP_KMIMGEDAMCE_OFFSET UNITYSDK_OFFSET(0x1A19F760)
#define EILMJBKJKCP_LNFENFDLMIG_OFFSET UNITYSDK_OFFSET(0x1A19EF70)
#define EILMJBKJKCP_OFHECOHPAKG_OFFSET UNITYSDK_OFFSET(0x1A19EF50)
#define EILMJBKJKCP_PHOADBJGFBE_OFFSET UNITYSDK_OFFSET(0x1A19F230)
#define EILMJBKJKCP__CTOR_OFFSET UNITYSDK_OFFSET(0x1A19F750)

inline static constexpr unsigned int EILMJBKJKCP_TypeDefinitionIndex = 14389;

class EILMJBKJKCP : public ::System::Object
{
public:
	::Il2CppArray<::GCFAONFMNIB*>* OJMBOGGMIKO; // 0x10
	::System::Collections::Generic::Dictionary_2<::System::Int32, ::System::Int32>* FLBOKGKPECD; // 0x18
	::BOEDIKDFEPJ DHDJDGFNBOA; // 0x20
	::System::Action* PLDOELOOFLL; // 0x38
	::System::Boolean DLGKLGKOMHK; // 0x40
	::System::Byte _padding0[0x3];
	::System::Int32 IJDGGCANOFI; // 0x44

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + EILMJBKJKCP__CTOR_OFFSET))(this);
	}

	::System::Boolean OFHECOHPAKG()
	{
		return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + EILMJBKJKCP_OFHECOHPAKG_OFFSET))(this);
	}

	::System::Void LNFENFDLMIG()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + EILMJBKJKCP_LNFENFDLMIG_OFFSET))(this);
	}

	::System::Void FPMKEGMLNHG(::System::Action* EJGDHCIBCJH)
	{
		return ((::System::Void(*)(::PVOID, ::System::Action*))((::PBYTE)hIl2Cpp + EILMJBKJKCP_FPMKEGMLNHG_OFFSET))(this, EJGDHCIBCJH);
	}

	::System::Void BMNMLAIJJGF(::KECPLIFGOCJ GFCJHNHLFEF)
	{
		return ((::System::Void(*)(::PVOID, ::KECPLIFGOCJ))((::PBYTE)hIl2Cpp + EILMJBKJKCP_BMNMLAIJJGF_OFFSET))(this, GFCJHNHLFEF);
	}

	::System::Void PHOADBJGFBE()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + EILMJBKJKCP_PHOADBJGFBE_OFFSET))(this);
	}

	::System::Void BHLAEBMEOLO()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + EILMJBKJKCP_BHLAEBMEOLO_OFFSET))(this);
	}

	::System::Void Finalize()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + EILMJBKJKCP_FINALIZE_OFFSET))(this);
	}

	::System::Void CHLEALKAOJO()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + EILMJBKJKCP_CHLEALKAOJO_OFFSET))(this);
	}

	::System::Void KMIMGEDAMCE(::Il2CppArray<::System::Byte>* LJBPECKCCEA)
	{
		return ((::System::Void(*)(::PVOID, ::Il2CppArray<::System::Byte>*))((::PBYTE)hIl2Cpp + EILMJBKJKCP_KMIMGEDAMCE_OFFSET))(this, LJBPECKCCEA);
	}
};
