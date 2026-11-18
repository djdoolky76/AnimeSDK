#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/JFMLLBBHEKB.h"
#include "unitysdk/KECPLIFGOCJ.h"
#include "unitysdk/System/Object.h"

class KOLFHJFJDNK;
namespace System { class Action; }
namespace System::Collections::Generic { template <typename T1, typename T2> class Dictionary_2; }
namespace System::Collections::Generic { template <typename T> class HashSet_1; }

#define GLJNGIMFPII_BHLAEBMEOLO_OFFSET UNITYSDK_OFFSET(0x1B4D7080)
#define GLJNGIMFPII_BMNMLAIJJGF_OFFSET UNITYSDK_OFFSET(0x1B4D6E40)
#define GLJNGIMFPII_CHLEALKAOJO_OFFSET UNITYSDK_OFFSET(0x1B4D6FC0)
#define GLJNGIMFPII_FINALIZE_OFFSET UNITYSDK_OFFSET(0x1B4D7160)
#define GLJNGIMFPII_FPMKEGMLNHG_OFFSET UNITYSDK_OFFSET(0x1B4D6E50)
#define GLJNGIMFPII_KMIMGEDAMCE_OFFSET UNITYSDK_OFFSET(0x1B4D72E0)
#define GLJNGIMFPII_LNFENFDLMIG_OFFSET UNITYSDK_OFFSET(0x1B4D6A90)
#define GLJNGIMFPII_OFHECOHPAKG_OFFSET UNITYSDK_OFFSET(0x1B4D6A70)
#define GLJNGIMFPII_PHOADBJGFBE_OFFSET UNITYSDK_OFFSET(0x1B4D6D50)
#define GLJNGIMFPII__CTOR_OFFSET UNITYSDK_OFFSET(0x1B4D7290)

inline static constexpr unsigned int GLJNGIMFPII_TypeDefinitionIndex = 16083;

class GLJNGIMFPII : public ::System::Object
{
public:
	::System::Action* PLDOELOOFLL; // 0x10
	::Il2CppArray<::KOLFHJFJDNK*>* OJMBOGGMIKO; // 0x18
	::JFMLLBBHEKB DHDJDGFNBOA; // 0x20
	::System::Collections::Generic::Dictionary_2<::System::Int32, ::System::Int32>* FLBOKGKPECD; // 0x38
	::System::Collections::Generic::HashSet_1<::System::Int32>* LHINHLCKHNE; // 0x40
	::System::Boolean DLGKLGKOMHK; // 0x48
	::System::Byte _padding0[0x3];
	::System::Int32 IJDGGCANOFI; // 0x4C

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + GLJNGIMFPII__CTOR_OFFSET))(this);
	}

	::System::Boolean OFHECOHPAKG()
	{
		return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + GLJNGIMFPII_OFHECOHPAKG_OFFSET))(this);
	}

	::System::Void LNFENFDLMIG()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + GLJNGIMFPII_LNFENFDLMIG_OFFSET))(this);
	}

	::System::Void FPMKEGMLNHG(::System::Action* EJGDHCIBCJH)
	{
		return ((::System::Void(*)(::PVOID, ::System::Action*))((::PBYTE)hIl2Cpp + GLJNGIMFPII_FPMKEGMLNHG_OFFSET))(this, EJGDHCIBCJH);
	}

	::System::Void BMNMLAIJJGF(::KECPLIFGOCJ GFCJHNHLFEF)
	{
		return ((::System::Void(*)(::PVOID, ::KECPLIFGOCJ))((::PBYTE)hIl2Cpp + GLJNGIMFPII_BMNMLAIJJGF_OFFSET))(this, GFCJHNHLFEF);
	}

	::System::Void PHOADBJGFBE()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + GLJNGIMFPII_PHOADBJGFBE_OFFSET))(this);
	}

	::System::Void BHLAEBMEOLO()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + GLJNGIMFPII_BHLAEBMEOLO_OFFSET))(this);
	}

	::System::Void Finalize()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + GLJNGIMFPII_FINALIZE_OFFSET))(this);
	}

	::System::Void KMIMGEDAMCE(::Il2CppArray<::System::Byte>* LJBPECKCCEA)
	{
		return ((::System::Void(*)(::PVOID, ::Il2CppArray<::System::Byte>*))((::PBYTE)hIl2Cpp + GLJNGIMFPII_KMIMGEDAMCE_OFFSET))(this, LJBPECKCCEA);
	}

	::System::Void CHLEALKAOJO()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + GLJNGIMFPII_CHLEALKAOJO_OFFSET))(this);
	}
};
