#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/KECPLIFGOCJ.h"
#include "unitysdk/POGBCJINBHO.h"
#include "unitysdk/System/Object.h"

class FLCCLIBKLLD;
namespace System { class Action; }
namespace System::Collections::Generic { template <typename T1, typename T2> class Dictionary_2; }
namespace System::Collections::Generic { template <typename T> class HashSet_1; }

#define LOEOAFJENHD_BHLAEBMEOLO_OFFSET UNITYSDK_OFFSET(0x1B7F4BE0)
#define LOEOAFJENHD_BMNMLAIJJGF_OFFSET UNITYSDK_OFFSET(0x1B7F49B0)
#define LOEOAFJENHD_CHLEALKAOJO_OFFSET UNITYSDK_OFFSET(0x1B7F4B20)
#define LOEOAFJENHD_FINALIZE_OFFSET UNITYSDK_OFFSET(0x1B7F4CC0)
#define LOEOAFJENHD_FPMKEGMLNHG_OFFSET UNITYSDK_OFFSET(0x1B7F49C0)
#define LOEOAFJENHD_KMIMGEDAMCE_OFFSET UNITYSDK_OFFSET(0x1B7F4E40)
#define LOEOAFJENHD_LNFENFDLMIG_OFFSET UNITYSDK_OFFSET(0x1B7F4610)
#define LOEOAFJENHD_OFHECOHPAKG_OFFSET UNITYSDK_OFFSET(0x1B7F45F0)
#define LOEOAFJENHD_PHOADBJGFBE_OFFSET UNITYSDK_OFFSET(0x1B7F48D0)
#define LOEOAFJENHD__CTOR_OFFSET UNITYSDK_OFFSET(0x1B7F4DF0)

inline static constexpr unsigned int LOEOAFJENHD_TypeDefinitionIndex = 12955;

class LOEOAFJENHD : public ::System::Object
{
public:
	::Il2CppArray<::FLCCLIBKLLD*>* OJMBOGGMIKO; // 0x10
	::System::Collections::Generic::Dictionary_2<::System::Int32, ::System::Int32>* FLBOKGKPECD; // 0x18
	::POGBCJINBHO DHDJDGFNBOA; // 0x20
	::System::Action* PLDOELOOFLL; // 0x38
	::System::Collections::Generic::HashSet_1<::System::Int32>* LHINHLCKHNE; // 0x40
	::System::Boolean DLGKLGKOMHK; // 0x48
	::System::Byte _padding0[0x3];
	::System::Int32 IJDGGCANOFI; // 0x4C

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + LOEOAFJENHD__CTOR_OFFSET))(this);
	}

	::System::Boolean OFHECOHPAKG()
	{
		return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + LOEOAFJENHD_OFHECOHPAKG_OFFSET))(this);
	}

	::System::Void LNFENFDLMIG()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + LOEOAFJENHD_LNFENFDLMIG_OFFSET))(this);
	}

	::System::Void FPMKEGMLNHG(::System::Action* EJGDHCIBCJH)
	{
		return ((::System::Void(*)(::PVOID, ::System::Action*))((::PBYTE)hIl2Cpp + LOEOAFJENHD_FPMKEGMLNHG_OFFSET))(this, EJGDHCIBCJH);
	}

	::System::Void BMNMLAIJJGF(::KECPLIFGOCJ GFCJHNHLFEF)
	{
		return ((::System::Void(*)(::PVOID, ::KECPLIFGOCJ))((::PBYTE)hIl2Cpp + LOEOAFJENHD_BMNMLAIJJGF_OFFSET))(this, GFCJHNHLFEF);
	}

	::System::Void PHOADBJGFBE()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + LOEOAFJENHD_PHOADBJGFBE_OFFSET))(this);
	}

	::System::Void BHLAEBMEOLO()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + LOEOAFJENHD_BHLAEBMEOLO_OFFSET))(this);
	}

	::System::Void Finalize()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + LOEOAFJENHD_FINALIZE_OFFSET))(this);
	}

	::System::Void KMIMGEDAMCE(::Il2CppArray<::System::Byte>* LJBPECKCCEA)
	{
		return ((::System::Void(*)(::PVOID, ::Il2CppArray<::System::Byte>*))((::PBYTE)hIl2Cpp + LOEOAFJENHD_KMIMGEDAMCE_OFFSET))(this, LJBPECKCCEA);
	}

	::System::Void CHLEALKAOJO()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + LOEOAFJENHD_CHLEALKAOJO_OFFSET))(this);
	}
};
