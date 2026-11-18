#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/CPCEBEPCFKI.h"
#include "unitysdk/KECPLIFGOCJ.h"
#include "unitysdk/System/Object.h"

class MHKMGGPPOEL;
namespace System { class Action; }
namespace System::Collections::Generic { template <typename T1, typename T2> class Dictionary_2; }
namespace System::Collections::Generic { template <typename T> class HashSet_1; }

#define BOIGBKDBDKC_BHLAEBMEOLO_OFFSET UNITYSDK_OFFSET(0x194FCBC0)
#define BOIGBKDBDKC_BMNMLAIJJGF_OFFSET UNITYSDK_OFFSET(0x194FC990)
#define BOIGBKDBDKC_CHLEALKAOJO_OFFSET UNITYSDK_OFFSET(0x194FCB00)
#define BOIGBKDBDKC_FINALIZE_OFFSET UNITYSDK_OFFSET(0x194FCCA0)
#define BOIGBKDBDKC_FPMKEGMLNHG_OFFSET UNITYSDK_OFFSET(0x194FC9A0)
#define BOIGBKDBDKC_KMIMGEDAMCE_OFFSET UNITYSDK_OFFSET(0x194FCE20)
#define BOIGBKDBDKC_LNFENFDLMIG_OFFSET UNITYSDK_OFFSET(0x194FC5F0)
#define BOIGBKDBDKC_OFHECOHPAKG_OFFSET UNITYSDK_OFFSET(0x194FC5D0)
#define BOIGBKDBDKC_PHOADBJGFBE_OFFSET UNITYSDK_OFFSET(0x194FC8B0)
#define BOIGBKDBDKC__CTOR_OFFSET UNITYSDK_OFFSET(0x194FCDD0)

inline static constexpr unsigned int BOIGBKDBDKC_TypeDefinitionIndex = 16669;

class BOIGBKDBDKC : public ::System::Object
{
public:
	::CPCEBEPCFKI DHDJDGFNBOA; // 0x10
	::Il2CppArray<::MHKMGGPPOEL*>* OJMBOGGMIKO; // 0x28
	::System::Collections::Generic::Dictionary_2<::System::Int32, ::System::Int32>* FLBOKGKPECD; // 0x30
	::System::Action* PLDOELOOFLL; // 0x38
	::System::Collections::Generic::HashSet_1<::System::Int32>* LHINHLCKHNE; // 0x40
	::System::Int32 IJDGGCANOFI; // 0x48
	::System::Boolean DLGKLGKOMHK; // 0x4C

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + BOIGBKDBDKC__CTOR_OFFSET))(this);
	}

	::System::Boolean OFHECOHPAKG()
	{
		return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + BOIGBKDBDKC_OFHECOHPAKG_OFFSET))(this);
	}

	::System::Void LNFENFDLMIG()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + BOIGBKDBDKC_LNFENFDLMIG_OFFSET))(this);
	}

	::System::Void FPMKEGMLNHG(::System::Action* EJGDHCIBCJH)
	{
		return ((::System::Void(*)(::PVOID, ::System::Action*))((::PBYTE)hIl2Cpp + BOIGBKDBDKC_FPMKEGMLNHG_OFFSET))(this, EJGDHCIBCJH);
	}

	::System::Void BMNMLAIJJGF(::KECPLIFGOCJ GFCJHNHLFEF)
	{
		return ((::System::Void(*)(::PVOID, ::KECPLIFGOCJ))((::PBYTE)hIl2Cpp + BOIGBKDBDKC_BMNMLAIJJGF_OFFSET))(this, GFCJHNHLFEF);
	}

	::System::Void PHOADBJGFBE()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + BOIGBKDBDKC_PHOADBJGFBE_OFFSET))(this);
	}

	::System::Void BHLAEBMEOLO()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + BOIGBKDBDKC_BHLAEBMEOLO_OFFSET))(this);
	}

	::System::Void Finalize()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + BOIGBKDBDKC_FINALIZE_OFFSET))(this);
	}

	::System::Void CHLEALKAOJO()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + BOIGBKDBDKC_CHLEALKAOJO_OFFSET))(this);
	}

	::System::Void KMIMGEDAMCE(::Il2CppArray<::System::Byte>* LJBPECKCCEA)
	{
		return ((::System::Void(*)(::PVOID, ::Il2CppArray<::System::Byte>*))((::PBYTE)hIl2Cpp + BOIGBKDBDKC_KMIMGEDAMCE_OFFSET))(this, LJBPECKCCEA);
	}
};
