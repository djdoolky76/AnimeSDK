#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/GHEIBCAEJPP.h"
#include "unitysdk/KECPLIFGOCJ.h"
#include "unitysdk/System/Object.h"

class GIEEOAGEDLG;
namespace System { class Action; }
namespace System::Collections::Generic { template <typename T1, typename T2> class Dictionary_2; }
namespace System::Collections::Generic { template <typename T> class HashSet_1; }

#define IPEDGKCJLNA_BHLAEBMEOLO_OFFSET UNITYSDK_OFFSET(0x1A5E7390)
#define IPEDGKCJLNA_BMNMLAIJJGF_OFFSET UNITYSDK_OFFSET(0x1A5E7160)
#define IPEDGKCJLNA_CHLEALKAOJO_OFFSET UNITYSDK_OFFSET(0x1A5E72D0)
#define IPEDGKCJLNA_FINALIZE_OFFSET UNITYSDK_OFFSET(0x1A5E7470)
#define IPEDGKCJLNA_FPMKEGMLNHG_OFFSET UNITYSDK_OFFSET(0x1A5E7170)
#define IPEDGKCJLNA_KMIMGEDAMCE_OFFSET UNITYSDK_OFFSET(0x1A5E75F0)
#define IPEDGKCJLNA_LNFENFDLMIG_OFFSET UNITYSDK_OFFSET(0x1A5E6DC0)
#define IPEDGKCJLNA_OFHECOHPAKG_OFFSET UNITYSDK_OFFSET(0x1A5E6DA0)
#define IPEDGKCJLNA_PHOADBJGFBE_OFFSET UNITYSDK_OFFSET(0x1A5E7080)
#define IPEDGKCJLNA__CTOR_OFFSET UNITYSDK_OFFSET(0x1A5E75A0)

inline static constexpr unsigned int IPEDGKCJLNA_TypeDefinitionIndex = 17475;

class IPEDGKCJLNA : public ::System::Object
{
public:
	::System::Collections::Generic::Dictionary_2<::System::Int32, ::System::Int32>* FLBOKGKPECD; // 0x10
	::Il2CppArray<::GIEEOAGEDLG*>* OJMBOGGMIKO; // 0x18
	::GHEIBCAEJPP DHDJDGFNBOA; // 0x20
	::System::Collections::Generic::HashSet_1<::System::Int32>* LHINHLCKHNE; // 0x38
	::System::Action* PLDOELOOFLL; // 0x40
	::System::Int32 IJDGGCANOFI; // 0x48
	::System::Boolean DLGKLGKOMHK; // 0x4C

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + IPEDGKCJLNA__CTOR_OFFSET))(this);
	}

	::System::Boolean OFHECOHPAKG()
	{
		return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + IPEDGKCJLNA_OFHECOHPAKG_OFFSET))(this);
	}

	::System::Void LNFENFDLMIG()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + IPEDGKCJLNA_LNFENFDLMIG_OFFSET))(this);
	}

	::System::Void FPMKEGMLNHG(::System::Action* EJGDHCIBCJH)
	{
		return ((::System::Void(*)(::PVOID, ::System::Action*))((::PBYTE)hIl2Cpp + IPEDGKCJLNA_FPMKEGMLNHG_OFFSET))(this, EJGDHCIBCJH);
	}

	::System::Void BMNMLAIJJGF(::KECPLIFGOCJ GFCJHNHLFEF)
	{
		return ((::System::Void(*)(::PVOID, ::KECPLIFGOCJ))((::PBYTE)hIl2Cpp + IPEDGKCJLNA_BMNMLAIJJGF_OFFSET))(this, GFCJHNHLFEF);
	}

	::System::Void PHOADBJGFBE()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + IPEDGKCJLNA_PHOADBJGFBE_OFFSET))(this);
	}

	::System::Void BHLAEBMEOLO()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + IPEDGKCJLNA_BHLAEBMEOLO_OFFSET))(this);
	}

	::System::Void Finalize()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + IPEDGKCJLNA_FINALIZE_OFFSET))(this);
	}

	::System::Void CHLEALKAOJO()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + IPEDGKCJLNA_CHLEALKAOJO_OFFSET))(this);
	}

	::System::Void KMIMGEDAMCE(::Il2CppArray<::System::Byte>* LJBPECKCCEA)
	{
		return ((::System::Void(*)(::PVOID, ::Il2CppArray<::System::Byte>*))((::PBYTE)hIl2Cpp + IPEDGKCJLNA_KMIMGEDAMCE_OFFSET))(this, LJBPECKCCEA);
	}
};
