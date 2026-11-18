#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/JIGMNLGFKCA.h"
#include "unitysdk/KECPLIFGOCJ.h"
#include "unitysdk/System/Object.h"

class PMIFGJNAJOB;
namespace System { class Action; }
namespace System { class String; }
namespace System::Collections::Generic { template <typename T1, typename T2> class Dictionary_2; }
namespace System::Collections::Generic { template <typename T> class HashSet_1; }

#define EBAPELJGDCN_BHLAEBMEOLO_OFFSET UNITYSDK_OFFSET(0x1A55CAC0)
#define EBAPELJGDCN_BMNMLAIJJGF_OFFSET UNITYSDK_OFFSET(0x1A55C840)
#define EBAPELJGDCN_CHLEALKAOJO_OFFSET UNITYSDK_OFFSET(0x1A55C850)
#define EBAPELJGDCN_FINALIZE_OFFSET UNITYSDK_OFFSET(0x1A55C910)
#define EBAPELJGDCN_FPMKEGMLNHG_OFFSET UNITYSDK_OFFSET(0x1A55CA40)
#define EBAPELJGDCN_KMIMGEDAMCE_OFFSET UNITYSDK_OFFSET(0x1A55CC70)
#define EBAPELJGDCN_LNFENFDLMIG_OFFSET UNITYSDK_OFFSET(0x1A55C4F0)
#define EBAPELJGDCN_OFHECOHPAKG_OFFSET UNITYSDK_OFFSET(0x1A55C4D0)
#define EBAPELJGDCN_PHOADBJGFBE_OFFSET UNITYSDK_OFFSET(0x1A55C750)
#define EBAPELJGDCN__CTOR_OFFSET UNITYSDK_OFFSET(0x1A55CBA0)

inline static constexpr unsigned int EBAPELJGDCN_TypeDefinitionIndex = 13755;

class EBAPELJGDCN : public ::System::Object
{
public:
	::System::Collections::Generic::Dictionary_2<::System::String*, ::System::Int32>* FLBOKGKPECD; // 0x10
	::System::Collections::Generic::HashSet_1<::System::String*>* LHINHLCKHNE; // 0x18
	::JIGMNLGFKCA DHDJDGFNBOA; // 0x20
	::Il2CppArray<::PMIFGJNAJOB*>* OJMBOGGMIKO; // 0x38
	::System::Action* PLDOELOOFLL; // 0x40
	::System::Boolean DLGKLGKOMHK; // 0x48
	::System::Byte _padding0[0x3];
	::System::Int32 IJDGGCANOFI; // 0x4C

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + EBAPELJGDCN__CTOR_OFFSET))(this);
	}

	::System::Boolean OFHECOHPAKG()
	{
		return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + EBAPELJGDCN_OFHECOHPAKG_OFFSET))(this);
	}

	::System::Void LNFENFDLMIG()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + EBAPELJGDCN_LNFENFDLMIG_OFFSET))(this);
	}

	::System::Void PHOADBJGFBE()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + EBAPELJGDCN_PHOADBJGFBE_OFFSET))(this);
	}

	::System::Void Finalize()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + EBAPELJGDCN_FINALIZE_OFFSET))(this);
	}

	::System::Void FPMKEGMLNHG(::System::Action* EJGDHCIBCJH)
	{
		return ((::System::Void(*)(::PVOID, ::System::Action*))((::PBYTE)hIl2Cpp + EBAPELJGDCN_FPMKEGMLNHG_OFFSET))(this, EJGDHCIBCJH);
	}

	::System::Void BMNMLAIJJGF(::KECPLIFGOCJ GFCJHNHLFEF)
	{
		return ((::System::Void(*)(::PVOID, ::KECPLIFGOCJ))((::PBYTE)hIl2Cpp + EBAPELJGDCN_BMNMLAIJJGF_OFFSET))(this, GFCJHNHLFEF);
	}

	::System::Void BHLAEBMEOLO()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + EBAPELJGDCN_BHLAEBMEOLO_OFFSET))(this);
	}

	::System::Void KMIMGEDAMCE(::Il2CppArray<::System::Byte>* LJBPECKCCEA)
	{
		return ((::System::Void(*)(::PVOID, ::Il2CppArray<::System::Byte>*))((::PBYTE)hIl2Cpp + EBAPELJGDCN_KMIMGEDAMCE_OFFSET))(this, LJBPECKCCEA);
	}

	::System::Void CHLEALKAOJO()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + EBAPELJGDCN_CHLEALKAOJO_OFFSET))(this);
	}
};
