#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/AGIDIKJOCDN.h"
#include "unitysdk/KECPLIFGOCJ.h"
#include "unitysdk/System/Object.h"

class GHFBAIEIODE;
namespace System { class Action; }
namespace System::Collections::Generic { template <typename T1, typename T2> class Dictionary_2; }
namespace System::Collections::Generic { template <typename T> class HashSet_1; }

#define PNKIFLHLINE_BHLAEBMEOLO_OFFSET UNITYSDK_OFFSET(0x17FF1B80)
#define PNKIFLHLINE_BMNMLAIJJGF_OFFSET UNITYSDK_OFFSET(0x17FF1900)
#define PNKIFLHLINE_CHLEALKAOJO_OFFSET UNITYSDK_OFFSET(0x17FF1910)
#define PNKIFLHLINE_FINALIZE_OFFSET UNITYSDK_OFFSET(0x17FF19D0)
#define PNKIFLHLINE_FPMKEGMLNHG_OFFSET UNITYSDK_OFFSET(0x17FF1B00)
#define PNKIFLHLINE_KIPLFEENCNN_OFFSET UNITYSDK_OFFSET(0x17FF1CB0)
#define PNKIFLHLINE_KMIMGEDAMCE_OFFSET UNITYSDK_OFFSET(0x17FF1EA0)
#define PNKIFLHLINE_LNFENFDLMIG_OFFSET UNITYSDK_OFFSET(0x17FF1560)
#define PNKIFLHLINE_OFHECOHPAKG_OFFSET UNITYSDK_OFFSET(0x17FF1540)
#define PNKIFLHLINE_PHOADBJGFBE_OFFSET UNITYSDK_OFFSET(0x17FF1820)
#define PNKIFLHLINE__CTOR_OFFSET UNITYSDK_OFFSET(0x17FF1C60)

inline static constexpr unsigned int PNKIFLHLINE_TypeDefinitionIndex = 12898;

class PNKIFLHLINE : public ::System::Object
{
public:
	::System::Action* PLDOELOOFLL; // 0x10
	::System::Collections::Generic::HashSet_1<::System::Int32>* LHINHLCKHNE; // 0x18
	::AGIDIKJOCDN DHDJDGFNBOA; // 0x20
	::Il2CppArray<::GHFBAIEIODE*>* OJMBOGGMIKO; // 0x38
	::System::Collections::Generic::Dictionary_2<::System::Int32, ::System::Int32>* FLBOKGKPECD; // 0x40
	::System::Int32 IJDGGCANOFI; // 0x48
	::System::Boolean DLGKLGKOMHK; // 0x4C

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + PNKIFLHLINE__CTOR_OFFSET))(this);
	}

	::System::Boolean OFHECOHPAKG()
	{
		return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + PNKIFLHLINE_OFHECOHPAKG_OFFSET))(this);
	}

	::System::Void LNFENFDLMIG()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + PNKIFLHLINE_LNFENFDLMIG_OFFSET))(this);
	}

	::System::Void PHOADBJGFBE()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + PNKIFLHLINE_PHOADBJGFBE_OFFSET))(this);
	}

	::System::Void Finalize()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + PNKIFLHLINE_FINALIZE_OFFSET))(this);
	}

	::System::Void FPMKEGMLNHG(::System::Action* EJGDHCIBCJH)
	{
		return ((::System::Void(*)(::PVOID, ::System::Action*))((::PBYTE)hIl2Cpp + PNKIFLHLINE_FPMKEGMLNHG_OFFSET))(this, EJGDHCIBCJH);
	}

	::System::Void BMNMLAIJJGF(::KECPLIFGOCJ GFCJHNHLFEF)
	{
		return ((::System::Void(*)(::PVOID, ::KECPLIFGOCJ))((::PBYTE)hIl2Cpp + PNKIFLHLINE_BMNMLAIJJGF_OFFSET))(this, GFCJHNHLFEF);
	}

	::System::Void BHLAEBMEOLO()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + PNKIFLHLINE_BHLAEBMEOLO_OFFSET))(this);
	}

	::GHFBAIEIODE* KIPLFEENCNN(::System::Int32 MGMDLMBEDJF)
	{
		return ((::GHFBAIEIODE*(*)(::PVOID, ::System::Int32))((::PBYTE)hIl2Cpp + PNKIFLHLINE_KIPLFEENCNN_OFFSET))(this, MGMDLMBEDJF);
	}

	::System::Void CHLEALKAOJO()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + PNKIFLHLINE_CHLEALKAOJO_OFFSET))(this);
	}

	::System::Void KMIMGEDAMCE(::Il2CppArray<::System::Byte>* LJBPECKCCEA)
	{
		return ((::System::Void(*)(::PVOID, ::Il2CppArray<::System::Byte>*))((::PBYTE)hIl2Cpp + PNKIFLHLINE_KMIMGEDAMCE_OFFSET))(this, LJBPECKCCEA);
	}
};
