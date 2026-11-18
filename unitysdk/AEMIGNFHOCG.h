#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/GLHCEEKJHEI.h"
#include "unitysdk/KECPLIFGOCJ.h"
#include "unitysdk/System/Object.h"

class DECHCEBKOEI;
namespace System { class Action; }
namespace System::Collections::Generic { template <typename T1, typename T2> class Dictionary_2; }
namespace System::Collections::Generic { template <typename T> class HashSet_1; }

#define AEMIGNFHOCG_BHLAEBMEOLO_OFFSET UNITYSDK_OFFSET(0x1B9829D0)
#define AEMIGNFHOCG_BMNMLAIJJGF_OFFSET UNITYSDK_OFFSET(0x1B9827A0)
#define AEMIGNFHOCG_CHLEALKAOJO_OFFSET UNITYSDK_OFFSET(0x1B982910)
#define AEMIGNFHOCG_FINALIZE_OFFSET UNITYSDK_OFFSET(0x1B982AB0)
#define AEMIGNFHOCG_FPMKEGMLNHG_OFFSET UNITYSDK_OFFSET(0x1B9827B0)
#define AEMIGNFHOCG_IFDPKDOFOJD_OFFSET UNITYSDK_OFFSET(0x1B982E20)
#define AEMIGNFHOCG_KMIMGEDAMCE_OFFSET UNITYSDK_OFFSET(0x1B982C50)
#define AEMIGNFHOCG_LNFENFDLMIG_OFFSET UNITYSDK_OFFSET(0x1B982400)
#define AEMIGNFHOCG_NAMKJOJBAOA_OFFSET UNITYSDK_OFFSET(0x1B982C30)
#define AEMIGNFHOCG_OFHECOHPAKG_OFFSET UNITYSDK_OFFSET(0x1B9823E0)
#define AEMIGNFHOCG_PHOADBJGFBE_OFFSET UNITYSDK_OFFSET(0x1B9826C0)
#define AEMIGNFHOCG__CTOR_OFFSET UNITYSDK_OFFSET(0x1B982BE0)

inline static constexpr unsigned int AEMIGNFHOCG_TypeDefinitionIndex = 11083;

class AEMIGNFHOCG : public ::System::Object
{
public:
	::System::Action* PLDOELOOFLL; // 0x10
	::System::Collections::Generic::HashSet_1<::System::Int32>* LHINHLCKHNE; // 0x18
	::Il2CppArray<::DECHCEBKOEI*>* OJMBOGGMIKO; // 0x20
	::System::Collections::Generic::Dictionary_2<::System::Int32, ::System::Int32>* FLBOKGKPECD; // 0x28
	::GLHCEEKJHEI DHDJDGFNBOA; // 0x30
	::System::Int32 IJDGGCANOFI; // 0x48
	::System::Boolean DLGKLGKOMHK; // 0x4C

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + AEMIGNFHOCG__CTOR_OFFSET))(this);
	}

	::System::Boolean OFHECOHPAKG()
	{
		return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + AEMIGNFHOCG_OFHECOHPAKG_OFFSET))(this);
	}

	::System::Void LNFENFDLMIG()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + AEMIGNFHOCG_LNFENFDLMIG_OFFSET))(this);
	}

	::System::Void FPMKEGMLNHG(::System::Action* EJGDHCIBCJH)
	{
		return ((::System::Void(*)(::PVOID, ::System::Action*))((::PBYTE)hIl2Cpp + AEMIGNFHOCG_FPMKEGMLNHG_OFFSET))(this, EJGDHCIBCJH);
	}

	::System::Void BMNMLAIJJGF(::KECPLIFGOCJ GFCJHNHLFEF)
	{
		return ((::System::Void(*)(::PVOID, ::KECPLIFGOCJ))((::PBYTE)hIl2Cpp + AEMIGNFHOCG_BMNMLAIJJGF_OFFSET))(this, GFCJHNHLFEF);
	}

	::System::Void PHOADBJGFBE()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + AEMIGNFHOCG_PHOADBJGFBE_OFFSET))(this);
	}

	::System::Void BHLAEBMEOLO()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + AEMIGNFHOCG_BHLAEBMEOLO_OFFSET))(this);
	}

	::System::Void Finalize()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + AEMIGNFHOCG_FINALIZE_OFFSET))(this);
	}

	::System::Void NAMKJOJBAOA()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + AEMIGNFHOCG_NAMKJOJBAOA_OFFSET))(this);
	}

	::System::Void KMIMGEDAMCE(::Il2CppArray<::System::Byte>* LJBPECKCCEA)
	{
		return ((::System::Void(*)(::PVOID, ::Il2CppArray<::System::Byte>*))((::PBYTE)hIl2Cpp + AEMIGNFHOCG_KMIMGEDAMCE_OFFSET))(this, LJBPECKCCEA);
	}

	::DECHCEBKOEI* IFDPKDOFOJD(::System::Int32 MGMDLMBEDJF)
	{
		return ((::DECHCEBKOEI*(*)(::PVOID, ::System::Int32))((::PBYTE)hIl2Cpp + AEMIGNFHOCG_IFDPKDOFOJD_OFFSET))(this, MGMDLMBEDJF);
	}

	::System::Void CHLEALKAOJO()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + AEMIGNFHOCG_CHLEALKAOJO_OFFSET))(this);
	}
};
