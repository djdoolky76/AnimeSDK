#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/KECPLIFGOCJ.h"
#include "unitysdk/LGGAHPGJMJK.h"
#include "unitysdk/System/Object.h"

class DIPPCKLKAJJ;
namespace System { class Action; }
namespace System::Collections::Generic { template <typename T1, typename T2> class Dictionary_2; }

#define DPBLNKEIEHA_BHLAEBMEOLO_OFFSET UNITYSDK_OFFSET(0x1A559B00)
#define DPBLNKEIEHA_BMNMLAIJJGF_OFFSET UNITYSDK_OFFSET(0x1A5598C0)
#define DPBLNKEIEHA_CHLEALKAOJO_OFFSET UNITYSDK_OFFSET(0x1A559A40)
#define DPBLNKEIEHA_FINALIZE_OFFSET UNITYSDK_OFFSET(0x1A559BE0)
#define DPBLNKEIEHA_FPMKEGMLNHG_OFFSET UNITYSDK_OFFSET(0x1A5598D0)
#define DPBLNKEIEHA_IFDPKDOFOJD_OFFSET UNITYSDK_OFFSET(0x1A559EE0)
#define DPBLNKEIEHA_KMIMGEDAMCE_OFFSET UNITYSDK_OFFSET(0x1A559D40)
#define DPBLNKEIEHA_LNFENFDLMIG_OFFSET UNITYSDK_OFFSET(0x1A559540)
#define DPBLNKEIEHA_NAMKJOJBAOA_OFFSET UNITYSDK_OFFSET(0x1A559D20)
#define DPBLNKEIEHA_OFHECOHPAKG_OFFSET UNITYSDK_OFFSET(0x1A559520)
#define DPBLNKEIEHA_PHOADBJGFBE_OFFSET UNITYSDK_OFFSET(0x1A5597D0)
#define DPBLNKEIEHA__CTOR_OFFSET UNITYSDK_OFFSET(0x1A559D10)

inline static constexpr unsigned int DPBLNKEIEHA_TypeDefinitionIndex = 17285;

class DPBLNKEIEHA : public ::System::Object
{
public:
	::Il2CppArray<::DIPPCKLKAJJ*>* OJMBOGGMIKO; // 0x10
	::System::Action* PLDOELOOFLL; // 0x18
	::System::Collections::Generic::Dictionary_2<::System::Int32, ::System::Collections::Generic::Dictionary_2<::System::Int32, ::System::Int32>*>* FLBOKGKPECD; // 0x20
	::LGGAHPGJMJK DHDJDGFNBOA; // 0x28
	::System::Boolean DLGKLGKOMHK; // 0x40
	::System::Byte _padding0[0x3];
	::System::Int32 IJDGGCANOFI; // 0x44

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + DPBLNKEIEHA__CTOR_OFFSET))(this);
	}

	::System::Boolean OFHECOHPAKG()
	{
		return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + DPBLNKEIEHA_OFHECOHPAKG_OFFSET))(this);
	}

	::System::Void LNFENFDLMIG()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + DPBLNKEIEHA_LNFENFDLMIG_OFFSET))(this);
	}

	::System::Void FPMKEGMLNHG(::System::Action* EJGDHCIBCJH)
	{
		return ((::System::Void(*)(::PVOID, ::System::Action*))((::PBYTE)hIl2Cpp + DPBLNKEIEHA_FPMKEGMLNHG_OFFSET))(this, EJGDHCIBCJH);
	}

	::System::Void BMNMLAIJJGF(::KECPLIFGOCJ GFCJHNHLFEF)
	{
		return ((::System::Void(*)(::PVOID, ::KECPLIFGOCJ))((::PBYTE)hIl2Cpp + DPBLNKEIEHA_BMNMLAIJJGF_OFFSET))(this, GFCJHNHLFEF);
	}

	::System::Void PHOADBJGFBE()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + DPBLNKEIEHA_PHOADBJGFBE_OFFSET))(this);
	}

	::System::Void BHLAEBMEOLO()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + DPBLNKEIEHA_BHLAEBMEOLO_OFFSET))(this);
	}

	::System::Void Finalize()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + DPBLNKEIEHA_FINALIZE_OFFSET))(this);
	}

	::System::Void NAMKJOJBAOA()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + DPBLNKEIEHA_NAMKJOJBAOA_OFFSET))(this);
	}

	::System::Void KMIMGEDAMCE(::Il2CppArray<::System::Byte>* LJBPECKCCEA)
	{
		return ((::System::Void(*)(::PVOID, ::Il2CppArray<::System::Byte>*))((::PBYTE)hIl2Cpp + DPBLNKEIEHA_KMIMGEDAMCE_OFFSET))(this, LJBPECKCCEA);
	}

	::DIPPCKLKAJJ* IFDPKDOFOJD(::System::Int32 EBCCPPJHLND, ::System::Int32 HFKIDEMMMBN)
	{
		return ((::DIPPCKLKAJJ*(*)(::PVOID, ::System::Int32, ::System::Int32))((::PBYTE)hIl2Cpp + DPBLNKEIEHA_IFDPKDOFOJD_OFFSET))(this, EBCCPPJHLND, HFKIDEMMMBN);
	}

	::System::Void CHLEALKAOJO()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + DPBLNKEIEHA_CHLEALKAOJO_OFFSET))(this);
	}
};
