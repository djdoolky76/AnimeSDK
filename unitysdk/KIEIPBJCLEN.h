#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/KECPLIFGOCJ.h"
#include "unitysdk/KHFHLMDFIBB.h"
#include "unitysdk/System/Object.h"

class JLBDCEGCHMD;
namespace System { class Action; }
namespace System::Collections::Generic { template <typename T1, typename T2> class Dictionary_2; }
namespace System::Collections::Generic { template <typename T> class HashSet_1; }

#define KIEIPBJCLEN_BHLAEBMEOLO_OFFSET UNITYSDK_OFFSET(0x1BB02F20)
#define KIEIPBJCLEN_BMNMLAIJJGF_OFFSET UNITYSDK_OFFSET(0x1BB02CE0)
#define KIEIPBJCLEN_CHLEALKAOJO_OFFSET UNITYSDK_OFFSET(0x1BB02E60)
#define KIEIPBJCLEN_FINALIZE_OFFSET UNITYSDK_OFFSET(0x1BB03000)
#define KIEIPBJCLEN_FPMKEGMLNHG_OFFSET UNITYSDK_OFFSET(0x1BB02CF0)
#define KIEIPBJCLEN_KMIMGEDAMCE_OFFSET UNITYSDK_OFFSET(0x1BB03180)
#define KIEIPBJCLEN_LNFENFDLMIG_OFFSET UNITYSDK_OFFSET(0x1BB02930)
#define KIEIPBJCLEN_OFHECOHPAKG_OFFSET UNITYSDK_OFFSET(0x1BB02910)
#define KIEIPBJCLEN_PHOADBJGFBE_OFFSET UNITYSDK_OFFSET(0x1BB02BF0)
#define KIEIPBJCLEN__CTOR_OFFSET UNITYSDK_OFFSET(0x1BB03130)

inline static constexpr unsigned int KIEIPBJCLEN_TypeDefinitionIndex = 16991;

class KIEIPBJCLEN : public ::System::Object
{
public:
	::System::Collections::Generic::HashSet_1<::System::Int32>* LHINHLCKHNE; // 0x10
	::KHFHLMDFIBB DHDJDGFNBOA; // 0x18
	::System::Collections::Generic::Dictionary_2<::System::Int32, ::System::Int32>* FLBOKGKPECD; // 0x30
	::System::Action* PLDOELOOFLL; // 0x38
	::Il2CppArray<::JLBDCEGCHMD*>* OJMBOGGMIKO; // 0x40
	::System::Int32 IJDGGCANOFI; // 0x48
	::System::Boolean DLGKLGKOMHK; // 0x4C

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + KIEIPBJCLEN__CTOR_OFFSET))(this);
	}

	::System::Boolean OFHECOHPAKG()
	{
		return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + KIEIPBJCLEN_OFHECOHPAKG_OFFSET))(this);
	}

	::System::Void LNFENFDLMIG()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + KIEIPBJCLEN_LNFENFDLMIG_OFFSET))(this);
	}

	::System::Void FPMKEGMLNHG(::System::Action* EJGDHCIBCJH)
	{
		return ((::System::Void(*)(::PVOID, ::System::Action*))((::PBYTE)hIl2Cpp + KIEIPBJCLEN_FPMKEGMLNHG_OFFSET))(this, EJGDHCIBCJH);
	}

	::System::Void BMNMLAIJJGF(::KECPLIFGOCJ GFCJHNHLFEF)
	{
		return ((::System::Void(*)(::PVOID, ::KECPLIFGOCJ))((::PBYTE)hIl2Cpp + KIEIPBJCLEN_BMNMLAIJJGF_OFFSET))(this, GFCJHNHLFEF);
	}

	::System::Void PHOADBJGFBE()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + KIEIPBJCLEN_PHOADBJGFBE_OFFSET))(this);
	}

	::System::Void BHLAEBMEOLO()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + KIEIPBJCLEN_BHLAEBMEOLO_OFFSET))(this);
	}

	::System::Void Finalize()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + KIEIPBJCLEN_FINALIZE_OFFSET))(this);
	}

	::System::Void CHLEALKAOJO()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + KIEIPBJCLEN_CHLEALKAOJO_OFFSET))(this);
	}

	::System::Void KMIMGEDAMCE(::Il2CppArray<::System::Byte>* LJBPECKCCEA)
	{
		return ((::System::Void(*)(::PVOID, ::Il2CppArray<::System::Byte>*))((::PBYTE)hIl2Cpp + KIEIPBJCLEN_KMIMGEDAMCE_OFFSET))(this, LJBPECKCCEA);
	}
};
