#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/GHLPJCGJFGD.h"
#include "unitysdk/KECPLIFGOCJ.h"
#include "unitysdk/System/Object.h"

class NPECPBFKINM;
namespace System { class Action; }
namespace System::Collections::Generic { template <typename T1, typename T2> class Dictionary_2; }
namespace System::Collections::Generic { template <typename T> class HashSet_1; }

#define OKABIHLLGME_BHLAEBMEOLO_OFFSET UNITYSDK_OFFSET(0x1C0A69E0)
#define OKABIHLLGME_BMNMLAIJJGF_OFFSET UNITYSDK_OFFSET(0x1C0A67B0)
#define OKABIHLLGME_CHLEALKAOJO_OFFSET UNITYSDK_OFFSET(0x1C0A6920)
#define OKABIHLLGME_FINALIZE_OFFSET UNITYSDK_OFFSET(0x1C0A6AC0)
#define OKABIHLLGME_FPMKEGMLNHG_OFFSET UNITYSDK_OFFSET(0x1C0A67C0)
#define OKABIHLLGME_KMIMGEDAMCE_OFFSET UNITYSDK_OFFSET(0x1C0A6C40)
#define OKABIHLLGME_LNFENFDLMIG_OFFSET UNITYSDK_OFFSET(0x1C0A6410)
#define OKABIHLLGME_OFHECOHPAKG_OFFSET UNITYSDK_OFFSET(0x1C0A63F0)
#define OKABIHLLGME_PHOADBJGFBE_OFFSET UNITYSDK_OFFSET(0x1C0A66D0)
#define OKABIHLLGME__CTOR_OFFSET UNITYSDK_OFFSET(0x1C0A6BF0)

inline static constexpr unsigned int OKABIHLLGME_TypeDefinitionIndex = 13733;

class OKABIHLLGME : public ::System::Object
{
public:
	::GHLPJCGJFGD DHDJDGFNBOA; // 0x10
	::System::Collections::Generic::HashSet_1<::System::Int32>* LHINHLCKHNE; // 0x28
	::Il2CppArray<::NPECPBFKINM*>* OJMBOGGMIKO; // 0x30
	::System::Collections::Generic::Dictionary_2<::System::Int32, ::System::Int32>* FLBOKGKPECD; // 0x38
	::System::Action* PLDOELOOFLL; // 0x40
	::System::Int32 IJDGGCANOFI; // 0x48
	::System::Boolean DLGKLGKOMHK; // 0x4C

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + OKABIHLLGME__CTOR_OFFSET))(this);
	}

	::System::Boolean OFHECOHPAKG()
	{
		return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + OKABIHLLGME_OFHECOHPAKG_OFFSET))(this);
	}

	::System::Void LNFENFDLMIG()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + OKABIHLLGME_LNFENFDLMIG_OFFSET))(this);
	}

	::System::Void FPMKEGMLNHG(::System::Action* EJGDHCIBCJH)
	{
		return ((::System::Void(*)(::PVOID, ::System::Action*))((::PBYTE)hIl2Cpp + OKABIHLLGME_FPMKEGMLNHG_OFFSET))(this, EJGDHCIBCJH);
	}

	::System::Void BMNMLAIJJGF(::KECPLIFGOCJ GFCJHNHLFEF)
	{
		return ((::System::Void(*)(::PVOID, ::KECPLIFGOCJ))((::PBYTE)hIl2Cpp + OKABIHLLGME_BMNMLAIJJGF_OFFSET))(this, GFCJHNHLFEF);
	}

	::System::Void PHOADBJGFBE()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + OKABIHLLGME_PHOADBJGFBE_OFFSET))(this);
	}

	::System::Void BHLAEBMEOLO()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + OKABIHLLGME_BHLAEBMEOLO_OFFSET))(this);
	}

	::System::Void Finalize()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + OKABIHLLGME_FINALIZE_OFFSET))(this);
	}

	::System::Void KMIMGEDAMCE(::Il2CppArray<::System::Byte>* LJBPECKCCEA)
	{
		return ((::System::Void(*)(::PVOID, ::Il2CppArray<::System::Byte>*))((::PBYTE)hIl2Cpp + OKABIHLLGME_KMIMGEDAMCE_OFFSET))(this, LJBPECKCCEA);
	}

	::System::Void CHLEALKAOJO()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + OKABIHLLGME_CHLEALKAOJO_OFFSET))(this);
	}
};
