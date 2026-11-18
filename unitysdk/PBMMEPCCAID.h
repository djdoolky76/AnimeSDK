#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/KECPLIFGOCJ.h"
#include "unitysdk/ODDDGMDADMA.h"
#include "unitysdk/System/Object.h"

class HMCONGMJOLI;
namespace System { class Action; }
namespace System::Collections::Generic { template <typename T1, typename T2> class Dictionary_2; }

#define PBMMEPCCAID_BHLAEBMEOLO_OFFSET UNITYSDK_OFFSET(0x1C1A5FF0)
#define PBMMEPCCAID_BMNMLAIJJGF_OFFSET UNITYSDK_OFFSET(0x1C1A5DC0)
#define PBMMEPCCAID_CHLEALKAOJO_OFFSET UNITYSDK_OFFSET(0x1C1A5F30)
#define PBMMEPCCAID_FINALIZE_OFFSET UNITYSDK_OFFSET(0x1C1A60D0)
#define PBMMEPCCAID_FPMKEGMLNHG_OFFSET UNITYSDK_OFFSET(0x1C1A5DD0)
#define PBMMEPCCAID_KMIMGEDAMCE_OFFSET UNITYSDK_OFFSET(0x1C1A6210)
#define PBMMEPCCAID_LNFENFDLMIG_OFFSET UNITYSDK_OFFSET(0x1C1A5A20)
#define PBMMEPCCAID_OFHECOHPAKG_OFFSET UNITYSDK_OFFSET(0x1C1A5A00)
#define PBMMEPCCAID_PHOADBJGFBE_OFFSET UNITYSDK_OFFSET(0x1C1A5CE0)
#define PBMMEPCCAID__CTOR_OFFSET UNITYSDK_OFFSET(0x1C1A6200)

inline static constexpr unsigned int PBMMEPCCAID_TypeDefinitionIndex = 10609;

class PBMMEPCCAID : public ::System::Object
{
public:
	::System::Action* PLDOELOOFLL; // 0x10
	::System::Collections::Generic::Dictionary_2<::System::Int32, ::System::Int32>* FLBOKGKPECD; // 0x18
	::Il2CppArray<::HMCONGMJOLI*>* OJMBOGGMIKO; // 0x20
	::ODDDGMDADMA DHDJDGFNBOA; // 0x28
	::System::Int32 IJDGGCANOFI; // 0x40
	::System::Boolean DLGKLGKOMHK; // 0x44

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + PBMMEPCCAID__CTOR_OFFSET))(this);
	}

	::System::Boolean OFHECOHPAKG()
	{
		return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + PBMMEPCCAID_OFHECOHPAKG_OFFSET))(this);
	}

	::System::Void LNFENFDLMIG()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + PBMMEPCCAID_LNFENFDLMIG_OFFSET))(this);
	}

	::System::Void FPMKEGMLNHG(::System::Action* EJGDHCIBCJH)
	{
		return ((::System::Void(*)(::PVOID, ::System::Action*))((::PBYTE)hIl2Cpp + PBMMEPCCAID_FPMKEGMLNHG_OFFSET))(this, EJGDHCIBCJH);
	}

	::System::Void BMNMLAIJJGF(::KECPLIFGOCJ GFCJHNHLFEF)
	{
		return ((::System::Void(*)(::PVOID, ::KECPLIFGOCJ))((::PBYTE)hIl2Cpp + PBMMEPCCAID_BMNMLAIJJGF_OFFSET))(this, GFCJHNHLFEF);
	}

	::System::Void PHOADBJGFBE()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + PBMMEPCCAID_PHOADBJGFBE_OFFSET))(this);
	}

	::System::Void BHLAEBMEOLO()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + PBMMEPCCAID_BHLAEBMEOLO_OFFSET))(this);
	}

	::System::Void Finalize()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + PBMMEPCCAID_FINALIZE_OFFSET))(this);
	}

	::System::Void CHLEALKAOJO()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + PBMMEPCCAID_CHLEALKAOJO_OFFSET))(this);
	}

	::System::Void KMIMGEDAMCE(::Il2CppArray<::System::Byte>* LJBPECKCCEA)
	{
		return ((::System::Void(*)(::PVOID, ::Il2CppArray<::System::Byte>*))((::PBYTE)hIl2Cpp + PBMMEPCCAID_KMIMGEDAMCE_OFFSET))(this, LJBPECKCCEA);
	}
};
