#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/IFINCOLPOJD.h"
#include "unitysdk/KECPLIFGOCJ.h"
#include "unitysdk/System/Object.h"

class AANGHCDLDJA;
namespace System { class Action; }
namespace System::Collections::Generic { template <typename T1, typename T2> class Dictionary_2; }

#define KEHDAMMODOP_BHLAEBMEOLO_OFFSET UNITYSDK_OFFSET(0x1A509920)
#define KEHDAMMODOP_BMNMLAIJJGF_OFFSET UNITYSDK_OFFSET(0x1A5096F0)
#define KEHDAMMODOP_CHLEALKAOJO_OFFSET UNITYSDK_OFFSET(0x1A509860)
#define KEHDAMMODOP_FINALIZE_OFFSET UNITYSDK_OFFSET(0x1A509A00)
#define KEHDAMMODOP_FPMKEGMLNHG_OFFSET UNITYSDK_OFFSET(0x1A509700)
#define KEHDAMMODOP_IFDPKDOFOJD_OFFSET UNITYSDK_OFFSET(0x1A509D10)
#define KEHDAMMODOP_KMIMGEDAMCE_OFFSET UNITYSDK_OFFSET(0x1A509B40)
#define KEHDAMMODOP_LNFENFDLMIG_OFFSET UNITYSDK_OFFSET(0x1A509350)
#define KEHDAMMODOP_NAMKJOJBAOA_OFFSET UNITYSDK_OFFSET(0x1A509F00)
#define KEHDAMMODOP_OFHECOHPAKG_OFFSET UNITYSDK_OFFSET(0x1A509330)
#define KEHDAMMODOP_PHOADBJGFBE_OFFSET UNITYSDK_OFFSET(0x1A509610)
#define KEHDAMMODOP__CTOR_OFFSET UNITYSDK_OFFSET(0x1A509B30)

inline static constexpr unsigned int KEHDAMMODOP_TypeDefinitionIndex = 11746;

class KEHDAMMODOP : public ::System::Object
{
public:
	::System::Action* PLDOELOOFLL; // 0x10
	::IFINCOLPOJD DHDJDGFNBOA; // 0x18
	::Il2CppArray<::AANGHCDLDJA*>* OJMBOGGMIKO; // 0x30
	::System::Collections::Generic::Dictionary_2<::System::Int32, ::System::Int32>* FLBOKGKPECD; // 0x38
	::System::Int32 IJDGGCANOFI; // 0x40
	::System::Boolean DLGKLGKOMHK; // 0x44

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + KEHDAMMODOP__CTOR_OFFSET))(this);
	}

	::System::Boolean OFHECOHPAKG()
	{
		return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + KEHDAMMODOP_OFHECOHPAKG_OFFSET))(this);
	}

	::System::Void LNFENFDLMIG()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + KEHDAMMODOP_LNFENFDLMIG_OFFSET))(this);
	}

	::System::Void FPMKEGMLNHG(::System::Action* EJGDHCIBCJH)
	{
		return ((::System::Void(*)(::PVOID, ::System::Action*))((::PBYTE)hIl2Cpp + KEHDAMMODOP_FPMKEGMLNHG_OFFSET))(this, EJGDHCIBCJH);
	}

	::System::Void BMNMLAIJJGF(::KECPLIFGOCJ GFCJHNHLFEF)
	{
		return ((::System::Void(*)(::PVOID, ::KECPLIFGOCJ))((::PBYTE)hIl2Cpp + KEHDAMMODOP_BMNMLAIJJGF_OFFSET))(this, GFCJHNHLFEF);
	}

	::System::Void PHOADBJGFBE()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + KEHDAMMODOP_PHOADBJGFBE_OFFSET))(this);
	}

	::System::Void BHLAEBMEOLO()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + KEHDAMMODOP_BHLAEBMEOLO_OFFSET))(this);
	}

	::System::Void Finalize()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + KEHDAMMODOP_FINALIZE_OFFSET))(this);
	}

	::System::Void KMIMGEDAMCE(::Il2CppArray<::System::Byte>* LJBPECKCCEA)
	{
		return ((::System::Void(*)(::PVOID, ::Il2CppArray<::System::Byte>*))((::PBYTE)hIl2Cpp + KEHDAMMODOP_KMIMGEDAMCE_OFFSET))(this, LJBPECKCCEA);
	}

	::AANGHCDLDJA* IFDPKDOFOJD(::System::Int32 MGMDLMBEDJF)
	{
		return ((::AANGHCDLDJA*(*)(::PVOID, ::System::Int32))((::PBYTE)hIl2Cpp + KEHDAMMODOP_IFDPKDOFOJD_OFFSET))(this, MGMDLMBEDJF);
	}

	::System::Void NAMKJOJBAOA()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + KEHDAMMODOP_NAMKJOJBAOA_OFFSET))(this);
	}

	::System::Void CHLEALKAOJO()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + KEHDAMMODOP_CHLEALKAOJO_OFFSET))(this);
	}
};
