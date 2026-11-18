#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/HMNFGKDDBFB.h"
#include "unitysdk/KECPLIFGOCJ.h"
#include "unitysdk/System/Object.h"

namespace MoleMole::Project::Config { class ABMapConfigTemplateExt; }
namespace System { class Action; }
namespace System::Collections::Generic { template <typename T1, typename T2> class Dictionary_2; }
namespace System::Collections::Generic { template <typename T> class HashSet_1; }

#define GCCGHFDDBGM_BHLAEBMEOLO_OFFSET UNITYSDK_OFFSET(0x1A4D2900)
#define GCCGHFDDBGM_BMNMLAIJJGF_OFFSET UNITYSDK_OFFSET(0x1A4D26D0)
#define GCCGHFDDBGM_CHLEALKAOJO_OFFSET UNITYSDK_OFFSET(0x1A4D2840)
#define GCCGHFDDBGM_FINALIZE_OFFSET UNITYSDK_OFFSET(0x1A4D29E0)
#define GCCGHFDDBGM_FPMKEGMLNHG_OFFSET UNITYSDK_OFFSET(0x1A4D26E0)
#define GCCGHFDDBGM_IFDPKDOFOJD_OFFSET UNITYSDK_OFFSET(0x1A4D2B80)
#define GCCGHFDDBGM_KMIMGEDAMCE_OFFSET UNITYSDK_OFFSET(0x1A4D2DB0)
#define GCCGHFDDBGM_LNFENFDLMIG_OFFSET UNITYSDK_OFFSET(0x1A4D2330)
#define GCCGHFDDBGM_NAMKJOJBAOA_OFFSET UNITYSDK_OFFSET(0x1A4D2B60)
#define GCCGHFDDBGM_OFHECOHPAKG_OFFSET UNITYSDK_OFFSET(0x1A4D2310)
#define GCCGHFDDBGM_PHOADBJGFBE_OFFSET UNITYSDK_OFFSET(0x1A4D25F0)
#define GCCGHFDDBGM__CTOR_OFFSET UNITYSDK_OFFSET(0x1A4D2B10)

inline static constexpr unsigned int GCCGHFDDBGM_TypeDefinitionIndex = 16960;

class GCCGHFDDBGM : public ::System::Object
{
public:
	::System::Collections::Generic::HashSet_1<::System::Int32>* LHINHLCKHNE; // 0x10
	::System::Action* PLDOELOOFLL; // 0x18
	::System::Collections::Generic::Dictionary_2<::System::Int32, ::System::Int32>* FLBOKGKPECD; // 0x20
	::Il2CppArray<::MoleMole::Project::Config::ABMapConfigTemplateExt*>* OJMBOGGMIKO; // 0x28
	::HMNFGKDDBFB DHDJDGFNBOA; // 0x30
	::System::Boolean DLGKLGKOMHK; // 0x48
	::System::Byte _padding0[0x3];
	::System::Int32 IJDGGCANOFI; // 0x4C

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + GCCGHFDDBGM__CTOR_OFFSET))(this);
	}

	::System::Boolean OFHECOHPAKG()
	{
		return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + GCCGHFDDBGM_OFHECOHPAKG_OFFSET))(this);
	}

	::System::Void LNFENFDLMIG()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + GCCGHFDDBGM_LNFENFDLMIG_OFFSET))(this);
	}

	::System::Void FPMKEGMLNHG(::System::Action* EJGDHCIBCJH)
	{
		return ((::System::Void(*)(::PVOID, ::System::Action*))((::PBYTE)hIl2Cpp + GCCGHFDDBGM_FPMKEGMLNHG_OFFSET))(this, EJGDHCIBCJH);
	}

	::System::Void BMNMLAIJJGF(::KECPLIFGOCJ GFCJHNHLFEF)
	{
		return ((::System::Void(*)(::PVOID, ::KECPLIFGOCJ))((::PBYTE)hIl2Cpp + GCCGHFDDBGM_BMNMLAIJJGF_OFFSET))(this, GFCJHNHLFEF);
	}

	::System::Void PHOADBJGFBE()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + GCCGHFDDBGM_PHOADBJGFBE_OFFSET))(this);
	}

	::System::Void BHLAEBMEOLO()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + GCCGHFDDBGM_BHLAEBMEOLO_OFFSET))(this);
	}

	::System::Void Finalize()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + GCCGHFDDBGM_FINALIZE_OFFSET))(this);
	}

	::System::Void NAMKJOJBAOA()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + GCCGHFDDBGM_NAMKJOJBAOA_OFFSET))(this);
	}

	::MoleMole::Project::Config::ABMapConfigTemplateExt* IFDPKDOFOJD(::System::Int32 MGMDLMBEDJF)
	{
		return ((::MoleMole::Project::Config::ABMapConfigTemplateExt*(*)(::PVOID, ::System::Int32))((::PBYTE)hIl2Cpp + GCCGHFDDBGM_IFDPKDOFOJD_OFFSET))(this, MGMDLMBEDJF);
	}

	::System::Void CHLEALKAOJO()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + GCCGHFDDBGM_CHLEALKAOJO_OFFSET))(this);
	}

	::System::Void KMIMGEDAMCE(::Il2CppArray<::System::Byte>* LJBPECKCCEA)
	{
		return ((::System::Void(*)(::PVOID, ::Il2CppArray<::System::Byte>*))((::PBYTE)hIl2Cpp + GCCGHFDDBGM_KMIMGEDAMCE_OFFSET))(this, LJBPECKCCEA);
	}
};
