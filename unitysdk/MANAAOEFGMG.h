#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/ACHEHLKHJKP.h"
#include "unitysdk/KECPLIFGOCJ.h"
#include "unitysdk/System/Object.h"

class LGJLCGMLEPO;
namespace System { class Action; }
namespace System::Collections::Generic { template <typename T1, typename T2> class Dictionary_2; }
namespace System::Collections::Generic { template <typename T> class HashSet_1; }
namespace System::Collections::Generic { template <typename T> class IReadOnlyList_1; }

#define MANAAOEFGMG_BHLAEBMEOLO_OFFSET UNITYSDK_OFFSET(0x19103EB0)
#define MANAAOEFGMG_BMNMLAIJJGF_OFFSET UNITYSDK_OFFSET(0x19103C80)
#define MANAAOEFGMG_CHLEALKAOJO_OFFSET UNITYSDK_OFFSET(0x19103DF0)
#define MANAAOEFGMG_EJABHIAHIAN_OFFSET UNITYSDK_OFFSET(0x19104340)
#define MANAAOEFGMG_FINALIZE_OFFSET UNITYSDK_OFFSET(0x19103F90)
#define MANAAOEFGMG_FPMKEGMLNHG_OFFSET UNITYSDK_OFFSET(0x19103C90)
#define MANAAOEFGMG_HFPLKMOOLLL_OFFSET UNITYSDK_OFFSET(0x19104130)
#define MANAAOEFGMG_KMIMGEDAMCE_OFFSET UNITYSDK_OFFSET(0x19104410)
#define MANAAOEFGMG_LNFENFDLMIG_OFFSET UNITYSDK_OFFSET(0x191038E0)
#define MANAAOEFGMG_NAMKJOJBAOA_OFFSET UNITYSDK_OFFSET(0x19104110)
#define MANAAOEFGMG_OFHECOHPAKG_OFFSET UNITYSDK_OFFSET(0x191038C0)
#define MANAAOEFGMG_PHOADBJGFBE_OFFSET UNITYSDK_OFFSET(0x19103BA0)
#define MANAAOEFGMG__CTOR_OFFSET UNITYSDK_OFFSET(0x191040C0)

inline static constexpr unsigned int MANAAOEFGMG_TypeDefinitionIndex = 16378;

class MANAAOEFGMG : public ::System::Object
{
public:
	::System::Collections::Generic::Dictionary_2<::System::Int32, ::System::Int32>* FLBOKGKPECD; // 0x10
	::Il2CppArray<::LGJLCGMLEPO*>* OJMBOGGMIKO; // 0x18
	::System::Collections::Generic::HashSet_1<::System::Int32>* LHINHLCKHNE; // 0x20
	::ACHEHLKHJKP DHDJDGFNBOA; // 0x28
	::System::Action* PLDOELOOFLL; // 0x40
	::System::Boolean DLGKLGKOMHK; // 0x48
	::System::Byte _padding0[0x3];
	::System::Int32 IJDGGCANOFI; // 0x4C

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MANAAOEFGMG__CTOR_OFFSET))(this);
	}

	::System::Boolean OFHECOHPAKG()
	{
		return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + MANAAOEFGMG_OFHECOHPAKG_OFFSET))(this);
	}

	::System::Void LNFENFDLMIG()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MANAAOEFGMG_LNFENFDLMIG_OFFSET))(this);
	}

	::System::Void FPMKEGMLNHG(::System::Action* EJGDHCIBCJH)
	{
		return ((::System::Void(*)(::PVOID, ::System::Action*))((::PBYTE)hIl2Cpp + MANAAOEFGMG_FPMKEGMLNHG_OFFSET))(this, EJGDHCIBCJH);
	}

	::System::Void BMNMLAIJJGF(::KECPLIFGOCJ GFCJHNHLFEF)
	{
		return ((::System::Void(*)(::PVOID, ::KECPLIFGOCJ))((::PBYTE)hIl2Cpp + MANAAOEFGMG_BMNMLAIJJGF_OFFSET))(this, GFCJHNHLFEF);
	}

	::System::Void PHOADBJGFBE()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MANAAOEFGMG_PHOADBJGFBE_OFFSET))(this);
	}

	::System::Void BHLAEBMEOLO()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MANAAOEFGMG_BHLAEBMEOLO_OFFSET))(this);
	}

	::System::Void Finalize()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MANAAOEFGMG_FINALIZE_OFFSET))(this);
	}

	::System::Void NAMKJOJBAOA()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MANAAOEFGMG_NAMKJOJBAOA_OFFSET))(this);
	}

	::LGJLCGMLEPO* HFPLKMOOLLL(::System::Int32 ABHBKFJKINO)
	{
		return ((::LGJLCGMLEPO*(*)(::PVOID, ::System::Int32))((::PBYTE)hIl2Cpp + MANAAOEFGMG_HFPLKMOOLLL_OFFSET))(this, ABHBKFJKINO);
	}

	::System::Collections::Generic::IReadOnlyList_1<::LGJLCGMLEPO*>* EJABHIAHIAN()
	{
		return ((::System::Collections::Generic::IReadOnlyList_1<::LGJLCGMLEPO*>*(*)(::PVOID))((::PBYTE)hIl2Cpp + MANAAOEFGMG_EJABHIAHIAN_OFFSET))(this);
	}

	::System::Void KMIMGEDAMCE(::Il2CppArray<::System::Byte>* LJBPECKCCEA)
	{
		return ((::System::Void(*)(::PVOID, ::Il2CppArray<::System::Byte>*))((::PBYTE)hIl2Cpp + MANAAOEFGMG_KMIMGEDAMCE_OFFSET))(this, LJBPECKCCEA);
	}

	::System::Void CHLEALKAOJO()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MANAAOEFGMG_CHLEALKAOJO_OFFSET))(this);
	}
};
