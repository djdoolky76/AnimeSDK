#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/KECPLIFGOCJ.h"
#include "unitysdk/MKKMINPKFBN.h"
#include "unitysdk/System/Object.h"

class INOFKIKEION;
namespace System { class Action; }
namespace System::Collections::Generic { template <typename T1, typename T2> class Dictionary_2; }

#define KGAGBMEDEBP_BHLAEBMEOLO_OFFSET UNITYSDK_OFFSET(0x1B1454D0)
#define KGAGBMEDEBP_BMNMLAIJJGF_OFFSET UNITYSDK_OFFSET(0x1B1452A0)
#define KGAGBMEDEBP_CHLEALKAOJO_OFFSET UNITYSDK_OFFSET(0x1B145410)
#define KGAGBMEDEBP_FINALIZE_OFFSET UNITYSDK_OFFSET(0x1B1455B0)
#define KGAGBMEDEBP_FPMKEGMLNHG_OFFSET UNITYSDK_OFFSET(0x1B1452B0)
#define KGAGBMEDEBP_IFDPKDOFOJD_OFFSET UNITYSDK_OFFSET(0x1B1458E0)
#define KGAGBMEDEBP_KMIMGEDAMCE_OFFSET UNITYSDK_OFFSET(0x1B1456F0)
#define KGAGBMEDEBP_LNFENFDLMIG_OFFSET UNITYSDK_OFFSET(0x1B144F00)
#define KGAGBMEDEBP_NAMKJOJBAOA_OFFSET UNITYSDK_OFFSET(0x1B1458C0)
#define KGAGBMEDEBP_OFHECOHPAKG_OFFSET UNITYSDK_OFFSET(0x1B144EE0)
#define KGAGBMEDEBP_PHOADBJGFBE_OFFSET UNITYSDK_OFFSET(0x1B1451C0)
#define KGAGBMEDEBP__CTOR_OFFSET UNITYSDK_OFFSET(0x1B1456E0)

inline static constexpr unsigned int KGAGBMEDEBP_TypeDefinitionIndex = 15836;

class KGAGBMEDEBP : public ::System::Object
{
public:
	::System::Action* PLDOELOOFLL; // 0x10
	::MKKMINPKFBN DHDJDGFNBOA; // 0x18
	::Il2CppArray<::INOFKIKEION*>* OJMBOGGMIKO; // 0x30
	::System::Collections::Generic::Dictionary_2<::System::Int32, ::System::Int32>* FLBOKGKPECD; // 0x38
	::System::Int32 IJDGGCANOFI; // 0x40
	::System::Boolean DLGKLGKOMHK; // 0x44

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + KGAGBMEDEBP__CTOR_OFFSET))(this);
	}

	::System::Boolean OFHECOHPAKG()
	{
		return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + KGAGBMEDEBP_OFHECOHPAKG_OFFSET))(this);
	}

	::System::Void LNFENFDLMIG()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + KGAGBMEDEBP_LNFENFDLMIG_OFFSET))(this);
	}

	::System::Void FPMKEGMLNHG(::System::Action* EJGDHCIBCJH)
	{
		return ((::System::Void(*)(::PVOID, ::System::Action*))((::PBYTE)hIl2Cpp + KGAGBMEDEBP_FPMKEGMLNHG_OFFSET))(this, EJGDHCIBCJH);
	}

	::System::Void BMNMLAIJJGF(::KECPLIFGOCJ GFCJHNHLFEF)
	{
		return ((::System::Void(*)(::PVOID, ::KECPLIFGOCJ))((::PBYTE)hIl2Cpp + KGAGBMEDEBP_BMNMLAIJJGF_OFFSET))(this, GFCJHNHLFEF);
	}

	::System::Void PHOADBJGFBE()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + KGAGBMEDEBP_PHOADBJGFBE_OFFSET))(this);
	}

	::System::Void BHLAEBMEOLO()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + KGAGBMEDEBP_BHLAEBMEOLO_OFFSET))(this);
	}

	::System::Void Finalize()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + KGAGBMEDEBP_FINALIZE_OFFSET))(this);
	}

	::System::Void KMIMGEDAMCE(::Il2CppArray<::System::Byte>* LJBPECKCCEA)
	{
		return ((::System::Void(*)(::PVOID, ::Il2CppArray<::System::Byte>*))((::PBYTE)hIl2Cpp + KGAGBMEDEBP_KMIMGEDAMCE_OFFSET))(this, LJBPECKCCEA);
	}

	::System::Void NAMKJOJBAOA()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + KGAGBMEDEBP_NAMKJOJBAOA_OFFSET))(this);
	}

	::INOFKIKEION* IFDPKDOFOJD(::System::Int32 MGMDLMBEDJF)
	{
		return ((::INOFKIKEION*(*)(::PVOID, ::System::Int32))((::PBYTE)hIl2Cpp + KGAGBMEDEBP_IFDPKDOFOJD_OFFSET))(this, MGMDLMBEDJF);
	}

	::System::Void CHLEALKAOJO()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + KGAGBMEDEBP_CHLEALKAOJO_OFFSET))(this);
	}
};
