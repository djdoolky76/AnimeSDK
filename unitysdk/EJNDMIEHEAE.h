#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/DFFNBBJFFIH.h"
#include "unitysdk/KECPLIFGOCJ.h"
#include "unitysdk/System/Object.h"

class CHHBBFMMGGK;
namespace System { class Action; }
namespace System::Collections::Generic { template <typename T1, typename T2> class Dictionary_2; }
namespace System::Collections::Generic { template <typename T> class HashSet_1; }

#define EJNDMIEHEAE_BHLAEBMEOLO_OFFSET UNITYSDK_OFFSET(0x1ADD3F10)
#define EJNDMIEHEAE_BMNMLAIJJGF_OFFSET UNITYSDK_OFFSET(0x1ADD3CD0)
#define EJNDMIEHEAE_CHLEALKAOJO_OFFSET UNITYSDK_OFFSET(0x1ADD3E50)
#define EJNDMIEHEAE_FINALIZE_OFFSET UNITYSDK_OFFSET(0x1ADD3FF0)
#define EJNDMIEHEAE_FPMKEGMLNHG_OFFSET UNITYSDK_OFFSET(0x1ADD3CE0)
#define EJNDMIEHEAE_IFDPKDOFOJD_OFFSET UNITYSDK_OFFSET(0x1ADD4190)
#define EJNDMIEHEAE_KMIMGEDAMCE_OFFSET UNITYSDK_OFFSET(0x1ADD43C0)
#define EJNDMIEHEAE_LNFENFDLMIG_OFFSET UNITYSDK_OFFSET(0x1ADD3920)
#define EJNDMIEHEAE_NAMKJOJBAOA_OFFSET UNITYSDK_OFFSET(0x1ADD4170)
#define EJNDMIEHEAE_OFHECOHPAKG_OFFSET UNITYSDK_OFFSET(0x1ADD3900)
#define EJNDMIEHEAE_PHOADBJGFBE_OFFSET UNITYSDK_OFFSET(0x1ADD3BE0)
#define EJNDMIEHEAE__CTOR_OFFSET UNITYSDK_OFFSET(0x1ADD4120)

inline static constexpr unsigned int EJNDMIEHEAE_TypeDefinitionIndex = 13546;

class EJNDMIEHEAE : public ::System::Object
{
public:
	::System::Collections::Generic::HashSet_1<::System::Int32>* LHINHLCKHNE; // 0x10
	::Il2CppArray<::CHHBBFMMGGK*>* OJMBOGGMIKO; // 0x18
	::System::Action* PLDOELOOFLL; // 0x20
	::System::Collections::Generic::Dictionary_2<::System::Int32, ::System::Int32>* FLBOKGKPECD; // 0x28
	::DFFNBBJFFIH DHDJDGFNBOA; // 0x30
	::System::Boolean DLGKLGKOMHK; // 0x48
	::System::Byte _padding0[0x3];
	::System::Int32 IJDGGCANOFI; // 0x4C

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + EJNDMIEHEAE__CTOR_OFFSET))(this);
	}

	::System::Boolean OFHECOHPAKG()
	{
		return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + EJNDMIEHEAE_OFHECOHPAKG_OFFSET))(this);
	}

	::System::Void LNFENFDLMIG()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + EJNDMIEHEAE_LNFENFDLMIG_OFFSET))(this);
	}

	::System::Void FPMKEGMLNHG(::System::Action* EJGDHCIBCJH)
	{
		return ((::System::Void(*)(::PVOID, ::System::Action*))((::PBYTE)hIl2Cpp + EJNDMIEHEAE_FPMKEGMLNHG_OFFSET))(this, EJGDHCIBCJH);
	}

	::System::Void BMNMLAIJJGF(::KECPLIFGOCJ GFCJHNHLFEF)
	{
		return ((::System::Void(*)(::PVOID, ::KECPLIFGOCJ))((::PBYTE)hIl2Cpp + EJNDMIEHEAE_BMNMLAIJJGF_OFFSET))(this, GFCJHNHLFEF);
	}

	::System::Void PHOADBJGFBE()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + EJNDMIEHEAE_PHOADBJGFBE_OFFSET))(this);
	}

	::System::Void BHLAEBMEOLO()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + EJNDMIEHEAE_BHLAEBMEOLO_OFFSET))(this);
	}

	::System::Void Finalize()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + EJNDMIEHEAE_FINALIZE_OFFSET))(this);
	}

	::System::Void NAMKJOJBAOA()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + EJNDMIEHEAE_NAMKJOJBAOA_OFFSET))(this);
	}

	::CHHBBFMMGGK* IFDPKDOFOJD(::System::Int32 MGMDLMBEDJF)
	{
		return ((::CHHBBFMMGGK*(*)(::PVOID, ::System::Int32))((::PBYTE)hIl2Cpp + EJNDMIEHEAE_IFDPKDOFOJD_OFFSET))(this, MGMDLMBEDJF);
	}

	::System::Void KMIMGEDAMCE(::Il2CppArray<::System::Byte>* LJBPECKCCEA)
	{
		return ((::System::Void(*)(::PVOID, ::Il2CppArray<::System::Byte>*))((::PBYTE)hIl2Cpp + EJNDMIEHEAE_KMIMGEDAMCE_OFFSET))(this, LJBPECKCCEA);
	}

	::System::Void CHLEALKAOJO()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + EJNDMIEHEAE_CHLEALKAOJO_OFFSET))(this);
	}
};
