#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/IBDAANICOBK.h"
#include "unitysdk/KECPLIFGOCJ.h"
#include "unitysdk/System/Object.h"

class LBEICGOHMEN;
namespace System { class Action; }
namespace System::Collections::Generic { template <typename T1, typename T2> class Dictionary_2; }
namespace System::Collections::Generic { template <typename T> class HashSet_1; }

#define BCANJGFKFHD_BHLAEBMEOLO_OFFSET UNITYSDK_OFFSET(0x1B98DA70)
#define BCANJGFKFHD_BMNMLAIJJGF_OFFSET UNITYSDK_OFFSET(0x1B98D840)
#define BCANJGFKFHD_CHLEALKAOJO_OFFSET UNITYSDK_OFFSET(0x1B98D9B0)
#define BCANJGFKFHD_FINALIZE_OFFSET UNITYSDK_OFFSET(0x1B98DB50)
#define BCANJGFKFHD_FPMKEGMLNHG_OFFSET UNITYSDK_OFFSET(0x1B98D850)
#define BCANJGFKFHD_KMIMGEDAMCE_OFFSET UNITYSDK_OFFSET(0x1B98DCD0)
#define BCANJGFKFHD_LNFENFDLMIG_OFFSET UNITYSDK_OFFSET(0x1B98D4A0)
#define BCANJGFKFHD_OFHECOHPAKG_OFFSET UNITYSDK_OFFSET(0x1B98D480)
#define BCANJGFKFHD_PHOADBJGFBE_OFFSET UNITYSDK_OFFSET(0x1B98D760)
#define BCANJGFKFHD__CTOR_OFFSET UNITYSDK_OFFSET(0x1B98DC80)

inline static constexpr unsigned int BCANJGFKFHD_TypeDefinitionIndex = 10100;

class BCANJGFKFHD : public ::System::Object
{
public:
	::IBDAANICOBK DHDJDGFNBOA; // 0x10
	::System::Collections::Generic::HashSet_1<::System::Int32>* LHINHLCKHNE; // 0x28
	::System::Action* PLDOELOOFLL; // 0x30
	::System::Collections::Generic::Dictionary_2<::System::Int32, ::System::Int32>* FLBOKGKPECD; // 0x38
	::Il2CppArray<::LBEICGOHMEN*>* OJMBOGGMIKO; // 0x40
	::System::Boolean DLGKLGKOMHK; // 0x48
	::System::Byte _padding0[0x3];
	::System::Int32 IJDGGCANOFI; // 0x4C

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + BCANJGFKFHD__CTOR_OFFSET))(this);
	}

	::System::Boolean OFHECOHPAKG()
	{
		return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + BCANJGFKFHD_OFHECOHPAKG_OFFSET))(this);
	}

	::System::Void LNFENFDLMIG()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + BCANJGFKFHD_LNFENFDLMIG_OFFSET))(this);
	}

	::System::Void FPMKEGMLNHG(::System::Action* EJGDHCIBCJH)
	{
		return ((::System::Void(*)(::PVOID, ::System::Action*))((::PBYTE)hIl2Cpp + BCANJGFKFHD_FPMKEGMLNHG_OFFSET))(this, EJGDHCIBCJH);
	}

	::System::Void BMNMLAIJJGF(::KECPLIFGOCJ GFCJHNHLFEF)
	{
		return ((::System::Void(*)(::PVOID, ::KECPLIFGOCJ))((::PBYTE)hIl2Cpp + BCANJGFKFHD_BMNMLAIJJGF_OFFSET))(this, GFCJHNHLFEF);
	}

	::System::Void PHOADBJGFBE()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + BCANJGFKFHD_PHOADBJGFBE_OFFSET))(this);
	}

	::System::Void BHLAEBMEOLO()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + BCANJGFKFHD_BHLAEBMEOLO_OFFSET))(this);
	}

	::System::Void Finalize()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + BCANJGFKFHD_FINALIZE_OFFSET))(this);
	}

	::System::Void KMIMGEDAMCE(::Il2CppArray<::System::Byte>* LJBPECKCCEA)
	{
		return ((::System::Void(*)(::PVOID, ::Il2CppArray<::System::Byte>*))((::PBYTE)hIl2Cpp + BCANJGFKFHD_KMIMGEDAMCE_OFFSET))(this, LJBPECKCCEA);
	}

	::System::Void CHLEALKAOJO()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + BCANJGFKFHD_CHLEALKAOJO_OFFSET))(this);
	}
};
