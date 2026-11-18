#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/KECPLIFGOCJ.h"
#include "unitysdk/PNPINBEHKFO.h"
#include "unitysdk/System/Object.h"

class CFIIICFAGBH;
namespace System { class Action; }
namespace System::Collections::Generic { template <typename T1, typename T2> class Dictionary_2; }
namespace System::Collections::Generic { template <typename T> class HashSet_1; }

#define JPBFCOKGHJN_BHLAEBMEOLO_OFFSET UNITYSDK_OFFSET(0x19550EC0)
#define JPBFCOKGHJN_BMNMLAIJJGF_OFFSET UNITYSDK_OFFSET(0x19550C80)
#define JPBFCOKGHJN_CHLEALKAOJO_OFFSET UNITYSDK_OFFSET(0x19550E00)
#define JPBFCOKGHJN_FINALIZE_OFFSET UNITYSDK_OFFSET(0x19550FA0)
#define JPBFCOKGHJN_FPMKEGMLNHG_OFFSET UNITYSDK_OFFSET(0x19550C90)
#define JPBFCOKGHJN_KMIMGEDAMCE_OFFSET UNITYSDK_OFFSET(0x19551120)
#define JPBFCOKGHJN_LNFENFDLMIG_OFFSET UNITYSDK_OFFSET(0x195508D0)
#define JPBFCOKGHJN_OFHECOHPAKG_OFFSET UNITYSDK_OFFSET(0x195508B0)
#define JPBFCOKGHJN_PHOADBJGFBE_OFFSET UNITYSDK_OFFSET(0x19550B90)
#define JPBFCOKGHJN__CTOR_OFFSET UNITYSDK_OFFSET(0x195510D0)

inline static constexpr unsigned int JPBFCOKGHJN_TypeDefinitionIndex = 16088;

class JPBFCOKGHJN : public ::System::Object
{
public:
	::Il2CppArray<::CFIIICFAGBH*>* OJMBOGGMIKO; // 0x10
	::PNPINBEHKFO DHDJDGFNBOA; // 0x18
	::System::Collections::Generic::Dictionary_2<::System::Int32, ::System::Int32>* FLBOKGKPECD; // 0x30
	::System::Collections::Generic::HashSet_1<::System::Int32>* LHINHLCKHNE; // 0x38
	::System::Action* PLDOELOOFLL; // 0x40
	::System::Boolean DLGKLGKOMHK; // 0x48
	::System::Byte _padding0[0x3];
	::System::Int32 IJDGGCANOFI; // 0x4C

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + JPBFCOKGHJN__CTOR_OFFSET))(this);
	}

	::System::Boolean OFHECOHPAKG()
	{
		return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + JPBFCOKGHJN_OFHECOHPAKG_OFFSET))(this);
	}

	::System::Void LNFENFDLMIG()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + JPBFCOKGHJN_LNFENFDLMIG_OFFSET))(this);
	}

	::System::Void FPMKEGMLNHG(::System::Action* EJGDHCIBCJH)
	{
		return ((::System::Void(*)(::PVOID, ::System::Action*))((::PBYTE)hIl2Cpp + JPBFCOKGHJN_FPMKEGMLNHG_OFFSET))(this, EJGDHCIBCJH);
	}

	::System::Void BMNMLAIJJGF(::KECPLIFGOCJ GFCJHNHLFEF)
	{
		return ((::System::Void(*)(::PVOID, ::KECPLIFGOCJ))((::PBYTE)hIl2Cpp + JPBFCOKGHJN_BMNMLAIJJGF_OFFSET))(this, GFCJHNHLFEF);
	}

	::System::Void PHOADBJGFBE()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + JPBFCOKGHJN_PHOADBJGFBE_OFFSET))(this);
	}

	::System::Void BHLAEBMEOLO()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + JPBFCOKGHJN_BHLAEBMEOLO_OFFSET))(this);
	}

	::System::Void Finalize()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + JPBFCOKGHJN_FINALIZE_OFFSET))(this);
	}

	::System::Void CHLEALKAOJO()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + JPBFCOKGHJN_CHLEALKAOJO_OFFSET))(this);
	}

	::System::Void KMIMGEDAMCE(::Il2CppArray<::System::Byte>* LJBPECKCCEA)
	{
		return ((::System::Void(*)(::PVOID, ::Il2CppArray<::System::Byte>*))((::PBYTE)hIl2Cpp + JPBFCOKGHJN_KMIMGEDAMCE_OFFSET))(this, LJBPECKCCEA);
	}
};
