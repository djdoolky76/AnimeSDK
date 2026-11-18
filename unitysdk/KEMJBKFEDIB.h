#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/AGDBOCECOPM.h"
#include "unitysdk/KECPLIFGOCJ.h"
#include "unitysdk/System/Object.h"

class MBMNDEJLIKA;
namespace System { class Action; }
namespace System::Collections::Generic { template <typename T1, typename T2> class Dictionary_2; }
namespace System::Collections::Generic { template <typename T> class HashSet_1; }

#define KEMJBKFEDIB_BHLAEBMEOLO_OFFSET UNITYSDK_OFFSET(0x1B502040)
#define KEMJBKFEDIB_BMNMLAIJJGF_OFFSET UNITYSDK_OFFSET(0x1B501E10)
#define KEMJBKFEDIB_CHLEALKAOJO_OFFSET UNITYSDK_OFFSET(0x1B501F80)
#define KEMJBKFEDIB_FINALIZE_OFFSET UNITYSDK_OFFSET(0x1B502120)
#define KEMJBKFEDIB_FPMKEGMLNHG_OFFSET UNITYSDK_OFFSET(0x1B501E20)
#define KEMJBKFEDIB_KMIMGEDAMCE_OFFSET UNITYSDK_OFFSET(0x1B5022A0)
#define KEMJBKFEDIB_LNFENFDLMIG_OFFSET UNITYSDK_OFFSET(0x1B501A70)
#define KEMJBKFEDIB_OFHECOHPAKG_OFFSET UNITYSDK_OFFSET(0x1B501A50)
#define KEMJBKFEDIB_PHOADBJGFBE_OFFSET UNITYSDK_OFFSET(0x1B501D30)
#define KEMJBKFEDIB__CTOR_OFFSET UNITYSDK_OFFSET(0x1B502250)

inline static constexpr unsigned int KEMJBKFEDIB_TypeDefinitionIndex = 13454;

class KEMJBKFEDIB : public ::System::Object
{
public:
	::System::Collections::Generic::Dictionary_2<::System::Int32, ::System::Int32>* FLBOKGKPECD; // 0x10
	::Il2CppArray<::MBMNDEJLIKA*>* OJMBOGGMIKO; // 0x18
	::AGDBOCECOPM DHDJDGFNBOA; // 0x20
	::System::Action* PLDOELOOFLL; // 0x38
	::System::Collections::Generic::HashSet_1<::System::Int32>* LHINHLCKHNE; // 0x40
	::System::Boolean DLGKLGKOMHK; // 0x48
	::System::Byte _padding0[0x3];
	::System::Int32 IJDGGCANOFI; // 0x4C

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + KEMJBKFEDIB__CTOR_OFFSET))(this);
	}

	::System::Boolean OFHECOHPAKG()
	{
		return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + KEMJBKFEDIB_OFHECOHPAKG_OFFSET))(this);
	}

	::System::Void LNFENFDLMIG()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + KEMJBKFEDIB_LNFENFDLMIG_OFFSET))(this);
	}

	::System::Void FPMKEGMLNHG(::System::Action* EJGDHCIBCJH)
	{
		return ((::System::Void(*)(::PVOID, ::System::Action*))((::PBYTE)hIl2Cpp + KEMJBKFEDIB_FPMKEGMLNHG_OFFSET))(this, EJGDHCIBCJH);
	}

	::System::Void BMNMLAIJJGF(::KECPLIFGOCJ GFCJHNHLFEF)
	{
		return ((::System::Void(*)(::PVOID, ::KECPLIFGOCJ))((::PBYTE)hIl2Cpp + KEMJBKFEDIB_BMNMLAIJJGF_OFFSET))(this, GFCJHNHLFEF);
	}

	::System::Void PHOADBJGFBE()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + KEMJBKFEDIB_PHOADBJGFBE_OFFSET))(this);
	}

	::System::Void BHLAEBMEOLO()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + KEMJBKFEDIB_BHLAEBMEOLO_OFFSET))(this);
	}

	::System::Void Finalize()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + KEMJBKFEDIB_FINALIZE_OFFSET))(this);
	}

	::System::Void KMIMGEDAMCE(::Il2CppArray<::System::Byte>* LJBPECKCCEA)
	{
		return ((::System::Void(*)(::PVOID, ::Il2CppArray<::System::Byte>*))((::PBYTE)hIl2Cpp + KEMJBKFEDIB_KMIMGEDAMCE_OFFSET))(this, LJBPECKCCEA);
	}

	::System::Void CHLEALKAOJO()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + KEMJBKFEDIB_CHLEALKAOJO_OFFSET))(this);
	}
};
