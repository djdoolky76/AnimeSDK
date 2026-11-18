#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/KECPLIFGOCJ.h"
#include "unitysdk/LADBCNMLMEP.h"
#include "unitysdk/System/Object.h"

class CIGAOIAOFPD;
namespace System { class Action; }
namespace System::Collections::Generic { template <typename T1, typename T2> class Dictionary_2; }
namespace System::Collections::Generic { template <typename T> class HashSet_1; }

#define BKEMLDAGHPG_BHLAEBMEOLO_OFFSET UNITYSDK_OFFSET(0x19BED750)
#define BKEMLDAGHPG_BMNMLAIJJGF_OFFSET UNITYSDK_OFFSET(0x19BED510)
#define BKEMLDAGHPG_CHLEALKAOJO_OFFSET UNITYSDK_OFFSET(0x19BED690)
#define BKEMLDAGHPG_FINALIZE_OFFSET UNITYSDK_OFFSET(0x19BED830)
#define BKEMLDAGHPG_FPMKEGMLNHG_OFFSET UNITYSDK_OFFSET(0x19BED520)
#define BKEMLDAGHPG_KMIMGEDAMCE_OFFSET UNITYSDK_OFFSET(0x19BED9B0)
#define BKEMLDAGHPG_LNFENFDLMIG_OFFSET UNITYSDK_OFFSET(0x19BED160)
#define BKEMLDAGHPG_OFHECOHPAKG_OFFSET UNITYSDK_OFFSET(0x19BED140)
#define BKEMLDAGHPG_PHOADBJGFBE_OFFSET UNITYSDK_OFFSET(0x19BED420)
#define BKEMLDAGHPG__CTOR_OFFSET UNITYSDK_OFFSET(0x19BED960)

inline static constexpr unsigned int BKEMLDAGHPG_TypeDefinitionIndex = 12184;

class BKEMLDAGHPG : public ::System::Object
{
public:
	::LADBCNMLMEP DHDJDGFNBOA; // 0x10
	::System::Action* PLDOELOOFLL; // 0x28
	::System::Collections::Generic::Dictionary_2<::System::Int32, ::System::Int32>* FLBOKGKPECD; // 0x30
	::System::Collections::Generic::HashSet_1<::System::Int32>* LHINHLCKHNE; // 0x38
	::Il2CppArray<::CIGAOIAOFPD*>* OJMBOGGMIKO; // 0x40
	::System::Boolean DLGKLGKOMHK; // 0x48
	::System::Byte _padding0[0x3];
	::System::Int32 IJDGGCANOFI; // 0x4C

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + BKEMLDAGHPG__CTOR_OFFSET))(this);
	}

	::System::Boolean OFHECOHPAKG()
	{
		return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + BKEMLDAGHPG_OFHECOHPAKG_OFFSET))(this);
	}

	::System::Void LNFENFDLMIG()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + BKEMLDAGHPG_LNFENFDLMIG_OFFSET))(this);
	}

	::System::Void FPMKEGMLNHG(::System::Action* EJGDHCIBCJH)
	{
		return ((::System::Void(*)(::PVOID, ::System::Action*))((::PBYTE)hIl2Cpp + BKEMLDAGHPG_FPMKEGMLNHG_OFFSET))(this, EJGDHCIBCJH);
	}

	::System::Void BMNMLAIJJGF(::KECPLIFGOCJ GFCJHNHLFEF)
	{
		return ((::System::Void(*)(::PVOID, ::KECPLIFGOCJ))((::PBYTE)hIl2Cpp + BKEMLDAGHPG_BMNMLAIJJGF_OFFSET))(this, GFCJHNHLFEF);
	}

	::System::Void PHOADBJGFBE()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + BKEMLDAGHPG_PHOADBJGFBE_OFFSET))(this);
	}

	::System::Void BHLAEBMEOLO()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + BKEMLDAGHPG_BHLAEBMEOLO_OFFSET))(this);
	}

	::System::Void Finalize()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + BKEMLDAGHPG_FINALIZE_OFFSET))(this);
	}

	::System::Void CHLEALKAOJO()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + BKEMLDAGHPG_CHLEALKAOJO_OFFSET))(this);
	}

	::System::Void KMIMGEDAMCE(::Il2CppArray<::System::Byte>* LJBPECKCCEA)
	{
		return ((::System::Void(*)(::PVOID, ::Il2CppArray<::System::Byte>*))((::PBYTE)hIl2Cpp + BKEMLDAGHPG_KMIMGEDAMCE_OFFSET))(this, LJBPECKCCEA);
	}
};
