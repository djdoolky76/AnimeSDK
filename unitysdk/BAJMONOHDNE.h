#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/KECPLIFGOCJ.h"
#include "unitysdk/MEEJMCEOGPP.h"
#include "unitysdk/System/Object.h"

class HMFINFOAFJA;
namespace System { class Action; }
namespace System::Collections::Generic { template <typename T1, typename T2> class Dictionary_2; }
namespace System::Collections::Generic { template <typename T> class HashSet_1; }

#define BAJMONOHDNE_BHLAEBMEOLO_OFFSET UNITYSDK_OFFSET(0x1A525C50)
#define BAJMONOHDNE_BMNMLAIJJGF_OFFSET UNITYSDK_OFFSET(0x1A5259D0)
#define BAJMONOHDNE_CHLEALKAOJO_OFFSET UNITYSDK_OFFSET(0x1A5259E0)
#define BAJMONOHDNE_FINALIZE_OFFSET UNITYSDK_OFFSET(0x1A525AA0)
#define BAJMONOHDNE_FPMKEGMLNHG_OFFSET UNITYSDK_OFFSET(0x1A525BD0)
#define BAJMONOHDNE_IFDPKDOFOJD_OFFSET UNITYSDK_OFFSET(0x1A525D80)
#define BAJMONOHDNE_KMIMGEDAMCE_OFFSET UNITYSDK_OFFSET(0x1A525FE0)
#define BAJMONOHDNE_LNFENFDLMIG_OFFSET UNITYSDK_OFFSET(0x1A525620)
#define BAJMONOHDNE_NAMKJOJBAOA_OFFSET UNITYSDK_OFFSET(0x1A525FC0)
#define BAJMONOHDNE_OFHECOHPAKG_OFFSET UNITYSDK_OFFSET(0x1A525600)
#define BAJMONOHDNE_PHOADBJGFBE_OFFSET UNITYSDK_OFFSET(0x1A5258E0)
#define BAJMONOHDNE__CTOR_OFFSET UNITYSDK_OFFSET(0x1A525D30)

inline static constexpr unsigned int BAJMONOHDNE_TypeDefinitionIndex = 12930;

class BAJMONOHDNE : public ::System::Object
{
public:
	::System::Collections::Generic::Dictionary_2<::System::Int32, ::System::Int32>* FLBOKGKPECD; // 0x10
	::System::Collections::Generic::HashSet_1<::System::Int32>* LHINHLCKHNE; // 0x18
	::Il2CppArray<::HMFINFOAFJA*>* OJMBOGGMIKO; // 0x20
	::System::Action* PLDOELOOFLL; // 0x28
	::MEEJMCEOGPP DHDJDGFNBOA; // 0x30
	::System::Boolean DLGKLGKOMHK; // 0x48
	::System::Byte _padding0[0x3];
	::System::Int32 IJDGGCANOFI; // 0x4C

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + BAJMONOHDNE__CTOR_OFFSET))(this);
	}

	::System::Boolean OFHECOHPAKG()
	{
		return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + BAJMONOHDNE_OFHECOHPAKG_OFFSET))(this);
	}

	::System::Void LNFENFDLMIG()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + BAJMONOHDNE_LNFENFDLMIG_OFFSET))(this);
	}

	::System::Void PHOADBJGFBE()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + BAJMONOHDNE_PHOADBJGFBE_OFFSET))(this);
	}

	::System::Void Finalize()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + BAJMONOHDNE_FINALIZE_OFFSET))(this);
	}

	::System::Void FPMKEGMLNHG(::System::Action* EJGDHCIBCJH)
	{
		return ((::System::Void(*)(::PVOID, ::System::Action*))((::PBYTE)hIl2Cpp + BAJMONOHDNE_FPMKEGMLNHG_OFFSET))(this, EJGDHCIBCJH);
	}

	::System::Void BMNMLAIJJGF(::KECPLIFGOCJ GFCJHNHLFEF)
	{
		return ((::System::Void(*)(::PVOID, ::KECPLIFGOCJ))((::PBYTE)hIl2Cpp + BAJMONOHDNE_BMNMLAIJJGF_OFFSET))(this, GFCJHNHLFEF);
	}

	::System::Void BHLAEBMEOLO()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + BAJMONOHDNE_BHLAEBMEOLO_OFFSET))(this);
	}

	::HMFINFOAFJA* IFDPKDOFOJD(::System::Int32 MGMDLMBEDJF)
	{
		return ((::HMFINFOAFJA*(*)(::PVOID, ::System::Int32))((::PBYTE)hIl2Cpp + BAJMONOHDNE_IFDPKDOFOJD_OFFSET))(this, MGMDLMBEDJF);
	}

	::System::Void NAMKJOJBAOA()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + BAJMONOHDNE_NAMKJOJBAOA_OFFSET))(this);
	}

	::System::Void CHLEALKAOJO()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + BAJMONOHDNE_CHLEALKAOJO_OFFSET))(this);
	}

	::System::Void KMIMGEDAMCE(::Il2CppArray<::System::Byte>* LJBPECKCCEA)
	{
		return ((::System::Void(*)(::PVOID, ::Il2CppArray<::System::Byte>*))((::PBYTE)hIl2Cpp + BAJMONOHDNE_KMIMGEDAMCE_OFFSET))(this, LJBPECKCCEA);
	}
};
