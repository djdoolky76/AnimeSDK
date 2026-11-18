#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/HCGMIGAFDHN.h"
#include "unitysdk/KECPLIFGOCJ.h"
#include "unitysdk/System/Object.h"

class OAPMNJDMNMK;
namespace System { class Action; }
namespace System::Collections::Generic { template <typename T1, typename T2> class Dictionary_2; }
namespace System::Collections::Generic { template <typename T> class HashSet_1; }

#define GDEJCPGDNHD_BHLAEBMEOLO_OFFSET UNITYSDK_OFFSET(0x15A7F430)
#define GDEJCPGDNHD_BMNMLAIJJGF_OFFSET UNITYSDK_OFFSET(0x15A7F1B0)
#define GDEJCPGDNHD_CHLEALKAOJO_OFFSET UNITYSDK_OFFSET(0x15A7F1C0)
#define GDEJCPGDNHD_FINALIZE_OFFSET UNITYSDK_OFFSET(0x15A7F280)
#define GDEJCPGDNHD_FPMKEGMLNHG_OFFSET UNITYSDK_OFFSET(0x15A7F3B0)
#define GDEJCPGDNHD_IFDPKDOFOJD_OFFSET UNITYSDK_OFFSET(0x15A7F560)
#define GDEJCPGDNHD_KMIMGEDAMCE_OFFSET UNITYSDK_OFFSET(0x15A7F7B0)
#define GDEJCPGDNHD_LNFENFDLMIG_OFFSET UNITYSDK_OFFSET(0x15A7EE10)
#define GDEJCPGDNHD_NAMKJOJBAOA_OFFSET UNITYSDK_OFFSET(0x15A7F790)
#define GDEJCPGDNHD_OFHECOHPAKG_OFFSET UNITYSDK_OFFSET(0x15A7EDF0)
#define GDEJCPGDNHD_PHOADBJGFBE_OFFSET UNITYSDK_OFFSET(0x15A7F0D0)
#define GDEJCPGDNHD__CTOR_OFFSET UNITYSDK_OFFSET(0x15A7F510)

inline static constexpr unsigned int GDEJCPGDNHD_TypeDefinitionIndex = 17377;

class GDEJCPGDNHD : public ::System::Object
{
public:
	::System::Action* PLDOELOOFLL; // 0x10
	::System::Collections::Generic::Dictionary_2<::System::Int32, ::System::Int32>* FLBOKGKPECD; // 0x18
	::Il2CppArray<::OAPMNJDMNMK*>* OJMBOGGMIKO; // 0x20
	::HCGMIGAFDHN DHDJDGFNBOA; // 0x28
	::System::Collections::Generic::HashSet_1<::System::Int32>* LHINHLCKHNE; // 0x40
	::System::Boolean DLGKLGKOMHK; // 0x48
	::System::Byte _padding0[0x3];
	::System::Int32 IJDGGCANOFI; // 0x4C

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + GDEJCPGDNHD__CTOR_OFFSET))(this);
	}

	::System::Boolean OFHECOHPAKG()
	{
		return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + GDEJCPGDNHD_OFHECOHPAKG_OFFSET))(this);
	}

	::System::Void LNFENFDLMIG()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + GDEJCPGDNHD_LNFENFDLMIG_OFFSET))(this);
	}

	::System::Void PHOADBJGFBE()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + GDEJCPGDNHD_PHOADBJGFBE_OFFSET))(this);
	}

	::System::Void Finalize()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + GDEJCPGDNHD_FINALIZE_OFFSET))(this);
	}

	::System::Void FPMKEGMLNHG(::System::Action* EJGDHCIBCJH)
	{
		return ((::System::Void(*)(::PVOID, ::System::Action*))((::PBYTE)hIl2Cpp + GDEJCPGDNHD_FPMKEGMLNHG_OFFSET))(this, EJGDHCIBCJH);
	}

	::System::Void BMNMLAIJJGF(::KECPLIFGOCJ GFCJHNHLFEF)
	{
		return ((::System::Void(*)(::PVOID, ::KECPLIFGOCJ))((::PBYTE)hIl2Cpp + GDEJCPGDNHD_BMNMLAIJJGF_OFFSET))(this, GFCJHNHLFEF);
	}

	::System::Void BHLAEBMEOLO()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + GDEJCPGDNHD_BHLAEBMEOLO_OFFSET))(this);
	}

	::OAPMNJDMNMK* IFDPKDOFOJD(::System::Int32 MGMDLMBEDJF)
	{
		return ((::OAPMNJDMNMK*(*)(::PVOID, ::System::Int32))((::PBYTE)hIl2Cpp + GDEJCPGDNHD_IFDPKDOFOJD_OFFSET))(this, MGMDLMBEDJF);
	}

	::System::Void KMIMGEDAMCE(::Il2CppArray<::System::Byte>* LJBPECKCCEA)
	{
		return ((::System::Void(*)(::PVOID, ::Il2CppArray<::System::Byte>*))((::PBYTE)hIl2Cpp + GDEJCPGDNHD_KMIMGEDAMCE_OFFSET))(this, LJBPECKCCEA);
	}

	::System::Void NAMKJOJBAOA()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + GDEJCPGDNHD_NAMKJOJBAOA_OFFSET))(this);
	}

	::System::Void CHLEALKAOJO()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + GDEJCPGDNHD_CHLEALKAOJO_OFFSET))(this);
	}
};
