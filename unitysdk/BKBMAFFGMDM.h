#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/BAIOBCHGHFB.h"
#include "unitysdk/KECPLIFGOCJ.h"
#include "unitysdk/System/Object.h"

class JCHEHDNABJI;
namespace System { class Action; }
namespace System::Collections::Generic { template <typename T1, typename T2> class Dictionary_2; }
namespace System::Collections::Generic { template <typename T> class HashSet_1; }

#define BKBMAFFGMDM_BHLAEBMEOLO_OFFSET UNITYSDK_OFFSET(0x1A16FFF0)
#define BKBMAFFGMDM_BMNMLAIJJGF_OFFSET UNITYSDK_OFFSET(0x1A16FDB0)
#define BKBMAFFGMDM_CHLEALKAOJO_OFFSET UNITYSDK_OFFSET(0x1A16FF30)
#define BKBMAFFGMDM_FINALIZE_OFFSET UNITYSDK_OFFSET(0x1A1700D0)
#define BKBMAFFGMDM_FPMKEGMLNHG_OFFSET UNITYSDK_OFFSET(0x1A16FDC0)
#define BKBMAFFGMDM_IFDPKDOFOJD_OFFSET UNITYSDK_OFFSET(0x1A170440)
#define BKBMAFFGMDM_KMIMGEDAMCE_OFFSET UNITYSDK_OFFSET(0x1A170270)
#define BKBMAFFGMDM_LNFENFDLMIG_OFFSET UNITYSDK_OFFSET(0x1A16FA00)
#define BKBMAFFGMDM_NAMKJOJBAOA_OFFSET UNITYSDK_OFFSET(0x1A170250)
#define BKBMAFFGMDM_OFHECOHPAKG_OFFSET UNITYSDK_OFFSET(0x1A16F9E0)
#define BKBMAFFGMDM_PHOADBJGFBE_OFFSET UNITYSDK_OFFSET(0x1A16FCC0)
#define BKBMAFFGMDM__CTOR_OFFSET UNITYSDK_OFFSET(0x1A170200)

inline static constexpr unsigned int BKBMAFFGMDM_TypeDefinitionIndex = 12932;

class BKBMAFFGMDM : public ::System::Object
{
public:
	::Il2CppArray<::JCHEHDNABJI*>* OJMBOGGMIKO; // 0x10
	::System::Action* PLDOELOOFLL; // 0x18
	::System::Collections::Generic::Dictionary_2<::System::Int32, ::System::Int32>* FLBOKGKPECD; // 0x20
	::System::Collections::Generic::HashSet_1<::System::Int32>* LHINHLCKHNE; // 0x28
	::BAIOBCHGHFB DHDJDGFNBOA; // 0x30
	::System::Boolean DLGKLGKOMHK; // 0x48
	::System::Byte _padding0[0x3];
	::System::Int32 IJDGGCANOFI; // 0x4C

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + BKBMAFFGMDM__CTOR_OFFSET))(this);
	}

	::System::Boolean OFHECOHPAKG()
	{
		return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + BKBMAFFGMDM_OFHECOHPAKG_OFFSET))(this);
	}

	::System::Void LNFENFDLMIG()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + BKBMAFFGMDM_LNFENFDLMIG_OFFSET))(this);
	}

	::System::Void FPMKEGMLNHG(::System::Action* EJGDHCIBCJH)
	{
		return ((::System::Void(*)(::PVOID, ::System::Action*))((::PBYTE)hIl2Cpp + BKBMAFFGMDM_FPMKEGMLNHG_OFFSET))(this, EJGDHCIBCJH);
	}

	::System::Void BMNMLAIJJGF(::KECPLIFGOCJ GFCJHNHLFEF)
	{
		return ((::System::Void(*)(::PVOID, ::KECPLIFGOCJ))((::PBYTE)hIl2Cpp + BKBMAFFGMDM_BMNMLAIJJGF_OFFSET))(this, GFCJHNHLFEF);
	}

	::System::Void PHOADBJGFBE()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + BKBMAFFGMDM_PHOADBJGFBE_OFFSET))(this);
	}

	::System::Void BHLAEBMEOLO()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + BKBMAFFGMDM_BHLAEBMEOLO_OFFSET))(this);
	}

	::System::Void Finalize()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + BKBMAFFGMDM_FINALIZE_OFFSET))(this);
	}

	::System::Void NAMKJOJBAOA()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + BKBMAFFGMDM_NAMKJOJBAOA_OFFSET))(this);
	}

	::System::Void KMIMGEDAMCE(::Il2CppArray<::System::Byte>* LJBPECKCCEA)
	{
		return ((::System::Void(*)(::PVOID, ::Il2CppArray<::System::Byte>*))((::PBYTE)hIl2Cpp + BKBMAFFGMDM_KMIMGEDAMCE_OFFSET))(this, LJBPECKCCEA);
	}

	::System::Void CHLEALKAOJO()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + BKBMAFFGMDM_CHLEALKAOJO_OFFSET))(this);
	}

	::JCHEHDNABJI* IFDPKDOFOJD(::System::Int32 MGMDLMBEDJF)
	{
		return ((::JCHEHDNABJI*(*)(::PVOID, ::System::Int32))((::PBYTE)hIl2Cpp + BKBMAFFGMDM_IFDPKDOFOJD_OFFSET))(this, MGMDLMBEDJF);
	}
};
