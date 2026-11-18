#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/FKJHPCJJNPO.h"
#include "unitysdk/KECPLIFGOCJ.h"
#include "unitysdk/System/Object.h"

class HGDLEHJLGLN;
namespace System { class Action; }
namespace System::Collections::Generic { template <typename T1, typename T2> class Dictionary_2; }
namespace System::Collections::Generic { template <typename T> class HashSet_1; }

#define LFMPBDBAAIJ_BHLAEBMEOLO_OFFSET UNITYSDK_OFFSET(0x1BB0CB10)
#define LFMPBDBAAIJ_BMNMLAIJJGF_OFFSET UNITYSDK_OFFSET(0x1BB0C8D0)
#define LFMPBDBAAIJ_CHLEALKAOJO_OFFSET UNITYSDK_OFFSET(0x1BB0CA50)
#define LFMPBDBAAIJ_FINALIZE_OFFSET UNITYSDK_OFFSET(0x1BB0CBF0)
#define LFMPBDBAAIJ_FPMKEGMLNHG_OFFSET UNITYSDK_OFFSET(0x1BB0C8E0)
#define LFMPBDBAAIJ_IFDPKDOFOJD_OFFSET UNITYSDK_OFFSET(0x1BB0CF60)
#define LFMPBDBAAIJ_KMIMGEDAMCE_OFFSET UNITYSDK_OFFSET(0x1BB0CD70)
#define LFMPBDBAAIJ_LNFENFDLMIG_OFFSET UNITYSDK_OFFSET(0x1BB0C520)
#define LFMPBDBAAIJ_NAMKJOJBAOA_OFFSET UNITYSDK_OFFSET(0x1BB0CF40)
#define LFMPBDBAAIJ_OFHECOHPAKG_OFFSET UNITYSDK_OFFSET(0x1BB0C500)
#define LFMPBDBAAIJ_PHOADBJGFBE_OFFSET UNITYSDK_OFFSET(0x1BB0C7E0)
#define LFMPBDBAAIJ__CTOR_OFFSET UNITYSDK_OFFSET(0x1BB0CD20)

inline static constexpr unsigned int LFMPBDBAAIJ_TypeDefinitionIndex = 15370;

class LFMPBDBAAIJ : public ::System::Object
{
public:
	::System::Action* PLDOELOOFLL; // 0x10
	::FKJHPCJJNPO DHDJDGFNBOA; // 0x18
	::Il2CppArray<::HGDLEHJLGLN*>* OJMBOGGMIKO; // 0x30
	::System::Collections::Generic::HashSet_1<::System::Int32>* LHINHLCKHNE; // 0x38
	::System::Collections::Generic::Dictionary_2<::System::Int32, ::System::Int32>* FLBOKGKPECD; // 0x40
	::System::Boolean DLGKLGKOMHK; // 0x48
	::System::Byte _padding0[0x3];
	::System::Int32 IJDGGCANOFI; // 0x4C

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + LFMPBDBAAIJ__CTOR_OFFSET))(this);
	}

	::System::Boolean OFHECOHPAKG()
	{
		return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + LFMPBDBAAIJ_OFHECOHPAKG_OFFSET))(this);
	}

	::System::Void LNFENFDLMIG()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + LFMPBDBAAIJ_LNFENFDLMIG_OFFSET))(this);
	}

	::System::Void FPMKEGMLNHG(::System::Action* EJGDHCIBCJH)
	{
		return ((::System::Void(*)(::PVOID, ::System::Action*))((::PBYTE)hIl2Cpp + LFMPBDBAAIJ_FPMKEGMLNHG_OFFSET))(this, EJGDHCIBCJH);
	}

	::System::Void BMNMLAIJJGF(::KECPLIFGOCJ GFCJHNHLFEF)
	{
		return ((::System::Void(*)(::PVOID, ::KECPLIFGOCJ))((::PBYTE)hIl2Cpp + LFMPBDBAAIJ_BMNMLAIJJGF_OFFSET))(this, GFCJHNHLFEF);
	}

	::System::Void PHOADBJGFBE()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + LFMPBDBAAIJ_PHOADBJGFBE_OFFSET))(this);
	}

	::System::Void BHLAEBMEOLO()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + LFMPBDBAAIJ_BHLAEBMEOLO_OFFSET))(this);
	}

	::System::Void Finalize()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + LFMPBDBAAIJ_FINALIZE_OFFSET))(this);
	}

	::System::Void CHLEALKAOJO()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + LFMPBDBAAIJ_CHLEALKAOJO_OFFSET))(this);
	}

	::System::Void KMIMGEDAMCE(::Il2CppArray<::System::Byte>* LJBPECKCCEA)
	{
		return ((::System::Void(*)(::PVOID, ::Il2CppArray<::System::Byte>*))((::PBYTE)hIl2Cpp + LFMPBDBAAIJ_KMIMGEDAMCE_OFFSET))(this, LJBPECKCCEA);
	}

	::System::Void NAMKJOJBAOA()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + LFMPBDBAAIJ_NAMKJOJBAOA_OFFSET))(this);
	}

	::HGDLEHJLGLN* IFDPKDOFOJD(::System::Int32 MGMDLMBEDJF)
	{
		return ((::HGDLEHJLGLN*(*)(::PVOID, ::System::Int32))((::PBYTE)hIl2Cpp + LFMPBDBAAIJ_IFDPKDOFOJD_OFFSET))(this, MGMDLMBEDJF);
	}
};
