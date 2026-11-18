#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/HAILMHKADEE.h"
#include "unitysdk/KECPLIFGOCJ.h"
#include "unitysdk/System/Object.h"

class EKLKFKCCAEP;
namespace System { class Action; }
namespace System::Collections::Generic { template <typename T1, typename T2> class Dictionary_2; }
namespace System::Collections::Generic { template <typename T> class HashSet_1; }

#define LMEOCJMMFKL_BHLAEBMEOLO_OFFSET UNITYSDK_OFFSET(0x17FB8420)
#define LMEOCJMMFKL_BMNMLAIJJGF_OFFSET UNITYSDK_OFFSET(0x17FB81E0)
#define LMEOCJMMFKL_CHLEALKAOJO_OFFSET UNITYSDK_OFFSET(0x17FB8360)
#define LMEOCJMMFKL_FINALIZE_OFFSET UNITYSDK_OFFSET(0x17FB8500)
#define LMEOCJMMFKL_FPMKEGMLNHG_OFFSET UNITYSDK_OFFSET(0x17FB81F0)
#define LMEOCJMMFKL_KMIMGEDAMCE_OFFSET UNITYSDK_OFFSET(0x17FB8680)
#define LMEOCJMMFKL_LNFENFDLMIG_OFFSET UNITYSDK_OFFSET(0x17FB7E30)
#define LMEOCJMMFKL_OFHECOHPAKG_OFFSET UNITYSDK_OFFSET(0x17FB7E10)
#define LMEOCJMMFKL_PHOADBJGFBE_OFFSET UNITYSDK_OFFSET(0x17FB80F0)
#define LMEOCJMMFKL__CTOR_OFFSET UNITYSDK_OFFSET(0x17FB8630)

inline static constexpr unsigned int LMEOCJMMFKL_TypeDefinitionIndex = 9859;

class LMEOCJMMFKL : public ::System::Object
{
public:
	::System::Collections::Generic::Dictionary_2<::System::Int32, ::System::Int32>* FLBOKGKPECD; // 0x10
	::System::Action* PLDOELOOFLL; // 0x18
	::HAILMHKADEE DHDJDGFNBOA; // 0x20
	::System::Collections::Generic::HashSet_1<::System::Int32>* LHINHLCKHNE; // 0x38
	::Il2CppArray<::EKLKFKCCAEP*>* OJMBOGGMIKO; // 0x40
	::System::Boolean DLGKLGKOMHK; // 0x48
	::System::Byte _padding0[0x3];
	::System::Int32 IJDGGCANOFI; // 0x4C

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + LMEOCJMMFKL__CTOR_OFFSET))(this);
	}

	::System::Boolean OFHECOHPAKG()
	{
		return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + LMEOCJMMFKL_OFHECOHPAKG_OFFSET))(this);
	}

	::System::Void LNFENFDLMIG()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + LMEOCJMMFKL_LNFENFDLMIG_OFFSET))(this);
	}

	::System::Void FPMKEGMLNHG(::System::Action* EJGDHCIBCJH)
	{
		return ((::System::Void(*)(::PVOID, ::System::Action*))((::PBYTE)hIl2Cpp + LMEOCJMMFKL_FPMKEGMLNHG_OFFSET))(this, EJGDHCIBCJH);
	}

	::System::Void BMNMLAIJJGF(::KECPLIFGOCJ GFCJHNHLFEF)
	{
		return ((::System::Void(*)(::PVOID, ::KECPLIFGOCJ))((::PBYTE)hIl2Cpp + LMEOCJMMFKL_BMNMLAIJJGF_OFFSET))(this, GFCJHNHLFEF);
	}

	::System::Void PHOADBJGFBE()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + LMEOCJMMFKL_PHOADBJGFBE_OFFSET))(this);
	}

	::System::Void BHLAEBMEOLO()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + LMEOCJMMFKL_BHLAEBMEOLO_OFFSET))(this);
	}

	::System::Void Finalize()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + LMEOCJMMFKL_FINALIZE_OFFSET))(this);
	}

	::System::Void KMIMGEDAMCE(::Il2CppArray<::System::Byte>* LJBPECKCCEA)
	{
		return ((::System::Void(*)(::PVOID, ::Il2CppArray<::System::Byte>*))((::PBYTE)hIl2Cpp + LMEOCJMMFKL_KMIMGEDAMCE_OFFSET))(this, LJBPECKCCEA);
	}

	::System::Void CHLEALKAOJO()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + LMEOCJMMFKL_CHLEALKAOJO_OFFSET))(this);
	}
};
