#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/KECPLIFGOCJ.h"
#include "unitysdk/MIJMOBLHENO.h"
#include "unitysdk/System/Object.h"

class DOKOJBEFGOM;
namespace System { class Action; }
namespace System::Collections::Generic { template <typename T1, typename T2> class Dictionary_2; }
namespace System::Collections::Generic { template <typename T> class HashSet_1; }

#define CCLMKJBLEAC_BHLAEBMEOLO_OFFSET UNITYSDK_OFFSET(0x194FEE80)
#define CCLMKJBLEAC_BMNMLAIJJGF_OFFSET UNITYSDK_OFFSET(0x194FEC40)
#define CCLMKJBLEAC_CHLEALKAOJO_OFFSET UNITYSDK_OFFSET(0x194FEDC0)
#define CCLMKJBLEAC_FINALIZE_OFFSET UNITYSDK_OFFSET(0x194FEF60)
#define CCLMKJBLEAC_FPMKEGMLNHG_OFFSET UNITYSDK_OFFSET(0x194FEC50)
#define CCLMKJBLEAC_IFDPKDOFOJD_OFFSET UNITYSDK_OFFSET(0x194FF2D0)
#define CCLMKJBLEAC_KMIMGEDAMCE_OFFSET UNITYSDK_OFFSET(0x194FF100)
#define CCLMKJBLEAC_LNFENFDLMIG_OFFSET UNITYSDK_OFFSET(0x194FE890)
#define CCLMKJBLEAC_NAMKJOJBAOA_OFFSET UNITYSDK_OFFSET(0x194FF0E0)
#define CCLMKJBLEAC_OFHECOHPAKG_OFFSET UNITYSDK_OFFSET(0x194FE870)
#define CCLMKJBLEAC_PHOADBJGFBE_OFFSET UNITYSDK_OFFSET(0x194FEB50)
#define CCLMKJBLEAC__CTOR_OFFSET UNITYSDK_OFFSET(0x194FF090)

inline static constexpr unsigned int CCLMKJBLEAC_TypeDefinitionIndex = 16521;

class CCLMKJBLEAC : public ::System::Object
{
public:
	::System::Collections::Generic::Dictionary_2<::System::Int32, ::System::Int32>* FLBOKGKPECD; // 0x10
	::System::Action* PLDOELOOFLL; // 0x18
	::Il2CppArray<::DOKOJBEFGOM*>* OJMBOGGMIKO; // 0x20
	::MIJMOBLHENO DHDJDGFNBOA; // 0x28
	::System::Collections::Generic::HashSet_1<::System::Int32>* LHINHLCKHNE; // 0x40
	::System::Int32 IJDGGCANOFI; // 0x48
	::System::Boolean DLGKLGKOMHK; // 0x4C

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CCLMKJBLEAC__CTOR_OFFSET))(this);
	}

	::System::Boolean OFHECOHPAKG()
	{
		return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + CCLMKJBLEAC_OFHECOHPAKG_OFFSET))(this);
	}

	::System::Void LNFENFDLMIG()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CCLMKJBLEAC_LNFENFDLMIG_OFFSET))(this);
	}

	::System::Void FPMKEGMLNHG(::System::Action* EJGDHCIBCJH)
	{
		return ((::System::Void(*)(::PVOID, ::System::Action*))((::PBYTE)hIl2Cpp + CCLMKJBLEAC_FPMKEGMLNHG_OFFSET))(this, EJGDHCIBCJH);
	}

	::System::Void BMNMLAIJJGF(::KECPLIFGOCJ GFCJHNHLFEF)
	{
		return ((::System::Void(*)(::PVOID, ::KECPLIFGOCJ))((::PBYTE)hIl2Cpp + CCLMKJBLEAC_BMNMLAIJJGF_OFFSET))(this, GFCJHNHLFEF);
	}

	::System::Void PHOADBJGFBE()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CCLMKJBLEAC_PHOADBJGFBE_OFFSET))(this);
	}

	::System::Void BHLAEBMEOLO()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CCLMKJBLEAC_BHLAEBMEOLO_OFFSET))(this);
	}

	::System::Void Finalize()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CCLMKJBLEAC_FINALIZE_OFFSET))(this);
	}

	::System::Void CHLEALKAOJO()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CCLMKJBLEAC_CHLEALKAOJO_OFFSET))(this);
	}

	::System::Void NAMKJOJBAOA()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CCLMKJBLEAC_NAMKJOJBAOA_OFFSET))(this);
	}

	::System::Void KMIMGEDAMCE(::Il2CppArray<::System::Byte>* LJBPECKCCEA)
	{
		return ((::System::Void(*)(::PVOID, ::Il2CppArray<::System::Byte>*))((::PBYTE)hIl2Cpp + CCLMKJBLEAC_KMIMGEDAMCE_OFFSET))(this, LJBPECKCCEA);
	}

	::DOKOJBEFGOM* IFDPKDOFOJD(::System::Int32 MGMDLMBEDJF)
	{
		return ((::DOKOJBEFGOM*(*)(::PVOID, ::System::Int32))((::PBYTE)hIl2Cpp + CCLMKJBLEAC_IFDPKDOFOJD_OFFSET))(this, MGMDLMBEDJF);
	}
};
