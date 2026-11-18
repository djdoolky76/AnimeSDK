#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/GHBDLLFCFKP.h"
#include "unitysdk/KECPLIFGOCJ.h"
#include "unitysdk/System/Object.h"

class HAJJMNDCFCA;
namespace System { class Action; }
namespace System::Collections::Generic { template <typename T1, typename T2> class Dictionary_2; }
namespace System::Collections::Generic { template <typename T> class HashSet_1; }

#define DFDIGPAHNOG_BHLAEBMEOLO_OFFSET UNITYSDK_OFFSET(0x1ADC4E70)
#define DFDIGPAHNOG_BMNMLAIJJGF_OFFSET UNITYSDK_OFFSET(0x1ADC4C30)
#define DFDIGPAHNOG_CHLEALKAOJO_OFFSET UNITYSDK_OFFSET(0x1ADC4DB0)
#define DFDIGPAHNOG_FINALIZE_OFFSET UNITYSDK_OFFSET(0x1ADC4F50)
#define DFDIGPAHNOG_FPMKEGMLNHG_OFFSET UNITYSDK_OFFSET(0x1ADC4C40)
#define DFDIGPAHNOG_KMIMGEDAMCE_OFFSET UNITYSDK_OFFSET(0x1ADC50D0)
#define DFDIGPAHNOG_LNFENFDLMIG_OFFSET UNITYSDK_OFFSET(0x1ADC4880)
#define DFDIGPAHNOG_OFHECOHPAKG_OFFSET UNITYSDK_OFFSET(0x1ADC4860)
#define DFDIGPAHNOG_PHOADBJGFBE_OFFSET UNITYSDK_OFFSET(0x1ADC4B40)
#define DFDIGPAHNOG__CTOR_OFFSET UNITYSDK_OFFSET(0x1ADC5080)

inline static constexpr unsigned int DFDIGPAHNOG_TypeDefinitionIndex = 17610;

class DFDIGPAHNOG : public ::System::Object
{
public:
	::GHBDLLFCFKP DHDJDGFNBOA; // 0x10
	::Il2CppArray<::HAJJMNDCFCA*>* OJMBOGGMIKO; // 0x28
	::System::Action* PLDOELOOFLL; // 0x30
	::System::Collections::Generic::Dictionary_2<::System::Int32, ::System::Int32>* FLBOKGKPECD; // 0x38
	::System::Collections::Generic::HashSet_1<::System::Int32>* LHINHLCKHNE; // 0x40
	::System::Int32 IJDGGCANOFI; // 0x48
	::System::Boolean DLGKLGKOMHK; // 0x4C

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + DFDIGPAHNOG__CTOR_OFFSET))(this);
	}

	::System::Boolean OFHECOHPAKG()
	{
		return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + DFDIGPAHNOG_OFHECOHPAKG_OFFSET))(this);
	}

	::System::Void LNFENFDLMIG()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + DFDIGPAHNOG_LNFENFDLMIG_OFFSET))(this);
	}

	::System::Void FPMKEGMLNHG(::System::Action* EJGDHCIBCJH)
	{
		return ((::System::Void(*)(::PVOID, ::System::Action*))((::PBYTE)hIl2Cpp + DFDIGPAHNOG_FPMKEGMLNHG_OFFSET))(this, EJGDHCIBCJH);
	}

	::System::Void BMNMLAIJJGF(::KECPLIFGOCJ GFCJHNHLFEF)
	{
		return ((::System::Void(*)(::PVOID, ::KECPLIFGOCJ))((::PBYTE)hIl2Cpp + DFDIGPAHNOG_BMNMLAIJJGF_OFFSET))(this, GFCJHNHLFEF);
	}

	::System::Void PHOADBJGFBE()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + DFDIGPAHNOG_PHOADBJGFBE_OFFSET))(this);
	}

	::System::Void BHLAEBMEOLO()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + DFDIGPAHNOG_BHLAEBMEOLO_OFFSET))(this);
	}

	::System::Void Finalize()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + DFDIGPAHNOG_FINALIZE_OFFSET))(this);
	}

	::System::Void CHLEALKAOJO()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + DFDIGPAHNOG_CHLEALKAOJO_OFFSET))(this);
	}

	::System::Void KMIMGEDAMCE(::Il2CppArray<::System::Byte>* LJBPECKCCEA)
	{
		return ((::System::Void(*)(::PVOID, ::Il2CppArray<::System::Byte>*))((::PBYTE)hIl2Cpp + DFDIGPAHNOG_KMIMGEDAMCE_OFFSET))(this, LJBPECKCCEA);
	}
};
