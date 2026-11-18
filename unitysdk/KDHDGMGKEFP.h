#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/DHAMNFHHOEO.h"
#include "unitysdk/KECPLIFGOCJ.h"
#include "unitysdk/System/Object.h"

class CMANIDMPGHO;
namespace System { class Action; }
namespace System::Collections::Generic { template <typename T1, typename T2> class Dictionary_2; }
namespace System::Collections::Generic { template <typename T> class HashSet_1; }

#define KDHDGMGKEFP_BHLAEBMEOLO_OFFSET UNITYSDK_OFFSET(0x195572F0)
#define KDHDGMGKEFP_BMNMLAIJJGF_OFFSET UNITYSDK_OFFSET(0x195570C0)
#define KDHDGMGKEFP_CHLEALKAOJO_OFFSET UNITYSDK_OFFSET(0x19557230)
#define KDHDGMGKEFP_FINALIZE_OFFSET UNITYSDK_OFFSET(0x195573D0)
#define KDHDGMGKEFP_FPMKEGMLNHG_OFFSET UNITYSDK_OFFSET(0x195570D0)
#define KDHDGMGKEFP_IFDPKDOFOJD_OFFSET UNITYSDK_OFFSET(0x19557550)
#define KDHDGMGKEFP_KMIMGEDAMCE_OFFSET UNITYSDK_OFFSET(0x195577A0)
#define KDHDGMGKEFP_LNFENFDLMIG_OFFSET UNITYSDK_OFFSET(0x19556D20)
#define KDHDGMGKEFP_NAMKJOJBAOA_OFFSET UNITYSDK_OFFSET(0x19557780)
#define KDHDGMGKEFP_OFHECOHPAKG_OFFSET UNITYSDK_OFFSET(0x19556D00)
#define KDHDGMGKEFP_PHOADBJGFBE_OFFSET UNITYSDK_OFFSET(0x19556FE0)
#define KDHDGMGKEFP__CTOR_OFFSET UNITYSDK_OFFSET(0x19557500)

inline static constexpr unsigned int KDHDGMGKEFP_TypeDefinitionIndex = 16713;

class KDHDGMGKEFP : public ::System::Object
{
public:
	::DHAMNFHHOEO DHDJDGFNBOA; // 0x10
	::System::Collections::Generic::HashSet_1<::System::Int32>* LHINHLCKHNE; // 0x28
	::System::Action* PLDOELOOFLL; // 0x30
	::System::Collections::Generic::Dictionary_2<::System::Int32, ::System::Int32>* FLBOKGKPECD; // 0x38
	::Il2CppArray<::CMANIDMPGHO*>* OJMBOGGMIKO; // 0x40
	::System::Int32 IJDGGCANOFI; // 0x48
	::System::Boolean DLGKLGKOMHK; // 0x4C

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + KDHDGMGKEFP__CTOR_OFFSET))(this);
	}

	::System::Boolean OFHECOHPAKG()
	{
		return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + KDHDGMGKEFP_OFHECOHPAKG_OFFSET))(this);
	}

	::System::Void LNFENFDLMIG()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + KDHDGMGKEFP_LNFENFDLMIG_OFFSET))(this);
	}

	::System::Void FPMKEGMLNHG(::System::Action* EJGDHCIBCJH)
	{
		return ((::System::Void(*)(::PVOID, ::System::Action*))((::PBYTE)hIl2Cpp + KDHDGMGKEFP_FPMKEGMLNHG_OFFSET))(this, EJGDHCIBCJH);
	}

	::System::Void BMNMLAIJJGF(::KECPLIFGOCJ GFCJHNHLFEF)
	{
		return ((::System::Void(*)(::PVOID, ::KECPLIFGOCJ))((::PBYTE)hIl2Cpp + KDHDGMGKEFP_BMNMLAIJJGF_OFFSET))(this, GFCJHNHLFEF);
	}

	::System::Void PHOADBJGFBE()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + KDHDGMGKEFP_PHOADBJGFBE_OFFSET))(this);
	}

	::System::Void BHLAEBMEOLO()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + KDHDGMGKEFP_BHLAEBMEOLO_OFFSET))(this);
	}

	::System::Void Finalize()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + KDHDGMGKEFP_FINALIZE_OFFSET))(this);
	}

	::System::Void CHLEALKAOJO()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + KDHDGMGKEFP_CHLEALKAOJO_OFFSET))(this);
	}

	::CMANIDMPGHO* IFDPKDOFOJD(::System::Int32 MGMDLMBEDJF)
	{
		return ((::CMANIDMPGHO*(*)(::PVOID, ::System::Int32))((::PBYTE)hIl2Cpp + KDHDGMGKEFP_IFDPKDOFOJD_OFFSET))(this, MGMDLMBEDJF);
	}

	::System::Void KMIMGEDAMCE(::Il2CppArray<::System::Byte>* LJBPECKCCEA)
	{
		return ((::System::Void(*)(::PVOID, ::Il2CppArray<::System::Byte>*))((::PBYTE)hIl2Cpp + KDHDGMGKEFP_KMIMGEDAMCE_OFFSET))(this, LJBPECKCCEA);
	}

	::System::Void NAMKJOJBAOA()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + KDHDGMGKEFP_NAMKJOJBAOA_OFFSET))(this);
	}
};
