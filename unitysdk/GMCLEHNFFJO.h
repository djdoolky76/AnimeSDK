#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/FIMHAGCBADI.h"
#include "unitysdk/KECPLIFGOCJ.h"
#include "unitysdk/System/Object.h"

class ECMHAFNFJKJ;
namespace System { class Action; }
namespace System::Collections::Generic { template <typename T1, typename T2> class Dictionary_2; }
namespace System::Collections::Generic { template <typename T> class HashSet_1; }

#define GMCLEHNFFJO_BHLAEBMEOLO_OFFSET UNITYSDK_OFFSET(0x1B4D8500)
#define GMCLEHNFFJO_BMNMLAIJJGF_OFFSET UNITYSDK_OFFSET(0x1B4D82C0)
#define GMCLEHNFFJO_CHLEALKAOJO_OFFSET UNITYSDK_OFFSET(0x1B4D8440)
#define GMCLEHNFFJO_FINALIZE_OFFSET UNITYSDK_OFFSET(0x1B4D85E0)
#define GMCLEHNFFJO_FPMKEGMLNHG_OFFSET UNITYSDK_OFFSET(0x1B4D82D0)
#define GMCLEHNFFJO_KMIMGEDAMCE_OFFSET UNITYSDK_OFFSET(0x1B4D8760)
#define GMCLEHNFFJO_LNFENFDLMIG_OFFSET UNITYSDK_OFFSET(0x1B4D7F10)
#define GMCLEHNFFJO_OFHECOHPAKG_OFFSET UNITYSDK_OFFSET(0x1B4D7EF0)
#define GMCLEHNFFJO_PHOADBJGFBE_OFFSET UNITYSDK_OFFSET(0x1B4D81D0)
#define GMCLEHNFFJO__CTOR_OFFSET UNITYSDK_OFFSET(0x1B4D8710)

inline static constexpr unsigned int GMCLEHNFFJO_TypeDefinitionIndex = 14205;

class GMCLEHNFFJO : public ::System::Object
{
public:
	::System::Collections::Generic::Dictionary_2<::System::Int32, ::System::Int32>* FLBOKGKPECD; // 0x10
	::System::Collections::Generic::HashSet_1<::System::Int32>* LHINHLCKHNE; // 0x18
	::Il2CppArray<::ECMHAFNFJKJ*>* OJMBOGGMIKO; // 0x20
	::System::Action* PLDOELOOFLL; // 0x28
	::FIMHAGCBADI DHDJDGFNBOA; // 0x30
	::System::Boolean DLGKLGKOMHK; // 0x48
	::System::Byte _padding0[0x3];
	::System::Int32 IJDGGCANOFI; // 0x4C

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + GMCLEHNFFJO__CTOR_OFFSET))(this);
	}

	::System::Boolean OFHECOHPAKG()
	{
		return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + GMCLEHNFFJO_OFHECOHPAKG_OFFSET))(this);
	}

	::System::Void LNFENFDLMIG()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + GMCLEHNFFJO_LNFENFDLMIG_OFFSET))(this);
	}

	::System::Void FPMKEGMLNHG(::System::Action* EJGDHCIBCJH)
	{
		return ((::System::Void(*)(::PVOID, ::System::Action*))((::PBYTE)hIl2Cpp + GMCLEHNFFJO_FPMKEGMLNHG_OFFSET))(this, EJGDHCIBCJH);
	}

	::System::Void BMNMLAIJJGF(::KECPLIFGOCJ GFCJHNHLFEF)
	{
		return ((::System::Void(*)(::PVOID, ::KECPLIFGOCJ))((::PBYTE)hIl2Cpp + GMCLEHNFFJO_BMNMLAIJJGF_OFFSET))(this, GFCJHNHLFEF);
	}

	::System::Void PHOADBJGFBE()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + GMCLEHNFFJO_PHOADBJGFBE_OFFSET))(this);
	}

	::System::Void BHLAEBMEOLO()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + GMCLEHNFFJO_BHLAEBMEOLO_OFFSET))(this);
	}

	::System::Void Finalize()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + GMCLEHNFFJO_FINALIZE_OFFSET))(this);
	}

	::System::Void KMIMGEDAMCE(::Il2CppArray<::System::Byte>* LJBPECKCCEA)
	{
		return ((::System::Void(*)(::PVOID, ::Il2CppArray<::System::Byte>*))((::PBYTE)hIl2Cpp + GMCLEHNFFJO_KMIMGEDAMCE_OFFSET))(this, LJBPECKCCEA);
	}

	::System::Void CHLEALKAOJO()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + GMCLEHNFFJO_CHLEALKAOJO_OFFSET))(this);
	}
};
