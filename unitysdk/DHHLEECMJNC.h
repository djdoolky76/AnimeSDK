#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/KECPLIFGOCJ.h"
#include "unitysdk/MKGNLHIEAHG.h"
#include "unitysdk/System/Object.h"

class OKBKJABOPEI;
namespace System { class Action; }
namespace System { class String; }
namespace System::Collections::Generic { template <typename T1, typename T2> class Dictionary_2; }
namespace System::Collections::Generic { template <typename T> class HashSet_1; }

#define DHHLEECMJNC_BHLAEBMEOLO_OFFSET UNITYSDK_OFFSET(0x1A18EBB0)
#define DHHLEECMJNC_BMNMLAIJJGF_OFFSET UNITYSDK_OFFSET(0x1A18E980)
#define DHHLEECMJNC_CHLEALKAOJO_OFFSET UNITYSDK_OFFSET(0x1A18EAF0)
#define DHHLEECMJNC_FINALIZE_OFFSET UNITYSDK_OFFSET(0x1A18EC90)
#define DHHLEECMJNC_FPMKEGMLNHG_OFFSET UNITYSDK_OFFSET(0x1A18E990)
#define DHHLEECMJNC_KMIMGEDAMCE_OFFSET UNITYSDK_OFFSET(0x1A18EE90)
#define DHHLEECMJNC_LNFENFDLMIG_OFFSET UNITYSDK_OFFSET(0x1A18E640)
#define DHHLEECMJNC_OFHECOHPAKG_OFFSET UNITYSDK_OFFSET(0x1A18E620)
#define DHHLEECMJNC_PHOADBJGFBE_OFFSET UNITYSDK_OFFSET(0x1A18E8A0)
#define DHHLEECMJNC__CTOR_OFFSET UNITYSDK_OFFSET(0x1A18EDC0)

inline static constexpr unsigned int DHHLEECMJNC_TypeDefinitionIndex = 12302;

class DHHLEECMJNC : public ::System::Object
{
public:
	::System::Action* PLDOELOOFLL; // 0x10
	::System::Collections::Generic::HashSet_1<::System::String*>* LHINHLCKHNE; // 0x18
	::System::Collections::Generic::Dictionary_2<::System::String*, ::System::Int32>* FLBOKGKPECD; // 0x20
	::Il2CppArray<::OKBKJABOPEI*>* OJMBOGGMIKO; // 0x28
	::MKGNLHIEAHG DHDJDGFNBOA; // 0x30
	::System::Boolean DLGKLGKOMHK; // 0x48
	::System::Byte _padding0[0x3];
	::System::Int32 IJDGGCANOFI; // 0x4C

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + DHHLEECMJNC__CTOR_OFFSET))(this);
	}

	::System::Boolean OFHECOHPAKG()
	{
		return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + DHHLEECMJNC_OFHECOHPAKG_OFFSET))(this);
	}

	::System::Void LNFENFDLMIG()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + DHHLEECMJNC_LNFENFDLMIG_OFFSET))(this);
	}

	::System::Void FPMKEGMLNHG(::System::Action* EJGDHCIBCJH)
	{
		return ((::System::Void(*)(::PVOID, ::System::Action*))((::PBYTE)hIl2Cpp + DHHLEECMJNC_FPMKEGMLNHG_OFFSET))(this, EJGDHCIBCJH);
	}

	::System::Void BMNMLAIJJGF(::KECPLIFGOCJ GFCJHNHLFEF)
	{
		return ((::System::Void(*)(::PVOID, ::KECPLIFGOCJ))((::PBYTE)hIl2Cpp + DHHLEECMJNC_BMNMLAIJJGF_OFFSET))(this, GFCJHNHLFEF);
	}

	::System::Void PHOADBJGFBE()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + DHHLEECMJNC_PHOADBJGFBE_OFFSET))(this);
	}

	::System::Void BHLAEBMEOLO()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + DHHLEECMJNC_BHLAEBMEOLO_OFFSET))(this);
	}

	::System::Void Finalize()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + DHHLEECMJNC_FINALIZE_OFFSET))(this);
	}

	::System::Void CHLEALKAOJO()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + DHHLEECMJNC_CHLEALKAOJO_OFFSET))(this);
	}

	::System::Void KMIMGEDAMCE(::Il2CppArray<::System::Byte>* LJBPECKCCEA)
	{
		return ((::System::Void(*)(::PVOID, ::Il2CppArray<::System::Byte>*))((::PBYTE)hIl2Cpp + DHHLEECMJNC_KMIMGEDAMCE_OFFSET))(this, LJBPECKCCEA);
	}
};
