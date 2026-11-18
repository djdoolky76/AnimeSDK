#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/HKKOPCIJGNI.h"
#include "unitysdk/KECPLIFGOCJ.h"
#include "unitysdk/System/Object.h"

class JCDDGOFFOCK;
namespace System { class Action; }
namespace System::Collections::Generic { template <typename T1, typename T2> class Dictionary_2; }
namespace System::Collections::Generic { template <typename T> class HashSet_1; }

#define FPABICDNNPA_BHLAEBMEOLO_OFFSET UNITYSDK_OFFSET(0x1A5B2BA0)
#define FPABICDNNPA_BMNMLAIJJGF_OFFSET UNITYSDK_OFFSET(0x1A5B2920)
#define FPABICDNNPA_CHLEALKAOJO_OFFSET UNITYSDK_OFFSET(0x1A5B2930)
#define FPABICDNNPA_FINALIZE_OFFSET UNITYSDK_OFFSET(0x1A5B29F0)
#define FPABICDNNPA_FPMKEGMLNHG_OFFSET UNITYSDK_OFFSET(0x1A5B2B20)
#define FPABICDNNPA_IFDPKDOFOJD_OFFSET UNITYSDK_OFFSET(0x1A5B2F80)
#define FPABICDNNPA_KMIMGEDAMCE_OFFSET UNITYSDK_OFFSET(0x1A5B2CD0)
#define FPABICDNNPA_LNFENFDLMIG_OFFSET UNITYSDK_OFFSET(0x1A5B2580)
#define FPABICDNNPA_NAMKJOJBAOA_OFFSET UNITYSDK_OFFSET(0x1A5B31C0)
#define FPABICDNNPA_OFHECOHPAKG_OFFSET UNITYSDK_OFFSET(0x1A5B2560)
#define FPABICDNNPA_PHOADBJGFBE_OFFSET UNITYSDK_OFFSET(0x1A5B2840)
#define FPABICDNNPA__CTOR_OFFSET UNITYSDK_OFFSET(0x1A5B2C80)

inline static constexpr unsigned int FPABICDNNPA_TypeDefinitionIndex = 9361;

class FPABICDNNPA : public ::System::Object
{
public:
	::HKKOPCIJGNI DHDJDGFNBOA; // 0x10
	::System::Collections::Generic::HashSet_1<::System::Int32>* LHINHLCKHNE; // 0x28
	::System::Collections::Generic::Dictionary_2<::System::Int32, ::System::Int32>* FLBOKGKPECD; // 0x30
	::Il2CppArray<::JCDDGOFFOCK*>* OJMBOGGMIKO; // 0x38
	::System::Action* PLDOELOOFLL; // 0x40
	::System::Int32 IJDGGCANOFI; // 0x48
	::System::Boolean DLGKLGKOMHK; // 0x4C

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + FPABICDNNPA__CTOR_OFFSET))(this);
	}

	::System::Boolean OFHECOHPAKG()
	{
		return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + FPABICDNNPA_OFHECOHPAKG_OFFSET))(this);
	}

	::System::Void LNFENFDLMIG()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + FPABICDNNPA_LNFENFDLMIG_OFFSET))(this);
	}

	::System::Void PHOADBJGFBE()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + FPABICDNNPA_PHOADBJGFBE_OFFSET))(this);
	}

	::System::Void Finalize()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + FPABICDNNPA_FINALIZE_OFFSET))(this);
	}

	::System::Void FPMKEGMLNHG(::System::Action* EJGDHCIBCJH)
	{
		return ((::System::Void(*)(::PVOID, ::System::Action*))((::PBYTE)hIl2Cpp + FPABICDNNPA_FPMKEGMLNHG_OFFSET))(this, EJGDHCIBCJH);
	}

	::System::Void BMNMLAIJJGF(::KECPLIFGOCJ GFCJHNHLFEF)
	{
		return ((::System::Void(*)(::PVOID, ::KECPLIFGOCJ))((::PBYTE)hIl2Cpp + FPABICDNNPA_BMNMLAIJJGF_OFFSET))(this, GFCJHNHLFEF);
	}

	::System::Void BHLAEBMEOLO()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + FPABICDNNPA_BHLAEBMEOLO_OFFSET))(this);
	}

	::System::Void KMIMGEDAMCE(::Il2CppArray<::System::Byte>* LJBPECKCCEA)
	{
		return ((::System::Void(*)(::PVOID, ::Il2CppArray<::System::Byte>*))((::PBYTE)hIl2Cpp + FPABICDNNPA_KMIMGEDAMCE_OFFSET))(this, LJBPECKCCEA);
	}

	::JCDDGOFFOCK* IFDPKDOFOJD(::System::Int32 MGMDLMBEDJF)
	{
		return ((::JCDDGOFFOCK*(*)(::PVOID, ::System::Int32))((::PBYTE)hIl2Cpp + FPABICDNNPA_IFDPKDOFOJD_OFFSET))(this, MGMDLMBEDJF);
	}

	::System::Void CHLEALKAOJO()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + FPABICDNNPA_CHLEALKAOJO_OFFSET))(this);
	}

	::System::Void NAMKJOJBAOA()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + FPABICDNNPA_NAMKJOJBAOA_OFFSET))(this);
	}
};
