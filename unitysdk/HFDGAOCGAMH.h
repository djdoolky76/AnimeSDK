#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/KECPLIFGOCJ.h"
#include "unitysdk/NPHBAMPEBNG.h"
#include "unitysdk/System/Object.h"

class OPOCJPJBPLO;
namespace System { class Action; }
namespace System::Collections::Generic { template <typename T1, typename T2> class Dictionary_2; }

#define HFDGAOCGAMH_BHLAEBMEOLO_OFFSET UNITYSDK_OFFSET(0x1A4EC670)
#define HFDGAOCGAMH_BMNMLAIJJGF_OFFSET UNITYSDK_OFFSET(0x1A4EC430)
#define HFDGAOCGAMH_CHLEALKAOJO_OFFSET UNITYSDK_OFFSET(0x1A4EC5B0)
#define HFDGAOCGAMH_FINALIZE_OFFSET UNITYSDK_OFFSET(0x1A4EC750)
#define HFDGAOCGAMH_FPMKEGMLNHG_OFFSET UNITYSDK_OFFSET(0x1A4EC440)
#define HFDGAOCGAMH_IFDPKDOFOJD_OFFSET UNITYSDK_OFFSET(0x1A4ECA60)
#define HFDGAOCGAMH_KMIMGEDAMCE_OFFSET UNITYSDK_OFFSET(0x1A4EC890)
#define HFDGAOCGAMH_LNFENFDLMIG_OFFSET UNITYSDK_OFFSET(0x1A4EC080)
#define HFDGAOCGAMH_NAMKJOJBAOA_OFFSET UNITYSDK_OFFSET(0x1A4ECC50)
#define HFDGAOCGAMH_OFHECOHPAKG_OFFSET UNITYSDK_OFFSET(0x1A4EC060)
#define HFDGAOCGAMH_PHOADBJGFBE_OFFSET UNITYSDK_OFFSET(0x1A4EC340)
#define HFDGAOCGAMH__CTOR_OFFSET UNITYSDK_OFFSET(0x1A4EC880)

inline static constexpr unsigned int HFDGAOCGAMH_TypeDefinitionIndex = 10547;

class HFDGAOCGAMH : public ::System::Object
{
public:
	::Il2CppArray<::OPOCJPJBPLO*>* OJMBOGGMIKO; // 0x10
	::NPHBAMPEBNG DHDJDGFNBOA; // 0x18
	::System::Action* PLDOELOOFLL; // 0x30
	::System::Collections::Generic::Dictionary_2<::System::Int32, ::System::Int32>* FLBOKGKPECD; // 0x38
	::System::Boolean DLGKLGKOMHK; // 0x40
	::System::Byte _padding0[0x3];
	::System::Int32 IJDGGCANOFI; // 0x44

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + HFDGAOCGAMH__CTOR_OFFSET))(this);
	}

	::System::Boolean OFHECOHPAKG()
	{
		return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + HFDGAOCGAMH_OFHECOHPAKG_OFFSET))(this);
	}

	::System::Void LNFENFDLMIG()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + HFDGAOCGAMH_LNFENFDLMIG_OFFSET))(this);
	}

	::System::Void FPMKEGMLNHG(::System::Action* EJGDHCIBCJH)
	{
		return ((::System::Void(*)(::PVOID, ::System::Action*))((::PBYTE)hIl2Cpp + HFDGAOCGAMH_FPMKEGMLNHG_OFFSET))(this, EJGDHCIBCJH);
	}

	::System::Void BMNMLAIJJGF(::KECPLIFGOCJ GFCJHNHLFEF)
	{
		return ((::System::Void(*)(::PVOID, ::KECPLIFGOCJ))((::PBYTE)hIl2Cpp + HFDGAOCGAMH_BMNMLAIJJGF_OFFSET))(this, GFCJHNHLFEF);
	}

	::System::Void PHOADBJGFBE()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + HFDGAOCGAMH_PHOADBJGFBE_OFFSET))(this);
	}

	::System::Void BHLAEBMEOLO()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + HFDGAOCGAMH_BHLAEBMEOLO_OFFSET))(this);
	}

	::System::Void Finalize()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + HFDGAOCGAMH_FINALIZE_OFFSET))(this);
	}

	::System::Void KMIMGEDAMCE(::Il2CppArray<::System::Byte>* LJBPECKCCEA)
	{
		return ((::System::Void(*)(::PVOID, ::Il2CppArray<::System::Byte>*))((::PBYTE)hIl2Cpp + HFDGAOCGAMH_KMIMGEDAMCE_OFFSET))(this, LJBPECKCCEA);
	}

	::OPOCJPJBPLO* IFDPKDOFOJD(::System::Int32 MGMDLMBEDJF)
	{
		return ((::OPOCJPJBPLO*(*)(::PVOID, ::System::Int32))((::PBYTE)hIl2Cpp + HFDGAOCGAMH_IFDPKDOFOJD_OFFSET))(this, MGMDLMBEDJF);
	}

	::System::Void CHLEALKAOJO()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + HFDGAOCGAMH_CHLEALKAOJO_OFFSET))(this);
	}

	::System::Void NAMKJOJBAOA()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + HFDGAOCGAMH_NAMKJOJBAOA_OFFSET))(this);
	}
};
