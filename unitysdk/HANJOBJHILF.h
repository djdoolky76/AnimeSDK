#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/AIIOFMPIMOG.h"
#include "unitysdk/KECPLIFGOCJ.h"
#include "unitysdk/System/Object.h"

class DKHIBAMDNAE;
namespace System { class Action; }
namespace System::Collections::Generic { template <typename T1, typename T2> class Dictionary_2; }

#define HANJOBJHILF_BHLAEBMEOLO_OFFSET UNITYSDK_OFFSET(0x15A88030)
#define HANJOBJHILF_BMNMLAIJJGF_OFFSET UNITYSDK_OFFSET(0x15A87DF0)
#define HANJOBJHILF_CHLEALKAOJO_OFFSET UNITYSDK_OFFSET(0x15A87F70)
#define HANJOBJHILF_FINALIZE_OFFSET UNITYSDK_OFFSET(0x15A88110)
#define HANJOBJHILF_FPMKEGMLNHG_OFFSET UNITYSDK_OFFSET(0x15A87E00)
#define HANJOBJHILF_KMIMGEDAMCE_OFFSET UNITYSDK_OFFSET(0x15A88250)
#define HANJOBJHILF_LNFENFDLMIG_OFFSET UNITYSDK_OFFSET(0x15A87A40)
#define HANJOBJHILF_OFHECOHPAKG_OFFSET UNITYSDK_OFFSET(0x15A87A20)
#define HANJOBJHILF_PHOADBJGFBE_OFFSET UNITYSDK_OFFSET(0x15A87D00)
#define HANJOBJHILF__CTOR_OFFSET UNITYSDK_OFFSET(0x15A88240)

inline static constexpr unsigned int HANJOBJHILF_TypeDefinitionIndex = 15619;

class HANJOBJHILF : public ::System::Object
{
public:
	::Il2CppArray<::DKHIBAMDNAE*>* OJMBOGGMIKO; // 0x10
	::System::Action* PLDOELOOFLL; // 0x18
	::AIIOFMPIMOG DHDJDGFNBOA; // 0x20
	::System::Collections::Generic::Dictionary_2<::System::Int32, ::System::Int32>* FLBOKGKPECD; // 0x38
	::System::Boolean DLGKLGKOMHK; // 0x40
	::System::Byte _padding0[0x3];
	::System::Int32 IJDGGCANOFI; // 0x44

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + HANJOBJHILF__CTOR_OFFSET))(this);
	}

	::System::Boolean OFHECOHPAKG()
	{
		return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + HANJOBJHILF_OFHECOHPAKG_OFFSET))(this);
	}

	::System::Void LNFENFDLMIG()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + HANJOBJHILF_LNFENFDLMIG_OFFSET))(this);
	}

	::System::Void FPMKEGMLNHG(::System::Action* EJGDHCIBCJH)
	{
		return ((::System::Void(*)(::PVOID, ::System::Action*))((::PBYTE)hIl2Cpp + HANJOBJHILF_FPMKEGMLNHG_OFFSET))(this, EJGDHCIBCJH);
	}

	::System::Void BMNMLAIJJGF(::KECPLIFGOCJ GFCJHNHLFEF)
	{
		return ((::System::Void(*)(::PVOID, ::KECPLIFGOCJ))((::PBYTE)hIl2Cpp + HANJOBJHILF_BMNMLAIJJGF_OFFSET))(this, GFCJHNHLFEF);
	}

	::System::Void PHOADBJGFBE()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + HANJOBJHILF_PHOADBJGFBE_OFFSET))(this);
	}

	::System::Void BHLAEBMEOLO()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + HANJOBJHILF_BHLAEBMEOLO_OFFSET))(this);
	}

	::System::Void Finalize()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + HANJOBJHILF_FINALIZE_OFFSET))(this);
	}

	::System::Void CHLEALKAOJO()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + HANJOBJHILF_CHLEALKAOJO_OFFSET))(this);
	}

	::System::Void KMIMGEDAMCE(::Il2CppArray<::System::Byte>* LJBPECKCCEA)
	{
		return ((::System::Void(*)(::PVOID, ::Il2CppArray<::System::Byte>*))((::PBYTE)hIl2Cpp + HANJOBJHILF_KMIMGEDAMCE_OFFSET))(this, LJBPECKCCEA);
	}
};
