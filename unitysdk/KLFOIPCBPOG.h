#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/KECPLIFGOCJ.h"
#include "unitysdk/LHNHFINPCOM.h"
#include "unitysdk/System/Object.h"

class HKKHOHPMEBP;
namespace System { class Action; }
namespace System::Collections::Generic { template <typename T1, typename T2> class Dictionary_2; }
namespace System::Collections::Generic { template <typename T> class HashSet_1; }

#define KLFOIPCBPOG_BHLAEBMEOLO_OFFSET UNITYSDK_OFFSET(0x1BB05680)
#define KLFOIPCBPOG_BMNMLAIJJGF_OFFSET UNITYSDK_OFFSET(0x1BB05440)
#define KLFOIPCBPOG_CHLEALKAOJO_OFFSET UNITYSDK_OFFSET(0x1BB055C0)
#define KLFOIPCBPOG_FINALIZE_OFFSET UNITYSDK_OFFSET(0x1BB05760)
#define KLFOIPCBPOG_FPMKEGMLNHG_OFFSET UNITYSDK_OFFSET(0x1BB05450)
#define KLFOIPCBPOG_KMIMGEDAMCE_OFFSET UNITYSDK_OFFSET(0x1BB058E0)
#define KLFOIPCBPOG_LNFENFDLMIG_OFFSET UNITYSDK_OFFSET(0x1BB05090)
#define KLFOIPCBPOG_OFHECOHPAKG_OFFSET UNITYSDK_OFFSET(0x1BB05070)
#define KLFOIPCBPOG_PHOADBJGFBE_OFFSET UNITYSDK_OFFSET(0x1BB05350)
#define KLFOIPCBPOG__CTOR_OFFSET UNITYSDK_OFFSET(0x1BB05890)

inline static constexpr unsigned int KLFOIPCBPOG_TypeDefinitionIndex = 13858;

class KLFOIPCBPOG : public ::System::Object
{
public:
	::Il2CppArray<::HKKHOHPMEBP*>* OJMBOGGMIKO; // 0x10
	::System::Collections::Generic::HashSet_1<::System::Int32>* LHINHLCKHNE; // 0x18
	::LHNHFINPCOM DHDJDGFNBOA; // 0x20
	::System::Collections::Generic::Dictionary_2<::System::Int32, ::System::Int32>* FLBOKGKPECD; // 0x38
	::System::Action* PLDOELOOFLL; // 0x40
	::System::Int32 IJDGGCANOFI; // 0x48
	::System::Boolean DLGKLGKOMHK; // 0x4C

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + KLFOIPCBPOG__CTOR_OFFSET))(this);
	}

	::System::Boolean OFHECOHPAKG()
	{
		return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + KLFOIPCBPOG_OFHECOHPAKG_OFFSET))(this);
	}

	::System::Void LNFENFDLMIG()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + KLFOIPCBPOG_LNFENFDLMIG_OFFSET))(this);
	}

	::System::Void FPMKEGMLNHG(::System::Action* EJGDHCIBCJH)
	{
		return ((::System::Void(*)(::PVOID, ::System::Action*))((::PBYTE)hIl2Cpp + KLFOIPCBPOG_FPMKEGMLNHG_OFFSET))(this, EJGDHCIBCJH);
	}

	::System::Void BMNMLAIJJGF(::KECPLIFGOCJ GFCJHNHLFEF)
	{
		return ((::System::Void(*)(::PVOID, ::KECPLIFGOCJ))((::PBYTE)hIl2Cpp + KLFOIPCBPOG_BMNMLAIJJGF_OFFSET))(this, GFCJHNHLFEF);
	}

	::System::Void PHOADBJGFBE()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + KLFOIPCBPOG_PHOADBJGFBE_OFFSET))(this);
	}

	::System::Void BHLAEBMEOLO()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + KLFOIPCBPOG_BHLAEBMEOLO_OFFSET))(this);
	}

	::System::Void Finalize()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + KLFOIPCBPOG_FINALIZE_OFFSET))(this);
	}

	::System::Void CHLEALKAOJO()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + KLFOIPCBPOG_CHLEALKAOJO_OFFSET))(this);
	}

	::System::Void KMIMGEDAMCE(::Il2CppArray<::System::Byte>* LJBPECKCCEA)
	{
		return ((::System::Void(*)(::PVOID, ::Il2CppArray<::System::Byte>*))((::PBYTE)hIl2Cpp + KLFOIPCBPOG_KMIMGEDAMCE_OFFSET))(this, LJBPECKCCEA);
	}
};
