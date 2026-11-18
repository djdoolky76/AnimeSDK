#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/KECPLIFGOCJ.h"
#include "unitysdk/KOAMAEOFHKA.h"
#include "unitysdk/System/Object.h"

class LDGDDMOHHAK;
namespace System { class Action; }
namespace System::Collections::Generic { template <typename T1, typename T2> class Dictionary_2; }
namespace System::Collections::Generic { template <typename T> class HashSet_1; }

#define EHDBJIIOBBG_BHLAEBMEOLO_OFFSET UNITYSDK_OFFSET(0x1B8561B0)
#define EHDBJIIOBBG_BMNMLAIJJGF_OFFSET UNITYSDK_OFFSET(0x1B855F30)
#define EHDBJIIOBBG_CHLEALKAOJO_OFFSET UNITYSDK_OFFSET(0x1B855F40)
#define EHDBJIIOBBG_FINALIZE_OFFSET UNITYSDK_OFFSET(0x1B856000)
#define EHDBJIIOBBG_FPMKEGMLNHG_OFFSET UNITYSDK_OFFSET(0x1B856130)
#define EHDBJIIOBBG_IFDPKDOFOJD_OFFSET UNITYSDK_OFFSET(0x1B8565B0)
#define EHDBJIIOBBG_KMIMGEDAMCE_OFFSET UNITYSDK_OFFSET(0x1B8562E0)
#define EHDBJIIOBBG_LNFENFDLMIG_OFFSET UNITYSDK_OFFSET(0x1B855B80)
#define EHDBJIIOBBG_NAMKJOJBAOA_OFFSET UNITYSDK_OFFSET(0x1B856590)
#define EHDBJIIOBBG_OFHECOHPAKG_OFFSET UNITYSDK_OFFSET(0x1B855B60)
#define EHDBJIIOBBG_PHOADBJGFBE_OFFSET UNITYSDK_OFFSET(0x1B855E40)
#define EHDBJIIOBBG__CTOR_OFFSET UNITYSDK_OFFSET(0x1B856290)

inline static constexpr unsigned int EHDBJIIOBBG_TypeDefinitionIndex = 15123;

class EHDBJIIOBBG : public ::System::Object
{
public:
	::Il2CppArray<::LDGDDMOHHAK*>* OJMBOGGMIKO; // 0x10
	::System::Action* PLDOELOOFLL; // 0x18
	::System::Collections::Generic::HashSet_1<::System::Int32>* LHINHLCKHNE; // 0x20
	::KOAMAEOFHKA DHDJDGFNBOA; // 0x28
	::System::Collections::Generic::Dictionary_2<::System::Int32, ::System::Int32>* FLBOKGKPECD; // 0x40
	::System::Int32 IJDGGCANOFI; // 0x48
	::System::Boolean DLGKLGKOMHK; // 0x4C

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + EHDBJIIOBBG__CTOR_OFFSET))(this);
	}

	::System::Boolean OFHECOHPAKG()
	{
		return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + EHDBJIIOBBG_OFHECOHPAKG_OFFSET))(this);
	}

	::System::Void LNFENFDLMIG()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + EHDBJIIOBBG_LNFENFDLMIG_OFFSET))(this);
	}

	::System::Void PHOADBJGFBE()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + EHDBJIIOBBG_PHOADBJGFBE_OFFSET))(this);
	}

	::System::Void Finalize()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + EHDBJIIOBBG_FINALIZE_OFFSET))(this);
	}

	::System::Void FPMKEGMLNHG(::System::Action* EJGDHCIBCJH)
	{
		return ((::System::Void(*)(::PVOID, ::System::Action*))((::PBYTE)hIl2Cpp + EHDBJIIOBBG_FPMKEGMLNHG_OFFSET))(this, EJGDHCIBCJH);
	}

	::System::Void BMNMLAIJJGF(::KECPLIFGOCJ GFCJHNHLFEF)
	{
		return ((::System::Void(*)(::PVOID, ::KECPLIFGOCJ))((::PBYTE)hIl2Cpp + EHDBJIIOBBG_BMNMLAIJJGF_OFFSET))(this, GFCJHNHLFEF);
	}

	::System::Void BHLAEBMEOLO()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + EHDBJIIOBBG_BHLAEBMEOLO_OFFSET))(this);
	}

	::System::Void CHLEALKAOJO()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + EHDBJIIOBBG_CHLEALKAOJO_OFFSET))(this);
	}

	::System::Void KMIMGEDAMCE(::Il2CppArray<::System::Byte>* LJBPECKCCEA)
	{
		return ((::System::Void(*)(::PVOID, ::Il2CppArray<::System::Byte>*))((::PBYTE)hIl2Cpp + EHDBJIIOBBG_KMIMGEDAMCE_OFFSET))(this, LJBPECKCCEA);
	}

	::System::Void NAMKJOJBAOA()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + EHDBJIIOBBG_NAMKJOJBAOA_OFFSET))(this);
	}

	::LDGDDMOHHAK* IFDPKDOFOJD(::System::Int32 MGMDLMBEDJF)
	{
		return ((::LDGDDMOHHAK*(*)(::PVOID, ::System::Int32))((::PBYTE)hIl2Cpp + EHDBJIIOBBG_IFDPKDOFOJD_OFFSET))(this, MGMDLMBEDJF);
	}
};
