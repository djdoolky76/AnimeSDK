#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/DJBPFFLIECG.h"
#include "unitysdk/Cysharp/Threading/Tasks/UniTask_1.h"
#include "unitysdk/System/Threading/CancellationToken.h"

class EDEPGEKDCID;
class EHPIADDKNCD;
namespace System { class Action; }
namespace System::Collections::Generic { template <typename T> class List_1; }

#define ALPCBLJMFHM_BFKBLEEHGJB_OFFSET UNITYSDK_OFFSET(0x11BC1F40)
#define ALPCBLJMFHM_FJIJDKHAOPH_OFFSET UNITYSDK_OFFSET(0x11BC2360)
#define ALPCBLJMFHM_KIMJCGJHJAC_OFFSET UNITYSDK_OFFSET(0x11BC19E0)
#define ALPCBLJMFHM_KNLMPJGJJLE_OFFSET UNITYSDK_OFFSET(0x11BC1B70)
#define ALPCBLJMFHM_ONSTART_OFFSET UNITYSDK_OFFSET(0x11BC1A80)
#define ALPCBLJMFHM_PBAKCEEOKMK_OFFSET UNITYSDK_OFFSET(0x11BC1E20)
#define ALPCBLJMFHM__CTOR_OFFSET UNITYSDK_OFFSET(0x11BC1B60)

inline static constexpr unsigned int ALPCBLJMFHM_TypeDefinitionIndex = 73209;

class ALPCBLJMFHM : public ::DJBPFFLIECG
{
public:
	::EDEPGEKDCID* PCPKGJHGCIM; // 0x30

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + ALPCBLJMFHM__CTOR_OFFSET))(this);
	}

	::System::Void KIMJCGJHJAC()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + ALPCBLJMFHM_KIMJCGJHJAC_OFFSET))(this);
	}

	::System::Void OnStart()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + ALPCBLJMFHM_ONSTART_OFFSET))(this);
	}

	::System::Void KNLMPJGJJLE(::System::Collections::Generic::List_1<::System::Int32>* OBDILMIOOOL, ::System::Action* OIPJFHJAKLA, ::System::Action* AFKOOINGNAK)
	{
		return ((::System::Void(*)(::PVOID, ::System::Collections::Generic::List_1<::System::Int32>*, ::System::Action*, ::System::Action*))((::PBYTE)hIl2Cpp + ALPCBLJMFHM_KNLMPJGJJLE_OFFSET))(this, OBDILMIOOOL, OIPJFHJAKLA, AFKOOINGNAK);
	}

	::System::Void PBAKCEEOKMK()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + ALPCBLJMFHM_PBAKCEEOKMK_OFFSET))(this);
	}

	::Cysharp::Threading::Tasks::UniTask_1<::System::Boolean> BFKBLEEHGJB(::System::Threading::CancellationToken OMMEALOOOOD, ::System::Collections::Generic::List_1<::System::Int32>* OBDILMIOOOL)
	{
		return ((::Cysharp::Threading::Tasks::UniTask_1<::System::Boolean>(*)(::PVOID, ::System::Threading::CancellationToken, ::System::Collections::Generic::List_1<::System::Int32>*))((::PBYTE)hIl2Cpp + ALPCBLJMFHM_BFKBLEEHGJB_OFFSET))(this, OMMEALOOOOD, OBDILMIOOOL);
	}

	::System::Void FJIJDKHAOPH(::EHPIADDKNCD* GLAOEHCGCFO)
	{
		return ((::System::Void(*)(::PVOID, ::EHPIADDKNCD*))((::PBYTE)hIl2Cpp + ALPCBLJMFHM_FJIJDKHAOPH_OFFSET))(this, GLAOEHCGCFO);
	}
};
