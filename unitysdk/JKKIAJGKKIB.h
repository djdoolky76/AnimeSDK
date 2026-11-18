#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/JICJBFNOBCC.h"
#include "unitysdk/KECPLIFGOCJ.h"
#include "unitysdk/System/Object.h"

class DDANHCDEAGH;
namespace System { class Action; }
namespace System::Collections::Generic { template <typename T1, typename T2> class Dictionary_2; }
namespace System::Collections::Generic { template <typename T> class HashSet_1; }

#define JKKIAJGKKIB_BHLAEBMEOLO_OFFSET UNITYSDK_OFFSET(0x1B636E90)
#define JKKIAJGKKIB_BMNMLAIJJGF_OFFSET UNITYSDK_OFFSET(0x1B636C10)
#define JKKIAJGKKIB_CHLEALKAOJO_OFFSET UNITYSDK_OFFSET(0x1B636C20)
#define JKKIAJGKKIB_FINALIZE_OFFSET UNITYSDK_OFFSET(0x1B636CE0)
#define JKKIAJGKKIB_FPMKEGMLNHG_OFFSET UNITYSDK_OFFSET(0x1B636E10)
#define JKKIAJGKKIB_IFDPKDOFOJD_OFFSET UNITYSDK_OFFSET(0x1B637290)
#define JKKIAJGKKIB_KMIMGEDAMCE_OFFSET UNITYSDK_OFFSET(0x1B636FE0)
#define JKKIAJGKKIB_LNFENFDLMIG_OFFSET UNITYSDK_OFFSET(0x1B636860)
#define JKKIAJGKKIB_NAMKJOJBAOA_OFFSET UNITYSDK_OFFSET(0x1B636FC0)
#define JKKIAJGKKIB_OFHECOHPAKG_OFFSET UNITYSDK_OFFSET(0x1B636840)
#define JKKIAJGKKIB_PHOADBJGFBE_OFFSET UNITYSDK_OFFSET(0x1B636B20)
#define JKKIAJGKKIB__CTOR_OFFSET UNITYSDK_OFFSET(0x1B636F70)

inline static constexpr unsigned int JKKIAJGKKIB_TypeDefinitionIndex = 14287;

class JKKIAJGKKIB : public ::System::Object
{
public:
	::System::Collections::Generic::HashSet_1<::System::Int32>* LHINHLCKHNE; // 0x10
	::JICJBFNOBCC DHDJDGFNBOA; // 0x18
	::System::Collections::Generic::Dictionary_2<::System::Int32, ::System::Int32>* FLBOKGKPECD; // 0x30
	::System::Action* PLDOELOOFLL; // 0x38
	::Il2CppArray<::DDANHCDEAGH*>* OJMBOGGMIKO; // 0x40
	::System::Int32 IJDGGCANOFI; // 0x48
	::System::Boolean DLGKLGKOMHK; // 0x4C

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + JKKIAJGKKIB__CTOR_OFFSET))(this);
	}

	::System::Boolean OFHECOHPAKG()
	{
		return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + JKKIAJGKKIB_OFHECOHPAKG_OFFSET))(this);
	}

	::System::Void LNFENFDLMIG()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + JKKIAJGKKIB_LNFENFDLMIG_OFFSET))(this);
	}

	::System::Void PHOADBJGFBE()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + JKKIAJGKKIB_PHOADBJGFBE_OFFSET))(this);
	}

	::System::Void Finalize()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + JKKIAJGKKIB_FINALIZE_OFFSET))(this);
	}

	::System::Void FPMKEGMLNHG(::System::Action* EJGDHCIBCJH)
	{
		return ((::System::Void(*)(::PVOID, ::System::Action*))((::PBYTE)hIl2Cpp + JKKIAJGKKIB_FPMKEGMLNHG_OFFSET))(this, EJGDHCIBCJH);
	}

	::System::Void BMNMLAIJJGF(::KECPLIFGOCJ GFCJHNHLFEF)
	{
		return ((::System::Void(*)(::PVOID, ::KECPLIFGOCJ))((::PBYTE)hIl2Cpp + JKKIAJGKKIB_BMNMLAIJJGF_OFFSET))(this, GFCJHNHLFEF);
	}

	::System::Void BHLAEBMEOLO()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + JKKIAJGKKIB_BHLAEBMEOLO_OFFSET))(this);
	}

	::System::Void NAMKJOJBAOA()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + JKKIAJGKKIB_NAMKJOJBAOA_OFFSET))(this);
	}

	::System::Void CHLEALKAOJO()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + JKKIAJGKKIB_CHLEALKAOJO_OFFSET))(this);
	}

	::System::Void KMIMGEDAMCE(::Il2CppArray<::System::Byte>* LJBPECKCCEA)
	{
		return ((::System::Void(*)(::PVOID, ::Il2CppArray<::System::Byte>*))((::PBYTE)hIl2Cpp + JKKIAJGKKIB_KMIMGEDAMCE_OFFSET))(this, LJBPECKCCEA);
	}

	::DDANHCDEAGH* IFDPKDOFOJD(::System::Int32 MGMDLMBEDJF)
	{
		return ((::DDANHCDEAGH*(*)(::PVOID, ::System::Int32))((::PBYTE)hIl2Cpp + JKKIAJGKKIB_IFDPKDOFOJD_OFFSET))(this, MGMDLMBEDJF);
	}
};
