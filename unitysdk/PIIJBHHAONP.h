#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/AMLAJNGDCOJ.h"
#include "unitysdk/KECPLIFGOCJ.h"
#include "unitysdk/System/Object.h"

class IKMNPBDCNGC;
namespace System { class Action; }
namespace System::Collections::Generic { template <typename T1, typename T2> class Dictionary_2; }
namespace System::Collections::Generic { template <typename T> class HashSet_1; }

#define PIIJBHHAONP_BHLAEBMEOLO_OFFSET UNITYSDK_OFFSET(0x1D005600)
#define PIIJBHHAONP_BMNMLAIJJGF_OFFSET UNITYSDK_OFFSET(0x1D0053C0)
#define PIIJBHHAONP_CHLEALKAOJO_OFFSET UNITYSDK_OFFSET(0x1D005540)
#define PIIJBHHAONP_FINALIZE_OFFSET UNITYSDK_OFFSET(0x1D0056E0)
#define PIIJBHHAONP_FPMKEGMLNHG_OFFSET UNITYSDK_OFFSET(0x1D0053D0)
#define PIIJBHHAONP_KMIMGEDAMCE_OFFSET UNITYSDK_OFFSET(0x1D005860)
#define PIIJBHHAONP_LNFENFDLMIG_OFFSET UNITYSDK_OFFSET(0x1D005010)
#define PIIJBHHAONP_OFHECOHPAKG_OFFSET UNITYSDK_OFFSET(0x1D004FF0)
#define PIIJBHHAONP_PHOADBJGFBE_OFFSET UNITYSDK_OFFSET(0x1D0052D0)
#define PIIJBHHAONP__CTOR_OFFSET UNITYSDK_OFFSET(0x1D005810)

inline static constexpr unsigned int PIIJBHHAONP_TypeDefinitionIndex = 14898;

class PIIJBHHAONP : public ::System::Object
{
public:
	::System::Collections::Generic::Dictionary_2<::System::Int32, ::System::Int32>* FLBOKGKPECD; // 0x10
	::System::Action* PLDOELOOFLL; // 0x18
	::System::Collections::Generic::HashSet_1<::System::Int32>* LHINHLCKHNE; // 0x20
	::Il2CppArray<::IKMNPBDCNGC*>* OJMBOGGMIKO; // 0x28
	::AMLAJNGDCOJ DHDJDGFNBOA; // 0x30
	::System::Int32 IJDGGCANOFI; // 0x48
	::System::Boolean DLGKLGKOMHK; // 0x4C

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + PIIJBHHAONP__CTOR_OFFSET))(this);
	}

	::System::Boolean OFHECOHPAKG()
	{
		return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + PIIJBHHAONP_OFHECOHPAKG_OFFSET))(this);
	}

	::System::Void LNFENFDLMIG()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + PIIJBHHAONP_LNFENFDLMIG_OFFSET))(this);
	}

	::System::Void FPMKEGMLNHG(::System::Action* EJGDHCIBCJH)
	{
		return ((::System::Void(*)(::PVOID, ::System::Action*))((::PBYTE)hIl2Cpp + PIIJBHHAONP_FPMKEGMLNHG_OFFSET))(this, EJGDHCIBCJH);
	}

	::System::Void BMNMLAIJJGF(::KECPLIFGOCJ GFCJHNHLFEF)
	{
		return ((::System::Void(*)(::PVOID, ::KECPLIFGOCJ))((::PBYTE)hIl2Cpp + PIIJBHHAONP_BMNMLAIJJGF_OFFSET))(this, GFCJHNHLFEF);
	}

	::System::Void PHOADBJGFBE()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + PIIJBHHAONP_PHOADBJGFBE_OFFSET))(this);
	}

	::System::Void BHLAEBMEOLO()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + PIIJBHHAONP_BHLAEBMEOLO_OFFSET))(this);
	}

	::System::Void Finalize()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + PIIJBHHAONP_FINALIZE_OFFSET))(this);
	}

	::System::Void KMIMGEDAMCE(::Il2CppArray<::System::Byte>* LJBPECKCCEA)
	{
		return ((::System::Void(*)(::PVOID, ::Il2CppArray<::System::Byte>*))((::PBYTE)hIl2Cpp + PIIJBHHAONP_KMIMGEDAMCE_OFFSET))(this, LJBPECKCCEA);
	}

	::System::Void CHLEALKAOJO()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + PIIJBHHAONP_CHLEALKAOJO_OFFSET))(this);
	}
};
