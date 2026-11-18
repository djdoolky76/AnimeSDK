#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/JHCNJIODNMH.h"
#include "unitysdk/KECPLIFGOCJ.h"
#include "unitysdk/System/Object.h"

class CGEHAHPPPHM;
namespace System { class Action; }
namespace System::Collections::Generic { template <typename T1, typename T2> class Dictionary_2; }
namespace System::Collections::Generic { template <typename T> class HashSet_1; }

#define PLNGNCPDMJJ_BHLAEBMEOLO_OFFSET UNITYSDK_OFFSET(0x19DE3EA0)
#define PLNGNCPDMJJ_BMNMLAIJJGF_OFFSET UNITYSDK_OFFSET(0x19DE3C70)
#define PLNGNCPDMJJ_CHLEALKAOJO_OFFSET UNITYSDK_OFFSET(0x19DE3DE0)
#define PLNGNCPDMJJ_FINALIZE_OFFSET UNITYSDK_OFFSET(0x19DE3F80)
#define PLNGNCPDMJJ_FPMKEGMLNHG_OFFSET UNITYSDK_OFFSET(0x19DE3C80)
#define PLNGNCPDMJJ_KMIMGEDAMCE_OFFSET UNITYSDK_OFFSET(0x19DE4100)
#define PLNGNCPDMJJ_LNFENFDLMIG_OFFSET UNITYSDK_OFFSET(0x19DE38D0)
#define PLNGNCPDMJJ_OFHECOHPAKG_OFFSET UNITYSDK_OFFSET(0x19DE38B0)
#define PLNGNCPDMJJ_PHOADBJGFBE_OFFSET UNITYSDK_OFFSET(0x19DE3B90)
#define PLNGNCPDMJJ__CTOR_OFFSET UNITYSDK_OFFSET(0x19DE40B0)

inline static constexpr unsigned int PLNGNCPDMJJ_TypeDefinitionIndex = 10615;

class PLNGNCPDMJJ : public ::System::Object
{
public:
	::System::Collections::Generic::HashSet_1<::System::Int32>* LHINHLCKHNE; // 0x10
	::JHCNJIODNMH DHDJDGFNBOA; // 0x18
	::Il2CppArray<::CGEHAHPPPHM*>* OJMBOGGMIKO; // 0x30
	::System::Collections::Generic::Dictionary_2<::System::Int32, ::System::Int32>* FLBOKGKPECD; // 0x38
	::System::Action* PLDOELOOFLL; // 0x40
	::System::Boolean DLGKLGKOMHK; // 0x48
	::System::Byte _padding0[0x3];
	::System::Int32 IJDGGCANOFI; // 0x4C

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + PLNGNCPDMJJ__CTOR_OFFSET))(this);
	}

	::System::Boolean OFHECOHPAKG()
	{
		return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + PLNGNCPDMJJ_OFHECOHPAKG_OFFSET))(this);
	}

	::System::Void LNFENFDLMIG()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + PLNGNCPDMJJ_LNFENFDLMIG_OFFSET))(this);
	}

	::System::Void FPMKEGMLNHG(::System::Action* EJGDHCIBCJH)
	{
		return ((::System::Void(*)(::PVOID, ::System::Action*))((::PBYTE)hIl2Cpp + PLNGNCPDMJJ_FPMKEGMLNHG_OFFSET))(this, EJGDHCIBCJH);
	}

	::System::Void BMNMLAIJJGF(::KECPLIFGOCJ GFCJHNHLFEF)
	{
		return ((::System::Void(*)(::PVOID, ::KECPLIFGOCJ))((::PBYTE)hIl2Cpp + PLNGNCPDMJJ_BMNMLAIJJGF_OFFSET))(this, GFCJHNHLFEF);
	}

	::System::Void PHOADBJGFBE()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + PLNGNCPDMJJ_PHOADBJGFBE_OFFSET))(this);
	}

	::System::Void BHLAEBMEOLO()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + PLNGNCPDMJJ_BHLAEBMEOLO_OFFSET))(this);
	}

	::System::Void Finalize()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + PLNGNCPDMJJ_FINALIZE_OFFSET))(this);
	}

	::System::Void CHLEALKAOJO()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + PLNGNCPDMJJ_CHLEALKAOJO_OFFSET))(this);
	}

	::System::Void KMIMGEDAMCE(::Il2CppArray<::System::Byte>* LJBPECKCCEA)
	{
		return ((::System::Void(*)(::PVOID, ::Il2CppArray<::System::Byte>*))((::PBYTE)hIl2Cpp + PLNGNCPDMJJ_KMIMGEDAMCE_OFFSET))(this, LJBPECKCCEA);
	}
};
