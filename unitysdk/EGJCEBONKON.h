#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/BCCENHAKFOF.h"
#include "unitysdk/KECPLIFGOCJ.h"
#include "unitysdk/System/Object.h"

class FHAHJFHEEPD;
namespace System { class Action; }
namespace System::Collections::Generic { template <typename T1, typename T2> class Dictionary_2; }
namespace System::Collections::Generic { template <typename T> class HashSet_1; }

#define EGJCEBONKON_BHLAEBMEOLO_OFFSET UNITYSDK_OFFSET(0x1951E270)
#define EGJCEBONKON_BMNMLAIJJGF_OFFSET UNITYSDK_OFFSET(0x1951E030)
#define EGJCEBONKON_CHLEALKAOJO_OFFSET UNITYSDK_OFFSET(0x1951E1B0)
#define EGJCEBONKON_FINALIZE_OFFSET UNITYSDK_OFFSET(0x1951E350)
#define EGJCEBONKON_FPMKEGMLNHG_OFFSET UNITYSDK_OFFSET(0x1951E040)
#define EGJCEBONKON_IFDPKDOFOJD_OFFSET UNITYSDK_OFFSET(0x1951E4F0)
#define EGJCEBONKON_KMIMGEDAMCE_OFFSET UNITYSDK_OFFSET(0x1951E720)
#define EGJCEBONKON_LNFENFDLMIG_OFFSET UNITYSDK_OFFSET(0x1951DC80)
#define EGJCEBONKON_NAMKJOJBAOA_OFFSET UNITYSDK_OFFSET(0x1951E4D0)
#define EGJCEBONKON_OFHECOHPAKG_OFFSET UNITYSDK_OFFSET(0x1951DC60)
#define EGJCEBONKON_PHOADBJGFBE_OFFSET UNITYSDK_OFFSET(0x1951DF40)
#define EGJCEBONKON__CTOR_OFFSET UNITYSDK_OFFSET(0x1951E480)

inline static constexpr unsigned int EGJCEBONKON_TypeDefinitionIndex = 12805;

class EGJCEBONKON : public ::System::Object
{
public:
	::System::Collections::Generic::HashSet_1<::System::Int32>* LHINHLCKHNE; // 0x10
	::Il2CppArray<::FHAHJFHEEPD*>* OJMBOGGMIKO; // 0x18
	::System::Action* PLDOELOOFLL; // 0x20
	::BCCENHAKFOF DHDJDGFNBOA; // 0x28
	::System::Collections::Generic::Dictionary_2<::System::Int32, ::System::Int32>* FLBOKGKPECD; // 0x40
	::System::Boolean DLGKLGKOMHK; // 0x48
	::System::Byte _padding0[0x3];
	::System::Int32 IJDGGCANOFI; // 0x4C

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + EGJCEBONKON__CTOR_OFFSET))(this);
	}

	::System::Boolean OFHECOHPAKG()
	{
		return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + EGJCEBONKON_OFHECOHPAKG_OFFSET))(this);
	}

	::System::Void LNFENFDLMIG()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + EGJCEBONKON_LNFENFDLMIG_OFFSET))(this);
	}

	::System::Void FPMKEGMLNHG(::System::Action* EJGDHCIBCJH)
	{
		return ((::System::Void(*)(::PVOID, ::System::Action*))((::PBYTE)hIl2Cpp + EGJCEBONKON_FPMKEGMLNHG_OFFSET))(this, EJGDHCIBCJH);
	}

	::System::Void BMNMLAIJJGF(::KECPLIFGOCJ GFCJHNHLFEF)
	{
		return ((::System::Void(*)(::PVOID, ::KECPLIFGOCJ))((::PBYTE)hIl2Cpp + EGJCEBONKON_BMNMLAIJJGF_OFFSET))(this, GFCJHNHLFEF);
	}

	::System::Void PHOADBJGFBE()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + EGJCEBONKON_PHOADBJGFBE_OFFSET))(this);
	}

	::System::Void BHLAEBMEOLO()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + EGJCEBONKON_BHLAEBMEOLO_OFFSET))(this);
	}

	::System::Void Finalize()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + EGJCEBONKON_FINALIZE_OFFSET))(this);
	}

	::System::Void NAMKJOJBAOA()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + EGJCEBONKON_NAMKJOJBAOA_OFFSET))(this);
	}

	::FHAHJFHEEPD* IFDPKDOFOJD(::System::Int32 MGMDLMBEDJF)
	{
		return ((::FHAHJFHEEPD*(*)(::PVOID, ::System::Int32))((::PBYTE)hIl2Cpp + EGJCEBONKON_IFDPKDOFOJD_OFFSET))(this, MGMDLMBEDJF);
	}

	::System::Void CHLEALKAOJO()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + EGJCEBONKON_CHLEALKAOJO_OFFSET))(this);
	}

	::System::Void KMIMGEDAMCE(::Il2CppArray<::System::Byte>* LJBPECKCCEA)
	{
		return ((::System::Void(*)(::PVOID, ::Il2CppArray<::System::Byte>*))((::PBYTE)hIl2Cpp + EGJCEBONKON_KMIMGEDAMCE_OFFSET))(this, LJBPECKCCEA);
	}
};
