#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/FOFJGNLGJIF.h"
#include "unitysdk/KECPLIFGOCJ.h"
#include "unitysdk/System/Object.h"

class PPLMJIEIEAG;
namespace System { class Action; }
namespace System::Collections::Generic { template <typename T1, typename T2> class Dictionary_2; }
namespace System::Collections::Generic { template <typename T> class HashSet_1; }

#define AILPAEMFOFG_BHLAEBMEOLO_OFFSET UNITYSDK_OFFSET(0x1B9866E0)
#define AILPAEMFOFG_BMNMLAIJJGF_OFFSET UNITYSDK_OFFSET(0x1B986460)
#define AILPAEMFOFG_CHLEALKAOJO_OFFSET UNITYSDK_OFFSET(0x1B986470)
#define AILPAEMFOFG_FINALIZE_OFFSET UNITYSDK_OFFSET(0x1B986530)
#define AILPAEMFOFG_FPMKEGMLNHG_OFFSET UNITYSDK_OFFSET(0x1B986660)
#define AILPAEMFOFG_IFDPKDOFOJD_OFFSET UNITYSDK_OFFSET(0x1B986AE0)
#define AILPAEMFOFG_KMIMGEDAMCE_OFFSET UNITYSDK_OFFSET(0x1B986830)
#define AILPAEMFOFG_LNFENFDLMIG_OFFSET UNITYSDK_OFFSET(0x1B9860B0)
#define AILPAEMFOFG_NAMKJOJBAOA_OFFSET UNITYSDK_OFFSET(0x1B986810)
#define AILPAEMFOFG_OFHECOHPAKG_OFFSET UNITYSDK_OFFSET(0x1B986090)
#define AILPAEMFOFG_PHOADBJGFBE_OFFSET UNITYSDK_OFFSET(0x1B986370)
#define AILPAEMFOFG__CTOR_OFFSET UNITYSDK_OFFSET(0x1B9867C0)

inline static constexpr unsigned int AILPAEMFOFG_TypeDefinitionIndex = 17197;

class AILPAEMFOFG : public ::System::Object
{
public:
	::System::Action* PLDOELOOFLL; // 0x10
	::System::Collections::Generic::Dictionary_2<::System::Int32, ::System::Int32>* FLBOKGKPECD; // 0x18
	::System::Collections::Generic::HashSet_1<::System::Int32>* LHINHLCKHNE; // 0x20
	::FOFJGNLGJIF DHDJDGFNBOA; // 0x28
	::Il2CppArray<::PPLMJIEIEAG*>* OJMBOGGMIKO; // 0x40
	::System::Int32 IJDGGCANOFI; // 0x48
	::System::Boolean DLGKLGKOMHK; // 0x4C

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + AILPAEMFOFG__CTOR_OFFSET))(this);
	}

	::System::Boolean OFHECOHPAKG()
	{
		return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + AILPAEMFOFG_OFHECOHPAKG_OFFSET))(this);
	}

	::System::Void LNFENFDLMIG()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + AILPAEMFOFG_LNFENFDLMIG_OFFSET))(this);
	}

	::System::Void PHOADBJGFBE()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + AILPAEMFOFG_PHOADBJGFBE_OFFSET))(this);
	}

	::System::Void Finalize()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + AILPAEMFOFG_FINALIZE_OFFSET))(this);
	}

	::System::Void FPMKEGMLNHG(::System::Action* EJGDHCIBCJH)
	{
		return ((::System::Void(*)(::PVOID, ::System::Action*))((::PBYTE)hIl2Cpp + AILPAEMFOFG_FPMKEGMLNHG_OFFSET))(this, EJGDHCIBCJH);
	}

	::System::Void BMNMLAIJJGF(::KECPLIFGOCJ GFCJHNHLFEF)
	{
		return ((::System::Void(*)(::PVOID, ::KECPLIFGOCJ))((::PBYTE)hIl2Cpp + AILPAEMFOFG_BMNMLAIJJGF_OFFSET))(this, GFCJHNHLFEF);
	}

	::System::Void BHLAEBMEOLO()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + AILPAEMFOFG_BHLAEBMEOLO_OFFSET))(this);
	}

	::System::Void NAMKJOJBAOA()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + AILPAEMFOFG_NAMKJOJBAOA_OFFSET))(this);
	}

	::System::Void KMIMGEDAMCE(::Il2CppArray<::System::Byte>* LJBPECKCCEA)
	{
		return ((::System::Void(*)(::PVOID, ::Il2CppArray<::System::Byte>*))((::PBYTE)hIl2Cpp + AILPAEMFOFG_KMIMGEDAMCE_OFFSET))(this, LJBPECKCCEA);
	}

	::PPLMJIEIEAG* IFDPKDOFOJD(::System::Int32 MGMDLMBEDJF)
	{
		return ((::PPLMJIEIEAG*(*)(::PVOID, ::System::Int32))((::PBYTE)hIl2Cpp + AILPAEMFOFG_IFDPKDOFOJD_OFFSET))(this, MGMDLMBEDJF);
	}

	::System::Void CHLEALKAOJO()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + AILPAEMFOFG_CHLEALKAOJO_OFFSET))(this);
	}
};
