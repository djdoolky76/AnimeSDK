#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/BHEGINHMFFJ.h"
#include "unitysdk/KECPLIFGOCJ.h"
#include "unitysdk/System/Object.h"

class IDOJODMFEHI;
namespace System { class Action; }
namespace System::Collections::Generic { template <typename T1, typename T2> class Dictionary_2; }
namespace System::Collections::Generic { template <typename T> class HashSet_1; }

#define EBGAIDEKNKI_BHLAEBMEOLO_OFFSET UNITYSDK_OFFSET(0x157A9A00)
#define EBGAIDEKNKI_BMNMLAIJJGF_OFFSET UNITYSDK_OFFSET(0x157A97C0)
#define EBGAIDEKNKI_CHLEALKAOJO_OFFSET UNITYSDK_OFFSET(0x157A9940)
#define EBGAIDEKNKI_FINALIZE_OFFSET UNITYSDK_OFFSET(0x157A9AE0)
#define EBGAIDEKNKI_FPMKEGMLNHG_OFFSET UNITYSDK_OFFSET(0x157A97D0)
#define EBGAIDEKNKI_KMIMGEDAMCE_OFFSET UNITYSDK_OFFSET(0x157A9C60)
#define EBGAIDEKNKI_LNFENFDLMIG_OFFSET UNITYSDK_OFFSET(0x157A9410)
#define EBGAIDEKNKI_OFHECOHPAKG_OFFSET UNITYSDK_OFFSET(0x157A93F0)
#define EBGAIDEKNKI_PHOADBJGFBE_OFFSET UNITYSDK_OFFSET(0x157A96D0)
#define EBGAIDEKNKI__CTOR_OFFSET UNITYSDK_OFFSET(0x157A9C10)

inline static constexpr unsigned int EBGAIDEKNKI_TypeDefinitionIndex = 9366;

class EBGAIDEKNKI : public ::System::Object
{
public:
	::System::Collections::Generic::HashSet_1<::System::Int32>* LHINHLCKHNE; // 0x10
	::System::Collections::Generic::Dictionary_2<::System::Int32, ::System::Int32>* FLBOKGKPECD; // 0x18
	::System::Action* PLDOELOOFLL; // 0x20
	::Il2CppArray<::IDOJODMFEHI*>* OJMBOGGMIKO; // 0x28
	::BHEGINHMFFJ DHDJDGFNBOA; // 0x30
	::System::Int32 IJDGGCANOFI; // 0x48
	::System::Boolean DLGKLGKOMHK; // 0x4C

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + EBGAIDEKNKI__CTOR_OFFSET))(this);
	}

	::System::Boolean OFHECOHPAKG()
	{
		return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + EBGAIDEKNKI_OFHECOHPAKG_OFFSET))(this);
	}

	::System::Void LNFENFDLMIG()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + EBGAIDEKNKI_LNFENFDLMIG_OFFSET))(this);
	}

	::System::Void FPMKEGMLNHG(::System::Action* EJGDHCIBCJH)
	{
		return ((::System::Void(*)(::PVOID, ::System::Action*))((::PBYTE)hIl2Cpp + EBGAIDEKNKI_FPMKEGMLNHG_OFFSET))(this, EJGDHCIBCJH);
	}

	::System::Void BMNMLAIJJGF(::KECPLIFGOCJ GFCJHNHLFEF)
	{
		return ((::System::Void(*)(::PVOID, ::KECPLIFGOCJ))((::PBYTE)hIl2Cpp + EBGAIDEKNKI_BMNMLAIJJGF_OFFSET))(this, GFCJHNHLFEF);
	}

	::System::Void PHOADBJGFBE()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + EBGAIDEKNKI_PHOADBJGFBE_OFFSET))(this);
	}

	::System::Void BHLAEBMEOLO()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + EBGAIDEKNKI_BHLAEBMEOLO_OFFSET))(this);
	}

	::System::Void Finalize()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + EBGAIDEKNKI_FINALIZE_OFFSET))(this);
	}

	::System::Void KMIMGEDAMCE(::Il2CppArray<::System::Byte>* LJBPECKCCEA)
	{
		return ((::System::Void(*)(::PVOID, ::Il2CppArray<::System::Byte>*))((::PBYTE)hIl2Cpp + EBGAIDEKNKI_KMIMGEDAMCE_OFFSET))(this, LJBPECKCCEA);
	}

	::System::Void CHLEALKAOJO()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + EBGAIDEKNKI_CHLEALKAOJO_OFFSET))(this);
	}
};
