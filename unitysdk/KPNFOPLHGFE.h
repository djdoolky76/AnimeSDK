#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/AJOMCIGNOKD.h"
#include "unitysdk/KECPLIFGOCJ.h"
#include "unitysdk/System/Object.h"

class FJHLKMCKFMO;
namespace System { class Action; }
namespace System::Collections::Generic { template <typename T1, typename T2> class Dictionary_2; }
namespace System::Collections::Generic { template <typename T> class HashSet_1; }

#define KPNFOPLHGFE_BHLAEBMEOLO_OFFSET UNITYSDK_OFFSET(0x1B646270)
#define KPNFOPLHGFE_BMNMLAIJJGF_OFFSET UNITYSDK_OFFSET(0x1B646030)
#define KPNFOPLHGFE_CHLEALKAOJO_OFFSET UNITYSDK_OFFSET(0x1B6461B0)
#define KPNFOPLHGFE_FINALIZE_OFFSET UNITYSDK_OFFSET(0x1B646350)
#define KPNFOPLHGFE_FPMKEGMLNHG_OFFSET UNITYSDK_OFFSET(0x1B646040)
#define KPNFOPLHGFE_KMIMGEDAMCE_OFFSET UNITYSDK_OFFSET(0x1B6464D0)
#define KPNFOPLHGFE_LNFENFDLMIG_OFFSET UNITYSDK_OFFSET(0x1B645C80)
#define KPNFOPLHGFE_OFHECOHPAKG_OFFSET UNITYSDK_OFFSET(0x1B645C60)
#define KPNFOPLHGFE_PHOADBJGFBE_OFFSET UNITYSDK_OFFSET(0x1B645F40)
#define KPNFOPLHGFE__CTOR_OFFSET UNITYSDK_OFFSET(0x1B646480)

inline static constexpr unsigned int KPNFOPLHGFE_TypeDefinitionIndex = 11230;

class KPNFOPLHGFE : public ::System::Object
{
public:
	::System::Action* PLDOELOOFLL; // 0x10
	::System::Collections::Generic::HashSet_1<::System::Int32>* LHINHLCKHNE; // 0x18
	::System::Collections::Generic::Dictionary_2<::System::Int32, ::System::Int32>* FLBOKGKPECD; // 0x20
	::AJOMCIGNOKD DHDJDGFNBOA; // 0x28
	::Il2CppArray<::FJHLKMCKFMO*>* OJMBOGGMIKO; // 0x40
	::System::Int32 IJDGGCANOFI; // 0x48
	::System::Boolean DLGKLGKOMHK; // 0x4C

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + KPNFOPLHGFE__CTOR_OFFSET))(this);
	}

	::System::Boolean OFHECOHPAKG()
	{
		return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + KPNFOPLHGFE_OFHECOHPAKG_OFFSET))(this);
	}

	::System::Void LNFENFDLMIG()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + KPNFOPLHGFE_LNFENFDLMIG_OFFSET))(this);
	}

	::System::Void FPMKEGMLNHG(::System::Action* EJGDHCIBCJH)
	{
		return ((::System::Void(*)(::PVOID, ::System::Action*))((::PBYTE)hIl2Cpp + KPNFOPLHGFE_FPMKEGMLNHG_OFFSET))(this, EJGDHCIBCJH);
	}

	::System::Void BMNMLAIJJGF(::KECPLIFGOCJ GFCJHNHLFEF)
	{
		return ((::System::Void(*)(::PVOID, ::KECPLIFGOCJ))((::PBYTE)hIl2Cpp + KPNFOPLHGFE_BMNMLAIJJGF_OFFSET))(this, GFCJHNHLFEF);
	}

	::System::Void PHOADBJGFBE()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + KPNFOPLHGFE_PHOADBJGFBE_OFFSET))(this);
	}

	::System::Void BHLAEBMEOLO()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + KPNFOPLHGFE_BHLAEBMEOLO_OFFSET))(this);
	}

	::System::Void Finalize()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + KPNFOPLHGFE_FINALIZE_OFFSET))(this);
	}

	::System::Void KMIMGEDAMCE(::Il2CppArray<::System::Byte>* LJBPECKCCEA)
	{
		return ((::System::Void(*)(::PVOID, ::Il2CppArray<::System::Byte>*))((::PBYTE)hIl2Cpp + KPNFOPLHGFE_KMIMGEDAMCE_OFFSET))(this, LJBPECKCCEA);
	}

	::System::Void CHLEALKAOJO()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + KPNFOPLHGFE_CHLEALKAOJO_OFFSET))(this);
	}
};
