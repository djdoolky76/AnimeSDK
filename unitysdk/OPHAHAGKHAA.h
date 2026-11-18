#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/AKKJCAAGAHB.h"
#include "unitysdk/KECPLIFGOCJ.h"
#include "unitysdk/System/Object.h"

class PKADDFALDFG;
namespace System { class Action; }
namespace System::Collections::Generic { template <typename T1, typename T2> class Dictionary_2; }

#define OPHAHAGKHAA_BHLAEBMEOLO_OFFSET UNITYSDK_OFFSET(0x17FE4BB0)
#define OPHAHAGKHAA_BMNMLAIJJGF_OFFSET UNITYSDK_OFFSET(0x17FE4980)
#define OPHAHAGKHAA_CHLEALKAOJO_OFFSET UNITYSDK_OFFSET(0x17FE4AF0)
#define OPHAHAGKHAA_FINALIZE_OFFSET UNITYSDK_OFFSET(0x17FE4C90)
#define OPHAHAGKHAA_FPMKEGMLNHG_OFFSET UNITYSDK_OFFSET(0x17FE4990)
#define OPHAHAGKHAA_KMIMGEDAMCE_OFFSET UNITYSDK_OFFSET(0x17FE4DD0)
#define OPHAHAGKHAA_LNFENFDLMIG_OFFSET UNITYSDK_OFFSET(0x17FE45E0)
#define OPHAHAGKHAA_OFHECOHPAKG_OFFSET UNITYSDK_OFFSET(0x17FE45C0)
#define OPHAHAGKHAA_PHOADBJGFBE_OFFSET UNITYSDK_OFFSET(0x17FE48A0)
#define OPHAHAGKHAA__CTOR_OFFSET UNITYSDK_OFFSET(0x17FE4DC0)

inline static constexpr unsigned int OPHAHAGKHAA_TypeDefinitionIndex = 17622;

class OPHAHAGKHAA : public ::System::Object
{
public:
	::AKKJCAAGAHB DHDJDGFNBOA; // 0x10
	::System::Action* PLDOELOOFLL; // 0x28
	::System::Collections::Generic::Dictionary_2<::System::Int32, ::System::Int32>* FLBOKGKPECD; // 0x30
	::Il2CppArray<::PKADDFALDFG*>* OJMBOGGMIKO; // 0x38
	::System::Boolean DLGKLGKOMHK; // 0x40
	::System::Byte _padding0[0x3];
	::System::Int32 IJDGGCANOFI; // 0x44

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + OPHAHAGKHAA__CTOR_OFFSET))(this);
	}

	::System::Boolean OFHECOHPAKG()
	{
		return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + OPHAHAGKHAA_OFHECOHPAKG_OFFSET))(this);
	}

	::System::Void LNFENFDLMIG()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + OPHAHAGKHAA_LNFENFDLMIG_OFFSET))(this);
	}

	::System::Void FPMKEGMLNHG(::System::Action* EJGDHCIBCJH)
	{
		return ((::System::Void(*)(::PVOID, ::System::Action*))((::PBYTE)hIl2Cpp + OPHAHAGKHAA_FPMKEGMLNHG_OFFSET))(this, EJGDHCIBCJH);
	}

	::System::Void BMNMLAIJJGF(::KECPLIFGOCJ GFCJHNHLFEF)
	{
		return ((::System::Void(*)(::PVOID, ::KECPLIFGOCJ))((::PBYTE)hIl2Cpp + OPHAHAGKHAA_BMNMLAIJJGF_OFFSET))(this, GFCJHNHLFEF);
	}

	::System::Void PHOADBJGFBE()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + OPHAHAGKHAA_PHOADBJGFBE_OFFSET))(this);
	}

	::System::Void BHLAEBMEOLO()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + OPHAHAGKHAA_BHLAEBMEOLO_OFFSET))(this);
	}

	::System::Void Finalize()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + OPHAHAGKHAA_FINALIZE_OFFSET))(this);
	}

	::System::Void KMIMGEDAMCE(::Il2CppArray<::System::Byte>* LJBPECKCCEA)
	{
		return ((::System::Void(*)(::PVOID, ::Il2CppArray<::System::Byte>*))((::PBYTE)hIl2Cpp + OPHAHAGKHAA_KMIMGEDAMCE_OFFSET))(this, LJBPECKCCEA);
	}

	::System::Void CHLEALKAOJO()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + OPHAHAGKHAA_CHLEALKAOJO_OFFSET))(this);
	}
};
