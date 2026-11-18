#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/KECPLIFGOCJ.h"
#include "unitysdk/PNHCAOMKCPF.h"
#include "unitysdk/System/Object.h"

namespace MoleMole::Project::Config { class RABMapConfigTemplateExt; }
namespace System { class Action; }
namespace System::Collections::Generic { template <typename T1, typename T2> class Dictionary_2; }

#define PHMBAKNCEKL_BHLAEBMEOLO_OFFSET UNITYSDK_OFFSET(0x19DDC6D0)
#define PHMBAKNCEKL_BMNMLAIJJGF_OFFSET UNITYSDK_OFFSET(0x19DDC4A0)
#define PHMBAKNCEKL_CHLEALKAOJO_OFFSET UNITYSDK_OFFSET(0x19DDC610)
#define PHMBAKNCEKL_FINALIZE_OFFSET UNITYSDK_OFFSET(0x19DDC7B0)
#define PHMBAKNCEKL_FPMKEGMLNHG_OFFSET UNITYSDK_OFFSET(0x19DDC4B0)
#define PHMBAKNCEKL_IFDPKDOFOJD_OFFSET UNITYSDK_OFFSET(0x19DDC8F0)
#define PHMBAKNCEKL_KMIMGEDAMCE_OFFSET UNITYSDK_OFFSET(0x19DDCB00)
#define PHMBAKNCEKL_LNFENFDLMIG_OFFSET UNITYSDK_OFFSET(0x19DDC100)
#define PHMBAKNCEKL_NAMKJOJBAOA_OFFSET UNITYSDK_OFFSET(0x19DDCAE0)
#define PHMBAKNCEKL_OFHECOHPAKG_OFFSET UNITYSDK_OFFSET(0x19DDC0E0)
#define PHMBAKNCEKL_PHOADBJGFBE_OFFSET UNITYSDK_OFFSET(0x19DDC3C0)
#define PHMBAKNCEKL__CTOR_OFFSET UNITYSDK_OFFSET(0x19DDC8E0)

inline static constexpr unsigned int PHMBAKNCEKL_TypeDefinitionIndex = 14653;

class PHMBAKNCEKL : public ::System::Object
{
public:
	::Il2CppArray<::MoleMole::Project::Config::RABMapConfigTemplateExt*>* OJMBOGGMIKO; // 0x10
	::System::Collections::Generic::Dictionary_2<::System::Int32, ::System::Int32>* FLBOKGKPECD; // 0x18
	::System::Action* PLDOELOOFLL; // 0x20
	::PNHCAOMKCPF DHDJDGFNBOA; // 0x28
	::System::Int32 IJDGGCANOFI; // 0x40
	::System::Boolean DLGKLGKOMHK; // 0x44

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + PHMBAKNCEKL__CTOR_OFFSET))(this);
	}

	::System::Boolean OFHECOHPAKG()
	{
		return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + PHMBAKNCEKL_OFHECOHPAKG_OFFSET))(this);
	}

	::System::Void LNFENFDLMIG()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + PHMBAKNCEKL_LNFENFDLMIG_OFFSET))(this);
	}

	::System::Void FPMKEGMLNHG(::System::Action* EJGDHCIBCJH)
	{
		return ((::System::Void(*)(::PVOID, ::System::Action*))((::PBYTE)hIl2Cpp + PHMBAKNCEKL_FPMKEGMLNHG_OFFSET))(this, EJGDHCIBCJH);
	}

	::System::Void BMNMLAIJJGF(::KECPLIFGOCJ GFCJHNHLFEF)
	{
		return ((::System::Void(*)(::PVOID, ::KECPLIFGOCJ))((::PBYTE)hIl2Cpp + PHMBAKNCEKL_BMNMLAIJJGF_OFFSET))(this, GFCJHNHLFEF);
	}

	::System::Void PHOADBJGFBE()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + PHMBAKNCEKL_PHOADBJGFBE_OFFSET))(this);
	}

	::System::Void BHLAEBMEOLO()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + PHMBAKNCEKL_BHLAEBMEOLO_OFFSET))(this);
	}

	::System::Void Finalize()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + PHMBAKNCEKL_FINALIZE_OFFSET))(this);
	}

	::MoleMole::Project::Config::RABMapConfigTemplateExt* IFDPKDOFOJD(::System::Int32 MGMDLMBEDJF)
	{
		return ((::MoleMole::Project::Config::RABMapConfigTemplateExt*(*)(::PVOID, ::System::Int32))((::PBYTE)hIl2Cpp + PHMBAKNCEKL_IFDPKDOFOJD_OFFSET))(this, MGMDLMBEDJF);
	}

	::System::Void KMIMGEDAMCE(::Il2CppArray<::System::Byte>* LJBPECKCCEA)
	{
		return ((::System::Void(*)(::PVOID, ::Il2CppArray<::System::Byte>*))((::PBYTE)hIl2Cpp + PHMBAKNCEKL_KMIMGEDAMCE_OFFSET))(this, LJBPECKCCEA);
	}

	::System::Void CHLEALKAOJO()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + PHMBAKNCEKL_CHLEALKAOJO_OFFSET))(this);
	}

	::System::Void NAMKJOJBAOA()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + PHMBAKNCEKL_NAMKJOJBAOA_OFFSET))(this);
	}
};
