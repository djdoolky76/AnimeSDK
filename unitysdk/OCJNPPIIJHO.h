#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/DMNIKMCIEBP.h"
#include "unitysdk/KECPLIFGOCJ.h"
#include "unitysdk/System/Object.h"

class IEDLMAOMMMC;
namespace System { class Action; }
namespace System::Collections::Generic { template <typename T1, typename T2> class Dictionary_2; }

#define OCJNPPIIJHO_BHLAEBMEOLO_OFFSET UNITYSDK_OFFSET(0x1C09C180)
#define OCJNPPIIJHO_BMNMLAIJJGF_OFFSET UNITYSDK_OFFSET(0x1C09BF40)
#define OCJNPPIIJHO_CHLEALKAOJO_OFFSET UNITYSDK_OFFSET(0x1C09C0C0)
#define OCJNPPIIJHO_FINALIZE_OFFSET UNITYSDK_OFFSET(0x1C09C260)
#define OCJNPPIIJHO_FPMKEGMLNHG_OFFSET UNITYSDK_OFFSET(0x1C09BF50)
#define OCJNPPIIJHO_IFDPKDOFOJD_OFFSET UNITYSDK_OFFSET(0x1C09C3C0)
#define OCJNPPIIJHO_KMIMGEDAMCE_OFFSET UNITYSDK_OFFSET(0x1C09C5B0)
#define OCJNPPIIJHO_LNFENFDLMIG_OFFSET UNITYSDK_OFFSET(0x1C09BB90)
#define OCJNPPIIJHO_NAMKJOJBAOA_OFFSET UNITYSDK_OFFSET(0x1C09C3A0)
#define OCJNPPIIJHO_OFHECOHPAKG_OFFSET UNITYSDK_OFFSET(0x1C09BB70)
#define OCJNPPIIJHO_PHOADBJGFBE_OFFSET UNITYSDK_OFFSET(0x1C09BE50)
#define OCJNPPIIJHO__CTOR_OFFSET UNITYSDK_OFFSET(0x1C09C390)

inline static constexpr unsigned int OCJNPPIIJHO_TypeDefinitionIndex = 16094;

class OCJNPPIIJHO : public ::System::Object
{
public:
	::Il2CppArray<::IEDLMAOMMMC*>* OJMBOGGMIKO; // 0x10
	::System::Action* PLDOELOOFLL; // 0x18
	::DMNIKMCIEBP DHDJDGFNBOA; // 0x20
	::System::Collections::Generic::Dictionary_2<::System::Int32, ::System::Int32>* FLBOKGKPECD; // 0x38
	::System::Boolean DLGKLGKOMHK; // 0x40
	::System::Byte _padding0[0x3];
	::System::Int32 IJDGGCANOFI; // 0x44

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + OCJNPPIIJHO__CTOR_OFFSET))(this);
	}

	::System::Boolean OFHECOHPAKG()
	{
		return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + OCJNPPIIJHO_OFHECOHPAKG_OFFSET))(this);
	}

	::System::Void LNFENFDLMIG()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + OCJNPPIIJHO_LNFENFDLMIG_OFFSET))(this);
	}

	::System::Void FPMKEGMLNHG(::System::Action* EJGDHCIBCJH)
	{
		return ((::System::Void(*)(::PVOID, ::System::Action*))((::PBYTE)hIl2Cpp + OCJNPPIIJHO_FPMKEGMLNHG_OFFSET))(this, EJGDHCIBCJH);
	}

	::System::Void BMNMLAIJJGF(::KECPLIFGOCJ GFCJHNHLFEF)
	{
		return ((::System::Void(*)(::PVOID, ::KECPLIFGOCJ))((::PBYTE)hIl2Cpp + OCJNPPIIJHO_BMNMLAIJJGF_OFFSET))(this, GFCJHNHLFEF);
	}

	::System::Void PHOADBJGFBE()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + OCJNPPIIJHO_PHOADBJGFBE_OFFSET))(this);
	}

	::System::Void BHLAEBMEOLO()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + OCJNPPIIJHO_BHLAEBMEOLO_OFFSET))(this);
	}

	::System::Void Finalize()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + OCJNPPIIJHO_FINALIZE_OFFSET))(this);
	}

	::System::Void NAMKJOJBAOA()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + OCJNPPIIJHO_NAMKJOJBAOA_OFFSET))(this);
	}

	::IEDLMAOMMMC* IFDPKDOFOJD(::System::Int32 MGMDLMBEDJF)
	{
		return ((::IEDLMAOMMMC*(*)(::PVOID, ::System::Int32))((::PBYTE)hIl2Cpp + OCJNPPIIJHO_IFDPKDOFOJD_OFFSET))(this, MGMDLMBEDJF);
	}

	::System::Void CHLEALKAOJO()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + OCJNPPIIJHO_CHLEALKAOJO_OFFSET))(this);
	}

	::System::Void KMIMGEDAMCE(::Il2CppArray<::System::Byte>* LJBPECKCCEA)
	{
		return ((::System::Void(*)(::PVOID, ::Il2CppArray<::System::Byte>*))((::PBYTE)hIl2Cpp + OCJNPPIIJHO_KMIMGEDAMCE_OFFSET))(this, LJBPECKCCEA);
	}
};
