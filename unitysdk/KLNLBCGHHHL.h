#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/FNPNNNNFIFN.h"
#include "unitysdk/KECPLIFGOCJ.h"
#include "unitysdk/System/Object.h"

class ODEKHJFIPHJ;
namespace System { class Action; }
namespace System::Collections::Generic { template <typename T1, typename T2> class Dictionary_2; }
namespace System::Collections::Generic { template <typename T> class HashSet_1; }

#define KLNLBCGHHHL_BHLAEBMEOLO_OFFSET UNITYSDK_OFFSET(0x1B50A740)
#define KLNLBCGHHHL_BMNMLAIJJGF_OFFSET UNITYSDK_OFFSET(0x1B50A500)
#define KLNLBCGHHHL_CHLEALKAOJO_OFFSET UNITYSDK_OFFSET(0x1B50A680)
#define KLNLBCGHHHL_FINALIZE_OFFSET UNITYSDK_OFFSET(0x1B50A820)
#define KLNLBCGHHHL_FPMKEGMLNHG_OFFSET UNITYSDK_OFFSET(0x1B50A510)
#define KLNLBCGHHHL_KMIMGEDAMCE_OFFSET UNITYSDK_OFFSET(0x1B50A9A0)
#define KLNLBCGHHHL_LNFENFDLMIG_OFFSET UNITYSDK_OFFSET(0x1B50A150)
#define KLNLBCGHHHL_OFHECOHPAKG_OFFSET UNITYSDK_OFFSET(0x1B50A130)
#define KLNLBCGHHHL_PHOADBJGFBE_OFFSET UNITYSDK_OFFSET(0x1B50A410)
#define KLNLBCGHHHL__CTOR_OFFSET UNITYSDK_OFFSET(0x1B50A950)

inline static constexpr unsigned int KLNLBCGHHHL_TypeDefinitionIndex = 11334;

class KLNLBCGHHHL : public ::System::Object
{
public:
	::FNPNNNNFIFN DHDJDGFNBOA; // 0x10
	::Il2CppArray<::ODEKHJFIPHJ*>* OJMBOGGMIKO; // 0x28
	::System::Collections::Generic::HashSet_1<::System::Int32>* LHINHLCKHNE; // 0x30
	::System::Collections::Generic::Dictionary_2<::System::Int32, ::System::Int32>* FLBOKGKPECD; // 0x38
	::System::Action* PLDOELOOFLL; // 0x40
	::System::Boolean DLGKLGKOMHK; // 0x48
	::System::Byte _padding0[0x3];
	::System::Int32 IJDGGCANOFI; // 0x4C

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + KLNLBCGHHHL__CTOR_OFFSET))(this);
	}

	::System::Boolean OFHECOHPAKG()
	{
		return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + KLNLBCGHHHL_OFHECOHPAKG_OFFSET))(this);
	}

	::System::Void LNFENFDLMIG()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + KLNLBCGHHHL_LNFENFDLMIG_OFFSET))(this);
	}

	::System::Void FPMKEGMLNHG(::System::Action* EJGDHCIBCJH)
	{
		return ((::System::Void(*)(::PVOID, ::System::Action*))((::PBYTE)hIl2Cpp + KLNLBCGHHHL_FPMKEGMLNHG_OFFSET))(this, EJGDHCIBCJH);
	}

	::System::Void BMNMLAIJJGF(::KECPLIFGOCJ GFCJHNHLFEF)
	{
		return ((::System::Void(*)(::PVOID, ::KECPLIFGOCJ))((::PBYTE)hIl2Cpp + KLNLBCGHHHL_BMNMLAIJJGF_OFFSET))(this, GFCJHNHLFEF);
	}

	::System::Void PHOADBJGFBE()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + KLNLBCGHHHL_PHOADBJGFBE_OFFSET))(this);
	}

	::System::Void BHLAEBMEOLO()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + KLNLBCGHHHL_BHLAEBMEOLO_OFFSET))(this);
	}

	::System::Void Finalize()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + KLNLBCGHHHL_FINALIZE_OFFSET))(this);
	}

	::System::Void CHLEALKAOJO()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + KLNLBCGHHHL_CHLEALKAOJO_OFFSET))(this);
	}

	::System::Void KMIMGEDAMCE(::Il2CppArray<::System::Byte>* LJBPECKCCEA)
	{
		return ((::System::Void(*)(::PVOID, ::Il2CppArray<::System::Byte>*))((::PBYTE)hIl2Cpp + KLNLBCGHHHL_KMIMGEDAMCE_OFFSET))(this, LJBPECKCCEA);
	}
};
