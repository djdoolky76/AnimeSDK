#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/GAPFKECOEHC.h"
#include "unitysdk/KECPLIFGOCJ.h"
#include "unitysdk/System/Object.h"

class IBMDILCEGBN;
namespace System { class Action; }
namespace System::Collections::Generic { template <typename T1, typename T2> class Dictionary_2; }
namespace System::Collections::Generic { template <typename T> class HashSet_1; }

#define FBIMJIJFGBH_BHLAEBMEOLO_OFFSET UNITYSDK_OFFSET(0x16632E40)
#define FBIMJIJFGBH_BMNMLAIJJGF_OFFSET UNITYSDK_OFFSET(0x16632C10)
#define FBIMJIJFGBH_CHLEALKAOJO_OFFSET UNITYSDK_OFFSET(0x16632D80)
#define FBIMJIJFGBH_FINALIZE_OFFSET UNITYSDK_OFFSET(0x16632F20)
#define FBIMJIJFGBH_FPMKEGMLNHG_OFFSET UNITYSDK_OFFSET(0x16632C20)
#define FBIMJIJFGBH_IFDPKDOFOJD_OFFSET UNITYSDK_OFFSET(0x166330A0)
#define FBIMJIJFGBH_KMIMGEDAMCE_OFFSET UNITYSDK_OFFSET(0x166332F0)
#define FBIMJIJFGBH_LNFENFDLMIG_OFFSET UNITYSDK_OFFSET(0x16632870)
#define FBIMJIJFGBH_NAMKJOJBAOA_OFFSET UNITYSDK_OFFSET(0x166332D0)
#define FBIMJIJFGBH_OFHECOHPAKG_OFFSET UNITYSDK_OFFSET(0x16632850)
#define FBIMJIJFGBH_PHOADBJGFBE_OFFSET UNITYSDK_OFFSET(0x16632B30)
#define FBIMJIJFGBH__CTOR_OFFSET UNITYSDK_OFFSET(0x16633050)

inline static constexpr unsigned int FBIMJIJFGBH_TypeDefinitionIndex = 11497;

class FBIMJIJFGBH : public ::System::Object
{
public:
	::GAPFKECOEHC DHDJDGFNBOA; // 0x10
	::System::Action* PLDOELOOFLL; // 0x28
	::System::Collections::Generic::HashSet_1<::System::Int32>* LHINHLCKHNE; // 0x30
	::System::Collections::Generic::Dictionary_2<::System::Int32, ::System::Int32>* FLBOKGKPECD; // 0x38
	::Il2CppArray<::IBMDILCEGBN*>* OJMBOGGMIKO; // 0x40
	::System::Int32 IJDGGCANOFI; // 0x48
	::System::Boolean DLGKLGKOMHK; // 0x4C

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + FBIMJIJFGBH__CTOR_OFFSET))(this);
	}

	::System::Boolean OFHECOHPAKG()
	{
		return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + FBIMJIJFGBH_OFHECOHPAKG_OFFSET))(this);
	}

	::System::Void LNFENFDLMIG()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + FBIMJIJFGBH_LNFENFDLMIG_OFFSET))(this);
	}

	::System::Void FPMKEGMLNHG(::System::Action* EJGDHCIBCJH)
	{
		return ((::System::Void(*)(::PVOID, ::System::Action*))((::PBYTE)hIl2Cpp + FBIMJIJFGBH_FPMKEGMLNHG_OFFSET))(this, EJGDHCIBCJH);
	}

	::System::Void BMNMLAIJJGF(::KECPLIFGOCJ GFCJHNHLFEF)
	{
		return ((::System::Void(*)(::PVOID, ::KECPLIFGOCJ))((::PBYTE)hIl2Cpp + FBIMJIJFGBH_BMNMLAIJJGF_OFFSET))(this, GFCJHNHLFEF);
	}

	::System::Void PHOADBJGFBE()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + FBIMJIJFGBH_PHOADBJGFBE_OFFSET))(this);
	}

	::System::Void BHLAEBMEOLO()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + FBIMJIJFGBH_BHLAEBMEOLO_OFFSET))(this);
	}

	::System::Void Finalize()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + FBIMJIJFGBH_FINALIZE_OFFSET))(this);
	}

	::IBMDILCEGBN* IFDPKDOFOJD(::System::Int32 MGMDLMBEDJF)
	{
		return ((::IBMDILCEGBN*(*)(::PVOID, ::System::Int32))((::PBYTE)hIl2Cpp + FBIMJIJFGBH_IFDPKDOFOJD_OFFSET))(this, MGMDLMBEDJF);
	}

	::System::Void KMIMGEDAMCE(::Il2CppArray<::System::Byte>* LJBPECKCCEA)
	{
		return ((::System::Void(*)(::PVOID, ::Il2CppArray<::System::Byte>*))((::PBYTE)hIl2Cpp + FBIMJIJFGBH_KMIMGEDAMCE_OFFSET))(this, LJBPECKCCEA);
	}

	::System::Void CHLEALKAOJO()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + FBIMJIJFGBH_CHLEALKAOJO_OFFSET))(this);
	}

	::System::Void NAMKJOJBAOA()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + FBIMJIJFGBH_NAMKJOJBAOA_OFFSET))(this);
	}
};
