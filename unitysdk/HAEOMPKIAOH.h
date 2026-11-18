#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/GEPJBBDCLNE.h"
#include "unitysdk/KECPLIFGOCJ.h"
#include "unitysdk/System/Object.h"

class GNEJAIOHEJK;
namespace System { class Action; }
namespace System::Collections::Generic { template <typename T1, typename T2> class Dictionary_2; }
namespace System::Collections::Generic { template <typename T> class HashSet_1; }

#define HAEOMPKIAOH_BHLAEBMEOLO_OFFSET UNITYSDK_OFFSET(0x1B7BFE50)
#define HAEOMPKIAOH_BMNMLAIJJGF_OFFSET UNITYSDK_OFFSET(0x1B7BFBD0)
#define HAEOMPKIAOH_CHLEALKAOJO_OFFSET UNITYSDK_OFFSET(0x1B7BFBE0)
#define HAEOMPKIAOH_FINALIZE_OFFSET UNITYSDK_OFFSET(0x1B7BFCA0)
#define HAEOMPKIAOH_FPMKEGMLNHG_OFFSET UNITYSDK_OFFSET(0x1B7BFDD0)
#define HAEOMPKIAOH_KMIMGEDAMCE_OFFSET UNITYSDK_OFFSET(0x1B7BFF80)
#define HAEOMPKIAOH_LNFENFDLMIG_OFFSET UNITYSDK_OFFSET(0x1B7BF820)
#define HAEOMPKIAOH_OFHECOHPAKG_OFFSET UNITYSDK_OFFSET(0x1B7BF800)
#define HAEOMPKIAOH_PHOADBJGFBE_OFFSET UNITYSDK_OFFSET(0x1B7BFAE0)
#define HAEOMPKIAOH__CTOR_OFFSET UNITYSDK_OFFSET(0x1B7BFF30)

inline static constexpr unsigned int HAEOMPKIAOH_TypeDefinitionIndex = 9449;

class HAEOMPKIAOH : public ::System::Object
{
public:
	::System::Collections::Generic::HashSet_1<::System::Int32>* LHINHLCKHNE; // 0x10
	::System::Collections::Generic::Dictionary_2<::System::Int32, ::System::Int32>* FLBOKGKPECD; // 0x18
	::GEPJBBDCLNE DHDJDGFNBOA; // 0x20
	::Il2CppArray<::GNEJAIOHEJK*>* OJMBOGGMIKO; // 0x38
	::System::Action* PLDOELOOFLL; // 0x40
	::System::Boolean DLGKLGKOMHK; // 0x48
	::System::Byte _padding0[0x3];
	::System::Int32 IJDGGCANOFI; // 0x4C

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + HAEOMPKIAOH__CTOR_OFFSET))(this);
	}

	::System::Boolean OFHECOHPAKG()
	{
		return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + HAEOMPKIAOH_OFHECOHPAKG_OFFSET))(this);
	}

	::System::Void LNFENFDLMIG()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + HAEOMPKIAOH_LNFENFDLMIG_OFFSET))(this);
	}

	::System::Void PHOADBJGFBE()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + HAEOMPKIAOH_PHOADBJGFBE_OFFSET))(this);
	}

	::System::Void Finalize()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + HAEOMPKIAOH_FINALIZE_OFFSET))(this);
	}

	::System::Void FPMKEGMLNHG(::System::Action* EJGDHCIBCJH)
	{
		return ((::System::Void(*)(::PVOID, ::System::Action*))((::PBYTE)hIl2Cpp + HAEOMPKIAOH_FPMKEGMLNHG_OFFSET))(this, EJGDHCIBCJH);
	}

	::System::Void BMNMLAIJJGF(::KECPLIFGOCJ GFCJHNHLFEF)
	{
		return ((::System::Void(*)(::PVOID, ::KECPLIFGOCJ))((::PBYTE)hIl2Cpp + HAEOMPKIAOH_BMNMLAIJJGF_OFFSET))(this, GFCJHNHLFEF);
	}

	::System::Void BHLAEBMEOLO()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + HAEOMPKIAOH_BHLAEBMEOLO_OFFSET))(this);
	}

	::System::Void KMIMGEDAMCE(::Il2CppArray<::System::Byte>* LJBPECKCCEA)
	{
		return ((::System::Void(*)(::PVOID, ::Il2CppArray<::System::Byte>*))((::PBYTE)hIl2Cpp + HAEOMPKIAOH_KMIMGEDAMCE_OFFSET))(this, LJBPECKCCEA);
	}

	::System::Void CHLEALKAOJO()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + HAEOMPKIAOH_CHLEALKAOJO_OFFSET))(this);
	}
};
