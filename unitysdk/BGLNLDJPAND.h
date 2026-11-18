#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/KECPLIFGOCJ.h"
#include "unitysdk/KODHEMGHJLP.h"
#include "unitysdk/System/Object.h"

class KBBGOAKOFKC;
namespace System { class Action; }
namespace System::Collections::Generic { template <typename T1, typename T2> class Dictionary_2; }
namespace System::Collections::Generic { template <typename T> class HashSet_1; }

#define BGLNLDJPAND_BHLAEBMEOLO_OFFSET UNITYSDK_OFFSET(0x1B991090)
#define BGLNLDJPAND_BMNMLAIJJGF_OFFSET UNITYSDK_OFFSET(0x1B990E50)
#define BGLNLDJPAND_CHLEALKAOJO_OFFSET UNITYSDK_OFFSET(0x1B990FD0)
#define BGLNLDJPAND_FINALIZE_OFFSET UNITYSDK_OFFSET(0x1B991170)
#define BGLNLDJPAND_FPMKEGMLNHG_OFFSET UNITYSDK_OFFSET(0x1B990E60)
#define BGLNLDJPAND_IFDPKDOFOJD_OFFSET UNITYSDK_OFFSET(0x1B9914E0)
#define BGLNLDJPAND_KMIMGEDAMCE_OFFSET UNITYSDK_OFFSET(0x1B9912F0)
#define BGLNLDJPAND_LNFENFDLMIG_OFFSET UNITYSDK_OFFSET(0x1B990AA0)
#define BGLNLDJPAND_NAMKJOJBAOA_OFFSET UNITYSDK_OFFSET(0x1B9914C0)
#define BGLNLDJPAND_OFHECOHPAKG_OFFSET UNITYSDK_OFFSET(0x1B990A80)
#define BGLNLDJPAND_PHOADBJGFBE_OFFSET UNITYSDK_OFFSET(0x1B990D60)
#define BGLNLDJPAND__CTOR_OFFSET UNITYSDK_OFFSET(0x1B9912A0)

inline static constexpr unsigned int BGLNLDJPAND_TypeDefinitionIndex = 9276;

class BGLNLDJPAND : public ::System::Object
{
public:
	::System::Collections::Generic::HashSet_1<::System::Int32>* LHINHLCKHNE; // 0x10
	::KODHEMGHJLP DHDJDGFNBOA; // 0x18
	::Il2CppArray<::KBBGOAKOFKC*>* OJMBOGGMIKO; // 0x30
	::System::Action* PLDOELOOFLL; // 0x38
	::System::Collections::Generic::Dictionary_2<::System::Int32, ::System::Int32>* FLBOKGKPECD; // 0x40
	::System::Boolean DLGKLGKOMHK; // 0x48
	::System::Byte _padding0[0x3];
	::System::Int32 IJDGGCANOFI; // 0x4C

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + BGLNLDJPAND__CTOR_OFFSET))(this);
	}

	::System::Boolean OFHECOHPAKG()
	{
		return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + BGLNLDJPAND_OFHECOHPAKG_OFFSET))(this);
	}

	::System::Void LNFENFDLMIG()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + BGLNLDJPAND_LNFENFDLMIG_OFFSET))(this);
	}

	::System::Void FPMKEGMLNHG(::System::Action* EJGDHCIBCJH)
	{
		return ((::System::Void(*)(::PVOID, ::System::Action*))((::PBYTE)hIl2Cpp + BGLNLDJPAND_FPMKEGMLNHG_OFFSET))(this, EJGDHCIBCJH);
	}

	::System::Void BMNMLAIJJGF(::KECPLIFGOCJ GFCJHNHLFEF)
	{
		return ((::System::Void(*)(::PVOID, ::KECPLIFGOCJ))((::PBYTE)hIl2Cpp + BGLNLDJPAND_BMNMLAIJJGF_OFFSET))(this, GFCJHNHLFEF);
	}

	::System::Void PHOADBJGFBE()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + BGLNLDJPAND_PHOADBJGFBE_OFFSET))(this);
	}

	::System::Void BHLAEBMEOLO()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + BGLNLDJPAND_BHLAEBMEOLO_OFFSET))(this);
	}

	::System::Void Finalize()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + BGLNLDJPAND_FINALIZE_OFFSET))(this);
	}

	::System::Void KMIMGEDAMCE(::Il2CppArray<::System::Byte>* LJBPECKCCEA)
	{
		return ((::System::Void(*)(::PVOID, ::Il2CppArray<::System::Byte>*))((::PBYTE)hIl2Cpp + BGLNLDJPAND_KMIMGEDAMCE_OFFSET))(this, LJBPECKCCEA);
	}

	::System::Void NAMKJOJBAOA()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + BGLNLDJPAND_NAMKJOJBAOA_OFFSET))(this);
	}

	::System::Void CHLEALKAOJO()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + BGLNLDJPAND_CHLEALKAOJO_OFFSET))(this);
	}

	::KBBGOAKOFKC* IFDPKDOFOJD(::System::Int32 MGMDLMBEDJF)
	{
		return ((::KBBGOAKOFKC*(*)(::PVOID, ::System::Int32))((::PBYTE)hIl2Cpp + BGLNLDJPAND_IFDPKDOFOJD_OFFSET))(this, MGMDLMBEDJF);
	}
};
