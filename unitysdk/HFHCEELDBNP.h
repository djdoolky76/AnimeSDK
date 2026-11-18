#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/IEPOFOJGAIJ.h"
#include "unitysdk/KECPLIFGOCJ.h"
#include "unitysdk/System/Object.h"

class EGNDKFDGLBP;
namespace System { class Action; }
namespace System::Collections::Generic { template <typename T1, typename T2> class Dictionary_2; }
namespace System::Collections::Generic { template <typename T> class HashSet_1; }

#define HFHCEELDBNP_BHLAEBMEOLO_OFFSET UNITYSDK_OFFSET(0x1B878FE0)
#define HFHCEELDBNP_BMNMLAIJJGF_OFFSET UNITYSDK_OFFSET(0x1B878DB0)
#define HFHCEELDBNP_CHLEALKAOJO_OFFSET UNITYSDK_OFFSET(0x1B878F20)
#define HFHCEELDBNP_FINALIZE_OFFSET UNITYSDK_OFFSET(0x1B8790C0)
#define HFHCEELDBNP_FPMKEGMLNHG_OFFSET UNITYSDK_OFFSET(0x1B878DC0)
#define HFHCEELDBNP_KMIMGEDAMCE_OFFSET UNITYSDK_OFFSET(0x1B879240)
#define HFHCEELDBNP_LNFENFDLMIG_OFFSET UNITYSDK_OFFSET(0x1B878A10)
#define HFHCEELDBNP_OFHECOHPAKG_OFFSET UNITYSDK_OFFSET(0x1B8789F0)
#define HFHCEELDBNP_PHOADBJGFBE_OFFSET UNITYSDK_OFFSET(0x1B878CD0)
#define HFHCEELDBNP__CTOR_OFFSET UNITYSDK_OFFSET(0x1B8791F0)

inline static constexpr unsigned int HFHCEELDBNP_TypeDefinitionIndex = 12384;

class HFHCEELDBNP : public ::System::Object
{
public:
	::Il2CppArray<::EGNDKFDGLBP*>* OJMBOGGMIKO; // 0x10
	::System::Collections::Generic::Dictionary_2<::System::Int32, ::System::Int32>* FLBOKGKPECD; // 0x18
	::System::Collections::Generic::HashSet_1<::System::Int32>* LHINHLCKHNE; // 0x20
	::System::Action* PLDOELOOFLL; // 0x28
	::IEPOFOJGAIJ DHDJDGFNBOA; // 0x30
	::System::Int32 IJDGGCANOFI; // 0x48
	::System::Boolean DLGKLGKOMHK; // 0x4C

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + HFHCEELDBNP__CTOR_OFFSET))(this);
	}

	::System::Boolean OFHECOHPAKG()
	{
		return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + HFHCEELDBNP_OFHECOHPAKG_OFFSET))(this);
	}

	::System::Void LNFENFDLMIG()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + HFHCEELDBNP_LNFENFDLMIG_OFFSET))(this);
	}

	::System::Void FPMKEGMLNHG(::System::Action* EJGDHCIBCJH)
	{
		return ((::System::Void(*)(::PVOID, ::System::Action*))((::PBYTE)hIl2Cpp + HFHCEELDBNP_FPMKEGMLNHG_OFFSET))(this, EJGDHCIBCJH);
	}

	::System::Void BMNMLAIJJGF(::KECPLIFGOCJ GFCJHNHLFEF)
	{
		return ((::System::Void(*)(::PVOID, ::KECPLIFGOCJ))((::PBYTE)hIl2Cpp + HFHCEELDBNP_BMNMLAIJJGF_OFFSET))(this, GFCJHNHLFEF);
	}

	::System::Void PHOADBJGFBE()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + HFHCEELDBNP_PHOADBJGFBE_OFFSET))(this);
	}

	::System::Void BHLAEBMEOLO()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + HFHCEELDBNP_BHLAEBMEOLO_OFFSET))(this);
	}

	::System::Void Finalize()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + HFHCEELDBNP_FINALIZE_OFFSET))(this);
	}

	::System::Void CHLEALKAOJO()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + HFHCEELDBNP_CHLEALKAOJO_OFFSET))(this);
	}

	::System::Void KMIMGEDAMCE(::Il2CppArray<::System::Byte>* LJBPECKCCEA)
	{
		return ((::System::Void(*)(::PVOID, ::Il2CppArray<::System::Byte>*))((::PBYTE)hIl2Cpp + HFHCEELDBNP_KMIMGEDAMCE_OFFSET))(this, LJBPECKCCEA);
	}
};
