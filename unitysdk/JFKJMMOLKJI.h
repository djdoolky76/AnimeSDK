#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/KECPLIFGOCJ.h"
#include "unitysdk/PLGFNICJOFI.h"
#include "unitysdk/System/Object.h"

class IHDODIHDIMA;
namespace System { class Action; }
namespace System::Collections::Generic { template <typename T1, typename T2> class Dictionary_2; }
namespace System::Collections::Generic { template <typename T> class HashSet_1; }

#define JFKJMMOLKJI_BHLAEBMEOLO_OFFSET UNITYSDK_OFFSET(0x17488FB0)
#define JFKJMMOLKJI_BMNMLAIJJGF_OFFSET UNITYSDK_OFFSET(0x17488D80)
#define JFKJMMOLKJI_CHLEALKAOJO_OFFSET UNITYSDK_OFFSET(0x17488EF0)
#define JFKJMMOLKJI_FINALIZE_OFFSET UNITYSDK_OFFSET(0x17489090)
#define JFKJMMOLKJI_FPMKEGMLNHG_OFFSET UNITYSDK_OFFSET(0x17488D90)
#define JFKJMMOLKJI_IFDPKDOFOJD_OFFSET UNITYSDK_OFFSET(0x17489210)
#define JFKJMMOLKJI_KMIMGEDAMCE_OFFSET UNITYSDK_OFFSET(0x17489460)
#define JFKJMMOLKJI_LNFENFDLMIG_OFFSET UNITYSDK_OFFSET(0x174889E0)
#define JFKJMMOLKJI_NAMKJOJBAOA_OFFSET UNITYSDK_OFFSET(0x17489440)
#define JFKJMMOLKJI_OFHECOHPAKG_OFFSET UNITYSDK_OFFSET(0x174889C0)
#define JFKJMMOLKJI_PHOADBJGFBE_OFFSET UNITYSDK_OFFSET(0x17488CA0)
#define JFKJMMOLKJI__CTOR_OFFSET UNITYSDK_OFFSET(0x174891C0)

inline static constexpr unsigned int JFKJMMOLKJI_TypeDefinitionIndex = 16274;

class JFKJMMOLKJI : public ::System::Object
{
public:
	::Il2CppArray<::IHDODIHDIMA*>* OJMBOGGMIKO; // 0x10
	::System::Collections::Generic::Dictionary_2<::System::Int32, ::System::Int32>* FLBOKGKPECD; // 0x18
	::System::Collections::Generic::HashSet_1<::System::Int32>* LHINHLCKHNE; // 0x20
	::System::Action* PLDOELOOFLL; // 0x28
	::PLGFNICJOFI DHDJDGFNBOA; // 0x30
	::System::Boolean DLGKLGKOMHK; // 0x48
	::System::Byte _padding0[0x3];
	::System::Int32 IJDGGCANOFI; // 0x4C

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + JFKJMMOLKJI__CTOR_OFFSET))(this);
	}

	::System::Boolean OFHECOHPAKG()
	{
		return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + JFKJMMOLKJI_OFHECOHPAKG_OFFSET))(this);
	}

	::System::Void LNFENFDLMIG()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + JFKJMMOLKJI_LNFENFDLMIG_OFFSET))(this);
	}

	::System::Void FPMKEGMLNHG(::System::Action* EJGDHCIBCJH)
	{
		return ((::System::Void(*)(::PVOID, ::System::Action*))((::PBYTE)hIl2Cpp + JFKJMMOLKJI_FPMKEGMLNHG_OFFSET))(this, EJGDHCIBCJH);
	}

	::System::Void BMNMLAIJJGF(::KECPLIFGOCJ GFCJHNHLFEF)
	{
		return ((::System::Void(*)(::PVOID, ::KECPLIFGOCJ))((::PBYTE)hIl2Cpp + JFKJMMOLKJI_BMNMLAIJJGF_OFFSET))(this, GFCJHNHLFEF);
	}

	::System::Void PHOADBJGFBE()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + JFKJMMOLKJI_PHOADBJGFBE_OFFSET))(this);
	}

	::System::Void BHLAEBMEOLO()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + JFKJMMOLKJI_BHLAEBMEOLO_OFFSET))(this);
	}

	::System::Void Finalize()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + JFKJMMOLKJI_FINALIZE_OFFSET))(this);
	}

	::System::Void CHLEALKAOJO()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + JFKJMMOLKJI_CHLEALKAOJO_OFFSET))(this);
	}

	::IHDODIHDIMA* IFDPKDOFOJD(::System::Int32 MGMDLMBEDJF)
	{
		return ((::IHDODIHDIMA*(*)(::PVOID, ::System::Int32))((::PBYTE)hIl2Cpp + JFKJMMOLKJI_IFDPKDOFOJD_OFFSET))(this, MGMDLMBEDJF);
	}

	::System::Void NAMKJOJBAOA()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + JFKJMMOLKJI_NAMKJOJBAOA_OFFSET))(this);
	}

	::System::Void KMIMGEDAMCE(::Il2CppArray<::System::Byte>* LJBPECKCCEA)
	{
		return ((::System::Void(*)(::PVOID, ::Il2CppArray<::System::Byte>*))((::PBYTE)hIl2Cpp + JFKJMMOLKJI_KMIMGEDAMCE_OFFSET))(this, LJBPECKCCEA);
	}
};
