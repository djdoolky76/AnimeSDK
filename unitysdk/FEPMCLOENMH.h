#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/KECPLIFGOCJ.h"
#include "unitysdk/PAHDAHLBCPO.h"
#include "unitysdk/System/Object.h"

class ELHNDLBNHJD;
namespace System { class Action; }
namespace System::Collections::Generic { template <typename T1, typename T2> class Dictionary_2; }

#define FEPMCLOENMH_BHLAEBMEOLO_OFFSET UNITYSDK_OFFSET(0x195290F0)
#define FEPMCLOENMH_BMNMLAIJJGF_OFFSET UNITYSDK_OFFSET(0x19528EC0)
#define FEPMCLOENMH_CHLEALKAOJO_OFFSET UNITYSDK_OFFSET(0x19529030)
#define FEPMCLOENMH_FINALIZE_OFFSET UNITYSDK_OFFSET(0x195291D0)
#define FEPMCLOENMH_FPMKEGMLNHG_OFFSET UNITYSDK_OFFSET(0x19528ED0)
#define FEPMCLOENMH_KMIMGEDAMCE_OFFSET UNITYSDK_OFFSET(0x19529310)
#define FEPMCLOENMH_LNFENFDLMIG_OFFSET UNITYSDK_OFFSET(0x19528B20)
#define FEPMCLOENMH_OFHECOHPAKG_OFFSET UNITYSDK_OFFSET(0x19528B00)
#define FEPMCLOENMH_PHOADBJGFBE_OFFSET UNITYSDK_OFFSET(0x19528DE0)
#define FEPMCLOENMH__CTOR_OFFSET UNITYSDK_OFFSET(0x19529300)

inline static constexpr unsigned int FEPMCLOENMH_TypeDefinitionIndex = 9937;

class FEPMCLOENMH : public ::System::Object
{
public:
	::System::Action* PLDOELOOFLL; // 0x10
	::PAHDAHLBCPO DHDJDGFNBOA; // 0x18
	::Il2CppArray<::ELHNDLBNHJD*>* OJMBOGGMIKO; // 0x30
	::System::Collections::Generic::Dictionary_2<::System::Int32, ::System::Int32>* FLBOKGKPECD; // 0x38
	::System::Int32 IJDGGCANOFI; // 0x40
	::System::Boolean DLGKLGKOMHK; // 0x44

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + FEPMCLOENMH__CTOR_OFFSET))(this);
	}

	::System::Boolean OFHECOHPAKG()
	{
		return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + FEPMCLOENMH_OFHECOHPAKG_OFFSET))(this);
	}

	::System::Void LNFENFDLMIG()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + FEPMCLOENMH_LNFENFDLMIG_OFFSET))(this);
	}

	::System::Void FPMKEGMLNHG(::System::Action* EJGDHCIBCJH)
	{
		return ((::System::Void(*)(::PVOID, ::System::Action*))((::PBYTE)hIl2Cpp + FEPMCLOENMH_FPMKEGMLNHG_OFFSET))(this, EJGDHCIBCJH);
	}

	::System::Void BMNMLAIJJGF(::KECPLIFGOCJ GFCJHNHLFEF)
	{
		return ((::System::Void(*)(::PVOID, ::KECPLIFGOCJ))((::PBYTE)hIl2Cpp + FEPMCLOENMH_BMNMLAIJJGF_OFFSET))(this, GFCJHNHLFEF);
	}

	::System::Void PHOADBJGFBE()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + FEPMCLOENMH_PHOADBJGFBE_OFFSET))(this);
	}

	::System::Void BHLAEBMEOLO()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + FEPMCLOENMH_BHLAEBMEOLO_OFFSET))(this);
	}

	::System::Void Finalize()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + FEPMCLOENMH_FINALIZE_OFFSET))(this);
	}

	::System::Void KMIMGEDAMCE(::Il2CppArray<::System::Byte>* LJBPECKCCEA)
	{
		return ((::System::Void(*)(::PVOID, ::Il2CppArray<::System::Byte>*))((::PBYTE)hIl2Cpp + FEPMCLOENMH_KMIMGEDAMCE_OFFSET))(this, LJBPECKCCEA);
	}

	::System::Void CHLEALKAOJO()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + FEPMCLOENMH_CHLEALKAOJO_OFFSET))(this);
	}
};
