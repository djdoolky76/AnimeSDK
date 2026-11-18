#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/AILGMLPMCEC.h"
#include "unitysdk/KECPLIFGOCJ.h"
#include "unitysdk/System/Object.h"

class AHMKOLADHOC;
namespace System { class Action; }
namespace System::Collections::Generic { template <typename T1, typename T2> class Dictionary_2; }
namespace System::Collections::Generic { template <typename T> class HashSet_1; }

#define KICCPGJPJLL_BHLAEBMEOLO_OFFSET UNITYSDK_OFFSET(0x1B7E42D0)
#define KICCPGJPJLL_BMNMLAIJJGF_OFFSET UNITYSDK_OFFSET(0x1B7E4090)
#define KICCPGJPJLL_CHLEALKAOJO_OFFSET UNITYSDK_OFFSET(0x1B7E4210)
#define KICCPGJPJLL_FINALIZE_OFFSET UNITYSDK_OFFSET(0x1B7E43B0)
#define KICCPGJPJLL_FPMKEGMLNHG_OFFSET UNITYSDK_OFFSET(0x1B7E40A0)
#define KICCPGJPJLL_KMIMGEDAMCE_OFFSET UNITYSDK_OFFSET(0x1B7E4530)
#define KICCPGJPJLL_LNFENFDLMIG_OFFSET UNITYSDK_OFFSET(0x1B7E3CE0)
#define KICCPGJPJLL_OFHECOHPAKG_OFFSET UNITYSDK_OFFSET(0x1B7E3CC0)
#define KICCPGJPJLL_PHOADBJGFBE_OFFSET UNITYSDK_OFFSET(0x1B7E3FA0)
#define KICCPGJPJLL__CTOR_OFFSET UNITYSDK_OFFSET(0x1B7E44E0)

inline static constexpr unsigned int KICCPGJPJLL_TypeDefinitionIndex = 11212;

class KICCPGJPJLL : public ::System::Object
{
public:
	::System::Collections::Generic::HashSet_1<::System::Int32>* LHINHLCKHNE; // 0x10
	::Il2CppArray<::AHMKOLADHOC*>* OJMBOGGMIKO; // 0x18
	::System::Action* PLDOELOOFLL; // 0x20
	::AILGMLPMCEC DHDJDGFNBOA; // 0x28
	::System::Collections::Generic::Dictionary_2<::System::Int32, ::System::Int32>* FLBOKGKPECD; // 0x40
	::System::Int32 IJDGGCANOFI; // 0x48
	::System::Boolean DLGKLGKOMHK; // 0x4C

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + KICCPGJPJLL__CTOR_OFFSET))(this);
	}

	::System::Boolean OFHECOHPAKG()
	{
		return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + KICCPGJPJLL_OFHECOHPAKG_OFFSET))(this);
	}

	::System::Void LNFENFDLMIG()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + KICCPGJPJLL_LNFENFDLMIG_OFFSET))(this);
	}

	::System::Void FPMKEGMLNHG(::System::Action* EJGDHCIBCJH)
	{
		return ((::System::Void(*)(::PVOID, ::System::Action*))((::PBYTE)hIl2Cpp + KICCPGJPJLL_FPMKEGMLNHG_OFFSET))(this, EJGDHCIBCJH);
	}

	::System::Void BMNMLAIJJGF(::KECPLIFGOCJ GFCJHNHLFEF)
	{
		return ((::System::Void(*)(::PVOID, ::KECPLIFGOCJ))((::PBYTE)hIl2Cpp + KICCPGJPJLL_BMNMLAIJJGF_OFFSET))(this, GFCJHNHLFEF);
	}

	::System::Void PHOADBJGFBE()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + KICCPGJPJLL_PHOADBJGFBE_OFFSET))(this);
	}

	::System::Void BHLAEBMEOLO()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + KICCPGJPJLL_BHLAEBMEOLO_OFFSET))(this);
	}

	::System::Void Finalize()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + KICCPGJPJLL_FINALIZE_OFFSET))(this);
	}

	::System::Void KMIMGEDAMCE(::Il2CppArray<::System::Byte>* LJBPECKCCEA)
	{
		return ((::System::Void(*)(::PVOID, ::Il2CppArray<::System::Byte>*))((::PBYTE)hIl2Cpp + KICCPGJPJLL_KMIMGEDAMCE_OFFSET))(this, LJBPECKCCEA);
	}

	::System::Void CHLEALKAOJO()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + KICCPGJPJLL_CHLEALKAOJO_OFFSET))(this);
	}
};
