#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/CMEDJLGGJNN.h"
#include "unitysdk/KECPLIFGOCJ.h"
#include "unitysdk/System/Object.h"

class JNAFOCACLFD;
namespace System { class Action; }
namespace System::Collections::Generic { template <typename T1, typename T2> class Dictionary_2; }
namespace System::Collections::Generic { template <typename T> class HashSet_1; }

#define KKIAOKMCNBF_BHLAEBMEOLO_OFFSET UNITYSDK_OFFSET(0x1957EB80)
#define KKIAOKMCNBF_BMNMLAIJJGF_OFFSET UNITYSDK_OFFSET(0x1957E940)
#define KKIAOKMCNBF_CHLEALKAOJO_OFFSET UNITYSDK_OFFSET(0x1957EAC0)
#define KKIAOKMCNBF_FINALIZE_OFFSET UNITYSDK_OFFSET(0x1957EC60)
#define KKIAOKMCNBF_FPMKEGMLNHG_OFFSET UNITYSDK_OFFSET(0x1957E950)
#define KKIAOKMCNBF_KMIMGEDAMCE_OFFSET UNITYSDK_OFFSET(0x1957EDE0)
#define KKIAOKMCNBF_LNFENFDLMIG_OFFSET UNITYSDK_OFFSET(0x1957E590)
#define KKIAOKMCNBF_OFHECOHPAKG_OFFSET UNITYSDK_OFFSET(0x1957E570)
#define KKIAOKMCNBF_PHOADBJGFBE_OFFSET UNITYSDK_OFFSET(0x1957E850)
#define KKIAOKMCNBF__CTOR_OFFSET UNITYSDK_OFFSET(0x1957ED90)

inline static constexpr unsigned int KKIAOKMCNBF_TypeDefinitionIndex = 12549;

class KKIAOKMCNBF : public ::System::Object
{
public:
	::System::Collections::Generic::Dictionary_2<::System::Int32, ::System::Int32>* FLBOKGKPECD; // 0x10
	::System::Action* PLDOELOOFLL; // 0x18
	::CMEDJLGGJNN DHDJDGFNBOA; // 0x20
	::System::Collections::Generic::HashSet_1<::System::Int32>* LHINHLCKHNE; // 0x38
	::Il2CppArray<::JNAFOCACLFD*>* OJMBOGGMIKO; // 0x40
	::System::Boolean DLGKLGKOMHK; // 0x48
	::System::Byte _padding0[0x3];
	::System::Int32 IJDGGCANOFI; // 0x4C

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + KKIAOKMCNBF__CTOR_OFFSET))(this);
	}

	::System::Boolean OFHECOHPAKG()
	{
		return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + KKIAOKMCNBF_OFHECOHPAKG_OFFSET))(this);
	}

	::System::Void LNFENFDLMIG()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + KKIAOKMCNBF_LNFENFDLMIG_OFFSET))(this);
	}

	::System::Void FPMKEGMLNHG(::System::Action* EJGDHCIBCJH)
	{
		return ((::System::Void(*)(::PVOID, ::System::Action*))((::PBYTE)hIl2Cpp + KKIAOKMCNBF_FPMKEGMLNHG_OFFSET))(this, EJGDHCIBCJH);
	}

	::System::Void BMNMLAIJJGF(::KECPLIFGOCJ GFCJHNHLFEF)
	{
		return ((::System::Void(*)(::PVOID, ::KECPLIFGOCJ))((::PBYTE)hIl2Cpp + KKIAOKMCNBF_BMNMLAIJJGF_OFFSET))(this, GFCJHNHLFEF);
	}

	::System::Void PHOADBJGFBE()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + KKIAOKMCNBF_PHOADBJGFBE_OFFSET))(this);
	}

	::System::Void BHLAEBMEOLO()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + KKIAOKMCNBF_BHLAEBMEOLO_OFFSET))(this);
	}

	::System::Void Finalize()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + KKIAOKMCNBF_FINALIZE_OFFSET))(this);
	}

	::System::Void KMIMGEDAMCE(::Il2CppArray<::System::Byte>* LJBPECKCCEA)
	{
		return ((::System::Void(*)(::PVOID, ::Il2CppArray<::System::Byte>*))((::PBYTE)hIl2Cpp + KKIAOKMCNBF_KMIMGEDAMCE_OFFSET))(this, LJBPECKCCEA);
	}

	::System::Void CHLEALKAOJO()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + KKIAOKMCNBF_CHLEALKAOJO_OFFSET))(this);
	}
};
