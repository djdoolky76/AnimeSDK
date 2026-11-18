#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/CAJNJGJIOJD.h"
#include "unitysdk/KECPLIFGOCJ.h"
#include "unitysdk/System/Object.h"

class OLGGGDDPPAA;
namespace System { class Action; }
namespace System::Collections::Generic { template <typename T1, typename T2> class Dictionary_2; }

#define GKGMGBIEJHD_BHLAEBMEOLO_OFFSET UNITYSDK_OFFSET(0x1BACB580)
#define GKGMGBIEJHD_BMNMLAIJJGF_OFFSET UNITYSDK_OFFSET(0x1BACB350)
#define GKGMGBIEJHD_CHLEALKAOJO_OFFSET UNITYSDK_OFFSET(0x1BACB4C0)
#define GKGMGBIEJHD_FINALIZE_OFFSET UNITYSDK_OFFSET(0x1BACB660)
#define GKGMGBIEJHD_FPMKEGMLNHG_OFFSET UNITYSDK_OFFSET(0x1BACB360)
#define GKGMGBIEJHD_KMIMGEDAMCE_OFFSET UNITYSDK_OFFSET(0x1BACB7A0)
#define GKGMGBIEJHD_LNFENFDLMIG_OFFSET UNITYSDK_OFFSET(0x1BACAFB0)
#define GKGMGBIEJHD_OFHECOHPAKG_OFFSET UNITYSDK_OFFSET(0x1BACAF90)
#define GKGMGBIEJHD_PHOADBJGFBE_OFFSET UNITYSDK_OFFSET(0x1BACB270)
#define GKGMGBIEJHD__CTOR_OFFSET UNITYSDK_OFFSET(0x1BACB790)

inline static constexpr unsigned int GKGMGBIEJHD_TypeDefinitionIndex = 16489;

class GKGMGBIEJHD : public ::System::Object
{
public:
	::CAJNJGJIOJD DHDJDGFNBOA; // 0x10
	::Il2CppArray<::OLGGGDDPPAA*>* OJMBOGGMIKO; // 0x28
	::System::Collections::Generic::Dictionary_2<::System::Int32, ::System::Int32>* FLBOKGKPECD; // 0x30
	::System::Action* PLDOELOOFLL; // 0x38
	::System::Boolean DLGKLGKOMHK; // 0x40
	::System::Byte _padding0[0x3];
	::System::Int32 IJDGGCANOFI; // 0x44

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + GKGMGBIEJHD__CTOR_OFFSET))(this);
	}

	::System::Boolean OFHECOHPAKG()
	{
		return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + GKGMGBIEJHD_OFHECOHPAKG_OFFSET))(this);
	}

	::System::Void LNFENFDLMIG()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + GKGMGBIEJHD_LNFENFDLMIG_OFFSET))(this);
	}

	::System::Void FPMKEGMLNHG(::System::Action* EJGDHCIBCJH)
	{
		return ((::System::Void(*)(::PVOID, ::System::Action*))((::PBYTE)hIl2Cpp + GKGMGBIEJHD_FPMKEGMLNHG_OFFSET))(this, EJGDHCIBCJH);
	}

	::System::Void BMNMLAIJJGF(::KECPLIFGOCJ GFCJHNHLFEF)
	{
		return ((::System::Void(*)(::PVOID, ::KECPLIFGOCJ))((::PBYTE)hIl2Cpp + GKGMGBIEJHD_BMNMLAIJJGF_OFFSET))(this, GFCJHNHLFEF);
	}

	::System::Void PHOADBJGFBE()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + GKGMGBIEJHD_PHOADBJGFBE_OFFSET))(this);
	}

	::System::Void BHLAEBMEOLO()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + GKGMGBIEJHD_BHLAEBMEOLO_OFFSET))(this);
	}

	::System::Void Finalize()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + GKGMGBIEJHD_FINALIZE_OFFSET))(this);
	}

	::System::Void CHLEALKAOJO()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + GKGMGBIEJHD_CHLEALKAOJO_OFFSET))(this);
	}

	::System::Void KMIMGEDAMCE(::Il2CppArray<::System::Byte>* LJBPECKCCEA)
	{
		return ((::System::Void(*)(::PVOID, ::Il2CppArray<::System::Byte>*))((::PBYTE)hIl2Cpp + GKGMGBIEJHD_KMIMGEDAMCE_OFFSET))(this, LJBPECKCCEA);
	}
};
