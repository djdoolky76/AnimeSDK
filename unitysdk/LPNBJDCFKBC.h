#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/KECPLIFGOCJ.h"
#include "unitysdk/PHMACFGNIFG.h"
#include "unitysdk/System/Object.h"

class HPJCMALDKAM;
namespace System { class Action; }
namespace System::Collections::Generic { template <typename T1, typename T2> class Dictionary_2; }

#define LPNBJDCFKBC_BHLAEBMEOLO_OFFSET UNITYSDK_OFFSET(0x19DADFD0)
#define LPNBJDCFKBC_BMNMLAIJJGF_OFFSET UNITYSDK_OFFSET(0x19DADDA0)
#define LPNBJDCFKBC_CHLEALKAOJO_OFFSET UNITYSDK_OFFSET(0x19DADF10)
#define LPNBJDCFKBC_FINALIZE_OFFSET UNITYSDK_OFFSET(0x19DAE0B0)
#define LPNBJDCFKBC_FPMKEGMLNHG_OFFSET UNITYSDK_OFFSET(0x19DADDB0)
#define LPNBJDCFKBC_IFDPKDOFOJD_OFFSET UNITYSDK_OFFSET(0x19DAE1F0)
#define LPNBJDCFKBC_KMIMGEDAMCE_OFFSET UNITYSDK_OFFSET(0x19DAE570)
#define LPNBJDCFKBC_LNFENFDLMIG_OFFSET UNITYSDK_OFFSET(0x19DAD930)
#define LPNBJDCFKBC_NAMKJOJBAOA_OFFSET UNITYSDK_OFFSET(0x19DAE3F0)
#define LPNBJDCFKBC_OFHECOHPAKG_OFFSET UNITYSDK_OFFSET(0x19DAD900)
#define LPNBJDCFKBC_PHOADBJGFBE_OFFSET UNITYSDK_OFFSET(0x19DADBF0)
#define LPNBJDCFKBC__CTOR_OFFSET UNITYSDK_OFFSET(0x19DAE1E0)

inline static constexpr unsigned int LPNBJDCFKBC_TypeDefinitionIndex = 12609;

class LPNBJDCFKBC : public ::System::Object
{
public:
	::System::Action* PLDOELOOFLL; // 0x10
	::Il2CppArray<::HPJCMALDKAM*>* OJMBOGGMIKO; // 0x18
	::System::Collections::Generic::Dictionary_2<::System::Int32, ::System::Int32>* FLBOKGKPECD; // 0x20
	::PHMACFGNIFG DHDJDGFNBOA; // 0x28
	::System::Int32 IJDGGCANOFI; // 0x40
	::System::Boolean DLGKLGKOMHK; // 0x44

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + LPNBJDCFKBC__CTOR_OFFSET))(this);
	}

	::System::Boolean OFHECOHPAKG()
	{
		return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + LPNBJDCFKBC_OFHECOHPAKG_OFFSET))(this);
	}

	::System::Void LNFENFDLMIG()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + LPNBJDCFKBC_LNFENFDLMIG_OFFSET))(this);
	}

	::System::Void FPMKEGMLNHG(::System::Action* EJGDHCIBCJH)
	{
		return ((::System::Void(*)(::PVOID, ::System::Action*))((::PBYTE)hIl2Cpp + LPNBJDCFKBC_FPMKEGMLNHG_OFFSET))(this, EJGDHCIBCJH);
	}

	::System::Void BMNMLAIJJGF(::KECPLIFGOCJ GFCJHNHLFEF)
	{
		return ((::System::Void(*)(::PVOID, ::KECPLIFGOCJ))((::PBYTE)hIl2Cpp + LPNBJDCFKBC_BMNMLAIJJGF_OFFSET))(this, GFCJHNHLFEF);
	}

	::System::Void PHOADBJGFBE()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + LPNBJDCFKBC_PHOADBJGFBE_OFFSET))(this);
	}

	::System::Void BHLAEBMEOLO()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + LPNBJDCFKBC_BHLAEBMEOLO_OFFSET))(this);
	}

	::System::Void Finalize()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + LPNBJDCFKBC_FINALIZE_OFFSET))(this);
	}

	::System::Void CHLEALKAOJO()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + LPNBJDCFKBC_CHLEALKAOJO_OFFSET))(this);
	}

	::HPJCMALDKAM* IFDPKDOFOJD(::System::Int32 MGMDLMBEDJF)
	{
		return ((::HPJCMALDKAM*(*)(::PVOID, ::System::Int32))((::PBYTE)hIl2Cpp + LPNBJDCFKBC_IFDPKDOFOJD_OFFSET))(this, MGMDLMBEDJF);
	}

	::System::Void KMIMGEDAMCE(::Il2CppArray<::System::Byte>* LJBPECKCCEA)
	{
		return ((::System::Void(*)(::PVOID, ::Il2CppArray<::System::Byte>*))((::PBYTE)hIl2Cpp + LPNBJDCFKBC_KMIMGEDAMCE_OFFSET))(this, LJBPECKCCEA);
	}

	::System::Void NAMKJOJBAOA()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + LPNBJDCFKBC_NAMKJOJBAOA_OFFSET))(this);
	}
};
