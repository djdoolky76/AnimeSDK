#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/ANGMFACNOAJ.h"
#include "unitysdk/KECPLIFGOCJ.h"
#include "unitysdk/System/Object.h"

class PDHGFLOEGFJ;
namespace System { class Action; }
namespace System::Collections::Generic { template <typename T1, typename T2> class Dictionary_2; }
namespace System::Collections::Generic { template <typename T> class HashSet_1; }

#define IHJHILLMGOC_BHLAEBMEOLO_OFFSET UNITYSDK_OFFSET(0x1BAEC5A0)
#define IHJHILLMGOC_BMNMLAIJJGF_OFFSET UNITYSDK_OFFSET(0x1BAEC360)
#define IHJHILLMGOC_CHLEALKAOJO_OFFSET UNITYSDK_OFFSET(0x1BAEC4E0)
#define IHJHILLMGOC_FINALIZE_OFFSET UNITYSDK_OFFSET(0x1BAEC680)
#define IHJHILLMGOC_FPMKEGMLNHG_OFFSET UNITYSDK_OFFSET(0x1BAEC370)
#define IHJHILLMGOC_IFDPKDOFOJD_OFFSET UNITYSDK_OFFSET(0x1BAEC820)
#define IHJHILLMGOC_KMIMGEDAMCE_OFFSET UNITYSDK_OFFSET(0x1BAECA50)
#define IHJHILLMGOC_LNFENFDLMIG_OFFSET UNITYSDK_OFFSET(0x1BAEBFB0)
#define IHJHILLMGOC_NAMKJOJBAOA_OFFSET UNITYSDK_OFFSET(0x1BAEC800)
#define IHJHILLMGOC_OFHECOHPAKG_OFFSET UNITYSDK_OFFSET(0x1BAEBF90)
#define IHJHILLMGOC_PHOADBJGFBE_OFFSET UNITYSDK_OFFSET(0x1BAEC270)
#define IHJHILLMGOC__CTOR_OFFSET UNITYSDK_OFFSET(0x1BAEC7B0)

inline static constexpr unsigned int IHJHILLMGOC_TypeDefinitionIndex = 15740;

class IHJHILLMGOC : public ::System::Object
{
public:
	::System::Collections::Generic::Dictionary_2<::System::Int32, ::System::Int32>* FLBOKGKPECD; // 0x10
	::System::Action* PLDOELOOFLL; // 0x18
	::System::Collections::Generic::HashSet_1<::System::Int32>* LHINHLCKHNE; // 0x20
	::Il2CppArray<::PDHGFLOEGFJ*>* OJMBOGGMIKO; // 0x28
	::ANGMFACNOAJ DHDJDGFNBOA; // 0x30
	::System::Int32 IJDGGCANOFI; // 0x48
	::System::Boolean DLGKLGKOMHK; // 0x4C

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + IHJHILLMGOC__CTOR_OFFSET))(this);
	}

	::System::Boolean OFHECOHPAKG()
	{
		return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + IHJHILLMGOC_OFHECOHPAKG_OFFSET))(this);
	}

	::System::Void LNFENFDLMIG()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + IHJHILLMGOC_LNFENFDLMIG_OFFSET))(this);
	}

	::System::Void FPMKEGMLNHG(::System::Action* EJGDHCIBCJH)
	{
		return ((::System::Void(*)(::PVOID, ::System::Action*))((::PBYTE)hIl2Cpp + IHJHILLMGOC_FPMKEGMLNHG_OFFSET))(this, EJGDHCIBCJH);
	}

	::System::Void BMNMLAIJJGF(::KECPLIFGOCJ GFCJHNHLFEF)
	{
		return ((::System::Void(*)(::PVOID, ::KECPLIFGOCJ))((::PBYTE)hIl2Cpp + IHJHILLMGOC_BMNMLAIJJGF_OFFSET))(this, GFCJHNHLFEF);
	}

	::System::Void PHOADBJGFBE()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + IHJHILLMGOC_PHOADBJGFBE_OFFSET))(this);
	}

	::System::Void BHLAEBMEOLO()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + IHJHILLMGOC_BHLAEBMEOLO_OFFSET))(this);
	}

	::System::Void Finalize()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + IHJHILLMGOC_FINALIZE_OFFSET))(this);
	}

	::System::Void CHLEALKAOJO()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + IHJHILLMGOC_CHLEALKAOJO_OFFSET))(this);
	}

	::System::Void NAMKJOJBAOA()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + IHJHILLMGOC_NAMKJOJBAOA_OFFSET))(this);
	}

	::PDHGFLOEGFJ* IFDPKDOFOJD(::System::Int32 MGMDLMBEDJF)
	{
		return ((::PDHGFLOEGFJ*(*)(::PVOID, ::System::Int32))((::PBYTE)hIl2Cpp + IHJHILLMGOC_IFDPKDOFOJD_OFFSET))(this, MGMDLMBEDJF);
	}

	::System::Void KMIMGEDAMCE(::Il2CppArray<::System::Byte>* LJBPECKCCEA)
	{
		return ((::System::Void(*)(::PVOID, ::Il2CppArray<::System::Byte>*))((::PBYTE)hIl2Cpp + IHJHILLMGOC_KMIMGEDAMCE_OFFSET))(this, LJBPECKCCEA);
	}
};
