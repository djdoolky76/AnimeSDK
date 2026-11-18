#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/KECPLIFGOCJ.h"
#include "unitysdk/NHOKMGFMGMM.h"
#include "unitysdk/System/Object.h"

class OLJNGGOLMHB;
namespace System { class Action; }
namespace System::Collections::Generic { template <typename T1, typename T2> class Dictionary_2; }
namespace System::Collections::Generic { template <typename T> class HashSet_1; }

#define IALOLMPEOCJ_BHLAEBMEOLO_OFFSET UNITYSDK_OFFSET(0x1BAE42F0)
#define IALOLMPEOCJ_BMNMLAIJJGF_OFFSET UNITYSDK_OFFSET(0x1BAE4070)
#define IALOLMPEOCJ_CHLEALKAOJO_OFFSET UNITYSDK_OFFSET(0x1BAE4080)
#define IALOLMPEOCJ_FINALIZE_OFFSET UNITYSDK_OFFSET(0x1BAE4140)
#define IALOLMPEOCJ_FPMKEGMLNHG_OFFSET UNITYSDK_OFFSET(0x1BAE4270)
#define IALOLMPEOCJ_KMIMGEDAMCE_OFFSET UNITYSDK_OFFSET(0x1BAE4420)
#define IALOLMPEOCJ_LNFENFDLMIG_OFFSET UNITYSDK_OFFSET(0x1BAE3CC0)
#define IALOLMPEOCJ_OFHECOHPAKG_OFFSET UNITYSDK_OFFSET(0x1BAE3CA0)
#define IALOLMPEOCJ_PHOADBJGFBE_OFFSET UNITYSDK_OFFSET(0x1BAE3F80)
#define IALOLMPEOCJ__CTOR_OFFSET UNITYSDK_OFFSET(0x1BAE43D0)

inline static constexpr unsigned int IALOLMPEOCJ_TypeDefinitionIndex = 11685;

class IALOLMPEOCJ : public ::System::Object
{
public:
	::NHOKMGFMGMM DHDJDGFNBOA; // 0x10
	::System::Collections::Generic::Dictionary_2<::System::Int32, ::System::Int32>* FLBOKGKPECD; // 0x28
	::System::Collections::Generic::HashSet_1<::System::Int32>* LHINHLCKHNE; // 0x30
	::System::Action* PLDOELOOFLL; // 0x38
	::Il2CppArray<::OLJNGGOLMHB*>* OJMBOGGMIKO; // 0x40
	::System::Int32 IJDGGCANOFI; // 0x48
	::System::Boolean DLGKLGKOMHK; // 0x4C

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + IALOLMPEOCJ__CTOR_OFFSET))(this);
	}

	::System::Boolean OFHECOHPAKG()
	{
		return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + IALOLMPEOCJ_OFHECOHPAKG_OFFSET))(this);
	}

	::System::Void LNFENFDLMIG()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + IALOLMPEOCJ_LNFENFDLMIG_OFFSET))(this);
	}

	::System::Void PHOADBJGFBE()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + IALOLMPEOCJ_PHOADBJGFBE_OFFSET))(this);
	}

	::System::Void Finalize()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + IALOLMPEOCJ_FINALIZE_OFFSET))(this);
	}

	::System::Void FPMKEGMLNHG(::System::Action* EJGDHCIBCJH)
	{
		return ((::System::Void(*)(::PVOID, ::System::Action*))((::PBYTE)hIl2Cpp + IALOLMPEOCJ_FPMKEGMLNHG_OFFSET))(this, EJGDHCIBCJH);
	}

	::System::Void BMNMLAIJJGF(::KECPLIFGOCJ GFCJHNHLFEF)
	{
		return ((::System::Void(*)(::PVOID, ::KECPLIFGOCJ))((::PBYTE)hIl2Cpp + IALOLMPEOCJ_BMNMLAIJJGF_OFFSET))(this, GFCJHNHLFEF);
	}

	::System::Void BHLAEBMEOLO()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + IALOLMPEOCJ_BHLAEBMEOLO_OFFSET))(this);
	}

	::System::Void KMIMGEDAMCE(::Il2CppArray<::System::Byte>* LJBPECKCCEA)
	{
		return ((::System::Void(*)(::PVOID, ::Il2CppArray<::System::Byte>*))((::PBYTE)hIl2Cpp + IALOLMPEOCJ_KMIMGEDAMCE_OFFSET))(this, LJBPECKCCEA);
	}

	::System::Void CHLEALKAOJO()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + IALOLMPEOCJ_CHLEALKAOJO_OFFSET))(this);
	}
};
