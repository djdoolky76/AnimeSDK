#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/IGMAJIMGJDC.h"
#include "unitysdk/KECPLIFGOCJ.h"
#include "unitysdk/System/Object.h"

class CCPJCGIACMM;
namespace System { class Action; }
namespace System::Collections::Generic { template <typename T1, typename T2> class Dictionary_2; }
namespace System::Collections::Generic { template <typename T> class HashSet_1; }

#define KGAKLOCLBBD_BHLAEBMEOLO_OFFSET UNITYSDK_OFFSET(0x18DE6640)
#define KGAKLOCLBBD_BMNMLAIJJGF_OFFSET UNITYSDK_OFFSET(0x18DE6400)
#define KGAKLOCLBBD_CHLEALKAOJO_OFFSET UNITYSDK_OFFSET(0x18DE6580)
#define KGAKLOCLBBD_FINALIZE_OFFSET UNITYSDK_OFFSET(0x18DE6720)
#define KGAKLOCLBBD_FPMKEGMLNHG_OFFSET UNITYSDK_OFFSET(0x18DE6410)
#define KGAKLOCLBBD_IFDPKDOFOJD_OFFSET UNITYSDK_OFFSET(0x18DE68A0)
#define KGAKLOCLBBD_KMIMGEDAMCE_OFFSET UNITYSDK_OFFSET(0x18DE6B60)
#define KGAKLOCLBBD_LNFENFDLMIG_OFFSET UNITYSDK_OFFSET(0x18DE6050)
#define KGAKLOCLBBD_NAMKJOJBAOA_OFFSET UNITYSDK_OFFSET(0x18DE6B40)
#define KGAKLOCLBBD_OFHECOHPAKG_OFFSET UNITYSDK_OFFSET(0x18DE6030)
#define KGAKLOCLBBD_PHOADBJGFBE_OFFSET UNITYSDK_OFFSET(0x18DE6310)
#define KGAKLOCLBBD__CTOR_OFFSET UNITYSDK_OFFSET(0x18DE6850)

inline static constexpr unsigned int KGAKLOCLBBD_TypeDefinitionIndex = 12578;

class KGAKLOCLBBD : public ::System::Object
{
public:
	::System::Action* PLDOELOOFLL; // 0x10
	::Il2CppArray<::CCPJCGIACMM*>* OJMBOGGMIKO; // 0x18
	::IGMAJIMGJDC DHDJDGFNBOA; // 0x20
	::System::Collections::Generic::HashSet_1<::System::Int32>* LHINHLCKHNE; // 0x38
	::System::Collections::Generic::Dictionary_2<::System::Int32, ::System::Int32>* FLBOKGKPECD; // 0x40
	::System::Int32 IJDGGCANOFI; // 0x48
	::System::Boolean DLGKLGKOMHK; // 0x4C

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + KGAKLOCLBBD__CTOR_OFFSET))(this);
	}

	::System::Boolean OFHECOHPAKG()
	{
		return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + KGAKLOCLBBD_OFHECOHPAKG_OFFSET))(this);
	}

	::System::Void LNFENFDLMIG()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + KGAKLOCLBBD_LNFENFDLMIG_OFFSET))(this);
	}

	::System::Void FPMKEGMLNHG(::System::Action* EJGDHCIBCJH)
	{
		return ((::System::Void(*)(::PVOID, ::System::Action*))((::PBYTE)hIl2Cpp + KGAKLOCLBBD_FPMKEGMLNHG_OFFSET))(this, EJGDHCIBCJH);
	}

	::System::Void BMNMLAIJJGF(::KECPLIFGOCJ GFCJHNHLFEF)
	{
		return ((::System::Void(*)(::PVOID, ::KECPLIFGOCJ))((::PBYTE)hIl2Cpp + KGAKLOCLBBD_BMNMLAIJJGF_OFFSET))(this, GFCJHNHLFEF);
	}

	::System::Void PHOADBJGFBE()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + KGAKLOCLBBD_PHOADBJGFBE_OFFSET))(this);
	}

	::System::Void BHLAEBMEOLO()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + KGAKLOCLBBD_BHLAEBMEOLO_OFFSET))(this);
	}

	::System::Void Finalize()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + KGAKLOCLBBD_FINALIZE_OFFSET))(this);
	}

	::CCPJCGIACMM* IFDPKDOFOJD(::System::Int32 MGMDLMBEDJF)
	{
		return ((::CCPJCGIACMM*(*)(::PVOID, ::System::Int32))((::PBYTE)hIl2Cpp + KGAKLOCLBBD_IFDPKDOFOJD_OFFSET))(this, MGMDLMBEDJF);
	}

	::System::Void NAMKJOJBAOA()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + KGAKLOCLBBD_NAMKJOJBAOA_OFFSET))(this);
	}

	::System::Void CHLEALKAOJO()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + KGAKLOCLBBD_CHLEALKAOJO_OFFSET))(this);
	}

	::System::Void KMIMGEDAMCE(::Il2CppArray<::System::Byte>* LJBPECKCCEA)
	{
		return ((::System::Void(*)(::PVOID, ::Il2CppArray<::System::Byte>*))((::PBYTE)hIl2Cpp + KGAKLOCLBBD_KMIMGEDAMCE_OFFSET))(this, LJBPECKCCEA);
	}
};
