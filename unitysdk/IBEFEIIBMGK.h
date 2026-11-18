#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/ACPKIMMNBLH.h"
#include "unitysdk/KECPLIFGOCJ.h"
#include "unitysdk/System/Object.h"

class PEKLJLLNPDD;
namespace System { class Action; }
namespace System::Collections::Generic { template <typename T1, typename T2> class Dictionary_2; }
namespace System::Collections::Generic { template <typename T> class HashSet_1; }

#define IBEFEIIBMGK_BHLAEBMEOLO_OFFSET UNITYSDK_OFFSET(0x1953CD20)
#define IBEFEIIBMGK_BMNMLAIJJGF_OFFSET UNITYSDK_OFFSET(0x1953CAA0)
#define IBEFEIIBMGK_CHLEALKAOJO_OFFSET UNITYSDK_OFFSET(0x1953CAB0)
#define IBEFEIIBMGK_FINALIZE_OFFSET UNITYSDK_OFFSET(0x1953CB70)
#define IBEFEIIBMGK_FPMKEGMLNHG_OFFSET UNITYSDK_OFFSET(0x1953CCA0)
#define IBEFEIIBMGK_KMIMGEDAMCE_OFFSET UNITYSDK_OFFSET(0x1953CE50)
#define IBEFEIIBMGK_LNFENFDLMIG_OFFSET UNITYSDK_OFFSET(0x1953C6F0)
#define IBEFEIIBMGK_OFHECOHPAKG_OFFSET UNITYSDK_OFFSET(0x1953C6D0)
#define IBEFEIIBMGK_PHOADBJGFBE_OFFSET UNITYSDK_OFFSET(0x1953C9B0)
#define IBEFEIIBMGK__CTOR_OFFSET UNITYSDK_OFFSET(0x1953CE00)

inline static constexpr unsigned int IBEFEIIBMGK_TypeDefinitionIndex = 16983;

class IBEFEIIBMGK : public ::System::Object
{
public:
	::ACPKIMMNBLH DHDJDGFNBOA; // 0x10
	::System::Collections::Generic::Dictionary_2<::System::Int32, ::System::Int32>* FLBOKGKPECD; // 0x28
	::System::Action* PLDOELOOFLL; // 0x30
	::System::Collections::Generic::HashSet_1<::System::Int32>* LHINHLCKHNE; // 0x38
	::Il2CppArray<::PEKLJLLNPDD*>* OJMBOGGMIKO; // 0x40
	::System::Boolean DLGKLGKOMHK; // 0x48
	::System::Byte _padding0[0x3];
	::System::Int32 IJDGGCANOFI; // 0x4C

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + IBEFEIIBMGK__CTOR_OFFSET))(this);
	}

	::System::Boolean OFHECOHPAKG()
	{
		return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + IBEFEIIBMGK_OFHECOHPAKG_OFFSET))(this);
	}

	::System::Void LNFENFDLMIG()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + IBEFEIIBMGK_LNFENFDLMIG_OFFSET))(this);
	}

	::System::Void PHOADBJGFBE()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + IBEFEIIBMGK_PHOADBJGFBE_OFFSET))(this);
	}

	::System::Void Finalize()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + IBEFEIIBMGK_FINALIZE_OFFSET))(this);
	}

	::System::Void FPMKEGMLNHG(::System::Action* EJGDHCIBCJH)
	{
		return ((::System::Void(*)(::PVOID, ::System::Action*))((::PBYTE)hIl2Cpp + IBEFEIIBMGK_FPMKEGMLNHG_OFFSET))(this, EJGDHCIBCJH);
	}

	::System::Void BMNMLAIJJGF(::KECPLIFGOCJ GFCJHNHLFEF)
	{
		return ((::System::Void(*)(::PVOID, ::KECPLIFGOCJ))((::PBYTE)hIl2Cpp + IBEFEIIBMGK_BMNMLAIJJGF_OFFSET))(this, GFCJHNHLFEF);
	}

	::System::Void BHLAEBMEOLO()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + IBEFEIIBMGK_BHLAEBMEOLO_OFFSET))(this);
	}

	::System::Void KMIMGEDAMCE(::Il2CppArray<::System::Byte>* LJBPECKCCEA)
	{
		return ((::System::Void(*)(::PVOID, ::Il2CppArray<::System::Byte>*))((::PBYTE)hIl2Cpp + IBEFEIIBMGK_KMIMGEDAMCE_OFFSET))(this, LJBPECKCCEA);
	}

	::System::Void CHLEALKAOJO()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + IBEFEIIBMGK_CHLEALKAOJO_OFFSET))(this);
	}
};
