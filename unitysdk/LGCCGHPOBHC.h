#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/GOAKKKAAAKJ.h"
#include "unitysdk/KECPLIFGOCJ.h"
#include "unitysdk/System/Object.h"

class HCOECCJJCIN;
namespace System { class Action; }
namespace System::Collections::Generic { template <typename T1, typename T2> class Dictionary_2; }
namespace System::Collections::Generic { template <typename T> class HashSet_1; }

#define LGCCGHPOBHC_BHLAEBMEOLO_OFFSET UNITYSDK_OFFSET(0x1BF552D0)
#define LGCCGHPOBHC_BMNMLAIJJGF_OFFSET UNITYSDK_OFFSET(0x1BF55090)
#define LGCCGHPOBHC_CHLEALKAOJO_OFFSET UNITYSDK_OFFSET(0x1BF55210)
#define LGCCGHPOBHC_FINALIZE_OFFSET UNITYSDK_OFFSET(0x1BF553B0)
#define LGCCGHPOBHC_FPMKEGMLNHG_OFFSET UNITYSDK_OFFSET(0x1BF550A0)
#define LGCCGHPOBHC_IFDPKDOFOJD_OFFSET UNITYSDK_OFFSET(0x1BF55720)
#define LGCCGHPOBHC_KMIMGEDAMCE_OFFSET UNITYSDK_OFFSET(0x1BF55530)
#define LGCCGHPOBHC_LNFENFDLMIG_OFFSET UNITYSDK_OFFSET(0x1BF54CE0)
#define LGCCGHPOBHC_NAMKJOJBAOA_OFFSET UNITYSDK_OFFSET(0x1BF55700)
#define LGCCGHPOBHC_OFHECOHPAKG_OFFSET UNITYSDK_OFFSET(0x1BF54CC0)
#define LGCCGHPOBHC_PHOADBJGFBE_OFFSET UNITYSDK_OFFSET(0x1BF54FA0)
#define LGCCGHPOBHC__CTOR_OFFSET UNITYSDK_OFFSET(0x1BF554E0)

inline static constexpr unsigned int LGCCGHPOBHC_TypeDefinitionIndex = 12926;

class LGCCGHPOBHC : public ::System::Object
{
public:
	::System::Collections::Generic::Dictionary_2<::System::Int32, ::System::Int32>* FLBOKGKPECD; // 0x10
	::System::Action* PLDOELOOFLL; // 0x18
	::Il2CppArray<::HCOECCJJCIN*>* OJMBOGGMIKO; // 0x20
	::GOAKKKAAAKJ DHDJDGFNBOA; // 0x28
	::System::Collections::Generic::HashSet_1<::System::Int32>* LHINHLCKHNE; // 0x40
	::System::Boolean DLGKLGKOMHK; // 0x48
	::System::Byte _padding0[0x3];
	::System::Int32 IJDGGCANOFI; // 0x4C

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + LGCCGHPOBHC__CTOR_OFFSET))(this);
	}

	::System::Boolean OFHECOHPAKG()
	{
		return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + LGCCGHPOBHC_OFHECOHPAKG_OFFSET))(this);
	}

	::System::Void LNFENFDLMIG()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + LGCCGHPOBHC_LNFENFDLMIG_OFFSET))(this);
	}

	::System::Void FPMKEGMLNHG(::System::Action* EJGDHCIBCJH)
	{
		return ((::System::Void(*)(::PVOID, ::System::Action*))((::PBYTE)hIl2Cpp + LGCCGHPOBHC_FPMKEGMLNHG_OFFSET))(this, EJGDHCIBCJH);
	}

	::System::Void BMNMLAIJJGF(::KECPLIFGOCJ GFCJHNHLFEF)
	{
		return ((::System::Void(*)(::PVOID, ::KECPLIFGOCJ))((::PBYTE)hIl2Cpp + LGCCGHPOBHC_BMNMLAIJJGF_OFFSET))(this, GFCJHNHLFEF);
	}

	::System::Void PHOADBJGFBE()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + LGCCGHPOBHC_PHOADBJGFBE_OFFSET))(this);
	}

	::System::Void BHLAEBMEOLO()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + LGCCGHPOBHC_BHLAEBMEOLO_OFFSET))(this);
	}

	::System::Void Finalize()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + LGCCGHPOBHC_FINALIZE_OFFSET))(this);
	}

	::System::Void KMIMGEDAMCE(::Il2CppArray<::System::Byte>* LJBPECKCCEA)
	{
		return ((::System::Void(*)(::PVOID, ::Il2CppArray<::System::Byte>*))((::PBYTE)hIl2Cpp + LGCCGHPOBHC_KMIMGEDAMCE_OFFSET))(this, LJBPECKCCEA);
	}

	::System::Void CHLEALKAOJO()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + LGCCGHPOBHC_CHLEALKAOJO_OFFSET))(this);
	}

	::System::Void NAMKJOJBAOA()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + LGCCGHPOBHC_NAMKJOJBAOA_OFFSET))(this);
	}

	::HCOECCJJCIN* IFDPKDOFOJD(::System::Int32 MGMDLMBEDJF)
	{
		return ((::HCOECCJJCIN*(*)(::PVOID, ::System::Int32))((::PBYTE)hIl2Cpp + LGCCGHPOBHC_IFDPKDOFOJD_OFFSET))(this, MGMDLMBEDJF);
	}
};
