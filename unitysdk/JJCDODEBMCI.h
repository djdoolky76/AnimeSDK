#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/BADBNLOIFEJ.h"
#include "unitysdk/KECPLIFGOCJ.h"
#include "unitysdk/System/Object.h"

class FHHJCKPNFCG;
namespace System { class Action; }
namespace System::Collections::Generic { template <typename T1, typename T2> class Dictionary_2; }
namespace System::Collections::Generic { template <typename T> class HashSet_1; }

#define JJCDODEBMCI_BHLAEBMEOLO_OFFSET UNITYSDK_OFFSET(0x17C2A0F0)
#define JJCDODEBMCI_BMNMLAIJJGF_OFFSET UNITYSDK_OFFSET(0x17C29EB0)
#define JJCDODEBMCI_CHLEALKAOJO_OFFSET UNITYSDK_OFFSET(0x17C2A030)
#define JJCDODEBMCI_FINALIZE_OFFSET UNITYSDK_OFFSET(0x17C2A1D0)
#define JJCDODEBMCI_FPMKEGMLNHG_OFFSET UNITYSDK_OFFSET(0x17C29EC0)
#define JJCDODEBMCI_KMIMGEDAMCE_OFFSET UNITYSDK_OFFSET(0x17C2A350)
#define JJCDODEBMCI_LNFENFDLMIG_OFFSET UNITYSDK_OFFSET(0x17C29B00)
#define JJCDODEBMCI_OFHECOHPAKG_OFFSET UNITYSDK_OFFSET(0x17C29AE0)
#define JJCDODEBMCI_PHOADBJGFBE_OFFSET UNITYSDK_OFFSET(0x17C29DC0)
#define JJCDODEBMCI__CTOR_OFFSET UNITYSDK_OFFSET(0x17C2A300)

inline static constexpr unsigned int JJCDODEBMCI_TypeDefinitionIndex = 9724;

class JJCDODEBMCI : public ::System::Object
{
public:
	::System::Action* PLDOELOOFLL; // 0x10
	::System::Collections::Generic::Dictionary_2<::System::Int32, ::System::Int32>* FLBOKGKPECD; // 0x18
	::BADBNLOIFEJ DHDJDGFNBOA; // 0x20
	::Il2CppArray<::FHHJCKPNFCG*>* OJMBOGGMIKO; // 0x38
	::System::Collections::Generic::HashSet_1<::System::Int32>* LHINHLCKHNE; // 0x40
	::System::Boolean DLGKLGKOMHK; // 0x48
	::System::Byte _padding0[0x3];
	::System::Int32 IJDGGCANOFI; // 0x4C

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + JJCDODEBMCI__CTOR_OFFSET))(this);
	}

	::System::Boolean OFHECOHPAKG()
	{
		return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + JJCDODEBMCI_OFHECOHPAKG_OFFSET))(this);
	}

	::System::Void LNFENFDLMIG()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + JJCDODEBMCI_LNFENFDLMIG_OFFSET))(this);
	}

	::System::Void FPMKEGMLNHG(::System::Action* EJGDHCIBCJH)
	{
		return ((::System::Void(*)(::PVOID, ::System::Action*))((::PBYTE)hIl2Cpp + JJCDODEBMCI_FPMKEGMLNHG_OFFSET))(this, EJGDHCIBCJH);
	}

	::System::Void BMNMLAIJJGF(::KECPLIFGOCJ GFCJHNHLFEF)
	{
		return ((::System::Void(*)(::PVOID, ::KECPLIFGOCJ))((::PBYTE)hIl2Cpp + JJCDODEBMCI_BMNMLAIJJGF_OFFSET))(this, GFCJHNHLFEF);
	}

	::System::Void PHOADBJGFBE()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + JJCDODEBMCI_PHOADBJGFBE_OFFSET))(this);
	}

	::System::Void BHLAEBMEOLO()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + JJCDODEBMCI_BHLAEBMEOLO_OFFSET))(this);
	}

	::System::Void Finalize()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + JJCDODEBMCI_FINALIZE_OFFSET))(this);
	}

	::System::Void KMIMGEDAMCE(::Il2CppArray<::System::Byte>* LJBPECKCCEA)
	{
		return ((::System::Void(*)(::PVOID, ::Il2CppArray<::System::Byte>*))((::PBYTE)hIl2Cpp + JJCDODEBMCI_KMIMGEDAMCE_OFFSET))(this, LJBPECKCCEA);
	}

	::System::Void CHLEALKAOJO()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + JJCDODEBMCI_CHLEALKAOJO_OFFSET))(this);
	}
};
