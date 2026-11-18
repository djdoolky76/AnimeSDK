#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/EDEENMGGPFE.h"
#include "unitysdk/KECPLIFGOCJ.h"
#include "unitysdk/System/Object.h"

class NKOPBFPBHCM;
namespace System { class Action; }
namespace System::Collections::Generic { template <typename T1, typename T2> class Dictionary_2; }
namespace System::Collections::Generic { template <typename T> class HashSet_1; }

#define HGAAOIJNCKA_BHLAEBMEOLO_OFFSET UNITYSDK_OFFSET(0x1B7C3C90)
#define HGAAOIJNCKA_BMNMLAIJJGF_OFFSET UNITYSDK_OFFSET(0x1B7C3A60)
#define HGAAOIJNCKA_CHLEALKAOJO_OFFSET UNITYSDK_OFFSET(0x1B7C3BD0)
#define HGAAOIJNCKA_FINALIZE_OFFSET UNITYSDK_OFFSET(0x1B7C3D70)
#define HGAAOIJNCKA_FPMKEGMLNHG_OFFSET UNITYSDK_OFFSET(0x1B7C3A70)
#define HGAAOIJNCKA_IFDPKDOFOJD_OFFSET UNITYSDK_OFFSET(0x1B7C40E0)
#define HGAAOIJNCKA_KMIMGEDAMCE_OFFSET UNITYSDK_OFFSET(0x1B7C3EF0)
#define HGAAOIJNCKA_LNFENFDLMIG_OFFSET UNITYSDK_OFFSET(0x1B7C36C0)
#define HGAAOIJNCKA_NAMKJOJBAOA_OFFSET UNITYSDK_OFFSET(0x1B7C40C0)
#define HGAAOIJNCKA_OFHECOHPAKG_OFFSET UNITYSDK_OFFSET(0x1B7C36A0)
#define HGAAOIJNCKA_PHOADBJGFBE_OFFSET UNITYSDK_OFFSET(0x1B7C3980)
#define HGAAOIJNCKA__CTOR_OFFSET UNITYSDK_OFFSET(0x1B7C3EA0)

inline static constexpr unsigned int HGAAOIJNCKA_TypeDefinitionIndex = 11825;

class HGAAOIJNCKA : public ::System::Object
{
public:
	::System::Collections::Generic::HashSet_1<::System::Int32>* LHINHLCKHNE; // 0x10
	::System::Action* PLDOELOOFLL; // 0x18
	::System::Collections::Generic::Dictionary_2<::System::Int32, ::System::Int32>* FLBOKGKPECD; // 0x20
	::Il2CppArray<::NKOPBFPBHCM*>* OJMBOGGMIKO; // 0x28
	::EDEENMGGPFE DHDJDGFNBOA; // 0x30
	::System::Boolean DLGKLGKOMHK; // 0x48
	::System::Byte _padding0[0x3];
	::System::Int32 IJDGGCANOFI; // 0x4C

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + HGAAOIJNCKA__CTOR_OFFSET))(this);
	}

	::System::Boolean OFHECOHPAKG()
	{
		return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + HGAAOIJNCKA_OFHECOHPAKG_OFFSET))(this);
	}

	::System::Void LNFENFDLMIG()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + HGAAOIJNCKA_LNFENFDLMIG_OFFSET))(this);
	}

	::System::Void FPMKEGMLNHG(::System::Action* EJGDHCIBCJH)
	{
		return ((::System::Void(*)(::PVOID, ::System::Action*))((::PBYTE)hIl2Cpp + HGAAOIJNCKA_FPMKEGMLNHG_OFFSET))(this, EJGDHCIBCJH);
	}

	::System::Void BMNMLAIJJGF(::KECPLIFGOCJ GFCJHNHLFEF)
	{
		return ((::System::Void(*)(::PVOID, ::KECPLIFGOCJ))((::PBYTE)hIl2Cpp + HGAAOIJNCKA_BMNMLAIJJGF_OFFSET))(this, GFCJHNHLFEF);
	}

	::System::Void PHOADBJGFBE()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + HGAAOIJNCKA_PHOADBJGFBE_OFFSET))(this);
	}

	::System::Void BHLAEBMEOLO()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + HGAAOIJNCKA_BHLAEBMEOLO_OFFSET))(this);
	}

	::System::Void Finalize()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + HGAAOIJNCKA_FINALIZE_OFFSET))(this);
	}

	::System::Void CHLEALKAOJO()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + HGAAOIJNCKA_CHLEALKAOJO_OFFSET))(this);
	}

	::System::Void KMIMGEDAMCE(::Il2CppArray<::System::Byte>* LJBPECKCCEA)
	{
		return ((::System::Void(*)(::PVOID, ::Il2CppArray<::System::Byte>*))((::PBYTE)hIl2Cpp + HGAAOIJNCKA_KMIMGEDAMCE_OFFSET))(this, LJBPECKCCEA);
	}

	::System::Void NAMKJOJBAOA()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + HGAAOIJNCKA_NAMKJOJBAOA_OFFSET))(this);
	}

	::NKOPBFPBHCM* IFDPKDOFOJD(::System::Int32 MGMDLMBEDJF)
	{
		return ((::NKOPBFPBHCM*(*)(::PVOID, ::System::Int32))((::PBYTE)hIl2Cpp + HGAAOIJNCKA_IFDPKDOFOJD_OFFSET))(this, MGMDLMBEDJF);
	}
};
