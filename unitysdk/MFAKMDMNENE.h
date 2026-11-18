#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/KECPLIFGOCJ.h"
#include "unitysdk/MFLKHLIIIOG.h"
#include "unitysdk/System/Object.h"

class BICOKLGGOBC;
namespace System { class Action; }
namespace System::Collections::Generic { template <typename T1, typename T2> class Dictionary_2; }
namespace System::Collections::Generic { template <typename T> class HashSet_1; }

#define MFAKMDMNENE_BHLAEBMEOLO_OFFSET UNITYSDK_OFFSET(0x1C1781D0)
#define MFAKMDMNENE_BMNMLAIJJGF_OFFSET UNITYSDK_OFFSET(0x1C177F90)
#define MFAKMDMNENE_CHLEALKAOJO_OFFSET UNITYSDK_OFFSET(0x1C178110)
#define MFAKMDMNENE_FINALIZE_OFFSET UNITYSDK_OFFSET(0x1C1782B0)
#define MFAKMDMNENE_FPMKEGMLNHG_OFFSET UNITYSDK_OFFSET(0x1C177FA0)
#define MFAKMDMNENE_KMIMGEDAMCE_OFFSET UNITYSDK_OFFSET(0x1C178430)
#define MFAKMDMNENE_LNFENFDLMIG_OFFSET UNITYSDK_OFFSET(0x1C177BE0)
#define MFAKMDMNENE_OFHECOHPAKG_OFFSET UNITYSDK_OFFSET(0x1C177BC0)
#define MFAKMDMNENE_PHOADBJGFBE_OFFSET UNITYSDK_OFFSET(0x1C177EA0)
#define MFAKMDMNENE__CTOR_OFFSET UNITYSDK_OFFSET(0x1C1783E0)

inline static constexpr unsigned int MFAKMDMNENE_TypeDefinitionIndex = 14530;

class MFAKMDMNENE : public ::System::Object
{
public:
	::Il2CppArray<::BICOKLGGOBC*>* OJMBOGGMIKO; // 0x10
	::System::Collections::Generic::HashSet_1<::System::Int32>* LHINHLCKHNE; // 0x18
	::MFLKHLIIIOG DHDJDGFNBOA; // 0x20
	::System::Action* PLDOELOOFLL; // 0x38
	::System::Collections::Generic::Dictionary_2<::System::Int32, ::System::Int32>* FLBOKGKPECD; // 0x40
	::System::Int32 IJDGGCANOFI; // 0x48
	::System::Boolean DLGKLGKOMHK; // 0x4C

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MFAKMDMNENE__CTOR_OFFSET))(this);
	}

	::System::Boolean OFHECOHPAKG()
	{
		return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + MFAKMDMNENE_OFHECOHPAKG_OFFSET))(this);
	}

	::System::Void LNFENFDLMIG()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MFAKMDMNENE_LNFENFDLMIG_OFFSET))(this);
	}

	::System::Void FPMKEGMLNHG(::System::Action* EJGDHCIBCJH)
	{
		return ((::System::Void(*)(::PVOID, ::System::Action*))((::PBYTE)hIl2Cpp + MFAKMDMNENE_FPMKEGMLNHG_OFFSET))(this, EJGDHCIBCJH);
	}

	::System::Void BMNMLAIJJGF(::KECPLIFGOCJ GFCJHNHLFEF)
	{
		return ((::System::Void(*)(::PVOID, ::KECPLIFGOCJ))((::PBYTE)hIl2Cpp + MFAKMDMNENE_BMNMLAIJJGF_OFFSET))(this, GFCJHNHLFEF);
	}

	::System::Void PHOADBJGFBE()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MFAKMDMNENE_PHOADBJGFBE_OFFSET))(this);
	}

	::System::Void BHLAEBMEOLO()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MFAKMDMNENE_BHLAEBMEOLO_OFFSET))(this);
	}

	::System::Void Finalize()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MFAKMDMNENE_FINALIZE_OFFSET))(this);
	}

	::System::Void KMIMGEDAMCE(::Il2CppArray<::System::Byte>* LJBPECKCCEA)
	{
		return ((::System::Void(*)(::PVOID, ::Il2CppArray<::System::Byte>*))((::PBYTE)hIl2Cpp + MFAKMDMNENE_KMIMGEDAMCE_OFFSET))(this, LJBPECKCCEA);
	}

	::System::Void CHLEALKAOJO()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MFAKMDMNENE_CHLEALKAOJO_OFFSET))(this);
	}
};
