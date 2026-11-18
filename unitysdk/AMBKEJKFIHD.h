#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/KECPLIFGOCJ.h"
#include "unitysdk/OLKBLALLJPF.h"
#include "unitysdk/System/Object.h"

class ODMPBMCKOHP;
namespace System { class Action; }
namespace System::Collections::Generic { template <typename T1, typename T2> class Dictionary_2; }
namespace System::Collections::Generic { template <typename T> class HashSet_1; }

#define AMBKEJKFIHD_BHLAEBMEOLO_OFFSET UNITYSDK_OFFSET(0x1C50BB30)
#define AMBKEJKFIHD_BMNMLAIJJGF_OFFSET UNITYSDK_OFFSET(0x1C50B8F0)
#define AMBKEJKFIHD_CHLEALKAOJO_OFFSET UNITYSDK_OFFSET(0x1C50BA70)
#define AMBKEJKFIHD_FINALIZE_OFFSET UNITYSDK_OFFSET(0x1C50BC10)
#define AMBKEJKFIHD_FPMKEGMLNHG_OFFSET UNITYSDK_OFFSET(0x1C50B900)
#define AMBKEJKFIHD_IFDPKDOFOJD_OFFSET UNITYSDK_OFFSET(0x1C50BF80)
#define AMBKEJKFIHD_KMIMGEDAMCE_OFFSET UNITYSDK_OFFSET(0x1C50BDB0)
#define AMBKEJKFIHD_LNFENFDLMIG_OFFSET UNITYSDK_OFFSET(0x1C50B540)
#define AMBKEJKFIHD_NAMKJOJBAOA_OFFSET UNITYSDK_OFFSET(0x1C50BD90)
#define AMBKEJKFIHD_OFHECOHPAKG_OFFSET UNITYSDK_OFFSET(0x1C50B520)
#define AMBKEJKFIHD_PHOADBJGFBE_OFFSET UNITYSDK_OFFSET(0x1C50B800)
#define AMBKEJKFIHD__CTOR_OFFSET UNITYSDK_OFFSET(0x1C50BD40)

inline static constexpr unsigned int AMBKEJKFIHD_TypeDefinitionIndex = 14079;

class AMBKEJKFIHD : public ::System::Object
{
public:
	::Il2CppArray<::ODMPBMCKOHP*>* OJMBOGGMIKO; // 0x10
	::System::Action* PLDOELOOFLL; // 0x18
	::System::Collections::Generic::Dictionary_2<::System::Int32, ::System::Int32>* FLBOKGKPECD; // 0x20
	::OLKBLALLJPF DHDJDGFNBOA; // 0x28
	::System::Collections::Generic::HashSet_1<::System::Int32>* LHINHLCKHNE; // 0x40
	::System::Boolean DLGKLGKOMHK; // 0x48
	::System::Byte _padding0[0x3];
	::System::Int32 IJDGGCANOFI; // 0x4C

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + AMBKEJKFIHD__CTOR_OFFSET))(this);
	}

	::System::Boolean OFHECOHPAKG()
	{
		return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + AMBKEJKFIHD_OFHECOHPAKG_OFFSET))(this);
	}

	::System::Void LNFENFDLMIG()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + AMBKEJKFIHD_LNFENFDLMIG_OFFSET))(this);
	}

	::System::Void FPMKEGMLNHG(::System::Action* EJGDHCIBCJH)
	{
		return ((::System::Void(*)(::PVOID, ::System::Action*))((::PBYTE)hIl2Cpp + AMBKEJKFIHD_FPMKEGMLNHG_OFFSET))(this, EJGDHCIBCJH);
	}

	::System::Void BMNMLAIJJGF(::KECPLIFGOCJ GFCJHNHLFEF)
	{
		return ((::System::Void(*)(::PVOID, ::KECPLIFGOCJ))((::PBYTE)hIl2Cpp + AMBKEJKFIHD_BMNMLAIJJGF_OFFSET))(this, GFCJHNHLFEF);
	}

	::System::Void PHOADBJGFBE()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + AMBKEJKFIHD_PHOADBJGFBE_OFFSET))(this);
	}

	::System::Void BHLAEBMEOLO()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + AMBKEJKFIHD_BHLAEBMEOLO_OFFSET))(this);
	}

	::System::Void Finalize()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + AMBKEJKFIHD_FINALIZE_OFFSET))(this);
	}

	::System::Void NAMKJOJBAOA()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + AMBKEJKFIHD_NAMKJOJBAOA_OFFSET))(this);
	}

	::System::Void KMIMGEDAMCE(::Il2CppArray<::System::Byte>* LJBPECKCCEA)
	{
		return ((::System::Void(*)(::PVOID, ::Il2CppArray<::System::Byte>*))((::PBYTE)hIl2Cpp + AMBKEJKFIHD_KMIMGEDAMCE_OFFSET))(this, LJBPECKCCEA);
	}

	::System::Void CHLEALKAOJO()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + AMBKEJKFIHD_CHLEALKAOJO_OFFSET))(this);
	}

	::ODMPBMCKOHP* IFDPKDOFOJD(::System::Int32 MGMDLMBEDJF)
	{
		return ((::ODMPBMCKOHP*(*)(::PVOID, ::System::Int32))((::PBYTE)hIl2Cpp + AMBKEJKFIHD_IFDPKDOFOJD_OFFSET))(this, MGMDLMBEDJF);
	}
};
