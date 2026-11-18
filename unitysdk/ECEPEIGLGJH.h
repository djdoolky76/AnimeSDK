#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/KECPLIFGOCJ.h"
#include "unitysdk/NAHGJEFMIPK.h"
#include "unitysdk/System/Object.h"

class PGLNGEMKHBG;
namespace System { class Action; }
namespace System::Collections::Generic { template <typename T1, typename T2> class Dictionary_2; }
namespace System::Collections::Generic { template <typename T> class HashSet_1; }

#define ECEPEIGLGJH_BHLAEBMEOLO_OFFSET UNITYSDK_OFFSET(0x1B9B1040)
#define ECEPEIGLGJH_BMNMLAIJJGF_OFFSET UNITYSDK_OFFSET(0x1B9B0E10)
#define ECEPEIGLGJH_CHLEALKAOJO_OFFSET UNITYSDK_OFFSET(0x1B9B0F80)
#define ECEPEIGLGJH_FINALIZE_OFFSET UNITYSDK_OFFSET(0x1B9B1120)
#define ECEPEIGLGJH_FPMKEGMLNHG_OFFSET UNITYSDK_OFFSET(0x1B9B0E20)
#define ECEPEIGLGJH_KMIMGEDAMCE_OFFSET UNITYSDK_OFFSET(0x1B9B12A0)
#define ECEPEIGLGJH_LNFENFDLMIG_OFFSET UNITYSDK_OFFSET(0x1B9B0A70)
#define ECEPEIGLGJH_OFHECOHPAKG_OFFSET UNITYSDK_OFFSET(0x1B9B0A50)
#define ECEPEIGLGJH_PHOADBJGFBE_OFFSET UNITYSDK_OFFSET(0x1B9B0D30)
#define ECEPEIGLGJH__CTOR_OFFSET UNITYSDK_OFFSET(0x1B9B1250)

inline static constexpr unsigned int ECEPEIGLGJH_TypeDefinitionIndex = 16872;

class ECEPEIGLGJH : public ::System::Object
{
public:
	::System::Collections::Generic::Dictionary_2<::System::Int32, ::System::Int32>* FLBOKGKPECD; // 0x10
	::Il2CppArray<::PGLNGEMKHBG*>* OJMBOGGMIKO; // 0x18
	::System::Action* PLDOELOOFLL; // 0x20
	::System::Collections::Generic::HashSet_1<::System::Int32>* LHINHLCKHNE; // 0x28
	::NAHGJEFMIPK DHDJDGFNBOA; // 0x30
	::System::Boolean DLGKLGKOMHK; // 0x48
	::System::Byte _padding0[0x3];
	::System::Int32 IJDGGCANOFI; // 0x4C

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + ECEPEIGLGJH__CTOR_OFFSET))(this);
	}

	::System::Boolean OFHECOHPAKG()
	{
		return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + ECEPEIGLGJH_OFHECOHPAKG_OFFSET))(this);
	}

	::System::Void LNFENFDLMIG()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + ECEPEIGLGJH_LNFENFDLMIG_OFFSET))(this);
	}

	::System::Void FPMKEGMLNHG(::System::Action* EJGDHCIBCJH)
	{
		return ((::System::Void(*)(::PVOID, ::System::Action*))((::PBYTE)hIl2Cpp + ECEPEIGLGJH_FPMKEGMLNHG_OFFSET))(this, EJGDHCIBCJH);
	}

	::System::Void BMNMLAIJJGF(::KECPLIFGOCJ GFCJHNHLFEF)
	{
		return ((::System::Void(*)(::PVOID, ::KECPLIFGOCJ))((::PBYTE)hIl2Cpp + ECEPEIGLGJH_BMNMLAIJJGF_OFFSET))(this, GFCJHNHLFEF);
	}

	::System::Void PHOADBJGFBE()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + ECEPEIGLGJH_PHOADBJGFBE_OFFSET))(this);
	}

	::System::Void BHLAEBMEOLO()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + ECEPEIGLGJH_BHLAEBMEOLO_OFFSET))(this);
	}

	::System::Void Finalize()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + ECEPEIGLGJH_FINALIZE_OFFSET))(this);
	}

	::System::Void KMIMGEDAMCE(::Il2CppArray<::System::Byte>* LJBPECKCCEA)
	{
		return ((::System::Void(*)(::PVOID, ::Il2CppArray<::System::Byte>*))((::PBYTE)hIl2Cpp + ECEPEIGLGJH_KMIMGEDAMCE_OFFSET))(this, LJBPECKCCEA);
	}

	::System::Void CHLEALKAOJO()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + ECEPEIGLGJH_CHLEALKAOJO_OFFSET))(this);
	}
};
