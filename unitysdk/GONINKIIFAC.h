#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/GCIIPPOALCO.h"
#include "unitysdk/KECPLIFGOCJ.h"
#include "unitysdk/System/Object.h"

class EKGAMOKNJGP;
namespace System { class Action; }
namespace System::Collections::Generic { template <typename T1, typename T2> class Dictionary_2; }
namespace System::Collections::Generic { template <typename T> class IReadOnlyList_1; }

#define GONINKIIFAC_BHLAEBMEOLO_OFFSET UNITYSDK_OFFSET(0x1A4E1790)
#define GONINKIIFAC_BMNMLAIJJGF_OFFSET UNITYSDK_OFFSET(0x1A4E1560)
#define GONINKIIFAC_CHLEALKAOJO_OFFSET UNITYSDK_OFFSET(0x1A4E16D0)
#define GONINKIIFAC_EJABHIAHIAN_OFFSET UNITYSDK_OFFSET(0x1A4E1B80)
#define GONINKIIFAC_FINALIZE_OFFSET UNITYSDK_OFFSET(0x1A4E1870)
#define GONINKIIFAC_FPMKEGMLNHG_OFFSET UNITYSDK_OFFSET(0x1A4E1570)
#define GONINKIIFAC_HFPLKMOOLLL_OFFSET UNITYSDK_OFFSET(0x1A4E1C70)
#define GONINKIIFAC_KMIMGEDAMCE_OFFSET UNITYSDK_OFFSET(0x1A4E19B0)
#define GONINKIIFAC_LNFENFDLMIG_OFFSET UNITYSDK_OFFSET(0x1A4E11C0)
#define GONINKIIFAC_NAMKJOJBAOA_OFFSET UNITYSDK_OFFSET(0x1A4E1C50)
#define GONINKIIFAC_OFHECOHPAKG_OFFSET UNITYSDK_OFFSET(0x1A4E11A0)
#define GONINKIIFAC_PHOADBJGFBE_OFFSET UNITYSDK_OFFSET(0x1A4E1480)
#define GONINKIIFAC__CTOR_OFFSET UNITYSDK_OFFSET(0x1A4E19A0)

inline static constexpr unsigned int GONINKIIFAC_TypeDefinitionIndex = 12857;

class GONINKIIFAC : public ::System::Object
{
public:
	::GCIIPPOALCO DHDJDGFNBOA; // 0x10
	::Il2CppArray<::EKGAMOKNJGP*>* OJMBOGGMIKO; // 0x28
	::System::Collections::Generic::Dictionary_2<::System::Int32, ::System::Int32>* FLBOKGKPECD; // 0x30
	::System::Action* PLDOELOOFLL; // 0x38
	::System::Int32 IJDGGCANOFI; // 0x40
	::System::Boolean DLGKLGKOMHK; // 0x44

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + GONINKIIFAC__CTOR_OFFSET))(this);
	}

	::System::Boolean OFHECOHPAKG()
	{
		return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + GONINKIIFAC_OFHECOHPAKG_OFFSET))(this);
	}

	::System::Void LNFENFDLMIG()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + GONINKIIFAC_LNFENFDLMIG_OFFSET))(this);
	}

	::System::Void FPMKEGMLNHG(::System::Action* EJGDHCIBCJH)
	{
		return ((::System::Void(*)(::PVOID, ::System::Action*))((::PBYTE)hIl2Cpp + GONINKIIFAC_FPMKEGMLNHG_OFFSET))(this, EJGDHCIBCJH);
	}

	::System::Void BMNMLAIJJGF(::KECPLIFGOCJ GFCJHNHLFEF)
	{
		return ((::System::Void(*)(::PVOID, ::KECPLIFGOCJ))((::PBYTE)hIl2Cpp + GONINKIIFAC_BMNMLAIJJGF_OFFSET))(this, GFCJHNHLFEF);
	}

	::System::Void PHOADBJGFBE()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + GONINKIIFAC_PHOADBJGFBE_OFFSET))(this);
	}

	::System::Void BHLAEBMEOLO()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + GONINKIIFAC_BHLAEBMEOLO_OFFSET))(this);
	}

	::System::Void Finalize()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + GONINKIIFAC_FINALIZE_OFFSET))(this);
	}

	::System::Void CHLEALKAOJO()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + GONINKIIFAC_CHLEALKAOJO_OFFSET))(this);
	}

	::System::Void KMIMGEDAMCE(::Il2CppArray<::System::Byte>* LJBPECKCCEA)
	{
		return ((::System::Void(*)(::PVOID, ::Il2CppArray<::System::Byte>*))((::PBYTE)hIl2Cpp + GONINKIIFAC_KMIMGEDAMCE_OFFSET))(this, LJBPECKCCEA);
	}

	::System::Collections::Generic::IReadOnlyList_1<::EKGAMOKNJGP*>* EJABHIAHIAN()
	{
		return ((::System::Collections::Generic::IReadOnlyList_1<::EKGAMOKNJGP*>*(*)(::PVOID))((::PBYTE)hIl2Cpp + GONINKIIFAC_EJABHIAHIAN_OFFSET))(this);
	}

	::EKGAMOKNJGP* HFPLKMOOLLL(::System::Int32 ABHBKFJKINO)
	{
		return ((::EKGAMOKNJGP*(*)(::PVOID, ::System::Int32))((::PBYTE)hIl2Cpp + GONINKIIFAC_HFPLKMOOLLL_OFFSET))(this, ABHBKFJKINO);
	}

	::System::Void NAMKJOJBAOA()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + GONINKIIFAC_NAMKJOJBAOA_OFFSET))(this);
	}
};
