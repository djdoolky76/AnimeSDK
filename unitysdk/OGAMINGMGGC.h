#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/BAHHIPILMCK.h"
#include "unitysdk/KECPLIFGOCJ.h"
#include "unitysdk/System/Object.h"

class HIFDFOGDAMH;
namespace System { class Action; }
namespace System::Collections::Generic { template <typename T1, typename T2> class Dictionary_2; }
namespace System::Collections::Generic { template <typename T> class HashSet_1; }

#define OGAMINGMGGC_BHLAEBMEOLO_OFFSET UNITYSDK_OFFSET(0x1CFF9C70)
#define OGAMINGMGGC_BMNMLAIJJGF_OFFSET UNITYSDK_OFFSET(0x1CFF9A40)
#define OGAMINGMGGC_CHLEALKAOJO_OFFSET UNITYSDK_OFFSET(0x1CFF9BB0)
#define OGAMINGMGGC_FINALIZE_OFFSET UNITYSDK_OFFSET(0x1CFF9D50)
#define OGAMINGMGGC_FPMKEGMLNHG_OFFSET UNITYSDK_OFFSET(0x1CFF9A50)
#define OGAMINGMGGC_IFDPKDOFOJD_OFFSET UNITYSDK_OFFSET(0x1CFFA0C0)
#define OGAMINGMGGC_KMIMGEDAMCE_OFFSET UNITYSDK_OFFSET(0x1CFF9ED0)
#define OGAMINGMGGC_LNFENFDLMIG_OFFSET UNITYSDK_OFFSET(0x1CFF96A0)
#define OGAMINGMGGC_NAMKJOJBAOA_OFFSET UNITYSDK_OFFSET(0x1CFFA0A0)
#define OGAMINGMGGC_OFHECOHPAKG_OFFSET UNITYSDK_OFFSET(0x1CFF9680)
#define OGAMINGMGGC_PHOADBJGFBE_OFFSET UNITYSDK_OFFSET(0x1CFF9960)
#define OGAMINGMGGC__CTOR_OFFSET UNITYSDK_OFFSET(0x1CFF9E80)

inline static constexpr unsigned int OGAMINGMGGC_TypeDefinitionIndex = 12285;

class OGAMINGMGGC : public ::System::Object
{
public:
	::System::Collections::Generic::Dictionary_2<::System::Int32, ::System::Int32>* FLBOKGKPECD; // 0x10
	::Il2CppArray<::HIFDFOGDAMH*>* OJMBOGGMIKO; // 0x18
	::System::Collections::Generic::HashSet_1<::System::Int32>* LHINHLCKHNE; // 0x20
	::BAHHIPILMCK DHDJDGFNBOA; // 0x28
	::System::Action* PLDOELOOFLL; // 0x40
	::System::Int32 IJDGGCANOFI; // 0x48
	::System::Boolean DLGKLGKOMHK; // 0x4C

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + OGAMINGMGGC__CTOR_OFFSET))(this);
	}

	::System::Boolean OFHECOHPAKG()
	{
		return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + OGAMINGMGGC_OFHECOHPAKG_OFFSET))(this);
	}

	::System::Void LNFENFDLMIG()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + OGAMINGMGGC_LNFENFDLMIG_OFFSET))(this);
	}

	::System::Void FPMKEGMLNHG(::System::Action* EJGDHCIBCJH)
	{
		return ((::System::Void(*)(::PVOID, ::System::Action*))((::PBYTE)hIl2Cpp + OGAMINGMGGC_FPMKEGMLNHG_OFFSET))(this, EJGDHCIBCJH);
	}

	::System::Void BMNMLAIJJGF(::KECPLIFGOCJ GFCJHNHLFEF)
	{
		return ((::System::Void(*)(::PVOID, ::KECPLIFGOCJ))((::PBYTE)hIl2Cpp + OGAMINGMGGC_BMNMLAIJJGF_OFFSET))(this, GFCJHNHLFEF);
	}

	::System::Void PHOADBJGFBE()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + OGAMINGMGGC_PHOADBJGFBE_OFFSET))(this);
	}

	::System::Void BHLAEBMEOLO()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + OGAMINGMGGC_BHLAEBMEOLO_OFFSET))(this);
	}

	::System::Void Finalize()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + OGAMINGMGGC_FINALIZE_OFFSET))(this);
	}

	::System::Void KMIMGEDAMCE(::Il2CppArray<::System::Byte>* LJBPECKCCEA)
	{
		return ((::System::Void(*)(::PVOID, ::Il2CppArray<::System::Byte>*))((::PBYTE)hIl2Cpp + OGAMINGMGGC_KMIMGEDAMCE_OFFSET))(this, LJBPECKCCEA);
	}

	::System::Void NAMKJOJBAOA()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + OGAMINGMGGC_NAMKJOJBAOA_OFFSET))(this);
	}

	::HIFDFOGDAMH* IFDPKDOFOJD(::System::Int32 MGMDLMBEDJF)
	{
		return ((::HIFDFOGDAMH*(*)(::PVOID, ::System::Int32))((::PBYTE)hIl2Cpp + OGAMINGMGGC_IFDPKDOFOJD_OFFSET))(this, MGMDLMBEDJF);
	}

	::System::Void CHLEALKAOJO()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + OGAMINGMGGC_CHLEALKAOJO_OFFSET))(this);
	}
};
