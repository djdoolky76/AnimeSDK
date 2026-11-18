#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/KECPLIFGOCJ.h"
#include "unitysdk/PPIINGEECLF.h"
#include "unitysdk/System/Object.h"
#include "unitysdk/System/ValueTuple_2.h"

class AIMHFHGDLOH;
namespace System { class Action; }
namespace System::Collections::Generic { template <typename T1, typename T2> class Dictionary_2; }
namespace System::Collections::Generic { template <typename T> class HashSet_1; }

#define GONOHKCKHMG_BHLAEBMEOLO_OFFSET UNITYSDK_OFFSET(0x1A5C4F00)
#define GONOHKCKHMG_BMNMLAIJJGF_OFFSET UNITYSDK_OFFSET(0x1A5C4C80)
#define GONOHKCKHMG_CHLEALKAOJO_OFFSET UNITYSDK_OFFSET(0x1A5C4C90)
#define GONOHKCKHMG_FINALIZE_OFFSET UNITYSDK_OFFSET(0x1A5C4D50)
#define GONOHKCKHMG_FPMKEGMLNHG_OFFSET UNITYSDK_OFFSET(0x1A5C4E80)
#define GONOHKCKHMG_KMIMGEDAMCE_OFFSET UNITYSDK_OFFSET(0x1A5C5030)
#define GONOHKCKHMG_LNFENFDLMIG_OFFSET UNITYSDK_OFFSET(0x1A5C4920)
#define GONOHKCKHMG_OFHECOHPAKG_OFFSET UNITYSDK_OFFSET(0x1A5C4900)
#define GONOHKCKHMG_PHOADBJGFBE_OFFSET UNITYSDK_OFFSET(0x1A5C4BA0)
#define GONOHKCKHMG__CTOR_OFFSET UNITYSDK_OFFSET(0x1A5C4FE0)

inline static constexpr unsigned int GONOHKCKHMG_TypeDefinitionIndex = 11603;

class GONOHKCKHMG : public ::System::Object
{
public:
	::System::Collections::Generic::HashSet_1<::System::ValueTuple_2<::System::Int32, ::System::Int32>>* LHINHLCKHNE; // 0x10
	::System::Action* PLDOELOOFLL; // 0x18
	::Il2CppArray<::AIMHFHGDLOH*>* OJMBOGGMIKO; // 0x20
	::System::Collections::Generic::Dictionary_2<::System::Int32, ::System::Collections::Generic::Dictionary_2<::System::Int32, ::System::Int32>*>* FLBOKGKPECD; // 0x28
	::PPIINGEECLF DHDJDGFNBOA; // 0x30
	::System::Boolean DLGKLGKOMHK; // 0x48
	::System::Byte _padding0[0x3];
	::System::Int32 IJDGGCANOFI; // 0x4C

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + GONOHKCKHMG__CTOR_OFFSET))(this);
	}

	::System::Boolean OFHECOHPAKG()
	{
		return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + GONOHKCKHMG_OFHECOHPAKG_OFFSET))(this);
	}

	::System::Void LNFENFDLMIG()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + GONOHKCKHMG_LNFENFDLMIG_OFFSET))(this);
	}

	::System::Void PHOADBJGFBE()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + GONOHKCKHMG_PHOADBJGFBE_OFFSET))(this);
	}

	::System::Void Finalize()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + GONOHKCKHMG_FINALIZE_OFFSET))(this);
	}

	::System::Void FPMKEGMLNHG(::System::Action* EJGDHCIBCJH)
	{
		return ((::System::Void(*)(::PVOID, ::System::Action*))((::PBYTE)hIl2Cpp + GONOHKCKHMG_FPMKEGMLNHG_OFFSET))(this, EJGDHCIBCJH);
	}

	::System::Void BMNMLAIJJGF(::KECPLIFGOCJ GFCJHNHLFEF)
	{
		return ((::System::Void(*)(::PVOID, ::KECPLIFGOCJ))((::PBYTE)hIl2Cpp + GONOHKCKHMG_BMNMLAIJJGF_OFFSET))(this, GFCJHNHLFEF);
	}

	::System::Void BHLAEBMEOLO()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + GONOHKCKHMG_BHLAEBMEOLO_OFFSET))(this);
	}

	::System::Void KMIMGEDAMCE(::Il2CppArray<::System::Byte>* LJBPECKCCEA)
	{
		return ((::System::Void(*)(::PVOID, ::Il2CppArray<::System::Byte>*))((::PBYTE)hIl2Cpp + GONOHKCKHMG_KMIMGEDAMCE_OFFSET))(this, LJBPECKCCEA);
	}

	::System::Void CHLEALKAOJO()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + GONOHKCKHMG_CHLEALKAOJO_OFFSET))(this);
	}
};
