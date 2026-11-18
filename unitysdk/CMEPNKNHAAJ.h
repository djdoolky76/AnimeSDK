#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/JOLAOEBMPEC.h"
#include "unitysdk/KECPLIFGOCJ.h"
#include "unitysdk/System/Object.h"

class DFIOMCDEHNN;
namespace System { class Action; }
namespace System::Collections::Generic { template <typename T1, typename T2> class Dictionary_2; }
namespace System::Collections::Generic { template <typename T> class HashSet_1; }

#define CMEPNKNHAAJ_BHLAEBMEOLO_OFFSET UNITYSDK_OFFSET(0x157935D0)
#define CMEPNKNHAAJ_BMNMLAIJJGF_OFFSET UNITYSDK_OFFSET(0x157933A0)
#define CMEPNKNHAAJ_CHLEALKAOJO_OFFSET UNITYSDK_OFFSET(0x15793510)
#define CMEPNKNHAAJ_FINALIZE_OFFSET UNITYSDK_OFFSET(0x157936B0)
#define CMEPNKNHAAJ_FPMKEGMLNHG_OFFSET UNITYSDK_OFFSET(0x157933B0)
#define CMEPNKNHAAJ_KMIMGEDAMCE_OFFSET UNITYSDK_OFFSET(0x15793830)
#define CMEPNKNHAAJ_LNFENFDLMIG_OFFSET UNITYSDK_OFFSET(0x15793000)
#define CMEPNKNHAAJ_OFHECOHPAKG_OFFSET UNITYSDK_OFFSET(0x15792FE0)
#define CMEPNKNHAAJ_PHOADBJGFBE_OFFSET UNITYSDK_OFFSET(0x157932C0)
#define CMEPNKNHAAJ__CTOR_OFFSET UNITYSDK_OFFSET(0x157937E0)

inline static constexpr unsigned int CMEPNKNHAAJ_TypeDefinitionIndex = 14064;

class CMEPNKNHAAJ : public ::System::Object
{
public:
	::Il2CppArray<::DFIOMCDEHNN*>* OJMBOGGMIKO; // 0x10
	::System::Collections::Generic::Dictionary_2<::System::Int32, ::System::Int32>* FLBOKGKPECD; // 0x18
	::System::Action* PLDOELOOFLL; // 0x20
	::JOLAOEBMPEC DHDJDGFNBOA; // 0x28
	::System::Collections::Generic::HashSet_1<::System::Int32>* LHINHLCKHNE; // 0x40
	::System::Int32 IJDGGCANOFI; // 0x48
	::System::Boolean DLGKLGKOMHK; // 0x4C

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CMEPNKNHAAJ__CTOR_OFFSET))(this);
	}

	::System::Boolean OFHECOHPAKG()
	{
		return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + CMEPNKNHAAJ_OFHECOHPAKG_OFFSET))(this);
	}

	::System::Void LNFENFDLMIG()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CMEPNKNHAAJ_LNFENFDLMIG_OFFSET))(this);
	}

	::System::Void FPMKEGMLNHG(::System::Action* EJGDHCIBCJH)
	{
		return ((::System::Void(*)(::PVOID, ::System::Action*))((::PBYTE)hIl2Cpp + CMEPNKNHAAJ_FPMKEGMLNHG_OFFSET))(this, EJGDHCIBCJH);
	}

	::System::Void BMNMLAIJJGF(::KECPLIFGOCJ GFCJHNHLFEF)
	{
		return ((::System::Void(*)(::PVOID, ::KECPLIFGOCJ))((::PBYTE)hIl2Cpp + CMEPNKNHAAJ_BMNMLAIJJGF_OFFSET))(this, GFCJHNHLFEF);
	}

	::System::Void PHOADBJGFBE()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CMEPNKNHAAJ_PHOADBJGFBE_OFFSET))(this);
	}

	::System::Void BHLAEBMEOLO()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CMEPNKNHAAJ_BHLAEBMEOLO_OFFSET))(this);
	}

	::System::Void Finalize()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CMEPNKNHAAJ_FINALIZE_OFFSET))(this);
	}

	::System::Void CHLEALKAOJO()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CMEPNKNHAAJ_CHLEALKAOJO_OFFSET))(this);
	}

	::System::Void KMIMGEDAMCE(::Il2CppArray<::System::Byte>* LJBPECKCCEA)
	{
		return ((::System::Void(*)(::PVOID, ::Il2CppArray<::System::Byte>*))((::PBYTE)hIl2Cpp + CMEPNKNHAAJ_KMIMGEDAMCE_OFFSET))(this, LJBPECKCCEA);
	}
};
