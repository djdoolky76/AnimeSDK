#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/HDAGNNDPLFG.h"
#include "unitysdk/KECPLIFGOCJ.h"
#include "unitysdk/System/Object.h"

class HCBNMLELLGN;
namespace System { class Action; }
namespace System::Collections::Generic { template <typename T1, typename T2> class Dictionary_2; }

#define OBPNOIIGJHD_BHLAEBMEOLO_OFFSET UNITYSDK_OFFSET(0x19128460)
#define OBPNOIIGJHD_BMNMLAIJJGF_OFFSET UNITYSDK_OFFSET(0x19128230)
#define OBPNOIIGJHD_CHLEALKAOJO_OFFSET UNITYSDK_OFFSET(0x191283A0)
#define OBPNOIIGJHD_FINALIZE_OFFSET UNITYSDK_OFFSET(0x19128540)
#define OBPNOIIGJHD_FPMKEGMLNHG_OFFSET UNITYSDK_OFFSET(0x19128240)
#define OBPNOIIGJHD_IFDPKDOFOJD_OFFSET UNITYSDK_OFFSET(0x19128680)
#define OBPNOIIGJHD_KMIMGEDAMCE_OFFSET UNITYSDK_OFFSET(0x19128890)
#define OBPNOIIGJHD_LNFENFDLMIG_OFFSET UNITYSDK_OFFSET(0x19127E90)
#define OBPNOIIGJHD_NAMKJOJBAOA_OFFSET UNITYSDK_OFFSET(0x19128870)
#define OBPNOIIGJHD_OFHECOHPAKG_OFFSET UNITYSDK_OFFSET(0x19127E70)
#define OBPNOIIGJHD_PHOADBJGFBE_OFFSET UNITYSDK_OFFSET(0x19128150)
#define OBPNOIIGJHD__CTOR_OFFSET UNITYSDK_OFFSET(0x19128670)

inline static constexpr unsigned int OBPNOIIGJHD_TypeDefinitionIndex = 12140;

class OBPNOIIGJHD : public ::System::Object
{
public:
	::System::Action* PLDOELOOFLL; // 0x10
	::Il2CppArray<::HCBNMLELLGN*>* OJMBOGGMIKO; // 0x18
	::System::Collections::Generic::Dictionary_2<::System::Int32, ::System::Int32>* FLBOKGKPECD; // 0x20
	::HDAGNNDPLFG DHDJDGFNBOA; // 0x28
	::System::Int32 IJDGGCANOFI; // 0x40
	::System::Boolean DLGKLGKOMHK; // 0x44

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + OBPNOIIGJHD__CTOR_OFFSET))(this);
	}

	::System::Boolean OFHECOHPAKG()
	{
		return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + OBPNOIIGJHD_OFHECOHPAKG_OFFSET))(this);
	}

	::System::Void LNFENFDLMIG()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + OBPNOIIGJHD_LNFENFDLMIG_OFFSET))(this);
	}

	::System::Void FPMKEGMLNHG(::System::Action* EJGDHCIBCJH)
	{
		return ((::System::Void(*)(::PVOID, ::System::Action*))((::PBYTE)hIl2Cpp + OBPNOIIGJHD_FPMKEGMLNHG_OFFSET))(this, EJGDHCIBCJH);
	}

	::System::Void BMNMLAIJJGF(::KECPLIFGOCJ GFCJHNHLFEF)
	{
		return ((::System::Void(*)(::PVOID, ::KECPLIFGOCJ))((::PBYTE)hIl2Cpp + OBPNOIIGJHD_BMNMLAIJJGF_OFFSET))(this, GFCJHNHLFEF);
	}

	::System::Void PHOADBJGFBE()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + OBPNOIIGJHD_PHOADBJGFBE_OFFSET))(this);
	}

	::System::Void BHLAEBMEOLO()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + OBPNOIIGJHD_BHLAEBMEOLO_OFFSET))(this);
	}

	::System::Void Finalize()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + OBPNOIIGJHD_FINALIZE_OFFSET))(this);
	}

	::HCBNMLELLGN* IFDPKDOFOJD(::System::Int32 MGMDLMBEDJF)
	{
		return ((::HCBNMLELLGN*(*)(::PVOID, ::System::Int32))((::PBYTE)hIl2Cpp + OBPNOIIGJHD_IFDPKDOFOJD_OFFSET))(this, MGMDLMBEDJF);
	}

	::System::Void KMIMGEDAMCE(::Il2CppArray<::System::Byte>* LJBPECKCCEA)
	{
		return ((::System::Void(*)(::PVOID, ::Il2CppArray<::System::Byte>*))((::PBYTE)hIl2Cpp + OBPNOIIGJHD_KMIMGEDAMCE_OFFSET))(this, LJBPECKCCEA);
	}

	::System::Void NAMKJOJBAOA()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + OBPNOIIGJHD_NAMKJOJBAOA_OFFSET))(this);
	}

	::System::Void CHLEALKAOJO()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + OBPNOIIGJHD_CHLEALKAOJO_OFFSET))(this);
	}
};
