#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/BAEAGCCFMDM.h"
#include "unitysdk/KECPLIFGOCJ.h"
#include "unitysdk/System/Object.h"

class HCOGBAPINAE;
namespace System { class Action; }
namespace System::Collections::Generic { template <typename T1, typename T2> class Dictionary_2; }
namespace System::Collections::Generic { template <typename T> class HashSet_1; }

#define FECMEDLOAKG_BHLAEBMEOLO_OFFSET UNITYSDK_OFFSET(0x16635730)
#define FECMEDLOAKG_BMNMLAIJJGF_OFFSET UNITYSDK_OFFSET(0x166354D0)
#define FECMEDLOAKG_CHLEALKAOJO_OFFSET UNITYSDK_OFFSET(0x16635670)
#define FECMEDLOAKG_FINALIZE_OFFSET UNITYSDK_OFFSET(0x16635810)
#define FECMEDLOAKG_FPMKEGMLNHG_OFFSET UNITYSDK_OFFSET(0x166354E0)
#define FECMEDLOAKG_LNFENFDLMIG_OFFSET UNITYSDK_OFFSET(0x16635130)
#define FECMEDLOAKG_OFHECOHPAKG_OFFSET UNITYSDK_OFFSET(0x16635110)
#define FECMEDLOAKG_PHOADBJGFBE_OFFSET UNITYSDK_OFFSET(0x166353F0)
#define FECMEDLOAKG__CTOR_OFFSET UNITYSDK_OFFSET(0x16635940)

inline static constexpr unsigned int FECMEDLOAKG_TypeDefinitionIndex = 16645;

class FECMEDLOAKG : public ::System::Object
{
public:
	::BAEAGCCFMDM DHDJDGFNBOA; // 0x10
	::System::Collections::Generic::HashSet_1<::System::Int32>* LHINHLCKHNE; // 0x28
	::System::Collections::Generic::Dictionary_2<::System::Int32, ::System::Int32>* FLBOKGKPECD; // 0x30
	::Il2CppArray<::HCOGBAPINAE*>* OJMBOGGMIKO; // 0x38
	::System::Int32 IJDGGCANOFI; // 0x40
	::System::Boolean DLGKLGKOMHK; // 0x44

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + FECMEDLOAKG__CTOR_OFFSET))(this);
	}

	::System::Boolean OFHECOHPAKG()
	{
		return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + FECMEDLOAKG_OFHECOHPAKG_OFFSET))(this);
	}

	::System::Void LNFENFDLMIG()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + FECMEDLOAKG_LNFENFDLMIG_OFFSET))(this);
	}

	::System::Void FPMKEGMLNHG(::System::Action* EJGDHCIBCJH)
	{
		return ((::System::Void(*)(::PVOID, ::System::Action*))((::PBYTE)hIl2Cpp + FECMEDLOAKG_FPMKEGMLNHG_OFFSET))(this, EJGDHCIBCJH);
	}

	::System::Void BMNMLAIJJGF(::KECPLIFGOCJ GFCJHNHLFEF)
	{
		return ((::System::Void(*)(::PVOID, ::KECPLIFGOCJ))((::PBYTE)hIl2Cpp + FECMEDLOAKG_BMNMLAIJJGF_OFFSET))(this, GFCJHNHLFEF);
	}

	::System::Void PHOADBJGFBE()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + FECMEDLOAKG_PHOADBJGFBE_OFFSET))(this);
	}

	::System::Void BHLAEBMEOLO()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + FECMEDLOAKG_BHLAEBMEOLO_OFFSET))(this);
	}

	::System::Void Finalize()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + FECMEDLOAKG_FINALIZE_OFFSET))(this);
	}

	::System::Void CHLEALKAOJO()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + FECMEDLOAKG_CHLEALKAOJO_OFFSET))(this);
	}
};
