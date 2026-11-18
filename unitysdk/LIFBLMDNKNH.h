#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/KECPLIFGOCJ.h"
#include "unitysdk/KJLEIDNDCJH.h"
#include "unitysdk/System/Object.h"

class BLCLBNBNDDM;
namespace System { class Action; }
namespace System::Collections::Generic { template <typename T1, typename T2> class Dictionary_2; }
namespace System::Collections::Generic { template <typename T> class HashSet_1; }

#define LIFBLMDNKNH_BHLAEBMEOLO_OFFSET UNITYSDK_OFFSET(0x1BF55F40)
#define LIFBLMDNKNH_BMNMLAIJJGF_OFFSET UNITYSDK_OFFSET(0x1BF55D10)
#define LIFBLMDNKNH_CHLEALKAOJO_OFFSET UNITYSDK_OFFSET(0x1BF55E80)
#define LIFBLMDNKNH_FINALIZE_OFFSET UNITYSDK_OFFSET(0x1BF56020)
#define LIFBLMDNKNH_FPMKEGMLNHG_OFFSET UNITYSDK_OFFSET(0x1BF55D20)
#define LIFBLMDNKNH_IFDPKDOFOJD_OFFSET UNITYSDK_OFFSET(0x1BF561A0)
#define LIFBLMDNKNH_KMIMGEDAMCE_OFFSET UNITYSDK_OFFSET(0x1BF563F0)
#define LIFBLMDNKNH_LNFENFDLMIG_OFFSET UNITYSDK_OFFSET(0x1BF55970)
#define LIFBLMDNKNH_NAMKJOJBAOA_OFFSET UNITYSDK_OFFSET(0x1BF563D0)
#define LIFBLMDNKNH_OFHECOHPAKG_OFFSET UNITYSDK_OFFSET(0x1BF55950)
#define LIFBLMDNKNH_PHOADBJGFBE_OFFSET UNITYSDK_OFFSET(0x1BF55C30)
#define LIFBLMDNKNH__CTOR_OFFSET UNITYSDK_OFFSET(0x1BF56150)

inline static constexpr unsigned int LIFBLMDNKNH_TypeDefinitionIndex = 16390;

class LIFBLMDNKNH : public ::System::Object
{
public:
	::KJLEIDNDCJH DHDJDGFNBOA; // 0x10
	::System::Action* PLDOELOOFLL; // 0x28
	::System::Collections::Generic::HashSet_1<::System::Int32>* LHINHLCKHNE; // 0x30
	::System::Collections::Generic::Dictionary_2<::System::Int32, ::System::Int32>* FLBOKGKPECD; // 0x38
	::Il2CppArray<::BLCLBNBNDDM*>* OJMBOGGMIKO; // 0x40
	::System::Int32 IJDGGCANOFI; // 0x48
	::System::Boolean DLGKLGKOMHK; // 0x4C

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + LIFBLMDNKNH__CTOR_OFFSET))(this);
	}

	::System::Boolean OFHECOHPAKG()
	{
		return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + LIFBLMDNKNH_OFHECOHPAKG_OFFSET))(this);
	}

	::System::Void LNFENFDLMIG()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + LIFBLMDNKNH_LNFENFDLMIG_OFFSET))(this);
	}

	::System::Void FPMKEGMLNHG(::System::Action* EJGDHCIBCJH)
	{
		return ((::System::Void(*)(::PVOID, ::System::Action*))((::PBYTE)hIl2Cpp + LIFBLMDNKNH_FPMKEGMLNHG_OFFSET))(this, EJGDHCIBCJH);
	}

	::System::Void BMNMLAIJJGF(::KECPLIFGOCJ GFCJHNHLFEF)
	{
		return ((::System::Void(*)(::PVOID, ::KECPLIFGOCJ))((::PBYTE)hIl2Cpp + LIFBLMDNKNH_BMNMLAIJJGF_OFFSET))(this, GFCJHNHLFEF);
	}

	::System::Void PHOADBJGFBE()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + LIFBLMDNKNH_PHOADBJGFBE_OFFSET))(this);
	}

	::System::Void BHLAEBMEOLO()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + LIFBLMDNKNH_BHLAEBMEOLO_OFFSET))(this);
	}

	::System::Void Finalize()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + LIFBLMDNKNH_FINALIZE_OFFSET))(this);
	}

	::BLCLBNBNDDM* IFDPKDOFOJD(::System::Int32 MGMDLMBEDJF)
	{
		return ((::BLCLBNBNDDM*(*)(::PVOID, ::System::Int32))((::PBYTE)hIl2Cpp + LIFBLMDNKNH_IFDPKDOFOJD_OFFSET))(this, MGMDLMBEDJF);
	}

	::System::Void NAMKJOJBAOA()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + LIFBLMDNKNH_NAMKJOJBAOA_OFFSET))(this);
	}

	::System::Void KMIMGEDAMCE(::Il2CppArray<::System::Byte>* LJBPECKCCEA)
	{
		return ((::System::Void(*)(::PVOID, ::Il2CppArray<::System::Byte>*))((::PBYTE)hIl2Cpp + LIFBLMDNKNH_KMIMGEDAMCE_OFFSET))(this, LJBPECKCCEA);
	}

	::System::Void CHLEALKAOJO()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + LIFBLMDNKNH_CHLEALKAOJO_OFFSET))(this);
	}
};
