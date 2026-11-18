#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/DJJIJLDINFG.h"
#include "unitysdk/KECPLIFGOCJ.h"
#include "unitysdk/System/Object.h"

class GJGMBMPDEDA;
namespace System { class Action; }
namespace System::Collections::Generic { template <typename T1, typename T2> class Dictionary_2; }
namespace System::Collections::Generic { template <typename T> class HashSet_1; }

#define IAKGDBGHBCF_BHLAEBMEOLO_OFFSET UNITYSDK_OFFSET(0x1A5D26F0)
#define IAKGDBGHBCF_BMNMLAIJJGF_OFFSET UNITYSDK_OFFSET(0x1A5D24B0)
#define IAKGDBGHBCF_CHLEALKAOJO_OFFSET UNITYSDK_OFFSET(0x1A5D2630)
#define IAKGDBGHBCF_FINALIZE_OFFSET UNITYSDK_OFFSET(0x1A5D27D0)
#define IAKGDBGHBCF_FPMKEGMLNHG_OFFSET UNITYSDK_OFFSET(0x1A5D24C0)
#define IAKGDBGHBCF_KMIMGEDAMCE_OFFSET UNITYSDK_OFFSET(0x1A5D2950)
#define IAKGDBGHBCF_LNFENFDLMIG_OFFSET UNITYSDK_OFFSET(0x1A5D2100)
#define IAKGDBGHBCF_OFHECOHPAKG_OFFSET UNITYSDK_OFFSET(0x1A5D20E0)
#define IAKGDBGHBCF_PHOADBJGFBE_OFFSET UNITYSDK_OFFSET(0x1A5D23C0)
#define IAKGDBGHBCF__CTOR_OFFSET UNITYSDK_OFFSET(0x1A5D2900)

inline static constexpr unsigned int IAKGDBGHBCF_TypeDefinitionIndex = 11455;

class IAKGDBGHBCF : public ::System::Object
{
public:
	::System::Collections::Generic::HashSet_1<::System::Int32>* LHINHLCKHNE; // 0x10
	::DJJIJLDINFG DHDJDGFNBOA; // 0x18
	::System::Collections::Generic::Dictionary_2<::System::Int32, ::System::Int32>* FLBOKGKPECD; // 0x30
	::System::Action* PLDOELOOFLL; // 0x38
	::Il2CppArray<::GJGMBMPDEDA*>* OJMBOGGMIKO; // 0x40
	::System::Boolean DLGKLGKOMHK; // 0x48
	::System::Byte _padding0[0x3];
	::System::Int32 IJDGGCANOFI; // 0x4C

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + IAKGDBGHBCF__CTOR_OFFSET))(this);
	}

	::System::Boolean OFHECOHPAKG()
	{
		return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + IAKGDBGHBCF_OFHECOHPAKG_OFFSET))(this);
	}

	::System::Void LNFENFDLMIG()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + IAKGDBGHBCF_LNFENFDLMIG_OFFSET))(this);
	}

	::System::Void FPMKEGMLNHG(::System::Action* EJGDHCIBCJH)
	{
		return ((::System::Void(*)(::PVOID, ::System::Action*))((::PBYTE)hIl2Cpp + IAKGDBGHBCF_FPMKEGMLNHG_OFFSET))(this, EJGDHCIBCJH);
	}

	::System::Void BMNMLAIJJGF(::KECPLIFGOCJ GFCJHNHLFEF)
	{
		return ((::System::Void(*)(::PVOID, ::KECPLIFGOCJ))((::PBYTE)hIl2Cpp + IAKGDBGHBCF_BMNMLAIJJGF_OFFSET))(this, GFCJHNHLFEF);
	}

	::System::Void PHOADBJGFBE()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + IAKGDBGHBCF_PHOADBJGFBE_OFFSET))(this);
	}

	::System::Void BHLAEBMEOLO()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + IAKGDBGHBCF_BHLAEBMEOLO_OFFSET))(this);
	}

	::System::Void Finalize()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + IAKGDBGHBCF_FINALIZE_OFFSET))(this);
	}

	::System::Void CHLEALKAOJO()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + IAKGDBGHBCF_CHLEALKAOJO_OFFSET))(this);
	}

	::System::Void KMIMGEDAMCE(::Il2CppArray<::System::Byte>* LJBPECKCCEA)
	{
		return ((::System::Void(*)(::PVOID, ::Il2CppArray<::System::Byte>*))((::PBYTE)hIl2Cpp + IAKGDBGHBCF_KMIMGEDAMCE_OFFSET))(this, LJBPECKCCEA);
	}
};
