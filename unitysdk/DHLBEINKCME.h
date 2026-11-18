#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/FAHNKLGJFIP.h"
#include "unitysdk/KECPLIFGOCJ.h"
#include "unitysdk/System/Object.h"

class EEDMMHFBAJH;
namespace System { class Action; }
namespace System::Collections::Generic { template <typename T1, typename T2> class Dictionary_2; }
namespace System::Collections::Generic { template <typename T> class HashSet_1; }

#define DHLBEINKCME_BHLAEBMEOLO_OFFSET UNITYSDK_OFFSET(0x1A5542E0)
#define DHLBEINKCME_BMNMLAIJJGF_OFFSET UNITYSDK_OFFSET(0x1A5540B0)
#define DHLBEINKCME_CHLEALKAOJO_OFFSET UNITYSDK_OFFSET(0x1A554220)
#define DHLBEINKCME_FINALIZE_OFFSET UNITYSDK_OFFSET(0x1A5543C0)
#define DHLBEINKCME_FPMKEGMLNHG_OFFSET UNITYSDK_OFFSET(0x1A5540C0)
#define DHLBEINKCME_KMIMGEDAMCE_OFFSET UNITYSDK_OFFSET(0x1A554540)
#define DHLBEINKCME_LNFENFDLMIG_OFFSET UNITYSDK_OFFSET(0x1A553D10)
#define DHLBEINKCME_OFHECOHPAKG_OFFSET UNITYSDK_OFFSET(0x1A553CF0)
#define DHLBEINKCME_PHOADBJGFBE_OFFSET UNITYSDK_OFFSET(0x1A553FD0)
#define DHLBEINKCME__CTOR_OFFSET UNITYSDK_OFFSET(0x1A5544F0)

inline static constexpr unsigned int DHLBEINKCME_TypeDefinitionIndex = 16548;

class DHLBEINKCME : public ::System::Object
{
public:
	::FAHNKLGJFIP DHDJDGFNBOA; // 0x10
	::System::Collections::Generic::HashSet_1<::System::Int32>* LHINHLCKHNE; // 0x28
	::System::Action* PLDOELOOFLL; // 0x30
	::Il2CppArray<::EEDMMHFBAJH*>* OJMBOGGMIKO; // 0x38
	::System::Collections::Generic::Dictionary_2<::System::Int32, ::System::Int32>* FLBOKGKPECD; // 0x40
	::System::Boolean DLGKLGKOMHK; // 0x48
	::System::Byte _padding0[0x3];
	::System::Int32 IJDGGCANOFI; // 0x4C

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + DHLBEINKCME__CTOR_OFFSET))(this);
	}

	::System::Boolean OFHECOHPAKG()
	{
		return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + DHLBEINKCME_OFHECOHPAKG_OFFSET))(this);
	}

	::System::Void LNFENFDLMIG()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + DHLBEINKCME_LNFENFDLMIG_OFFSET))(this);
	}

	::System::Void FPMKEGMLNHG(::System::Action* EJGDHCIBCJH)
	{
		return ((::System::Void(*)(::PVOID, ::System::Action*))((::PBYTE)hIl2Cpp + DHLBEINKCME_FPMKEGMLNHG_OFFSET))(this, EJGDHCIBCJH);
	}

	::System::Void BMNMLAIJJGF(::KECPLIFGOCJ GFCJHNHLFEF)
	{
		return ((::System::Void(*)(::PVOID, ::KECPLIFGOCJ))((::PBYTE)hIl2Cpp + DHLBEINKCME_BMNMLAIJJGF_OFFSET))(this, GFCJHNHLFEF);
	}

	::System::Void PHOADBJGFBE()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + DHLBEINKCME_PHOADBJGFBE_OFFSET))(this);
	}

	::System::Void BHLAEBMEOLO()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + DHLBEINKCME_BHLAEBMEOLO_OFFSET))(this);
	}

	::System::Void Finalize()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + DHLBEINKCME_FINALIZE_OFFSET))(this);
	}

	::System::Void KMIMGEDAMCE(::Il2CppArray<::System::Byte>* LJBPECKCCEA)
	{
		return ((::System::Void(*)(::PVOID, ::Il2CppArray<::System::Byte>*))((::PBYTE)hIl2Cpp + DHLBEINKCME_KMIMGEDAMCE_OFFSET))(this, LJBPECKCCEA);
	}

	::System::Void CHLEALKAOJO()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + DHLBEINKCME_CHLEALKAOJO_OFFSET))(this);
	}
};
