#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/IHFMFBLHDPJ.h"
#include "unitysdk/KECPLIFGOCJ.h"
#include "unitysdk/System/Object.h"

class GDOKJCEIEEJ;
namespace System { class Action; }
namespace System::Collections::Generic { template <typename T1, typename T2> class Dictionary_2; }
namespace System::Collections::Generic { template <typename T> class HashSet_1; }

#define NGNNOGEAGPA_BHLAEBMEOLO_OFFSET UNITYSDK_OFFSET(0x1CCEC1C0)
#define NGNNOGEAGPA_BMNMLAIJJGF_OFFSET UNITYSDK_OFFSET(0x1CCEBF80)
#define NGNNOGEAGPA_CHLEALKAOJO_OFFSET UNITYSDK_OFFSET(0x1CCEC100)
#define NGNNOGEAGPA_FINALIZE_OFFSET UNITYSDK_OFFSET(0x1CCEC2A0)
#define NGNNOGEAGPA_FPMKEGMLNHG_OFFSET UNITYSDK_OFFSET(0x1CCEBF90)
#define NGNNOGEAGPA_KMIMGEDAMCE_OFFSET UNITYSDK_OFFSET(0x1CCEC420)
#define NGNNOGEAGPA_LNFENFDLMIG_OFFSET UNITYSDK_OFFSET(0x1CCEBBD0)
#define NGNNOGEAGPA_OFHECOHPAKG_OFFSET UNITYSDK_OFFSET(0x1CCEBBB0)
#define NGNNOGEAGPA_PHOADBJGFBE_OFFSET UNITYSDK_OFFSET(0x1CCEBE90)
#define NGNNOGEAGPA__CTOR_OFFSET UNITYSDK_OFFSET(0x1CCEC3D0)

inline static constexpr unsigned int NGNNOGEAGPA_TypeDefinitionIndex = 15233;

class NGNNOGEAGPA : public ::System::Object
{
public:
	::IHFMFBLHDPJ DHDJDGFNBOA; // 0x10
	::System::Collections::Generic::HashSet_1<::System::Int32>* LHINHLCKHNE; // 0x28
	::Il2CppArray<::GDOKJCEIEEJ*>* OJMBOGGMIKO; // 0x30
	::System::Action* PLDOELOOFLL; // 0x38
	::System::Collections::Generic::Dictionary_2<::System::Int32, ::System::Int32>* FLBOKGKPECD; // 0x40
	::System::Boolean DLGKLGKOMHK; // 0x48
	::System::Byte _padding0[0x3];
	::System::Int32 IJDGGCANOFI; // 0x4C

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + NGNNOGEAGPA__CTOR_OFFSET))(this);
	}

	::System::Boolean OFHECOHPAKG()
	{
		return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + NGNNOGEAGPA_OFHECOHPAKG_OFFSET))(this);
	}

	::System::Void LNFENFDLMIG()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + NGNNOGEAGPA_LNFENFDLMIG_OFFSET))(this);
	}

	::System::Void FPMKEGMLNHG(::System::Action* EJGDHCIBCJH)
	{
		return ((::System::Void(*)(::PVOID, ::System::Action*))((::PBYTE)hIl2Cpp + NGNNOGEAGPA_FPMKEGMLNHG_OFFSET))(this, EJGDHCIBCJH);
	}

	::System::Void BMNMLAIJJGF(::KECPLIFGOCJ GFCJHNHLFEF)
	{
		return ((::System::Void(*)(::PVOID, ::KECPLIFGOCJ))((::PBYTE)hIl2Cpp + NGNNOGEAGPA_BMNMLAIJJGF_OFFSET))(this, GFCJHNHLFEF);
	}

	::System::Void PHOADBJGFBE()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + NGNNOGEAGPA_PHOADBJGFBE_OFFSET))(this);
	}

	::System::Void BHLAEBMEOLO()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + NGNNOGEAGPA_BHLAEBMEOLO_OFFSET))(this);
	}

	::System::Void Finalize()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + NGNNOGEAGPA_FINALIZE_OFFSET))(this);
	}

	::System::Void KMIMGEDAMCE(::Il2CppArray<::System::Byte>* LJBPECKCCEA)
	{
		return ((::System::Void(*)(::PVOID, ::Il2CppArray<::System::Byte>*))((::PBYTE)hIl2Cpp + NGNNOGEAGPA_KMIMGEDAMCE_OFFSET))(this, LJBPECKCCEA);
	}

	::System::Void CHLEALKAOJO()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + NGNNOGEAGPA_CHLEALKAOJO_OFFSET))(this);
	}
};
