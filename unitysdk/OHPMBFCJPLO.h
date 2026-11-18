#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/CIHNPLMOPNM.h"
#include "unitysdk/KECPLIFGOCJ.h"
#include "unitysdk/System/Object.h"

class HMPBOKPPBOC;
namespace System { class Action; }
namespace System::Collections::Generic { template <typename T1, typename T2> class Dictionary_2; }
namespace System::Collections::Generic { template <typename T> class HashSet_1; }

#define OHPMBFCJPLO_BHLAEBMEOLO_OFFSET UNITYSDK_OFFSET(0x1C0A41D0)
#define OHPMBFCJPLO_BMNMLAIJJGF_OFFSET UNITYSDK_OFFSET(0x1C0A3F90)
#define OHPMBFCJPLO_CHLEALKAOJO_OFFSET UNITYSDK_OFFSET(0x1C0A4110)
#define OHPMBFCJPLO_FINALIZE_OFFSET UNITYSDK_OFFSET(0x1C0A42B0)
#define OHPMBFCJPLO_FPMKEGMLNHG_OFFSET UNITYSDK_OFFSET(0x1C0A3FA0)
#define OHPMBFCJPLO_IFDPKDOFOJD_OFFSET UNITYSDK_OFFSET(0x1C0A4430)
#define OHPMBFCJPLO_KMIMGEDAMCE_OFFSET UNITYSDK_OFFSET(0x1C0A4680)
#define OHPMBFCJPLO_LNFENFDLMIG_OFFSET UNITYSDK_OFFSET(0x1C0A3BE0)
#define OHPMBFCJPLO_NAMKJOJBAOA_OFFSET UNITYSDK_OFFSET(0x1C0A4660)
#define OHPMBFCJPLO_OFHECOHPAKG_OFFSET UNITYSDK_OFFSET(0x1C0A3BC0)
#define OHPMBFCJPLO_PHOADBJGFBE_OFFSET UNITYSDK_OFFSET(0x1C0A3EA0)
#define OHPMBFCJPLO__CTOR_OFFSET UNITYSDK_OFFSET(0x1C0A43E0)

inline static constexpr unsigned int OHPMBFCJPLO_TypeDefinitionIndex = 13405;

class OHPMBFCJPLO : public ::System::Object
{
public:
	::Il2CppArray<::HMPBOKPPBOC*>* OJMBOGGMIKO; // 0x10
	::CIHNPLMOPNM DHDJDGFNBOA; // 0x18
	::System::Collections::Generic::HashSet_1<::System::Int32>* LHINHLCKHNE; // 0x30
	::System::Collections::Generic::Dictionary_2<::System::Int32, ::System::Int32>* FLBOKGKPECD; // 0x38
	::System::Action* PLDOELOOFLL; // 0x40
	::System::Boolean DLGKLGKOMHK; // 0x48
	::System::Byte _padding0[0x3];
	::System::Int32 IJDGGCANOFI; // 0x4C

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + OHPMBFCJPLO__CTOR_OFFSET))(this);
	}

	::System::Boolean OFHECOHPAKG()
	{
		return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + OHPMBFCJPLO_OFHECOHPAKG_OFFSET))(this);
	}

	::System::Void LNFENFDLMIG()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + OHPMBFCJPLO_LNFENFDLMIG_OFFSET))(this);
	}

	::System::Void FPMKEGMLNHG(::System::Action* EJGDHCIBCJH)
	{
		return ((::System::Void(*)(::PVOID, ::System::Action*))((::PBYTE)hIl2Cpp + OHPMBFCJPLO_FPMKEGMLNHG_OFFSET))(this, EJGDHCIBCJH);
	}

	::System::Void BMNMLAIJJGF(::KECPLIFGOCJ GFCJHNHLFEF)
	{
		return ((::System::Void(*)(::PVOID, ::KECPLIFGOCJ))((::PBYTE)hIl2Cpp + OHPMBFCJPLO_BMNMLAIJJGF_OFFSET))(this, GFCJHNHLFEF);
	}

	::System::Void PHOADBJGFBE()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + OHPMBFCJPLO_PHOADBJGFBE_OFFSET))(this);
	}

	::System::Void BHLAEBMEOLO()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + OHPMBFCJPLO_BHLAEBMEOLO_OFFSET))(this);
	}

	::System::Void Finalize()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + OHPMBFCJPLO_FINALIZE_OFFSET))(this);
	}

	::HMPBOKPPBOC* IFDPKDOFOJD(::System::Int32 MGMDLMBEDJF)
	{
		return ((::HMPBOKPPBOC*(*)(::PVOID, ::System::Int32))((::PBYTE)hIl2Cpp + OHPMBFCJPLO_IFDPKDOFOJD_OFFSET))(this, MGMDLMBEDJF);
	}

	::System::Void NAMKJOJBAOA()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + OHPMBFCJPLO_NAMKJOJBAOA_OFFSET))(this);
	}

	::System::Void KMIMGEDAMCE(::Il2CppArray<::System::Byte>* LJBPECKCCEA)
	{
		return ((::System::Void(*)(::PVOID, ::Il2CppArray<::System::Byte>*))((::PBYTE)hIl2Cpp + OHPMBFCJPLO_KMIMGEDAMCE_OFFSET))(this, LJBPECKCCEA);
	}

	::System::Void CHLEALKAOJO()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + OHPMBFCJPLO_CHLEALKAOJO_OFFSET))(this);
	}
};
