#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/FFKPPNGOCOJ.h"
#include "unitysdk/KECPLIFGOCJ.h"
#include "unitysdk/System/Object.h"

class OKMKMKDHONP;
namespace System { class Action; }
namespace System::Collections::Generic { template <typename T1, typename T2> class Dictionary_2; }
namespace System::Collections::Generic { template <typename T> class IReadOnlyList_1; }

#define JMGMFCNPACI_BHLAEBMEOLO_OFFSET UNITYSDK_OFFSET(0x152F9820)
#define JMGMFCNPACI_BMNMLAIJJGF_OFFSET UNITYSDK_OFFSET(0x152F95F0)
#define JMGMFCNPACI_CHLEALKAOJO_OFFSET UNITYSDK_OFFSET(0x152F9760)
#define JMGMFCNPACI_EJABHIAHIAN_OFFSET UNITYSDK_OFFSET(0x152F9C30)
#define JMGMFCNPACI_FINALIZE_OFFSET UNITYSDK_OFFSET(0x152F9900)
#define JMGMFCNPACI_FPMKEGMLNHG_OFFSET UNITYSDK_OFFSET(0x152F9600)
#define JMGMFCNPACI_HFPLKMOOLLL_OFFSET UNITYSDK_OFFSET(0x152F9D00)
#define JMGMFCNPACI_KMIMGEDAMCE_OFFSET UNITYSDK_OFFSET(0x152F9A60)
#define JMGMFCNPACI_LNFENFDLMIG_OFFSET UNITYSDK_OFFSET(0x152F9250)
#define JMGMFCNPACI_NAMKJOJBAOA_OFFSET UNITYSDK_OFFSET(0x152F9A40)
#define JMGMFCNPACI_OFHECOHPAKG_OFFSET UNITYSDK_OFFSET(0x152F9230)
#define JMGMFCNPACI_PHOADBJGFBE_OFFSET UNITYSDK_OFFSET(0x152F9510)
#define JMGMFCNPACI__CTOR_OFFSET UNITYSDK_OFFSET(0x152F9A30)

inline static constexpr unsigned int JMGMFCNPACI_TypeDefinitionIndex = 11613;

class JMGMFCNPACI : public ::System::Object
{
public:
	::System::Action* PLDOELOOFLL; // 0x10
	::FFKPPNGOCOJ DHDJDGFNBOA; // 0x18
	::System::Collections::Generic::Dictionary_2<::System::Int32, ::System::Int32>* FLBOKGKPECD; // 0x30
	::Il2CppArray<::OKMKMKDHONP*>* OJMBOGGMIKO; // 0x38
	::System::Boolean DLGKLGKOMHK; // 0x40
	::System::Byte _padding0[0x3];
	::System::Int32 IJDGGCANOFI; // 0x44

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + JMGMFCNPACI__CTOR_OFFSET))(this);
	}

	::System::Boolean OFHECOHPAKG()
	{
		return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + JMGMFCNPACI_OFHECOHPAKG_OFFSET))(this);
	}

	::System::Void LNFENFDLMIG()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + JMGMFCNPACI_LNFENFDLMIG_OFFSET))(this);
	}

	::System::Void FPMKEGMLNHG(::System::Action* EJGDHCIBCJH)
	{
		return ((::System::Void(*)(::PVOID, ::System::Action*))((::PBYTE)hIl2Cpp + JMGMFCNPACI_FPMKEGMLNHG_OFFSET))(this, EJGDHCIBCJH);
	}

	::System::Void BMNMLAIJJGF(::KECPLIFGOCJ GFCJHNHLFEF)
	{
		return ((::System::Void(*)(::PVOID, ::KECPLIFGOCJ))((::PBYTE)hIl2Cpp + JMGMFCNPACI_BMNMLAIJJGF_OFFSET))(this, GFCJHNHLFEF);
	}

	::System::Void PHOADBJGFBE()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + JMGMFCNPACI_PHOADBJGFBE_OFFSET))(this);
	}

	::System::Void BHLAEBMEOLO()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + JMGMFCNPACI_BHLAEBMEOLO_OFFSET))(this);
	}

	::System::Void Finalize()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + JMGMFCNPACI_FINALIZE_OFFSET))(this);
	}

	::System::Void NAMKJOJBAOA()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + JMGMFCNPACI_NAMKJOJBAOA_OFFSET))(this);
	}

	::System::Void KMIMGEDAMCE(::Il2CppArray<::System::Byte>* LJBPECKCCEA)
	{
		return ((::System::Void(*)(::PVOID, ::Il2CppArray<::System::Byte>*))((::PBYTE)hIl2Cpp + JMGMFCNPACI_KMIMGEDAMCE_OFFSET))(this, LJBPECKCCEA);
	}

	::System::Collections::Generic::IReadOnlyList_1<::OKMKMKDHONP*>* EJABHIAHIAN()
	{
		return ((::System::Collections::Generic::IReadOnlyList_1<::OKMKMKDHONP*>*(*)(::PVOID))((::PBYTE)hIl2Cpp + JMGMFCNPACI_EJABHIAHIAN_OFFSET))(this);
	}

	::System::Void CHLEALKAOJO()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + JMGMFCNPACI_CHLEALKAOJO_OFFSET))(this);
	}

	::OKMKMKDHONP* HFPLKMOOLLL(::System::Int32 ABHBKFJKINO)
	{
		return ((::OKMKMKDHONP*(*)(::PVOID, ::System::Int32))((::PBYTE)hIl2Cpp + JMGMFCNPACI_HFPLKMOOLLL_OFFSET))(this, ABHBKFJKINO);
	}
};
