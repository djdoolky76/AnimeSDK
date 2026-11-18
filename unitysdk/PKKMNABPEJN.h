#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/KECPLIFGOCJ.h"
#include "unitysdk/OGPJADAKGIP.h"
#include "unitysdk/System/Object.h"

class LOFBJGGBCFG;
namespace System { class Action; }
namespace System::Collections::Generic { template <typename T1, typename T2> class Dictionary_2; }
namespace System::Collections::Generic { template <typename T> class HashSet_1; }

#define PKKMNABPEJN_BHLAEBMEOLO_OFFSET UNITYSDK_OFFSET(0x1D0064F0)
#define PKKMNABPEJN_BMNMLAIJJGF_OFFSET UNITYSDK_OFFSET(0x1D0062B0)
#define PKKMNABPEJN_CHLEALKAOJO_OFFSET UNITYSDK_OFFSET(0x1D006430)
#define PKKMNABPEJN_FINALIZE_OFFSET UNITYSDK_OFFSET(0x1D0065D0)
#define PKKMNABPEJN_FPMKEGMLNHG_OFFSET UNITYSDK_OFFSET(0x1D0062C0)
#define PKKMNABPEJN_IFDPKDOFOJD_OFFSET UNITYSDK_OFFSET(0x1D006940)
#define PKKMNABPEJN_KMIMGEDAMCE_OFFSET UNITYSDK_OFFSET(0x1D006770)
#define PKKMNABPEJN_LNFENFDLMIG_OFFSET UNITYSDK_OFFSET(0x1D005F00)
#define PKKMNABPEJN_NAMKJOJBAOA_OFFSET UNITYSDK_OFFSET(0x1D006750)
#define PKKMNABPEJN_OFHECOHPAKG_OFFSET UNITYSDK_OFFSET(0x1D005EE0)
#define PKKMNABPEJN_PHOADBJGFBE_OFFSET UNITYSDK_OFFSET(0x1D0061C0)
#define PKKMNABPEJN__CTOR_OFFSET UNITYSDK_OFFSET(0x1D006700)

inline static constexpr unsigned int PKKMNABPEJN_TypeDefinitionIndex = 13351;

class PKKMNABPEJN : public ::System::Object
{
public:
	::System::Collections::Generic::HashSet_1<::System::Int32>* LHINHLCKHNE; // 0x10
	::OGPJADAKGIP DHDJDGFNBOA; // 0x18
	::Il2CppArray<::LOFBJGGBCFG*>* OJMBOGGMIKO; // 0x30
	::System::Action* PLDOELOOFLL; // 0x38
	::System::Collections::Generic::Dictionary_2<::System::Int32, ::System::Int32>* FLBOKGKPECD; // 0x40
	::System::Boolean DLGKLGKOMHK; // 0x48
	::System::Byte _padding0[0x3];
	::System::Int32 IJDGGCANOFI; // 0x4C

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + PKKMNABPEJN__CTOR_OFFSET))(this);
	}

	::System::Boolean OFHECOHPAKG()
	{
		return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + PKKMNABPEJN_OFHECOHPAKG_OFFSET))(this);
	}

	::System::Void LNFENFDLMIG()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + PKKMNABPEJN_LNFENFDLMIG_OFFSET))(this);
	}

	::System::Void FPMKEGMLNHG(::System::Action* EJGDHCIBCJH)
	{
		return ((::System::Void(*)(::PVOID, ::System::Action*))((::PBYTE)hIl2Cpp + PKKMNABPEJN_FPMKEGMLNHG_OFFSET))(this, EJGDHCIBCJH);
	}

	::System::Void BMNMLAIJJGF(::KECPLIFGOCJ GFCJHNHLFEF)
	{
		return ((::System::Void(*)(::PVOID, ::KECPLIFGOCJ))((::PBYTE)hIl2Cpp + PKKMNABPEJN_BMNMLAIJJGF_OFFSET))(this, GFCJHNHLFEF);
	}

	::System::Void PHOADBJGFBE()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + PKKMNABPEJN_PHOADBJGFBE_OFFSET))(this);
	}

	::System::Void BHLAEBMEOLO()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + PKKMNABPEJN_BHLAEBMEOLO_OFFSET))(this);
	}

	::System::Void Finalize()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + PKKMNABPEJN_FINALIZE_OFFSET))(this);
	}

	::System::Void CHLEALKAOJO()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + PKKMNABPEJN_CHLEALKAOJO_OFFSET))(this);
	}

	::System::Void NAMKJOJBAOA()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + PKKMNABPEJN_NAMKJOJBAOA_OFFSET))(this);
	}

	::System::Void KMIMGEDAMCE(::Il2CppArray<::System::Byte>* LJBPECKCCEA)
	{
		return ((::System::Void(*)(::PVOID, ::Il2CppArray<::System::Byte>*))((::PBYTE)hIl2Cpp + PKKMNABPEJN_KMIMGEDAMCE_OFFSET))(this, LJBPECKCCEA);
	}

	::LOFBJGGBCFG* IFDPKDOFOJD(::System::Int32 MGMDLMBEDJF)
	{
		return ((::LOFBJGGBCFG*(*)(::PVOID, ::System::Int32))((::PBYTE)hIl2Cpp + PKKMNABPEJN_IFDPKDOFOJD_OFFSET))(this, MGMDLMBEDJF);
	}
};
