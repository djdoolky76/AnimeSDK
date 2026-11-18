#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/GKOGILCMDHA.h"
#include "unitysdk/KECPLIFGOCJ.h"
#include "unitysdk/System/Object.h"

class HMMANCFHEMF;
namespace System { class Action; }
namespace System::Collections::Generic { template <typename T1, typename T2> class Dictionary_2; }
namespace System::Collections::Generic { template <typename T> class HashSet_1; }
namespace System::Collections::Generic { template <typename T> class List_1; }

#define LOCABOBKJNI_BHLAEBMEOLO_OFFSET UNITYSDK_OFFSET(0x19571E00)
#define LOCABOBKJNI_BMNMLAIJJGF_OFFSET UNITYSDK_OFFSET(0x195717A0)
#define LOCABOBKJNI_CHLEALKAOJO_OFFSET UNITYSDK_OFFSET(0x19571D40)
#define LOCABOBKJNI_FEKNLGDMDKM_OFFSET UNITYSDK_OFFSET(0x195720F0)
#define LOCABOBKJNI_FINALIZE_OFFSET UNITYSDK_OFFSET(0x19571EE0)
#define LOCABOBKJNI_FPMKEGMLNHG_OFFSET UNITYSDK_OFFSET(0x19571BE0)
#define LOCABOBKJNI_IFDPKDOFOJD_OFFSET UNITYSDK_OFFSET(0x19572370)
#define LOCABOBKJNI_KMIMGEDAMCE_OFFSET UNITYSDK_OFFSET(0x195721A0)
#define LOCABOBKJNI_LNFENFDLMIG_OFFSET UNITYSDK_OFFSET(0x19571400)
#define LOCABOBKJNI_NAMKJOJBAOA_OFFSET UNITYSDK_OFFSET(0x195720D0)
#define LOCABOBKJNI_OFHECOHPAKG_OFFSET UNITYSDK_OFFSET(0x195713E0)
#define LOCABOBKJNI_PHOADBJGFBE_OFFSET UNITYSDK_OFFSET(0x195716C0)
#define LOCABOBKJNI__CTOR_OFFSET UNITYSDK_OFFSET(0x19572010)

inline static constexpr unsigned int LOCABOBKJNI_TypeDefinitionIndex = 10465;

class LOCABOBKJNI : public ::System::Object
{
public:
	::System::Collections::Generic::HashSet_1<::System::Int32>* LHINHLCKHNE; // 0x10
	::GKOGILCMDHA DHDJDGFNBOA; // 0x18
	::Il2CppArray<::HMMANCFHEMF*>* OJMBOGGMIKO; // 0x30
	::System::Collections::Generic::Dictionary_2<::System::Int32, ::System::Int32>* FLBOKGKPECD; // 0x38
	::System::Action* PLDOELOOFLL; // 0x40
	::System::Collections::Generic::Dictionary_2<::System::Int32, ::System::Collections::Generic::List_1<::System::Int32>*>* NINCBPIAHLO; // 0x48
	::System::Int32 IJDGGCANOFI; // 0x50
	::System::Boolean DLGKLGKOMHK; // 0x54

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + LOCABOBKJNI__CTOR_OFFSET))(this);
	}

	::System::Boolean OFHECOHPAKG()
	{
		return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + LOCABOBKJNI_OFHECOHPAKG_OFFSET))(this);
	}

	::System::Void LNFENFDLMIG()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + LOCABOBKJNI_LNFENFDLMIG_OFFSET))(this);
	}

	::System::Void FPMKEGMLNHG(::System::Action* EJGDHCIBCJH)
	{
		return ((::System::Void(*)(::PVOID, ::System::Action*))((::PBYTE)hIl2Cpp + LOCABOBKJNI_FPMKEGMLNHG_OFFSET))(this, EJGDHCIBCJH);
	}

	::System::Void BMNMLAIJJGF(::KECPLIFGOCJ GFCJHNHLFEF)
	{
		return ((::System::Void(*)(::PVOID, ::KECPLIFGOCJ))((::PBYTE)hIl2Cpp + LOCABOBKJNI_BMNMLAIJJGF_OFFSET))(this, GFCJHNHLFEF);
	}

	::System::Void PHOADBJGFBE()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + LOCABOBKJNI_PHOADBJGFBE_OFFSET))(this);
	}

	::System::Void BHLAEBMEOLO()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + LOCABOBKJNI_BHLAEBMEOLO_OFFSET))(this);
	}

	::System::Void Finalize()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + LOCABOBKJNI_FINALIZE_OFFSET))(this);
	}

	::System::Void CHLEALKAOJO()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + LOCABOBKJNI_CHLEALKAOJO_OFFSET))(this);
	}

	::System::Void NAMKJOJBAOA()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + LOCABOBKJNI_NAMKJOJBAOA_OFFSET))(this);
	}

	::System::Collections::Generic::List_1<::System::Int32>* FEKNLGDMDKM(::System::Int32 BFBCMALKEIE)
	{
		return ((::System::Collections::Generic::List_1<::System::Int32>*(*)(::PVOID, ::System::Int32))((::PBYTE)hIl2Cpp + LOCABOBKJNI_FEKNLGDMDKM_OFFSET))(this, BFBCMALKEIE);
	}

	::System::Void KMIMGEDAMCE(::Il2CppArray<::System::Byte>* LJBPECKCCEA)
	{
		return ((::System::Void(*)(::PVOID, ::Il2CppArray<::System::Byte>*))((::PBYTE)hIl2Cpp + LOCABOBKJNI_KMIMGEDAMCE_OFFSET))(this, LJBPECKCCEA);
	}

	::HMMANCFHEMF* IFDPKDOFOJD(::System::Int32 MGMDLMBEDJF)
	{
		return ((::HMMANCFHEMF*(*)(::PVOID, ::System::Int32))((::PBYTE)hIl2Cpp + LOCABOBKJNI_IFDPKDOFOJD_OFFSET))(this, MGMDLMBEDJF);
	}
};
