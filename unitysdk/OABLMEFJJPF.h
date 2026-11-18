#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/KECPLIFGOCJ.h"
#include "unitysdk/OIAHEHBFIAA.h"
#include "unitysdk/System/Object.h"

class PHOAOJNFDFC;
namespace System { class Action; }
namespace System::Collections::Generic { template <typename T1, typename T2> class Dictionary_2; }

#define OABLMEFJJPF_BHLAEBMEOLO_OFFSET UNITYSDK_OFFSET(0x1AB248C0)
#define OABLMEFJJPF_BMNMLAIJJGF_OFFSET UNITYSDK_OFFSET(0x1AB24690)
#define OABLMEFJJPF_CHLEALKAOJO_OFFSET UNITYSDK_OFFSET(0x1AB24800)
#define OABLMEFJJPF_FINALIZE_OFFSET UNITYSDK_OFFSET(0x1AB249A0)
#define OABLMEFJJPF_FPMKEGMLNHG_OFFSET UNITYSDK_OFFSET(0x1AB246A0)
#define OABLMEFJJPF_KMIMGEDAMCE_OFFSET UNITYSDK_OFFSET(0x1AB24AE0)
#define OABLMEFJJPF_LNFENFDLMIG_OFFSET UNITYSDK_OFFSET(0x1AB242F0)
#define OABLMEFJJPF_OFHECOHPAKG_OFFSET UNITYSDK_OFFSET(0x1AB242D0)
#define OABLMEFJJPF_PHOADBJGFBE_OFFSET UNITYSDK_OFFSET(0x1AB245B0)
#define OABLMEFJJPF__CTOR_OFFSET UNITYSDK_OFFSET(0x1AB24AD0)

inline static constexpr unsigned int OABLMEFJJPF_TypeDefinitionIndex = 9303;

class OABLMEFJJPF : public ::System::Object
{
public:
	::OIAHEHBFIAA DHDJDGFNBOA; // 0x10
	::Il2CppArray<::PHOAOJNFDFC*>* OJMBOGGMIKO; // 0x28
	::System::Collections::Generic::Dictionary_2<::System::Int32, ::System::Int32>* FLBOKGKPECD; // 0x30
	::System::Action* PLDOELOOFLL; // 0x38
	::System::Boolean DLGKLGKOMHK; // 0x40
	::System::Byte _padding0[0x3];
	::System::Int32 IJDGGCANOFI; // 0x44

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + OABLMEFJJPF__CTOR_OFFSET))(this);
	}

	::System::Boolean OFHECOHPAKG()
	{
		return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + OABLMEFJJPF_OFHECOHPAKG_OFFSET))(this);
	}

	::System::Void LNFENFDLMIG()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + OABLMEFJJPF_LNFENFDLMIG_OFFSET))(this);
	}

	::System::Void FPMKEGMLNHG(::System::Action* EJGDHCIBCJH)
	{
		return ((::System::Void(*)(::PVOID, ::System::Action*))((::PBYTE)hIl2Cpp + OABLMEFJJPF_FPMKEGMLNHG_OFFSET))(this, EJGDHCIBCJH);
	}

	::System::Void BMNMLAIJJGF(::KECPLIFGOCJ GFCJHNHLFEF)
	{
		return ((::System::Void(*)(::PVOID, ::KECPLIFGOCJ))((::PBYTE)hIl2Cpp + OABLMEFJJPF_BMNMLAIJJGF_OFFSET))(this, GFCJHNHLFEF);
	}

	::System::Void PHOADBJGFBE()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + OABLMEFJJPF_PHOADBJGFBE_OFFSET))(this);
	}

	::System::Void BHLAEBMEOLO()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + OABLMEFJJPF_BHLAEBMEOLO_OFFSET))(this);
	}

	::System::Void Finalize()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + OABLMEFJJPF_FINALIZE_OFFSET))(this);
	}

	::System::Void CHLEALKAOJO()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + OABLMEFJJPF_CHLEALKAOJO_OFFSET))(this);
	}

	::System::Void KMIMGEDAMCE(::Il2CppArray<::System::Byte>* LJBPECKCCEA)
	{
		return ((::System::Void(*)(::PVOID, ::Il2CppArray<::System::Byte>*))((::PBYTE)hIl2Cpp + OABLMEFJJPF_KMIMGEDAMCE_OFFSET))(this, LJBPECKCCEA);
	}
};
