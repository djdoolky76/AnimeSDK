#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/FLOJKIGKEEM.h"
#include "unitysdk/KECPLIFGOCJ.h"
#include "unitysdk/System/Object.h"

class EJBPFNOMAPD;
namespace System { class Action; }
namespace System::Collections::Generic { template <typename T1, typename T2> class Dictionary_2; }

#define CNLGGBDJGDD_BHLAEBMEOLO_OFFSET UNITYSDK_OFFSET(0x15745290)
#define CNLGGBDJGDD_BMNMLAIJJGF_OFFSET UNITYSDK_OFFSET(0x15745060)
#define CNLGGBDJGDD_CHLEALKAOJO_OFFSET UNITYSDK_OFFSET(0x157451D0)
#define CNLGGBDJGDD_FINALIZE_OFFSET UNITYSDK_OFFSET(0x15745370)
#define CNLGGBDJGDD_FPMKEGMLNHG_OFFSET UNITYSDK_OFFSET(0x15745070)
#define CNLGGBDJGDD_IFDPKDOFOJD_OFFSET UNITYSDK_OFFSET(0x15745680)
#define CNLGGBDJGDD_KMIMGEDAMCE_OFFSET UNITYSDK_OFFSET(0x157454B0)
#define CNLGGBDJGDD_LNFENFDLMIG_OFFSET UNITYSDK_OFFSET(0x15744CC0)
#define CNLGGBDJGDD_NAMKJOJBAOA_OFFSET UNITYSDK_OFFSET(0x15745870)
#define CNLGGBDJGDD_OFHECOHPAKG_OFFSET UNITYSDK_OFFSET(0x15744CA0)
#define CNLGGBDJGDD_PHOADBJGFBE_OFFSET UNITYSDK_OFFSET(0x15744F80)
#define CNLGGBDJGDD__CTOR_OFFSET UNITYSDK_OFFSET(0x157454A0)

inline static constexpr unsigned int CNLGGBDJGDD_TypeDefinitionIndex = 11416;

class CNLGGBDJGDD : public ::System::Object
{
public:
	::Il2CppArray<::EJBPFNOMAPD*>* OJMBOGGMIKO; // 0x10
	::System::Collections::Generic::Dictionary_2<::System::Int32, ::System::Int32>* FLBOKGKPECD; // 0x18
	::System::Action* PLDOELOOFLL; // 0x20
	::FLOJKIGKEEM DHDJDGFNBOA; // 0x28
	::System::Boolean DLGKLGKOMHK; // 0x40
	::System::Byte _padding0[0x3];
	::System::Int32 IJDGGCANOFI; // 0x44

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CNLGGBDJGDD__CTOR_OFFSET))(this);
	}

	::System::Boolean OFHECOHPAKG()
	{
		return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + CNLGGBDJGDD_OFHECOHPAKG_OFFSET))(this);
	}

	::System::Void LNFENFDLMIG()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CNLGGBDJGDD_LNFENFDLMIG_OFFSET))(this);
	}

	::System::Void FPMKEGMLNHG(::System::Action* EJGDHCIBCJH)
	{
		return ((::System::Void(*)(::PVOID, ::System::Action*))((::PBYTE)hIl2Cpp + CNLGGBDJGDD_FPMKEGMLNHG_OFFSET))(this, EJGDHCIBCJH);
	}

	::System::Void BMNMLAIJJGF(::KECPLIFGOCJ GFCJHNHLFEF)
	{
		return ((::System::Void(*)(::PVOID, ::KECPLIFGOCJ))((::PBYTE)hIl2Cpp + CNLGGBDJGDD_BMNMLAIJJGF_OFFSET))(this, GFCJHNHLFEF);
	}

	::System::Void PHOADBJGFBE()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CNLGGBDJGDD_PHOADBJGFBE_OFFSET))(this);
	}

	::System::Void BHLAEBMEOLO()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CNLGGBDJGDD_BHLAEBMEOLO_OFFSET))(this);
	}

	::System::Void Finalize()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CNLGGBDJGDD_FINALIZE_OFFSET))(this);
	}

	::System::Void KMIMGEDAMCE(::Il2CppArray<::System::Byte>* LJBPECKCCEA)
	{
		return ((::System::Void(*)(::PVOID, ::Il2CppArray<::System::Byte>*))((::PBYTE)hIl2Cpp + CNLGGBDJGDD_KMIMGEDAMCE_OFFSET))(this, LJBPECKCCEA);
	}

	::System::Void CHLEALKAOJO()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CNLGGBDJGDD_CHLEALKAOJO_OFFSET))(this);
	}

	::EJBPFNOMAPD* IFDPKDOFOJD(::System::Int32 MGMDLMBEDJF)
	{
		return ((::EJBPFNOMAPD*(*)(::PVOID, ::System::Int32))((::PBYTE)hIl2Cpp + CNLGGBDJGDD_IFDPKDOFOJD_OFFSET))(this, MGMDLMBEDJF);
	}

	::System::Void NAMKJOJBAOA()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CNLGGBDJGDD_NAMKJOJBAOA_OFFSET))(this);
	}
};
