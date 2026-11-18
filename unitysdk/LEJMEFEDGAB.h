#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/ILEGICMBFNI.h"
#include "unitysdk/KECPLIFGOCJ.h"
#include "unitysdk/System/Object.h"

class ALKAMLADAHC;
namespace System { class Action; }
namespace System::Collections::Generic { template <typename T1, typename T2> class Dictionary_2; }

#define LEJMEFEDGAB_BHLAEBMEOLO_OFFSET UNITYSDK_OFFSET(0x190FA3E0)
#define LEJMEFEDGAB_BMNMLAIJJGF_OFFSET UNITYSDK_OFFSET(0x190FA1B0)
#define LEJMEFEDGAB_CHLEALKAOJO_OFFSET UNITYSDK_OFFSET(0x190FA320)
#define LEJMEFEDGAB_FINALIZE_OFFSET UNITYSDK_OFFSET(0x190FA4C0)
#define LEJMEFEDGAB_FPMKEGMLNHG_OFFSET UNITYSDK_OFFSET(0x190FA1C0)
#define LEJMEFEDGAB_KMIMGEDAMCE_OFFSET UNITYSDK_OFFSET(0x190FA600)
#define LEJMEFEDGAB_LNFENFDLMIG_OFFSET UNITYSDK_OFFSET(0x190F9E10)
#define LEJMEFEDGAB_OFHECOHPAKG_OFFSET UNITYSDK_OFFSET(0x190F9DF0)
#define LEJMEFEDGAB_PHOADBJGFBE_OFFSET UNITYSDK_OFFSET(0x190FA0D0)
#define LEJMEFEDGAB__CTOR_OFFSET UNITYSDK_OFFSET(0x190FA5F0)

inline static constexpr unsigned int LEJMEFEDGAB_TypeDefinitionIndex = 9771;

class LEJMEFEDGAB : public ::System::Object
{
public:
	::System::Action* PLDOELOOFLL; // 0x10
	::ILEGICMBFNI DHDJDGFNBOA; // 0x18
	::Il2CppArray<::ALKAMLADAHC*>* OJMBOGGMIKO; // 0x30
	::System::Collections::Generic::Dictionary_2<::System::Int32, ::System::Int32>* FLBOKGKPECD; // 0x38
	::System::Int32 IJDGGCANOFI; // 0x40
	::System::Boolean DLGKLGKOMHK; // 0x44

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + LEJMEFEDGAB__CTOR_OFFSET))(this);
	}

	::System::Boolean OFHECOHPAKG()
	{
		return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + LEJMEFEDGAB_OFHECOHPAKG_OFFSET))(this);
	}

	::System::Void LNFENFDLMIG()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + LEJMEFEDGAB_LNFENFDLMIG_OFFSET))(this);
	}

	::System::Void FPMKEGMLNHG(::System::Action* EJGDHCIBCJH)
	{
		return ((::System::Void(*)(::PVOID, ::System::Action*))((::PBYTE)hIl2Cpp + LEJMEFEDGAB_FPMKEGMLNHG_OFFSET))(this, EJGDHCIBCJH);
	}

	::System::Void BMNMLAIJJGF(::KECPLIFGOCJ GFCJHNHLFEF)
	{
		return ((::System::Void(*)(::PVOID, ::KECPLIFGOCJ))((::PBYTE)hIl2Cpp + LEJMEFEDGAB_BMNMLAIJJGF_OFFSET))(this, GFCJHNHLFEF);
	}

	::System::Void PHOADBJGFBE()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + LEJMEFEDGAB_PHOADBJGFBE_OFFSET))(this);
	}

	::System::Void BHLAEBMEOLO()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + LEJMEFEDGAB_BHLAEBMEOLO_OFFSET))(this);
	}

	::System::Void Finalize()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + LEJMEFEDGAB_FINALIZE_OFFSET))(this);
	}

	::System::Void KMIMGEDAMCE(::Il2CppArray<::System::Byte>* LJBPECKCCEA)
	{
		return ((::System::Void(*)(::PVOID, ::Il2CppArray<::System::Byte>*))((::PBYTE)hIl2Cpp + LEJMEFEDGAB_KMIMGEDAMCE_OFFSET))(this, LJBPECKCCEA);
	}

	::System::Void CHLEALKAOJO()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + LEJMEFEDGAB_CHLEALKAOJO_OFFSET))(this);
	}
};
