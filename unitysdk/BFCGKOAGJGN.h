#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/KECPLIFGOCJ.h"
#include "unitysdk/OGKBLMKDDBC.h"
#include "unitysdk/System/Object.h"

namespace MoleMole::Project::Config { class AbyssS2SuddenEventTemplateExt; }
namespace System { class Action; }
namespace System::Collections::Generic { template <typename T1, typename T2> class Dictionary_2; }
namespace System::Collections::Generic { template <typename T> class HashSet_1; }

#define BFCGKOAGJGN_BHLAEBMEOLO_OFFSET UNITYSDK_OFFSET(0x1ADB0D90)
#define BFCGKOAGJGN_BMNMLAIJJGF_OFFSET UNITYSDK_OFFSET(0x1ADB0B50)
#define BFCGKOAGJGN_CHLEALKAOJO_OFFSET UNITYSDK_OFFSET(0x1ADB0CD0)
#define BFCGKOAGJGN_FINALIZE_OFFSET UNITYSDK_OFFSET(0x1ADB0E70)
#define BFCGKOAGJGN_FPMKEGMLNHG_OFFSET UNITYSDK_OFFSET(0x1ADB0B60)
#define BFCGKOAGJGN_IFDPKDOFOJD_OFFSET UNITYSDK_OFFSET(0x1ADB11E0)
#define BFCGKOAGJGN_KMIMGEDAMCE_OFFSET UNITYSDK_OFFSET(0x1ADB1010)
#define BFCGKOAGJGN_LNFENFDLMIG_OFFSET UNITYSDK_OFFSET(0x1ADB07A0)
#define BFCGKOAGJGN_NAMKJOJBAOA_OFFSET UNITYSDK_OFFSET(0x1ADB0FF0)
#define BFCGKOAGJGN_OFHECOHPAKG_OFFSET UNITYSDK_OFFSET(0x1ADB0780)
#define BFCGKOAGJGN_PHOADBJGFBE_OFFSET UNITYSDK_OFFSET(0x1ADB0A60)
#define BFCGKOAGJGN__CTOR_OFFSET UNITYSDK_OFFSET(0x1ADB0FA0)

inline static constexpr unsigned int BFCGKOAGJGN_TypeDefinitionIndex = 12670;

class BFCGKOAGJGN : public ::System::Object
{
public:
	::Il2CppArray<::MoleMole::Project::Config::AbyssS2SuddenEventTemplateExt*>* OJMBOGGMIKO; // 0x10
	::System::Action* PLDOELOOFLL; // 0x18
	::System::Collections::Generic::HashSet_1<::System::Int32>* LHINHLCKHNE; // 0x20
	::System::Collections::Generic::Dictionary_2<::System::Int32, ::System::Int32>* FLBOKGKPECD; // 0x28
	::OGKBLMKDDBC DHDJDGFNBOA; // 0x30
	::System::Boolean DLGKLGKOMHK; // 0x48
	::System::Byte _padding0[0x3];
	::System::Int32 IJDGGCANOFI; // 0x4C

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + BFCGKOAGJGN__CTOR_OFFSET))(this);
	}

	::System::Boolean OFHECOHPAKG()
	{
		return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + BFCGKOAGJGN_OFHECOHPAKG_OFFSET))(this);
	}

	::System::Void LNFENFDLMIG()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + BFCGKOAGJGN_LNFENFDLMIG_OFFSET))(this);
	}

	::System::Void FPMKEGMLNHG(::System::Action* EJGDHCIBCJH)
	{
		return ((::System::Void(*)(::PVOID, ::System::Action*))((::PBYTE)hIl2Cpp + BFCGKOAGJGN_FPMKEGMLNHG_OFFSET))(this, EJGDHCIBCJH);
	}

	::System::Void BMNMLAIJJGF(::KECPLIFGOCJ GFCJHNHLFEF)
	{
		return ((::System::Void(*)(::PVOID, ::KECPLIFGOCJ))((::PBYTE)hIl2Cpp + BFCGKOAGJGN_BMNMLAIJJGF_OFFSET))(this, GFCJHNHLFEF);
	}

	::System::Void PHOADBJGFBE()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + BFCGKOAGJGN_PHOADBJGFBE_OFFSET))(this);
	}

	::System::Void BHLAEBMEOLO()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + BFCGKOAGJGN_BHLAEBMEOLO_OFFSET))(this);
	}

	::System::Void Finalize()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + BFCGKOAGJGN_FINALIZE_OFFSET))(this);
	}

	::System::Void NAMKJOJBAOA()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + BFCGKOAGJGN_NAMKJOJBAOA_OFFSET))(this);
	}

	::System::Void CHLEALKAOJO()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + BFCGKOAGJGN_CHLEALKAOJO_OFFSET))(this);
	}

	::System::Void KMIMGEDAMCE(::Il2CppArray<::System::Byte>* LJBPECKCCEA)
	{
		return ((::System::Void(*)(::PVOID, ::Il2CppArray<::System::Byte>*))((::PBYTE)hIl2Cpp + BFCGKOAGJGN_KMIMGEDAMCE_OFFSET))(this, LJBPECKCCEA);
	}

	::MoleMole::Project::Config::AbyssS2SuddenEventTemplateExt* IFDPKDOFOJD(::System::Int32 MGMDLMBEDJF)
	{
		return ((::MoleMole::Project::Config::AbyssS2SuddenEventTemplateExt*(*)(::PVOID, ::System::Int32))((::PBYTE)hIl2Cpp + BFCGKOAGJGN_IFDPKDOFOJD_OFFSET))(this, MGMDLMBEDJF);
	}
};
