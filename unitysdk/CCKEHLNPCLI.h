#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/CDJDLDPBAJK.h"
#include "unitysdk/KECPLIFGOCJ.h"
#include "unitysdk/System/Object.h"

class CELNNCEAKGB;
namespace System { class Action; }
namespace System::Collections::Generic { template <typename T1, typename T2> class Dictionary_2; }
namespace System::Collections::Generic { template <typename T> class HashSet_1; }

#define CCKEHLNPCLI_BHLAEBMEOLO_OFFSET UNITYSDK_OFFSET(0x1A580C90)
#define CCKEHLNPCLI_BMNMLAIJJGF_OFFSET UNITYSDK_OFFSET(0x1A580A50)
#define CCKEHLNPCLI_CHLEALKAOJO_OFFSET UNITYSDK_OFFSET(0x1A580BD0)
#define CCKEHLNPCLI_FINALIZE_OFFSET UNITYSDK_OFFSET(0x1A580D70)
#define CCKEHLNPCLI_FPMKEGMLNHG_OFFSET UNITYSDK_OFFSET(0x1A580A60)
#define CCKEHLNPCLI_IFDPKDOFOJD_OFFSET UNITYSDK_OFFSET(0x1A5810C0)
#define CCKEHLNPCLI_KMIMGEDAMCE_OFFSET UNITYSDK_OFFSET(0x1A580EF0)
#define CCKEHLNPCLI_LNFENFDLMIG_OFFSET UNITYSDK_OFFSET(0x1A5806A0)
#define CCKEHLNPCLI_NAMKJOJBAOA_OFFSET UNITYSDK_OFFSET(0x1A5812F0)
#define CCKEHLNPCLI_OFHECOHPAKG_OFFSET UNITYSDK_OFFSET(0x1A580680)
#define CCKEHLNPCLI_PHOADBJGFBE_OFFSET UNITYSDK_OFFSET(0x1A580960)
#define CCKEHLNPCLI__CTOR_OFFSET UNITYSDK_OFFSET(0x1A580EA0)

inline static constexpr unsigned int CCKEHLNPCLI_TypeDefinitionIndex = 12705;

class CCKEHLNPCLI : public ::System::Object
{
public:
	::Il2CppArray<::CELNNCEAKGB*>* OJMBOGGMIKO; // 0x10
	::System::Action* PLDOELOOFLL; // 0x18
	::CDJDLDPBAJK DHDJDGFNBOA; // 0x20
	::System::Collections::Generic::Dictionary_2<::System::Int32, ::System::Int32>* FLBOKGKPECD; // 0x38
	::System::Collections::Generic::HashSet_1<::System::Int32>* LHINHLCKHNE; // 0x40
	::System::Int32 IJDGGCANOFI; // 0x48
	::System::Boolean DLGKLGKOMHK; // 0x4C

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CCKEHLNPCLI__CTOR_OFFSET))(this);
	}

	::System::Boolean OFHECOHPAKG()
	{
		return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + CCKEHLNPCLI_OFHECOHPAKG_OFFSET))(this);
	}

	::System::Void LNFENFDLMIG()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CCKEHLNPCLI_LNFENFDLMIG_OFFSET))(this);
	}

	::System::Void FPMKEGMLNHG(::System::Action* EJGDHCIBCJH)
	{
		return ((::System::Void(*)(::PVOID, ::System::Action*))((::PBYTE)hIl2Cpp + CCKEHLNPCLI_FPMKEGMLNHG_OFFSET))(this, EJGDHCIBCJH);
	}

	::System::Void BMNMLAIJJGF(::KECPLIFGOCJ GFCJHNHLFEF)
	{
		return ((::System::Void(*)(::PVOID, ::KECPLIFGOCJ))((::PBYTE)hIl2Cpp + CCKEHLNPCLI_BMNMLAIJJGF_OFFSET))(this, GFCJHNHLFEF);
	}

	::System::Void PHOADBJGFBE()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CCKEHLNPCLI_PHOADBJGFBE_OFFSET))(this);
	}

	::System::Void BHLAEBMEOLO()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CCKEHLNPCLI_BHLAEBMEOLO_OFFSET))(this);
	}

	::System::Void Finalize()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CCKEHLNPCLI_FINALIZE_OFFSET))(this);
	}

	::System::Void KMIMGEDAMCE(::Il2CppArray<::System::Byte>* LJBPECKCCEA)
	{
		return ((::System::Void(*)(::PVOID, ::Il2CppArray<::System::Byte>*))((::PBYTE)hIl2Cpp + CCKEHLNPCLI_KMIMGEDAMCE_OFFSET))(this, LJBPECKCCEA);
	}

	::System::Void CHLEALKAOJO()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CCKEHLNPCLI_CHLEALKAOJO_OFFSET))(this);
	}

	::CELNNCEAKGB* IFDPKDOFOJD(::System::Int32 MGMDLMBEDJF)
	{
		return ((::CELNNCEAKGB*(*)(::PVOID, ::System::Int32))((::PBYTE)hIl2Cpp + CCKEHLNPCLI_IFDPKDOFOJD_OFFSET))(this, MGMDLMBEDJF);
	}

	::System::Void NAMKJOJBAOA()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CCKEHLNPCLI_NAMKJOJBAOA_OFFSET))(this);
	}
};
