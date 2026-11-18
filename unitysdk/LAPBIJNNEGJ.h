#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/EIIEHEJJGFG.h"
#include "unitysdk/KECPLIFGOCJ.h"
#include "unitysdk/System/Object.h"

class OMACAFOLEMH;
namespace System { class Action; }
namespace System::Collections::Generic { template <typename T1, typename T2> class Dictionary_2; }
namespace System::Collections::Generic { template <typename T> class HashSet_1; }

#define LAPBIJNNEGJ_BHLAEBMEOLO_OFFSET UNITYSDK_OFFSET(0x195895A0)
#define LAPBIJNNEGJ_BMNMLAIJJGF_OFFSET UNITYSDK_OFFSET(0x19589330)
#define LAPBIJNNEGJ_CHLEALKAOJO_OFFSET UNITYSDK_OFFSET(0x195894E0)
#define LAPBIJNNEGJ_FINALIZE_OFFSET UNITYSDK_OFFSET(0x19589680)
#define LAPBIJNNEGJ_FPMKEGMLNHG_OFFSET UNITYSDK_OFFSET(0x19589340)
#define LAPBIJNNEGJ_LNFENFDLMIG_OFFSET UNITYSDK_OFFSET(0x19588F90)
#define LAPBIJNNEGJ_OFHECOHPAKG_OFFSET UNITYSDK_OFFSET(0x19588F70)
#define LAPBIJNNEGJ_PHOADBJGFBE_OFFSET UNITYSDK_OFFSET(0x19589250)
#define LAPBIJNNEGJ__CTOR_OFFSET UNITYSDK_OFFSET(0x195897B0)

inline static constexpr unsigned int LAPBIJNNEGJ_TypeDefinitionIndex = 10896;

class LAPBIJNNEGJ : public ::System::Object
{
public:
	::System::Collections::Generic::HashSet_1<::System::Int32>* LHINHLCKHNE; // 0x10
	::EIIEHEJJGFG DHDJDGFNBOA; // 0x18
	::Il2CppArray<::OMACAFOLEMH*>* OJMBOGGMIKO; // 0x30
	::System::Collections::Generic::Dictionary_2<::System::Int32, ::System::Int32>* FLBOKGKPECD; // 0x38
	::System::Boolean DLGKLGKOMHK; // 0x40
	::System::Byte _padding0[0x3];
	::System::Int32 IJDGGCANOFI; // 0x44

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + LAPBIJNNEGJ__CTOR_OFFSET))(this);
	}

	::System::Boolean OFHECOHPAKG()
	{
		return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + LAPBIJNNEGJ_OFHECOHPAKG_OFFSET))(this);
	}

	::System::Void LNFENFDLMIG()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + LAPBIJNNEGJ_LNFENFDLMIG_OFFSET))(this);
	}

	::System::Void FPMKEGMLNHG(::System::Action* EJGDHCIBCJH)
	{
		return ((::System::Void(*)(::PVOID, ::System::Action*))((::PBYTE)hIl2Cpp + LAPBIJNNEGJ_FPMKEGMLNHG_OFFSET))(this, EJGDHCIBCJH);
	}

	::System::Void BMNMLAIJJGF(::KECPLIFGOCJ GFCJHNHLFEF)
	{
		return ((::System::Void(*)(::PVOID, ::KECPLIFGOCJ))((::PBYTE)hIl2Cpp + LAPBIJNNEGJ_BMNMLAIJJGF_OFFSET))(this, GFCJHNHLFEF);
	}

	::System::Void PHOADBJGFBE()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + LAPBIJNNEGJ_PHOADBJGFBE_OFFSET))(this);
	}

	::System::Void BHLAEBMEOLO()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + LAPBIJNNEGJ_BHLAEBMEOLO_OFFSET))(this);
	}

	::System::Void Finalize()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + LAPBIJNNEGJ_FINALIZE_OFFSET))(this);
	}

	::System::Void CHLEALKAOJO()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + LAPBIJNNEGJ_CHLEALKAOJO_OFFSET))(this);
	}
};
