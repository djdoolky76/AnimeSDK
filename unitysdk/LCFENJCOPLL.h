#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/IBOPJAHGNOJ.h"
#include "unitysdk/KECPLIFGOCJ.h"
#include "unitysdk/System/Object.h"

class BJBGOLKMPOO;
namespace System { class Action; }
namespace System::Collections::Generic { template <typename T1, typename T2> class Dictionary_2; }

#define LCFENJCOPLL_BHLAEBMEOLO_OFFSET UNITYSDK_OFFSET(0x190F8D80)
#define LCFENJCOPLL_BMNMLAIJJGF_OFFSET UNITYSDK_OFFSET(0x190F8B50)
#define LCFENJCOPLL_CHLEALKAOJO_OFFSET UNITYSDK_OFFSET(0x190F8CC0)
#define LCFENJCOPLL_FINALIZE_OFFSET UNITYSDK_OFFSET(0x190F8E60)
#define LCFENJCOPLL_FPMKEGMLNHG_OFFSET UNITYSDK_OFFSET(0x190F8B60)
#define LCFENJCOPLL_KMIMGEDAMCE_OFFSET UNITYSDK_OFFSET(0x190F8FA0)
#define LCFENJCOPLL_LNFENFDLMIG_OFFSET UNITYSDK_OFFSET(0x190F87B0)
#define LCFENJCOPLL_OFHECOHPAKG_OFFSET UNITYSDK_OFFSET(0x190F8790)
#define LCFENJCOPLL_PHOADBJGFBE_OFFSET UNITYSDK_OFFSET(0x190F8A70)
#define LCFENJCOPLL__CTOR_OFFSET UNITYSDK_OFFSET(0x190F8F90)

inline static constexpr unsigned int LCFENJCOPLL_TypeDefinitionIndex = 15066;

class LCFENJCOPLL : public ::System::Object
{
public:
	::System::Action* PLDOELOOFLL; // 0x10
	::Il2CppArray<::BJBGOLKMPOO*>* OJMBOGGMIKO; // 0x18
	::System::Collections::Generic::Dictionary_2<::System::Int32, ::System::Int32>* FLBOKGKPECD; // 0x20
	::IBOPJAHGNOJ DHDJDGFNBOA; // 0x28
	::System::Int32 IJDGGCANOFI; // 0x40
	::System::Boolean DLGKLGKOMHK; // 0x44

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + LCFENJCOPLL__CTOR_OFFSET))(this);
	}

	::System::Boolean OFHECOHPAKG()
	{
		return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + LCFENJCOPLL_OFHECOHPAKG_OFFSET))(this);
	}

	::System::Void LNFENFDLMIG()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + LCFENJCOPLL_LNFENFDLMIG_OFFSET))(this);
	}

	::System::Void FPMKEGMLNHG(::System::Action* EJGDHCIBCJH)
	{
		return ((::System::Void(*)(::PVOID, ::System::Action*))((::PBYTE)hIl2Cpp + LCFENJCOPLL_FPMKEGMLNHG_OFFSET))(this, EJGDHCIBCJH);
	}

	::System::Void BMNMLAIJJGF(::KECPLIFGOCJ GFCJHNHLFEF)
	{
		return ((::System::Void(*)(::PVOID, ::KECPLIFGOCJ))((::PBYTE)hIl2Cpp + LCFENJCOPLL_BMNMLAIJJGF_OFFSET))(this, GFCJHNHLFEF);
	}

	::System::Void PHOADBJGFBE()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + LCFENJCOPLL_PHOADBJGFBE_OFFSET))(this);
	}

	::System::Void BHLAEBMEOLO()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + LCFENJCOPLL_BHLAEBMEOLO_OFFSET))(this);
	}

	::System::Void Finalize()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + LCFENJCOPLL_FINALIZE_OFFSET))(this);
	}

	::System::Void KMIMGEDAMCE(::Il2CppArray<::System::Byte>* LJBPECKCCEA)
	{
		return ((::System::Void(*)(::PVOID, ::Il2CppArray<::System::Byte>*))((::PBYTE)hIl2Cpp + LCFENJCOPLL_KMIMGEDAMCE_OFFSET))(this, LJBPECKCCEA);
	}

	::System::Void CHLEALKAOJO()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + LCFENJCOPLL_CHLEALKAOJO_OFFSET))(this);
	}
};
