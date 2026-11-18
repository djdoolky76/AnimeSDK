#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/BCOHABLGJPE.h"
#include "unitysdk/KECPLIFGOCJ.h"
#include "unitysdk/System/Object.h"

class KOEJIMGBLOJ;
namespace System { class Action; }
namespace System::Collections::Generic { template <typename T1, typename T2> class Dictionary_2; }
namespace System::Collections::Generic { template <typename T> class HashSet_1; }

#define GLMEHEFBFBB_BHLAEBMEOLO_OFFSET UNITYSDK_OFFSET(0x1B4D7AC0)
#define GLMEHEFBFBB_BMNMLAIJJGF_OFFSET UNITYSDK_OFFSET(0x1B4D7880)
#define GLMEHEFBFBB_CHLEALKAOJO_OFFSET UNITYSDK_OFFSET(0x1B4D7A00)
#define GLMEHEFBFBB_FINALIZE_OFFSET UNITYSDK_OFFSET(0x1B4D7BA0)
#define GLMEHEFBFBB_FPMKEGMLNHG_OFFSET UNITYSDK_OFFSET(0x1B4D7890)
#define GLMEHEFBFBB_KMIMGEDAMCE_OFFSET UNITYSDK_OFFSET(0x1B4D7D20)
#define GLMEHEFBFBB_LNFENFDLMIG_OFFSET UNITYSDK_OFFSET(0x1B4D74D0)
#define GLMEHEFBFBB_OFHECOHPAKG_OFFSET UNITYSDK_OFFSET(0x1B4D74B0)
#define GLMEHEFBFBB_PHOADBJGFBE_OFFSET UNITYSDK_OFFSET(0x1B4D7790)
#define GLMEHEFBFBB__CTOR_OFFSET UNITYSDK_OFFSET(0x1B4D7CD0)

inline static constexpr unsigned int GLMEHEFBFBB_TypeDefinitionIndex = 16527;

class GLMEHEFBFBB : public ::System::Object
{
public:
	::Il2CppArray<::KOEJIMGBLOJ*>* OJMBOGGMIKO; // 0x10
	::BCOHABLGJPE DHDJDGFNBOA; // 0x18
	::System::Action* PLDOELOOFLL; // 0x30
	::System::Collections::Generic::HashSet_1<::System::Int32>* LHINHLCKHNE; // 0x38
	::System::Collections::Generic::Dictionary_2<::System::Int32, ::System::Int32>* FLBOKGKPECD; // 0x40
	::System::Int32 IJDGGCANOFI; // 0x48
	::System::Boolean DLGKLGKOMHK; // 0x4C

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + GLMEHEFBFBB__CTOR_OFFSET))(this);
	}

	::System::Boolean OFHECOHPAKG()
	{
		return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + GLMEHEFBFBB_OFHECOHPAKG_OFFSET))(this);
	}

	::System::Void LNFENFDLMIG()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + GLMEHEFBFBB_LNFENFDLMIG_OFFSET))(this);
	}

	::System::Void FPMKEGMLNHG(::System::Action* EJGDHCIBCJH)
	{
		return ((::System::Void(*)(::PVOID, ::System::Action*))((::PBYTE)hIl2Cpp + GLMEHEFBFBB_FPMKEGMLNHG_OFFSET))(this, EJGDHCIBCJH);
	}

	::System::Void BMNMLAIJJGF(::KECPLIFGOCJ GFCJHNHLFEF)
	{
		return ((::System::Void(*)(::PVOID, ::KECPLIFGOCJ))((::PBYTE)hIl2Cpp + GLMEHEFBFBB_BMNMLAIJJGF_OFFSET))(this, GFCJHNHLFEF);
	}

	::System::Void PHOADBJGFBE()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + GLMEHEFBFBB_PHOADBJGFBE_OFFSET))(this);
	}

	::System::Void BHLAEBMEOLO()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + GLMEHEFBFBB_BHLAEBMEOLO_OFFSET))(this);
	}

	::System::Void Finalize()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + GLMEHEFBFBB_FINALIZE_OFFSET))(this);
	}

	::System::Void CHLEALKAOJO()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + GLMEHEFBFBB_CHLEALKAOJO_OFFSET))(this);
	}

	::System::Void KMIMGEDAMCE(::Il2CppArray<::System::Byte>* LJBPECKCCEA)
	{
		return ((::System::Void(*)(::PVOID, ::Il2CppArray<::System::Byte>*))((::PBYTE)hIl2Cpp + GLMEHEFBFBB_KMIMGEDAMCE_OFFSET))(this, LJBPECKCCEA);
	}
};
