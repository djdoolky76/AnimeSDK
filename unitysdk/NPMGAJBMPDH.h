#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/AIBFLAMGDBJ.h"
#include "unitysdk/KECPLIFGOCJ.h"
#include "unitysdk/System/Object.h"

class DHMFFHNLCHB;
namespace System { class Action; }
namespace System::Collections::Generic { template <typename T1, typename T2> class Dictionary_2; }
namespace System::Collections::Generic { template <typename T> class HashSet_1; }

#define NPMGAJBMPDH_BHLAEBMEOLO_OFFSET UNITYSDK_OFFSET(0x1CFF0FD0)
#define NPMGAJBMPDH_BMNMLAIJJGF_OFFSET UNITYSDK_OFFSET(0x1CFF0DA0)
#define NPMGAJBMPDH_CHLEALKAOJO_OFFSET UNITYSDK_OFFSET(0x1CFF0F10)
#define NPMGAJBMPDH_FINALIZE_OFFSET UNITYSDK_OFFSET(0x1CFF10B0)
#define NPMGAJBMPDH_FPMKEGMLNHG_OFFSET UNITYSDK_OFFSET(0x1CFF0DB0)
#define NPMGAJBMPDH_KMIMGEDAMCE_OFFSET UNITYSDK_OFFSET(0x1CFF1230)
#define NPMGAJBMPDH_LNFENFDLMIG_OFFSET UNITYSDK_OFFSET(0x1CFF0A00)
#define NPMGAJBMPDH_OFHECOHPAKG_OFFSET UNITYSDK_OFFSET(0x1CFF09E0)
#define NPMGAJBMPDH_PHOADBJGFBE_OFFSET UNITYSDK_OFFSET(0x1CFF0CC0)
#define NPMGAJBMPDH__CTOR_OFFSET UNITYSDK_OFFSET(0x1CFF11E0)

inline static constexpr unsigned int NPMGAJBMPDH_TypeDefinitionIndex = 9243;

class NPMGAJBMPDH : public ::System::Object
{
public:
	::System::Action* PLDOELOOFLL; // 0x10
	::System::Collections::Generic::HashSet_1<::System::Int32>* LHINHLCKHNE; // 0x18
	::AIBFLAMGDBJ DHDJDGFNBOA; // 0x20
	::System::Collections::Generic::Dictionary_2<::System::Int32, ::System::Int32>* FLBOKGKPECD; // 0x38
	::Il2CppArray<::DHMFFHNLCHB*>* OJMBOGGMIKO; // 0x40
	::System::Boolean DLGKLGKOMHK; // 0x48
	::System::Byte _padding0[0x3];
	::System::Int32 IJDGGCANOFI; // 0x4C

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + NPMGAJBMPDH__CTOR_OFFSET))(this);
	}

	::System::Boolean OFHECOHPAKG()
	{
		return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + NPMGAJBMPDH_OFHECOHPAKG_OFFSET))(this);
	}

	::System::Void LNFENFDLMIG()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + NPMGAJBMPDH_LNFENFDLMIG_OFFSET))(this);
	}

	::System::Void FPMKEGMLNHG(::System::Action* EJGDHCIBCJH)
	{
		return ((::System::Void(*)(::PVOID, ::System::Action*))((::PBYTE)hIl2Cpp + NPMGAJBMPDH_FPMKEGMLNHG_OFFSET))(this, EJGDHCIBCJH);
	}

	::System::Void BMNMLAIJJGF(::KECPLIFGOCJ GFCJHNHLFEF)
	{
		return ((::System::Void(*)(::PVOID, ::KECPLIFGOCJ))((::PBYTE)hIl2Cpp + NPMGAJBMPDH_BMNMLAIJJGF_OFFSET))(this, GFCJHNHLFEF);
	}

	::System::Void PHOADBJGFBE()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + NPMGAJBMPDH_PHOADBJGFBE_OFFSET))(this);
	}

	::System::Void BHLAEBMEOLO()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + NPMGAJBMPDH_BHLAEBMEOLO_OFFSET))(this);
	}

	::System::Void Finalize()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + NPMGAJBMPDH_FINALIZE_OFFSET))(this);
	}

	::System::Void CHLEALKAOJO()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + NPMGAJBMPDH_CHLEALKAOJO_OFFSET))(this);
	}

	::System::Void KMIMGEDAMCE(::Il2CppArray<::System::Byte>* LJBPECKCCEA)
	{
		return ((::System::Void(*)(::PVOID, ::Il2CppArray<::System::Byte>*))((::PBYTE)hIl2Cpp + NPMGAJBMPDH_KMIMGEDAMCE_OFFSET))(this, LJBPECKCCEA);
	}
};
