#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/KECPLIFGOCJ.h"
#include "unitysdk/PBDIDFKABMJ.h"
#include "unitysdk/System/Object.h"

class FEADJAKGAJB;
namespace System { class Action; }
namespace System::Collections::Generic { template <typename T1, typename T2> class Dictionary_2; }
namespace System::Collections::Generic { template <typename T> class HashSet_1; }

#define BANEEPHHLNC_BHLAEBMEOLO_OFFSET UNITYSDK_OFFSET(0x17751850)
#define BANEEPHHLNC_BMNMLAIJJGF_OFFSET UNITYSDK_OFFSET(0x17751620)
#define BANEEPHHLNC_CHLEALKAOJO_OFFSET UNITYSDK_OFFSET(0x17751790)
#define BANEEPHHLNC_FINALIZE_OFFSET UNITYSDK_OFFSET(0x17751930)
#define BANEEPHHLNC_FPMKEGMLNHG_OFFSET UNITYSDK_OFFSET(0x17751630)
#define BANEEPHHLNC_IFDPKDOFOJD_OFFSET UNITYSDK_OFFSET(0x17751CA0)
#define BANEEPHHLNC_KMIMGEDAMCE_OFFSET UNITYSDK_OFFSET(0x17751AD0)
#define BANEEPHHLNC_LNFENFDLMIG_OFFSET UNITYSDK_OFFSET(0x17751280)
#define BANEEPHHLNC_NAMKJOJBAOA_OFFSET UNITYSDK_OFFSET(0x17751AB0)
#define BANEEPHHLNC_OFHECOHPAKG_OFFSET UNITYSDK_OFFSET(0x17751260)
#define BANEEPHHLNC_PHOADBJGFBE_OFFSET UNITYSDK_OFFSET(0x17751540)
#define BANEEPHHLNC__CTOR_OFFSET UNITYSDK_OFFSET(0x17751A60)

inline static constexpr unsigned int BANEEPHHLNC_TypeDefinitionIndex = 12860;

class BANEEPHHLNC : public ::System::Object
{
public:
	::PBDIDFKABMJ DHDJDGFNBOA; // 0x10
	::System::Collections::Generic::Dictionary_2<::System::Int32, ::System::Int32>* FLBOKGKPECD; // 0x28
	::Il2CppArray<::FEADJAKGAJB*>* OJMBOGGMIKO; // 0x30
	::System::Collections::Generic::HashSet_1<::System::Int32>* LHINHLCKHNE; // 0x38
	::System::Action* PLDOELOOFLL; // 0x40
	::System::Int32 IJDGGCANOFI; // 0x48
	::System::Boolean DLGKLGKOMHK; // 0x4C

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + BANEEPHHLNC__CTOR_OFFSET))(this);
	}

	::System::Boolean OFHECOHPAKG()
	{
		return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + BANEEPHHLNC_OFHECOHPAKG_OFFSET))(this);
	}

	::System::Void LNFENFDLMIG()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + BANEEPHHLNC_LNFENFDLMIG_OFFSET))(this);
	}

	::System::Void FPMKEGMLNHG(::System::Action* EJGDHCIBCJH)
	{
		return ((::System::Void(*)(::PVOID, ::System::Action*))((::PBYTE)hIl2Cpp + BANEEPHHLNC_FPMKEGMLNHG_OFFSET))(this, EJGDHCIBCJH);
	}

	::System::Void BMNMLAIJJGF(::KECPLIFGOCJ GFCJHNHLFEF)
	{
		return ((::System::Void(*)(::PVOID, ::KECPLIFGOCJ))((::PBYTE)hIl2Cpp + BANEEPHHLNC_BMNMLAIJJGF_OFFSET))(this, GFCJHNHLFEF);
	}

	::System::Void PHOADBJGFBE()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + BANEEPHHLNC_PHOADBJGFBE_OFFSET))(this);
	}

	::System::Void BHLAEBMEOLO()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + BANEEPHHLNC_BHLAEBMEOLO_OFFSET))(this);
	}

	::System::Void Finalize()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + BANEEPHHLNC_FINALIZE_OFFSET))(this);
	}

	::System::Void CHLEALKAOJO()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + BANEEPHHLNC_CHLEALKAOJO_OFFSET))(this);
	}

	::System::Void NAMKJOJBAOA()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + BANEEPHHLNC_NAMKJOJBAOA_OFFSET))(this);
	}

	::System::Void KMIMGEDAMCE(::Il2CppArray<::System::Byte>* LJBPECKCCEA)
	{
		return ((::System::Void(*)(::PVOID, ::Il2CppArray<::System::Byte>*))((::PBYTE)hIl2Cpp + BANEEPHHLNC_KMIMGEDAMCE_OFFSET))(this, LJBPECKCCEA);
	}

	::FEADJAKGAJB* IFDPKDOFOJD(::System::Int32 MGMDLMBEDJF)
	{
		return ((::FEADJAKGAJB*(*)(::PVOID, ::System::Int32))((::PBYTE)hIl2Cpp + BANEEPHHLNC_IFDPKDOFOJD_OFFSET))(this, MGMDLMBEDJF);
	}
};
