#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/AAKJOLHJDLI.h"
#include "unitysdk/KECPLIFGOCJ.h"
#include "unitysdk/System/Object.h"

class EILMHAGBPKC;
namespace System { class Action; }
namespace System::Collections::Generic { template <typename T1, typename T2> class Dictionary_2; }
namespace System::Collections::Generic { template <typename T> class HashSet_1; }

#define IMFPJOAJHDA_BHLAEBMEOLO_OFFSET UNITYSDK_OFFSET(0x152E9FD0)
#define IMFPJOAJHDA_BMNMLAIJJGF_OFFSET UNITYSDK_OFFSET(0x152E9D90)
#define IMFPJOAJHDA_CHLEALKAOJO_OFFSET UNITYSDK_OFFSET(0x152E9F10)
#define IMFPJOAJHDA_FINALIZE_OFFSET UNITYSDK_OFFSET(0x152EA0B0)
#define IMFPJOAJHDA_FPMKEGMLNHG_OFFSET UNITYSDK_OFFSET(0x152E9DA0)
#define IMFPJOAJHDA_IFDPKDOFOJD_OFFSET UNITYSDK_OFFSET(0x152EA400)
#define IMFPJOAJHDA_KMIMGEDAMCE_OFFSET UNITYSDK_OFFSET(0x152EA230)
#define IMFPJOAJHDA_LNFENFDLMIG_OFFSET UNITYSDK_OFFSET(0x152E99E0)
#define IMFPJOAJHDA_NAMKJOJBAOA_OFFSET UNITYSDK_OFFSET(0x152EA630)
#define IMFPJOAJHDA_OFHECOHPAKG_OFFSET UNITYSDK_OFFSET(0x152E99C0)
#define IMFPJOAJHDA_PHOADBJGFBE_OFFSET UNITYSDK_OFFSET(0x152E9CA0)
#define IMFPJOAJHDA__CTOR_OFFSET UNITYSDK_OFFSET(0x152EA1E0)

inline static constexpr unsigned int IMFPJOAJHDA_TypeDefinitionIndex = 11718;

class IMFPJOAJHDA : public ::System::Object
{
public:
	::System::Collections::Generic::Dictionary_2<::System::Int32, ::System::Int32>* FLBOKGKPECD; // 0x10
	::System::Action* PLDOELOOFLL; // 0x18
	::Il2CppArray<::EILMHAGBPKC*>* OJMBOGGMIKO; // 0x20
	::AAKJOLHJDLI DHDJDGFNBOA; // 0x28
	::System::Collections::Generic::HashSet_1<::System::Int32>* LHINHLCKHNE; // 0x40
	::System::Boolean DLGKLGKOMHK; // 0x48
	::System::Byte _padding0[0x3];
	::System::Int32 IJDGGCANOFI; // 0x4C

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + IMFPJOAJHDA__CTOR_OFFSET))(this);
	}

	::System::Boolean OFHECOHPAKG()
	{
		return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + IMFPJOAJHDA_OFHECOHPAKG_OFFSET))(this);
	}

	::System::Void LNFENFDLMIG()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + IMFPJOAJHDA_LNFENFDLMIG_OFFSET))(this);
	}

	::System::Void FPMKEGMLNHG(::System::Action* EJGDHCIBCJH)
	{
		return ((::System::Void(*)(::PVOID, ::System::Action*))((::PBYTE)hIl2Cpp + IMFPJOAJHDA_FPMKEGMLNHG_OFFSET))(this, EJGDHCIBCJH);
	}

	::System::Void BMNMLAIJJGF(::KECPLIFGOCJ GFCJHNHLFEF)
	{
		return ((::System::Void(*)(::PVOID, ::KECPLIFGOCJ))((::PBYTE)hIl2Cpp + IMFPJOAJHDA_BMNMLAIJJGF_OFFSET))(this, GFCJHNHLFEF);
	}

	::System::Void PHOADBJGFBE()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + IMFPJOAJHDA_PHOADBJGFBE_OFFSET))(this);
	}

	::System::Void BHLAEBMEOLO()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + IMFPJOAJHDA_BHLAEBMEOLO_OFFSET))(this);
	}

	::System::Void Finalize()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + IMFPJOAJHDA_FINALIZE_OFFSET))(this);
	}

	::System::Void KMIMGEDAMCE(::Il2CppArray<::System::Byte>* LJBPECKCCEA)
	{
		return ((::System::Void(*)(::PVOID, ::Il2CppArray<::System::Byte>*))((::PBYTE)hIl2Cpp + IMFPJOAJHDA_KMIMGEDAMCE_OFFSET))(this, LJBPECKCCEA);
	}

	::EILMHAGBPKC* IFDPKDOFOJD(::System::Int32 MGMDLMBEDJF)
	{
		return ((::EILMHAGBPKC*(*)(::PVOID, ::System::Int32))((::PBYTE)hIl2Cpp + IMFPJOAJHDA_IFDPKDOFOJD_OFFSET))(this, MGMDLMBEDJF);
	}

	::System::Void CHLEALKAOJO()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + IMFPJOAJHDA_CHLEALKAOJO_OFFSET))(this);
	}

	::System::Void NAMKJOJBAOA()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + IMFPJOAJHDA_NAMKJOJBAOA_OFFSET))(this);
	}
};
