#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/KECPLIFGOCJ.h"
#include "unitysdk/LNOIFMDOGAB.h"
#include "unitysdk/System/Object.h"

class PDKNOJOJLFF;
namespace System { class Action; }
namespace System::Collections::Generic { template <typename T1, typename T2> class Dictionary_2; }
namespace System::Collections::Generic { template <typename T> class HashSet_1; }

#define GJDEPHIGPKB_BHLAEBMEOLO_OFFSET UNITYSDK_OFFSET(0x1664BBE0)
#define GJDEPHIGPKB_BMNMLAIJJGF_OFFSET UNITYSDK_OFFSET(0x1664B9A0)
#define GJDEPHIGPKB_CHLEALKAOJO_OFFSET UNITYSDK_OFFSET(0x1664BB20)
#define GJDEPHIGPKB_FINALIZE_OFFSET UNITYSDK_OFFSET(0x1664BCC0)
#define GJDEPHIGPKB_FPMKEGMLNHG_OFFSET UNITYSDK_OFFSET(0x1664B9B0)
#define GJDEPHIGPKB_IFDPKDOFOJD_OFFSET UNITYSDK_OFFSET(0x1664C030)
#define GJDEPHIGPKB_KMIMGEDAMCE_OFFSET UNITYSDK_OFFSET(0x1664BE40)
#define GJDEPHIGPKB_LNFENFDLMIG_OFFSET UNITYSDK_OFFSET(0x1664B5F0)
#define GJDEPHIGPKB_NAMKJOJBAOA_OFFSET UNITYSDK_OFFSET(0x1664C010)
#define GJDEPHIGPKB_OFHECOHPAKG_OFFSET UNITYSDK_OFFSET(0x1664B5D0)
#define GJDEPHIGPKB_PHOADBJGFBE_OFFSET UNITYSDK_OFFSET(0x1664B8B0)
#define GJDEPHIGPKB__CTOR_OFFSET UNITYSDK_OFFSET(0x1664BDF0)

inline static constexpr unsigned int GJDEPHIGPKB_TypeDefinitionIndex = 14257;

class GJDEPHIGPKB : public ::System::Object
{
public:
	::System::Action* PLDOELOOFLL; // 0x10
	::System::Collections::Generic::HashSet_1<::System::Int32>* LHINHLCKHNE; // 0x18
	::Il2CppArray<::PDKNOJOJLFF*>* OJMBOGGMIKO; // 0x20
	::LNOIFMDOGAB DHDJDGFNBOA; // 0x28
	::System::Collections::Generic::Dictionary_2<::System::Int32, ::System::Int32>* FLBOKGKPECD; // 0x40
	::System::Boolean DLGKLGKOMHK; // 0x48
	::System::Byte _padding0[0x3];
	::System::Int32 IJDGGCANOFI; // 0x4C

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + GJDEPHIGPKB__CTOR_OFFSET))(this);
	}

	::System::Boolean OFHECOHPAKG()
	{
		return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + GJDEPHIGPKB_OFHECOHPAKG_OFFSET))(this);
	}

	::System::Void LNFENFDLMIG()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + GJDEPHIGPKB_LNFENFDLMIG_OFFSET))(this);
	}

	::System::Void FPMKEGMLNHG(::System::Action* EJGDHCIBCJH)
	{
		return ((::System::Void(*)(::PVOID, ::System::Action*))((::PBYTE)hIl2Cpp + GJDEPHIGPKB_FPMKEGMLNHG_OFFSET))(this, EJGDHCIBCJH);
	}

	::System::Void BMNMLAIJJGF(::KECPLIFGOCJ GFCJHNHLFEF)
	{
		return ((::System::Void(*)(::PVOID, ::KECPLIFGOCJ))((::PBYTE)hIl2Cpp + GJDEPHIGPKB_BMNMLAIJJGF_OFFSET))(this, GFCJHNHLFEF);
	}

	::System::Void PHOADBJGFBE()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + GJDEPHIGPKB_PHOADBJGFBE_OFFSET))(this);
	}

	::System::Void BHLAEBMEOLO()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + GJDEPHIGPKB_BHLAEBMEOLO_OFFSET))(this);
	}

	::System::Void Finalize()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + GJDEPHIGPKB_FINALIZE_OFFSET))(this);
	}

	::System::Void CHLEALKAOJO()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + GJDEPHIGPKB_CHLEALKAOJO_OFFSET))(this);
	}

	::System::Void KMIMGEDAMCE(::Il2CppArray<::System::Byte>* LJBPECKCCEA)
	{
		return ((::System::Void(*)(::PVOID, ::Il2CppArray<::System::Byte>*))((::PBYTE)hIl2Cpp + GJDEPHIGPKB_KMIMGEDAMCE_OFFSET))(this, LJBPECKCCEA);
	}

	::System::Void NAMKJOJBAOA()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + GJDEPHIGPKB_NAMKJOJBAOA_OFFSET))(this);
	}

	::PDKNOJOJLFF* IFDPKDOFOJD(::System::Int32 MGMDLMBEDJF)
	{
		return ((::PDKNOJOJLFF*(*)(::PVOID, ::System::Int32))((::PBYTE)hIl2Cpp + GJDEPHIGPKB_IFDPKDOFOJD_OFFSET))(this, MGMDLMBEDJF);
	}
};
