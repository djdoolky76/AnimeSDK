#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/IIMNCNOFKKD.h"
#include "unitysdk/KECPLIFGOCJ.h"
#include "unitysdk/System/Object.h"

class BAMKHGEAHIL;
namespace System { class Action; }
namespace System::Collections::Generic { template <typename T1, typename T2> class Dictionary_2; }
namespace System::Collections::Generic { template <typename T> class HashSet_1; }
namespace System::Collections::Generic { template <typename T> class IReadOnlyList_1; }

#define APLFFPKNKBF_BHLAEBMEOLO_OFFSET UNITYSDK_OFFSET(0x15778030)
#define APLFFPKNKBF_BMNMLAIJJGF_OFFSET UNITYSDK_OFFSET(0x15777DF0)
#define APLFFPKNKBF_CHLEALKAOJO_OFFSET UNITYSDK_OFFSET(0x15777F70)
#define APLFFPKNKBF_EJABHIAHIAN_OFFSET UNITYSDK_OFFSET(0x15778490)
#define APLFFPKNKBF_FINALIZE_OFFSET UNITYSDK_OFFSET(0x15778110)
#define APLFFPKNKBF_FPMKEGMLNHG_OFFSET UNITYSDK_OFFSET(0x15777E00)
#define APLFFPKNKBF_HFPLKMOOLLL_OFFSET UNITYSDK_OFFSET(0x15778290)
#define APLFFPKNKBF_KMIMGEDAMCE_OFFSET UNITYSDK_OFFSET(0x15778560)
#define APLFFPKNKBF_LNFENFDLMIG_OFFSET UNITYSDK_OFFSET(0x15777A40)
#define APLFFPKNKBF_NAMKJOJBAOA_OFFSET UNITYSDK_OFFSET(0x15778470)
#define APLFFPKNKBF_OFHECOHPAKG_OFFSET UNITYSDK_OFFSET(0x15777A20)
#define APLFFPKNKBF_PHOADBJGFBE_OFFSET UNITYSDK_OFFSET(0x15777D00)
#define APLFFPKNKBF__CTOR_OFFSET UNITYSDK_OFFSET(0x15778240)

inline static constexpr unsigned int APLFFPKNKBF_TypeDefinitionIndex = 10881;

class APLFFPKNKBF : public ::System::Object
{
public:
	::System::Collections::Generic::HashSet_1<::System::Int32>* LHINHLCKHNE; // 0x10
	::IIMNCNOFKKD DHDJDGFNBOA; // 0x18
	::Il2CppArray<::BAMKHGEAHIL*>* OJMBOGGMIKO; // 0x30
	::System::Action* PLDOELOOFLL; // 0x38
	::System::Collections::Generic::Dictionary_2<::System::Int32, ::System::Int32>* FLBOKGKPECD; // 0x40
	::System::Int32 IJDGGCANOFI; // 0x48
	::System::Boolean DLGKLGKOMHK; // 0x4C

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + APLFFPKNKBF__CTOR_OFFSET))(this);
	}

	::System::Boolean OFHECOHPAKG()
	{
		return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + APLFFPKNKBF_OFHECOHPAKG_OFFSET))(this);
	}

	::System::Void LNFENFDLMIG()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + APLFFPKNKBF_LNFENFDLMIG_OFFSET))(this);
	}

	::System::Void FPMKEGMLNHG(::System::Action* EJGDHCIBCJH)
	{
		return ((::System::Void(*)(::PVOID, ::System::Action*))((::PBYTE)hIl2Cpp + APLFFPKNKBF_FPMKEGMLNHG_OFFSET))(this, EJGDHCIBCJH);
	}

	::System::Void BMNMLAIJJGF(::KECPLIFGOCJ GFCJHNHLFEF)
	{
		return ((::System::Void(*)(::PVOID, ::KECPLIFGOCJ))((::PBYTE)hIl2Cpp + APLFFPKNKBF_BMNMLAIJJGF_OFFSET))(this, GFCJHNHLFEF);
	}

	::System::Void PHOADBJGFBE()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + APLFFPKNKBF_PHOADBJGFBE_OFFSET))(this);
	}

	::System::Void BHLAEBMEOLO()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + APLFFPKNKBF_BHLAEBMEOLO_OFFSET))(this);
	}

	::System::Void Finalize()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + APLFFPKNKBF_FINALIZE_OFFSET))(this);
	}

	::BAMKHGEAHIL* HFPLKMOOLLL(::System::Int32 ABHBKFJKINO)
	{
		return ((::BAMKHGEAHIL*(*)(::PVOID, ::System::Int32))((::PBYTE)hIl2Cpp + APLFFPKNKBF_HFPLKMOOLLL_OFFSET))(this, ABHBKFJKINO);
	}

	::System::Collections::Generic::IReadOnlyList_1<::BAMKHGEAHIL*>* EJABHIAHIAN()
	{
		return ((::System::Collections::Generic::IReadOnlyList_1<::BAMKHGEAHIL*>*(*)(::PVOID))((::PBYTE)hIl2Cpp + APLFFPKNKBF_EJABHIAHIAN_OFFSET))(this);
	}

	::System::Void KMIMGEDAMCE(::Il2CppArray<::System::Byte>* LJBPECKCCEA)
	{
		return ((::System::Void(*)(::PVOID, ::Il2CppArray<::System::Byte>*))((::PBYTE)hIl2Cpp + APLFFPKNKBF_KMIMGEDAMCE_OFFSET))(this, LJBPECKCCEA);
	}

	::System::Void NAMKJOJBAOA()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + APLFFPKNKBF_NAMKJOJBAOA_OFFSET))(this);
	}

	::System::Void CHLEALKAOJO()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + APLFFPKNKBF_CHLEALKAOJO_OFFSET))(this);
	}
};
