#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/IIMMFICOGEP.h"
#include "unitysdk/KECPLIFGOCJ.h"
#include "unitysdk/System/Object.h"

class PGPGCALLBHK;
namespace System { class Action; }
namespace System::Collections::Generic { template <typename T1, typename T2> class Dictionary_2; }
namespace System::Collections::Generic { template <typename T> class HashSet_1; }

#define GJBGPKGIBMH_BHLAEBMEOLO_OFFSET UNITYSDK_OFFSET(0x1664AFA0)
#define GJBGPKGIBMH_BMNMLAIJJGF_OFFSET UNITYSDK_OFFSET(0x1664AD20)
#define GJBGPKGIBMH_CHLEALKAOJO_OFFSET UNITYSDK_OFFSET(0x1664AD30)
#define GJBGPKGIBMH_FINALIZE_OFFSET UNITYSDK_OFFSET(0x1664ADF0)
#define GJBGPKGIBMH_FPMKEGMLNHG_OFFSET UNITYSDK_OFFSET(0x1664AF20)
#define GJBGPKGIBMH_IFDPKDOFOJD_OFFSET UNITYSDK_OFFSET(0x1664B0F0)
#define GJBGPKGIBMH_KMIMGEDAMCE_OFFSET UNITYSDK_OFFSET(0x1664B320)
#define GJBGPKGIBMH_LNFENFDLMIG_OFFSET UNITYSDK_OFFSET(0x1664A970)
#define GJBGPKGIBMH_NAMKJOJBAOA_OFFSET UNITYSDK_OFFSET(0x1664B0D0)
#define GJBGPKGIBMH_OFHECOHPAKG_OFFSET UNITYSDK_OFFSET(0x1664A950)
#define GJBGPKGIBMH_PHOADBJGFBE_OFFSET UNITYSDK_OFFSET(0x1664AC30)
#define GJBGPKGIBMH__CTOR_OFFSET UNITYSDK_OFFSET(0x1664B080)

inline static constexpr unsigned int GJBGPKGIBMH_TypeDefinitionIndex = 12500;

class GJBGPKGIBMH : public ::System::Object
{
public:
	::System::Action* PLDOELOOFLL; // 0x10
	::IIMMFICOGEP DHDJDGFNBOA; // 0x18
	::System::Collections::Generic::Dictionary_2<::System::Int32, ::System::Int32>* FLBOKGKPECD; // 0x30
	::System::Collections::Generic::HashSet_1<::System::Int32>* LHINHLCKHNE; // 0x38
	::Il2CppArray<::PGPGCALLBHK*>* OJMBOGGMIKO; // 0x40
	::System::Boolean DLGKLGKOMHK; // 0x48
	::System::Byte _padding0[0x3];
	::System::Int32 IJDGGCANOFI; // 0x4C

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + GJBGPKGIBMH__CTOR_OFFSET))(this);
	}

	::System::Boolean OFHECOHPAKG()
	{
		return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + GJBGPKGIBMH_OFHECOHPAKG_OFFSET))(this);
	}

	::System::Void LNFENFDLMIG()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + GJBGPKGIBMH_LNFENFDLMIG_OFFSET))(this);
	}

	::System::Void PHOADBJGFBE()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + GJBGPKGIBMH_PHOADBJGFBE_OFFSET))(this);
	}

	::System::Void Finalize()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + GJBGPKGIBMH_FINALIZE_OFFSET))(this);
	}

	::System::Void FPMKEGMLNHG(::System::Action* EJGDHCIBCJH)
	{
		return ((::System::Void(*)(::PVOID, ::System::Action*))((::PBYTE)hIl2Cpp + GJBGPKGIBMH_FPMKEGMLNHG_OFFSET))(this, EJGDHCIBCJH);
	}

	::System::Void BMNMLAIJJGF(::KECPLIFGOCJ GFCJHNHLFEF)
	{
		return ((::System::Void(*)(::PVOID, ::KECPLIFGOCJ))((::PBYTE)hIl2Cpp + GJBGPKGIBMH_BMNMLAIJJGF_OFFSET))(this, GFCJHNHLFEF);
	}

	::System::Void BHLAEBMEOLO()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + GJBGPKGIBMH_BHLAEBMEOLO_OFFSET))(this);
	}

	::System::Void CHLEALKAOJO()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + GJBGPKGIBMH_CHLEALKAOJO_OFFSET))(this);
	}

	::System::Void NAMKJOJBAOA()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + GJBGPKGIBMH_NAMKJOJBAOA_OFFSET))(this);
	}

	::PGPGCALLBHK* IFDPKDOFOJD(::System::Int32 MGMDLMBEDJF)
	{
		return ((::PGPGCALLBHK*(*)(::PVOID, ::System::Int32))((::PBYTE)hIl2Cpp + GJBGPKGIBMH_IFDPKDOFOJD_OFFSET))(this, MGMDLMBEDJF);
	}

	::System::Void KMIMGEDAMCE(::Il2CppArray<::System::Byte>* LJBPECKCCEA)
	{
		return ((::System::Void(*)(::PVOID, ::Il2CppArray<::System::Byte>*))((::PBYTE)hIl2Cpp + GJBGPKGIBMH_KMIMGEDAMCE_OFFSET))(this, LJBPECKCCEA);
	}
};
