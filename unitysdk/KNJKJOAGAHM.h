#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/KECPLIFGOCJ.h"
#include "unitysdk/LDMJEFKALJF.h"
#include "unitysdk/System/Object.h"

class OJFAOIPHOMD;
namespace System { class Action; }
namespace System::Collections::Generic { template <typename T1, typename T2> class Dictionary_2; }
namespace System::Collections::Generic { template <typename T> class HashSet_1; }

#define KNJKJOAGAHM_BHLAEBMEOLO_OFFSET UNITYSDK_OFFSET(0x1B50D690)
#define KNJKJOAGAHM_BMNMLAIJJGF_OFFSET UNITYSDK_OFFSET(0x1B50D450)
#define KNJKJOAGAHM_CHLEALKAOJO_OFFSET UNITYSDK_OFFSET(0x1B50D5D0)
#define KNJKJOAGAHM_FINALIZE_OFFSET UNITYSDK_OFFSET(0x1B50D770)
#define KNJKJOAGAHM_FPMKEGMLNHG_OFFSET UNITYSDK_OFFSET(0x1B50D460)
#define KNJKJOAGAHM_KMIMGEDAMCE_OFFSET UNITYSDK_OFFSET(0x1B50D8F0)
#define KNJKJOAGAHM_LNFENFDLMIG_OFFSET UNITYSDK_OFFSET(0x1B50D0A0)
#define KNJKJOAGAHM_OFHECOHPAKG_OFFSET UNITYSDK_OFFSET(0x1B50D080)
#define KNJKJOAGAHM_PHOADBJGFBE_OFFSET UNITYSDK_OFFSET(0x1B50D360)
#define KNJKJOAGAHM__CTOR_OFFSET UNITYSDK_OFFSET(0x1B50D8A0)

inline static constexpr unsigned int KNJKJOAGAHM_TypeDefinitionIndex = 12928;

class KNJKJOAGAHM : public ::System::Object
{
public:
	::Il2CppArray<::OJFAOIPHOMD*>* OJMBOGGMIKO; // 0x10
	::System::Collections::Generic::HashSet_1<::System::Int32>* LHINHLCKHNE; // 0x18
	::LDMJEFKALJF DHDJDGFNBOA; // 0x20
	::System::Action* PLDOELOOFLL; // 0x38
	::System::Collections::Generic::Dictionary_2<::System::Int32, ::System::Int32>* FLBOKGKPECD; // 0x40
	::System::Int32 IJDGGCANOFI; // 0x48
	::System::Boolean DLGKLGKOMHK; // 0x4C

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + KNJKJOAGAHM__CTOR_OFFSET))(this);
	}

	::System::Boolean OFHECOHPAKG()
	{
		return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + KNJKJOAGAHM_OFHECOHPAKG_OFFSET))(this);
	}

	::System::Void LNFENFDLMIG()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + KNJKJOAGAHM_LNFENFDLMIG_OFFSET))(this);
	}

	::System::Void FPMKEGMLNHG(::System::Action* EJGDHCIBCJH)
	{
		return ((::System::Void(*)(::PVOID, ::System::Action*))((::PBYTE)hIl2Cpp + KNJKJOAGAHM_FPMKEGMLNHG_OFFSET))(this, EJGDHCIBCJH);
	}

	::System::Void BMNMLAIJJGF(::KECPLIFGOCJ GFCJHNHLFEF)
	{
		return ((::System::Void(*)(::PVOID, ::KECPLIFGOCJ))((::PBYTE)hIl2Cpp + KNJKJOAGAHM_BMNMLAIJJGF_OFFSET))(this, GFCJHNHLFEF);
	}

	::System::Void PHOADBJGFBE()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + KNJKJOAGAHM_PHOADBJGFBE_OFFSET))(this);
	}

	::System::Void BHLAEBMEOLO()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + KNJKJOAGAHM_BHLAEBMEOLO_OFFSET))(this);
	}

	::System::Void Finalize()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + KNJKJOAGAHM_FINALIZE_OFFSET))(this);
	}

	::System::Void KMIMGEDAMCE(::Il2CppArray<::System::Byte>* LJBPECKCCEA)
	{
		return ((::System::Void(*)(::PVOID, ::Il2CppArray<::System::Byte>*))((::PBYTE)hIl2Cpp + KNJKJOAGAHM_KMIMGEDAMCE_OFFSET))(this, LJBPECKCCEA);
	}

	::System::Void CHLEALKAOJO()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + KNJKJOAGAHM_CHLEALKAOJO_OFFSET))(this);
	}
};
