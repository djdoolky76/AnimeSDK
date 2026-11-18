#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/CAPHBDNKHNG.h"
#include "unitysdk/KECPLIFGOCJ.h"
#include "unitysdk/System/Object.h"

class DHMLKAMCHOF;
namespace System { class Action; }
namespace System::Collections::Generic { template <typename T1, typename T2> class Dictionary_2; }
namespace System::Collections::Generic { template <typename T> class HashSet_1; }

#define GDEOMCBKMOG_BHLAEBMEOLO_OFFSET UNITYSDK_OFFSET(0x1B86B050)
#define GDEOMCBKMOG_BMNMLAIJJGF_OFFSET UNITYSDK_OFFSET(0x1B86AE10)
#define GDEOMCBKMOG_CHLEALKAOJO_OFFSET UNITYSDK_OFFSET(0x1B86AF90)
#define GDEOMCBKMOG_FINALIZE_OFFSET UNITYSDK_OFFSET(0x1B86B130)
#define GDEOMCBKMOG_FPMKEGMLNHG_OFFSET UNITYSDK_OFFSET(0x1B86AE20)
#define GDEOMCBKMOG_IFDPKDOFOJD_OFFSET UNITYSDK_OFFSET(0x1B86B2D0)
#define GDEOMCBKMOG_KMIMGEDAMCE_OFFSET UNITYSDK_OFFSET(0x1B86B500)
#define GDEOMCBKMOG_LNFENFDLMIG_OFFSET UNITYSDK_OFFSET(0x1B86AA60)
#define GDEOMCBKMOG_NAMKJOJBAOA_OFFSET UNITYSDK_OFFSET(0x1B86B2B0)
#define GDEOMCBKMOG_OFHECOHPAKG_OFFSET UNITYSDK_OFFSET(0x1B86AA40)
#define GDEOMCBKMOG_PHOADBJGFBE_OFFSET UNITYSDK_OFFSET(0x1B86AD20)
#define GDEOMCBKMOG__CTOR_OFFSET UNITYSDK_OFFSET(0x1B86B260)

inline static constexpr unsigned int GDEOMCBKMOG_TypeDefinitionIndex = 14325;

class GDEOMCBKMOG : public ::System::Object
{
public:
	::System::Collections::Generic::Dictionary_2<::System::Int32, ::System::Int32>* FLBOKGKPECD; // 0x10
	::System::Action* PLDOELOOFLL; // 0x18
	::CAPHBDNKHNG DHDJDGFNBOA; // 0x20
	::System::Collections::Generic::HashSet_1<::System::Int32>* LHINHLCKHNE; // 0x38
	::Il2CppArray<::DHMLKAMCHOF*>* OJMBOGGMIKO; // 0x40
	::System::Boolean DLGKLGKOMHK; // 0x48
	::System::Byte _padding0[0x3];
	::System::Int32 IJDGGCANOFI; // 0x4C

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + GDEOMCBKMOG__CTOR_OFFSET))(this);
	}

	::System::Boolean OFHECOHPAKG()
	{
		return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + GDEOMCBKMOG_OFHECOHPAKG_OFFSET))(this);
	}

	::System::Void LNFENFDLMIG()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + GDEOMCBKMOG_LNFENFDLMIG_OFFSET))(this);
	}

	::System::Void FPMKEGMLNHG(::System::Action* EJGDHCIBCJH)
	{
		return ((::System::Void(*)(::PVOID, ::System::Action*))((::PBYTE)hIl2Cpp + GDEOMCBKMOG_FPMKEGMLNHG_OFFSET))(this, EJGDHCIBCJH);
	}

	::System::Void BMNMLAIJJGF(::KECPLIFGOCJ GFCJHNHLFEF)
	{
		return ((::System::Void(*)(::PVOID, ::KECPLIFGOCJ))((::PBYTE)hIl2Cpp + GDEOMCBKMOG_BMNMLAIJJGF_OFFSET))(this, GFCJHNHLFEF);
	}

	::System::Void PHOADBJGFBE()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + GDEOMCBKMOG_PHOADBJGFBE_OFFSET))(this);
	}

	::System::Void BHLAEBMEOLO()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + GDEOMCBKMOG_BHLAEBMEOLO_OFFSET))(this);
	}

	::System::Void Finalize()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + GDEOMCBKMOG_FINALIZE_OFFSET))(this);
	}

	::System::Void CHLEALKAOJO()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + GDEOMCBKMOG_CHLEALKAOJO_OFFSET))(this);
	}

	::System::Void NAMKJOJBAOA()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + GDEOMCBKMOG_NAMKJOJBAOA_OFFSET))(this);
	}

	::DHMLKAMCHOF* IFDPKDOFOJD(::System::Int32 MGMDLMBEDJF)
	{
		return ((::DHMLKAMCHOF*(*)(::PVOID, ::System::Int32))((::PBYTE)hIl2Cpp + GDEOMCBKMOG_IFDPKDOFOJD_OFFSET))(this, MGMDLMBEDJF);
	}

	::System::Void KMIMGEDAMCE(::Il2CppArray<::System::Byte>* LJBPECKCCEA)
	{
		return ((::System::Void(*)(::PVOID, ::Il2CppArray<::System::Byte>*))((::PBYTE)hIl2Cpp + GDEOMCBKMOG_KMIMGEDAMCE_OFFSET))(this, LJBPECKCCEA);
	}
};
