#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/KECPLIFGOCJ.h"
#include "unitysdk/MJKDNHBEMEH.h"
#include "unitysdk/System/Object.h"

class FKFGEENCHBE;
namespace System { class Action; }
namespace System::Collections::Generic { template <typename T1, typename T2> class Dictionary_2; }
namespace System::Collections::Generic { template <typename T> class HashSet_1; }

#define OKGLBGCFOAJ_BHLAEBMEOLO_OFFSET UNITYSDK_OFFSET(0x1D0D3AE0)
#define OKGLBGCFOAJ_BMNMLAIJJGF_OFFSET UNITYSDK_OFFSET(0x1D0D38A0)
#define OKGLBGCFOAJ_CHLEALKAOJO_OFFSET UNITYSDK_OFFSET(0x1D0D3A20)
#define OKGLBGCFOAJ_FINALIZE_OFFSET UNITYSDK_OFFSET(0x1D0D3BC0)
#define OKGLBGCFOAJ_FPMKEGMLNHG_OFFSET UNITYSDK_OFFSET(0x1D0D38B0)
#define OKGLBGCFOAJ_IFDPKDOFOJD_OFFSET UNITYSDK_OFFSET(0x1D0D3D60)
#define OKGLBGCFOAJ_KMIMGEDAMCE_OFFSET UNITYSDK_OFFSET(0x1D0D3F90)
#define OKGLBGCFOAJ_LNFENFDLMIG_OFFSET UNITYSDK_OFFSET(0x1D0D34F0)
#define OKGLBGCFOAJ_NAMKJOJBAOA_OFFSET UNITYSDK_OFFSET(0x1D0D3D40)
#define OKGLBGCFOAJ_OFHECOHPAKG_OFFSET UNITYSDK_OFFSET(0x1D0D34D0)
#define OKGLBGCFOAJ_PHOADBJGFBE_OFFSET UNITYSDK_OFFSET(0x1D0D37B0)
#define OKGLBGCFOAJ__CTOR_OFFSET UNITYSDK_OFFSET(0x1D0D3CF0)

inline static constexpr unsigned int OKGLBGCFOAJ_TypeDefinitionIndex = 10882;

class OKGLBGCFOAJ : public ::System::Object
{
public:
	::Il2CppArray<::FKFGEENCHBE*>* OJMBOGGMIKO; // 0x10
	::MJKDNHBEMEH DHDJDGFNBOA; // 0x18
	::System::Action* PLDOELOOFLL; // 0x30
	::System::Collections::Generic::Dictionary_2<::System::Int32, ::System::Int32>* FLBOKGKPECD; // 0x38
	::System::Collections::Generic::HashSet_1<::System::Int32>* LHINHLCKHNE; // 0x40
	::System::Boolean DLGKLGKOMHK; // 0x48
	::System::Byte _padding0[0x3];
	::System::Int32 IJDGGCANOFI; // 0x4C

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + OKGLBGCFOAJ__CTOR_OFFSET))(this);
	}

	::System::Boolean OFHECOHPAKG()
	{
		return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + OKGLBGCFOAJ_OFHECOHPAKG_OFFSET))(this);
	}

	::System::Void LNFENFDLMIG()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + OKGLBGCFOAJ_LNFENFDLMIG_OFFSET))(this);
	}

	::System::Void FPMKEGMLNHG(::System::Action* EJGDHCIBCJH)
	{
		return ((::System::Void(*)(::PVOID, ::System::Action*))((::PBYTE)hIl2Cpp + OKGLBGCFOAJ_FPMKEGMLNHG_OFFSET))(this, EJGDHCIBCJH);
	}

	::System::Void BMNMLAIJJGF(::KECPLIFGOCJ GFCJHNHLFEF)
	{
		return ((::System::Void(*)(::PVOID, ::KECPLIFGOCJ))((::PBYTE)hIl2Cpp + OKGLBGCFOAJ_BMNMLAIJJGF_OFFSET))(this, GFCJHNHLFEF);
	}

	::System::Void PHOADBJGFBE()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + OKGLBGCFOAJ_PHOADBJGFBE_OFFSET))(this);
	}

	::System::Void BHLAEBMEOLO()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + OKGLBGCFOAJ_BHLAEBMEOLO_OFFSET))(this);
	}

	::System::Void Finalize()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + OKGLBGCFOAJ_FINALIZE_OFFSET))(this);
	}

	::System::Void NAMKJOJBAOA()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + OKGLBGCFOAJ_NAMKJOJBAOA_OFFSET))(this);
	}

	::System::Void CHLEALKAOJO()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + OKGLBGCFOAJ_CHLEALKAOJO_OFFSET))(this);
	}

	::FKFGEENCHBE* IFDPKDOFOJD(::System::Int32 MGMDLMBEDJF)
	{
		return ((::FKFGEENCHBE*(*)(::PVOID, ::System::Int32))((::PBYTE)hIl2Cpp + OKGLBGCFOAJ_IFDPKDOFOJD_OFFSET))(this, MGMDLMBEDJF);
	}

	::System::Void KMIMGEDAMCE(::Il2CppArray<::System::Byte>* LJBPECKCCEA)
	{
		return ((::System::Void(*)(::PVOID, ::Il2CppArray<::System::Byte>*))((::PBYTE)hIl2Cpp + OKGLBGCFOAJ_KMIMGEDAMCE_OFFSET))(this, LJBPECKCCEA);
	}
};
