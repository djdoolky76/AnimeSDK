#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/ACIHCJJNMGO.h"
#include "unitysdk/KECPLIFGOCJ.h"
#include "unitysdk/System/Object.h"

class AADLDMMLOIF;
namespace System { class Action; }
namespace System::Collections::Generic { template <typename T1, typename T2> class Dictionary_2; }
namespace System::Collections::Generic { template <typename T> class HashSet_1; }

#define JELBCHIEDLJ_BHLAEBMEOLO_OFFSET UNITYSDK_OFFSET(0x195482B0)
#define JELBCHIEDLJ_BMNMLAIJJGF_OFFSET UNITYSDK_OFFSET(0x19548070)
#define JELBCHIEDLJ_CHLEALKAOJO_OFFSET UNITYSDK_OFFSET(0x195481F0)
#define JELBCHIEDLJ_FINALIZE_OFFSET UNITYSDK_OFFSET(0x19548390)
#define JELBCHIEDLJ_FPMKEGMLNHG_OFFSET UNITYSDK_OFFSET(0x19548080)
#define JELBCHIEDLJ_KMIMGEDAMCE_OFFSET UNITYSDK_OFFSET(0x19548510)
#define JELBCHIEDLJ_LNFENFDLMIG_OFFSET UNITYSDK_OFFSET(0x19547CC0)
#define JELBCHIEDLJ_OFHECOHPAKG_OFFSET UNITYSDK_OFFSET(0x19547CA0)
#define JELBCHIEDLJ_PHOADBJGFBE_OFFSET UNITYSDK_OFFSET(0x19547F80)
#define JELBCHIEDLJ__CTOR_OFFSET UNITYSDK_OFFSET(0x195484C0)

inline static constexpr unsigned int JELBCHIEDLJ_TypeDefinitionIndex = 12502;

class JELBCHIEDLJ : public ::System::Object
{
public:
	::System::Collections::Generic::HashSet_1<::System::Int32>* LHINHLCKHNE; // 0x10
	::Il2CppArray<::AADLDMMLOIF*>* OJMBOGGMIKO; // 0x18
	::System::Action* PLDOELOOFLL; // 0x20
	::ACIHCJJNMGO DHDJDGFNBOA; // 0x28
	::System::Collections::Generic::Dictionary_2<::System::Int32, ::System::Int32>* FLBOKGKPECD; // 0x40
	::System::Int32 IJDGGCANOFI; // 0x48
	::System::Boolean DLGKLGKOMHK; // 0x4C

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + JELBCHIEDLJ__CTOR_OFFSET))(this);
	}

	::System::Boolean OFHECOHPAKG()
	{
		return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + JELBCHIEDLJ_OFHECOHPAKG_OFFSET))(this);
	}

	::System::Void LNFENFDLMIG()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + JELBCHIEDLJ_LNFENFDLMIG_OFFSET))(this);
	}

	::System::Void FPMKEGMLNHG(::System::Action* EJGDHCIBCJH)
	{
		return ((::System::Void(*)(::PVOID, ::System::Action*))((::PBYTE)hIl2Cpp + JELBCHIEDLJ_FPMKEGMLNHG_OFFSET))(this, EJGDHCIBCJH);
	}

	::System::Void BMNMLAIJJGF(::KECPLIFGOCJ GFCJHNHLFEF)
	{
		return ((::System::Void(*)(::PVOID, ::KECPLIFGOCJ))((::PBYTE)hIl2Cpp + JELBCHIEDLJ_BMNMLAIJJGF_OFFSET))(this, GFCJHNHLFEF);
	}

	::System::Void PHOADBJGFBE()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + JELBCHIEDLJ_PHOADBJGFBE_OFFSET))(this);
	}

	::System::Void BHLAEBMEOLO()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + JELBCHIEDLJ_BHLAEBMEOLO_OFFSET))(this);
	}

	::System::Void Finalize()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + JELBCHIEDLJ_FINALIZE_OFFSET))(this);
	}

	::System::Void KMIMGEDAMCE(::Il2CppArray<::System::Byte>* LJBPECKCCEA)
	{
		return ((::System::Void(*)(::PVOID, ::Il2CppArray<::System::Byte>*))((::PBYTE)hIl2Cpp + JELBCHIEDLJ_KMIMGEDAMCE_OFFSET))(this, LJBPECKCCEA);
	}

	::System::Void CHLEALKAOJO()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + JELBCHIEDLJ_CHLEALKAOJO_OFFSET))(this);
	}
};
