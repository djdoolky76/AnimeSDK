#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/FNBKDMLODMG.h"
#include "unitysdk/KECPLIFGOCJ.h"
#include "unitysdk/System/Object.h"

class EMKGOMCGBPN;
namespace System { class Action; }

#define ODGBHNNJOBC_BHLAEBMEOLO_OFFSET UNITYSDK_OFFSET(0x1CFF7320)
#define ODGBHNNJOBC_BMNMLAIJJGF_OFFSET UNITYSDK_OFFSET(0x1CFF70A0)
#define ODGBHNNJOBC_CHLEALKAOJO_OFFSET UNITYSDK_OFFSET(0x1CFF70B0)
#define ODGBHNNJOBC_FINALIZE_OFFSET UNITYSDK_OFFSET(0x1CFF7170)
#define ODGBHNNJOBC_FPMKEGMLNHG_OFFSET UNITYSDK_OFFSET(0x1CFF72A0)
#define ODGBHNNJOBC_HFPLKMOOLLL_OFFSET UNITYSDK_OFFSET(0x1CFF7410)
#define ODGBHNNJOBC_KMIMGEDAMCE_OFFSET UNITYSDK_OFFSET(0x1CFF7610)
#define ODGBHNNJOBC_LNFENFDLMIG_OFFSET UNITYSDK_OFFSET(0x1CFF6DA0)
#define ODGBHNNJOBC_NAMKJOJBAOA_OFFSET UNITYSDK_OFFSET(0x1CFF75B0)
#define ODGBHNNJOBC_OFHECOHPAKG_OFFSET UNITYSDK_OFFSET(0x1CFF6D80)
#define ODGBHNNJOBC_PHOADBJGFBE_OFFSET UNITYSDK_OFFSET(0x1CFF6FC0)
#define ODGBHNNJOBC_PKFDGGKPOLF_OFFSET UNITYSDK_OFFSET(0x1CFF75D0)
#define ODGBHNNJOBC__CTOR_OFFSET UNITYSDK_OFFSET(0x1CFF7400)

inline static constexpr unsigned int ODGBHNNJOBC_TypeDefinitionIndex = 12495;

class ODGBHNNJOBC : public ::System::Object
{
public:
	::FNBKDMLODMG DHDJDGFNBOA; // 0x10
	::System::Action* PLDOELOOFLL; // 0x28
	::Il2CppArray<::EMKGOMCGBPN*>* OJMBOGGMIKO; // 0x30
	::System::Boolean DLGKLGKOMHK; // 0x38
	::System::Byte _padding0[0x3];
	::System::Int32 IJDGGCANOFI; // 0x3C

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + ODGBHNNJOBC__CTOR_OFFSET))(this);
	}

	::System::Boolean OFHECOHPAKG()
	{
		return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + ODGBHNNJOBC_OFHECOHPAKG_OFFSET))(this);
	}

	::System::Void LNFENFDLMIG()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + ODGBHNNJOBC_LNFENFDLMIG_OFFSET))(this);
	}

	::System::Void PHOADBJGFBE()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + ODGBHNNJOBC_PHOADBJGFBE_OFFSET))(this);
	}

	::System::Void Finalize()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + ODGBHNNJOBC_FINALIZE_OFFSET))(this);
	}

	::System::Void FPMKEGMLNHG(::System::Action* EJGDHCIBCJH)
	{
		return ((::System::Void(*)(::PVOID, ::System::Action*))((::PBYTE)hIl2Cpp + ODGBHNNJOBC_FPMKEGMLNHG_OFFSET))(this, EJGDHCIBCJH);
	}

	::System::Void BMNMLAIJJGF(::KECPLIFGOCJ GFCJHNHLFEF)
	{
		return ((::System::Void(*)(::PVOID, ::KECPLIFGOCJ))((::PBYTE)hIl2Cpp + ODGBHNNJOBC_BMNMLAIJJGF_OFFSET))(this, GFCJHNHLFEF);
	}

	::System::Void BHLAEBMEOLO()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + ODGBHNNJOBC_BHLAEBMEOLO_OFFSET))(this);
	}

	::EMKGOMCGBPN* HFPLKMOOLLL(::System::Int32 ABHBKFJKINO)
	{
		return ((::EMKGOMCGBPN*(*)(::PVOID, ::System::Int32))((::PBYTE)hIl2Cpp + ODGBHNNJOBC_HFPLKMOOLLL_OFFSET))(this, ABHBKFJKINO);
	}

	::System::Int32 PKFDGGKPOLF()
	{
		return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + ODGBHNNJOBC_PKFDGGKPOLF_OFFSET))(this);
	}

	::System::Void CHLEALKAOJO()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + ODGBHNNJOBC_CHLEALKAOJO_OFFSET))(this);
	}

	::System::Void NAMKJOJBAOA()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + ODGBHNNJOBC_NAMKJOJBAOA_OFFSET))(this);
	}

	::System::Void KMIMGEDAMCE(::Il2CppArray<::System::Byte>* LJBPECKCCEA)
	{
		return ((::System::Void(*)(::PVOID, ::Il2CppArray<::System::Byte>*))((::PBYTE)hIl2Cpp + ODGBHNNJOBC_KMIMGEDAMCE_OFFSET))(this, LJBPECKCCEA);
	}
};
