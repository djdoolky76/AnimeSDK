#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/BLOOLBKMAHK.h"
#include "unitysdk/KECPLIFGOCJ.h"
#include "unitysdk/System/Object.h"

class EOANIEPGKHC;
namespace System { class Action; }
namespace System::Collections::Generic { template <typename T1, typename T2> class Dictionary_2; }
namespace System::Collections::Generic { template <typename T> class HashSet_1; }

#define AIPFCNGAHCC_BHLAEBMEOLO_OFFSET UNITYSDK_OFFSET(0x19F0EE50)
#define AIPFCNGAHCC_BMNMLAIJJGF_OFFSET UNITYSDK_OFFSET(0x19F0EBD0)
#define AIPFCNGAHCC_CHLEALKAOJO_OFFSET UNITYSDK_OFFSET(0x19F0EBE0)
#define AIPFCNGAHCC_FINALIZE_OFFSET UNITYSDK_OFFSET(0x19F0ECA0)
#define AIPFCNGAHCC_FPMKEGMLNHG_OFFSET UNITYSDK_OFFSET(0x19F0EDD0)
#define AIPFCNGAHCC_KMIMGEDAMCE_OFFSET UNITYSDK_OFFSET(0x19F0EF80)
#define AIPFCNGAHCC_LNFENFDLMIG_OFFSET UNITYSDK_OFFSET(0x19F0E750)
#define AIPFCNGAHCC_OFHECOHPAKG_OFFSET UNITYSDK_OFFSET(0x19F0E720)
#define AIPFCNGAHCC_PHOADBJGFBE_OFFSET UNITYSDK_OFFSET(0x19F0EA10)
#define AIPFCNGAHCC__CTOR_OFFSET UNITYSDK_OFFSET(0x19F0EF30)

inline static constexpr unsigned int AIPFCNGAHCC_TypeDefinitionIndex = 9772;

class AIPFCNGAHCC : public ::System::Object
{
public:
	::Il2CppArray<::EOANIEPGKHC*>* OJMBOGGMIKO; // 0x10
	::System::Action* PLDOELOOFLL; // 0x18
	::System::Collections::Generic::HashSet_1<::System::Int32>* LHINHLCKHNE; // 0x20
	::System::Collections::Generic::Dictionary_2<::System::Int32, ::System::Int32>* FLBOKGKPECD; // 0x28
	::BLOOLBKMAHK DHDJDGFNBOA; // 0x30
	::System::Boolean DLGKLGKOMHK; // 0x48
	::System::Byte _padding0[0x3];
	::System::Int32 IJDGGCANOFI; // 0x4C

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + AIPFCNGAHCC__CTOR_OFFSET))(this);
	}

	::System::Boolean OFHECOHPAKG()
	{
		return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + AIPFCNGAHCC_OFHECOHPAKG_OFFSET))(this);
	}

	::System::Void LNFENFDLMIG()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + AIPFCNGAHCC_LNFENFDLMIG_OFFSET))(this);
	}

	::System::Void PHOADBJGFBE()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + AIPFCNGAHCC_PHOADBJGFBE_OFFSET))(this);
	}

	::System::Void Finalize()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + AIPFCNGAHCC_FINALIZE_OFFSET))(this);
	}

	::System::Void FPMKEGMLNHG(::System::Action* EJGDHCIBCJH)
	{
		return ((::System::Void(*)(::PVOID, ::System::Action*))((::PBYTE)hIl2Cpp + AIPFCNGAHCC_FPMKEGMLNHG_OFFSET))(this, EJGDHCIBCJH);
	}

	::System::Void BMNMLAIJJGF(::KECPLIFGOCJ GFCJHNHLFEF)
	{
		return ((::System::Void(*)(::PVOID, ::KECPLIFGOCJ))((::PBYTE)hIl2Cpp + AIPFCNGAHCC_BMNMLAIJJGF_OFFSET))(this, GFCJHNHLFEF);
	}

	::System::Void BHLAEBMEOLO()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + AIPFCNGAHCC_BHLAEBMEOLO_OFFSET))(this);
	}

	::System::Void CHLEALKAOJO()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + AIPFCNGAHCC_CHLEALKAOJO_OFFSET))(this);
	}

	::System::Void KMIMGEDAMCE(::Il2CppArray<::System::Byte>* LJBPECKCCEA)
	{
		return ((::System::Void(*)(::PVOID, ::Il2CppArray<::System::Byte>*))((::PBYTE)hIl2Cpp + AIPFCNGAHCC_KMIMGEDAMCE_OFFSET))(this, LJBPECKCCEA);
	}
};
