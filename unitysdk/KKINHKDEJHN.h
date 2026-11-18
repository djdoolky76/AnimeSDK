#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/AFEDFEJHBOL.h"
#include "unitysdk/KECPLIFGOCJ.h"
#include "unitysdk/System/Object.h"

class LMIDLCMMFBD;
namespace System { class Action; }
namespace System::Collections::Generic { template <typename T1, typename T2> class Dictionary_2; }
namespace System::Collections::Generic { template <typename T> class HashSet_1; }

#define KKINHKDEJHN_BHLAEBMEOLO_OFFSET UNITYSDK_OFFSET(0x1BB03FA0)
#define KKINHKDEJHN_BMNMLAIJJGF_OFFSET UNITYSDK_OFFSET(0x1BB03D70)
#define KKINHKDEJHN_CHLEALKAOJO_OFFSET UNITYSDK_OFFSET(0x1BB03EE0)
#define KKINHKDEJHN_FINALIZE_OFFSET UNITYSDK_OFFSET(0x1BB04080)
#define KKINHKDEJHN_FPMKEGMLNHG_OFFSET UNITYSDK_OFFSET(0x1BB03D80)
#define KKINHKDEJHN_KMIMGEDAMCE_OFFSET UNITYSDK_OFFSET(0x1BB04200)
#define KKINHKDEJHN_LNFENFDLMIG_OFFSET UNITYSDK_OFFSET(0x1BB039D0)
#define KKINHKDEJHN_OFHECOHPAKG_OFFSET UNITYSDK_OFFSET(0x1BB039B0)
#define KKINHKDEJHN_PHOADBJGFBE_OFFSET UNITYSDK_OFFSET(0x1BB03C90)
#define KKINHKDEJHN__CTOR_OFFSET UNITYSDK_OFFSET(0x1BB041B0)

inline static constexpr unsigned int KKINHKDEJHN_TypeDefinitionIndex = 17052;

class KKINHKDEJHN : public ::System::Object
{
public:
	::Il2CppArray<::LMIDLCMMFBD*>* OJMBOGGMIKO; // 0x10
	::System::Collections::Generic::Dictionary_2<::System::Int32, ::System::Int32>* FLBOKGKPECD; // 0x18
	::System::Action* PLDOELOOFLL; // 0x20
	::System::Collections::Generic::HashSet_1<::System::Int32>* LHINHLCKHNE; // 0x28
	::AFEDFEJHBOL DHDJDGFNBOA; // 0x30
	::System::Int32 IJDGGCANOFI; // 0x48
	::System::Boolean DLGKLGKOMHK; // 0x4C

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + KKINHKDEJHN__CTOR_OFFSET))(this);
	}

	::System::Boolean OFHECOHPAKG()
	{
		return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + KKINHKDEJHN_OFHECOHPAKG_OFFSET))(this);
	}

	::System::Void LNFENFDLMIG()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + KKINHKDEJHN_LNFENFDLMIG_OFFSET))(this);
	}

	::System::Void FPMKEGMLNHG(::System::Action* EJGDHCIBCJH)
	{
		return ((::System::Void(*)(::PVOID, ::System::Action*))((::PBYTE)hIl2Cpp + KKINHKDEJHN_FPMKEGMLNHG_OFFSET))(this, EJGDHCIBCJH);
	}

	::System::Void BMNMLAIJJGF(::KECPLIFGOCJ GFCJHNHLFEF)
	{
		return ((::System::Void(*)(::PVOID, ::KECPLIFGOCJ))((::PBYTE)hIl2Cpp + KKINHKDEJHN_BMNMLAIJJGF_OFFSET))(this, GFCJHNHLFEF);
	}

	::System::Void PHOADBJGFBE()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + KKINHKDEJHN_PHOADBJGFBE_OFFSET))(this);
	}

	::System::Void BHLAEBMEOLO()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + KKINHKDEJHN_BHLAEBMEOLO_OFFSET))(this);
	}

	::System::Void Finalize()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + KKINHKDEJHN_FINALIZE_OFFSET))(this);
	}

	::System::Void KMIMGEDAMCE(::Il2CppArray<::System::Byte>* LJBPECKCCEA)
	{
		return ((::System::Void(*)(::PVOID, ::Il2CppArray<::System::Byte>*))((::PBYTE)hIl2Cpp + KKINHKDEJHN_KMIMGEDAMCE_OFFSET))(this, LJBPECKCCEA);
	}

	::System::Void CHLEALKAOJO()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + KKINHKDEJHN_CHLEALKAOJO_OFFSET))(this);
	}
};
