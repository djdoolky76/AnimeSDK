#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/JJFNGKBIFPE.h"
#include "unitysdk/KECPLIFGOCJ.h"
#include "unitysdk/System/Object.h"

class APKMKILAFOL;
namespace System { class Action; }
namespace System::Collections::Generic { template <typename T1, typename T2> class Dictionary_2; }
namespace System::Collections::Generic { template <typename T> class HashSet_1; }

#define LLGCGLJIGCD_BHLAEBMEOLO_OFFSET UNITYSDK_OFFSET(0x1C07BD90)
#define LLGCGLJIGCD_BMNMLAIJJGF_OFFSET UNITYSDK_OFFSET(0x1C07BB50)
#define LLGCGLJIGCD_CHLEALKAOJO_OFFSET UNITYSDK_OFFSET(0x1C07BCD0)
#define LLGCGLJIGCD_FINALIZE_OFFSET UNITYSDK_OFFSET(0x1C07BE70)
#define LLGCGLJIGCD_FPMKEGMLNHG_OFFSET UNITYSDK_OFFSET(0x1C07BB60)
#define LLGCGLJIGCD_KMIMGEDAMCE_OFFSET UNITYSDK_OFFSET(0x1C07BFF0)
#define LLGCGLJIGCD_LNFENFDLMIG_OFFSET UNITYSDK_OFFSET(0x1C07B7A0)
#define LLGCGLJIGCD_OFHECOHPAKG_OFFSET UNITYSDK_OFFSET(0x1C07B780)
#define LLGCGLJIGCD_PHOADBJGFBE_OFFSET UNITYSDK_OFFSET(0x1C07BA60)
#define LLGCGLJIGCD__CTOR_OFFSET UNITYSDK_OFFSET(0x1C07BFA0)

inline static constexpr unsigned int LLGCGLJIGCD_TypeDefinitionIndex = 14548;

class LLGCGLJIGCD : public ::System::Object
{
public:
	::System::Collections::Generic::HashSet_1<::System::Int32>* LHINHLCKHNE; // 0x10
	::System::Action* PLDOELOOFLL; // 0x18
	::Il2CppArray<::APKMKILAFOL*>* OJMBOGGMIKO; // 0x20
	::JJFNGKBIFPE DHDJDGFNBOA; // 0x28
	::System::Collections::Generic::Dictionary_2<::System::Int32, ::System::Int32>* FLBOKGKPECD; // 0x40
	::System::Boolean DLGKLGKOMHK; // 0x48
	::System::Byte _padding0[0x3];
	::System::Int32 IJDGGCANOFI; // 0x4C

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + LLGCGLJIGCD__CTOR_OFFSET))(this);
	}

	::System::Boolean OFHECOHPAKG()
	{
		return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + LLGCGLJIGCD_OFHECOHPAKG_OFFSET))(this);
	}

	::System::Void LNFENFDLMIG()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + LLGCGLJIGCD_LNFENFDLMIG_OFFSET))(this);
	}

	::System::Void FPMKEGMLNHG(::System::Action* EJGDHCIBCJH)
	{
		return ((::System::Void(*)(::PVOID, ::System::Action*))((::PBYTE)hIl2Cpp + LLGCGLJIGCD_FPMKEGMLNHG_OFFSET))(this, EJGDHCIBCJH);
	}

	::System::Void BMNMLAIJJGF(::KECPLIFGOCJ GFCJHNHLFEF)
	{
		return ((::System::Void(*)(::PVOID, ::KECPLIFGOCJ))((::PBYTE)hIl2Cpp + LLGCGLJIGCD_BMNMLAIJJGF_OFFSET))(this, GFCJHNHLFEF);
	}

	::System::Void PHOADBJGFBE()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + LLGCGLJIGCD_PHOADBJGFBE_OFFSET))(this);
	}

	::System::Void BHLAEBMEOLO()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + LLGCGLJIGCD_BHLAEBMEOLO_OFFSET))(this);
	}

	::System::Void Finalize()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + LLGCGLJIGCD_FINALIZE_OFFSET))(this);
	}

	::System::Void KMIMGEDAMCE(::Il2CppArray<::System::Byte>* LJBPECKCCEA)
	{
		return ((::System::Void(*)(::PVOID, ::Il2CppArray<::System::Byte>*))((::PBYTE)hIl2Cpp + LLGCGLJIGCD_KMIMGEDAMCE_OFFSET))(this, LJBPECKCCEA);
	}

	::System::Void CHLEALKAOJO()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + LLGCGLJIGCD_CHLEALKAOJO_OFFSET))(this);
	}
};
