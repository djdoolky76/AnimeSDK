#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/DKHEBMOPDBE.h"
#include "unitysdk/KECPLIFGOCJ.h"
#include "unitysdk/System/Object.h"

class EBMELHKGPPM;
namespace System { class Action; }
namespace System::Collections::Generic { template <typename T1, typename T2> class Dictionary_2; }
namespace System::Collections::Generic { template <typename T> class HashSet_1; }

#define GBDJEEMNOFG_BHLAEBMEOLO_OFFSET UNITYSDK_OFFSET(0x160E1560)
#define GBDJEEMNOFG_BMNMLAIJJGF_OFFSET UNITYSDK_OFFSET(0x160E12E0)
#define GBDJEEMNOFG_CHLEALKAOJO_OFFSET UNITYSDK_OFFSET(0x160E12F0)
#define GBDJEEMNOFG_FINALIZE_OFFSET UNITYSDK_OFFSET(0x160E13B0)
#define GBDJEEMNOFG_FPMKEGMLNHG_OFFSET UNITYSDK_OFFSET(0x160E14E0)
#define GBDJEEMNOFG_IFDPKDOFOJD_OFFSET UNITYSDK_OFFSET(0x160E16B0)
#define GBDJEEMNOFG_KMIMGEDAMCE_OFFSET UNITYSDK_OFFSET(0x160E18C0)
#define GBDJEEMNOFG_LNFENFDLMIG_OFFSET UNITYSDK_OFFSET(0x160E0F40)
#define GBDJEEMNOFG_NAMKJOJBAOA_OFFSET UNITYSDK_OFFSET(0x160E1690)
#define GBDJEEMNOFG_OFHECOHPAKG_OFFSET UNITYSDK_OFFSET(0x160E0F20)
#define GBDJEEMNOFG_PHOADBJGFBE_OFFSET UNITYSDK_OFFSET(0x160E1200)
#define GBDJEEMNOFG__CTOR_OFFSET UNITYSDK_OFFSET(0x160E1640)

inline static constexpr unsigned int GBDJEEMNOFG_TypeDefinitionIndex = 15895;

class GBDJEEMNOFG : public ::System::Object
{
public:
	::System::Collections::Generic::Dictionary_2<::System::Int32, ::System::Int32>* FLBOKGKPECD; // 0x10
	::Il2CppArray<::EBMELHKGPPM*>* OJMBOGGMIKO; // 0x18
	::System::Action* PLDOELOOFLL; // 0x20
	::System::Collections::Generic::HashSet_1<::System::Int32>* LHINHLCKHNE; // 0x28
	::DKHEBMOPDBE DHDJDGFNBOA; // 0x30
	::System::Int32 IJDGGCANOFI; // 0x48
	::System::Boolean DLGKLGKOMHK; // 0x4C

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + GBDJEEMNOFG__CTOR_OFFSET))(this);
	}

	::System::Boolean OFHECOHPAKG()
	{
		return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + GBDJEEMNOFG_OFHECOHPAKG_OFFSET))(this);
	}

	::System::Void LNFENFDLMIG()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + GBDJEEMNOFG_LNFENFDLMIG_OFFSET))(this);
	}

	::System::Void PHOADBJGFBE()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + GBDJEEMNOFG_PHOADBJGFBE_OFFSET))(this);
	}

	::System::Void Finalize()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + GBDJEEMNOFG_FINALIZE_OFFSET))(this);
	}

	::System::Void FPMKEGMLNHG(::System::Action* EJGDHCIBCJH)
	{
		return ((::System::Void(*)(::PVOID, ::System::Action*))((::PBYTE)hIl2Cpp + GBDJEEMNOFG_FPMKEGMLNHG_OFFSET))(this, EJGDHCIBCJH);
	}

	::System::Void BMNMLAIJJGF(::KECPLIFGOCJ GFCJHNHLFEF)
	{
		return ((::System::Void(*)(::PVOID, ::KECPLIFGOCJ))((::PBYTE)hIl2Cpp + GBDJEEMNOFG_BMNMLAIJJGF_OFFSET))(this, GFCJHNHLFEF);
	}

	::System::Void BHLAEBMEOLO()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + GBDJEEMNOFG_BHLAEBMEOLO_OFFSET))(this);
	}

	::System::Void NAMKJOJBAOA()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + GBDJEEMNOFG_NAMKJOJBAOA_OFFSET))(this);
	}

	::EBMELHKGPPM* IFDPKDOFOJD(::System::Int32 MGMDLMBEDJF)
	{
		return ((::EBMELHKGPPM*(*)(::PVOID, ::System::Int32))((::PBYTE)hIl2Cpp + GBDJEEMNOFG_IFDPKDOFOJD_OFFSET))(this, MGMDLMBEDJF);
	}

	::System::Void KMIMGEDAMCE(::Il2CppArray<::System::Byte>* LJBPECKCCEA)
	{
		return ((::System::Void(*)(::PVOID, ::Il2CppArray<::System::Byte>*))((::PBYTE)hIl2Cpp + GBDJEEMNOFG_KMIMGEDAMCE_OFFSET))(this, LJBPECKCCEA);
	}

	::System::Void CHLEALKAOJO()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + GBDJEEMNOFG_CHLEALKAOJO_OFFSET))(this);
	}
};
