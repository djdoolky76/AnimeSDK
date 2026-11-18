#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/DJBPFFLIECG.h"

namespace System { class Action; }
namespace System::Collections::Generic { template <typename T> class List_1; }

#define LMCDNDGKHFC_JADGCDDNCJH_1_OFFSET UNITYSDK_OFFSET(0x16C65460)
#define LMCDNDGKHFC_JADGCDDNCJH_OFFSET UNITYSDK_OFFSET(0x16C652A0)
#define LMCDNDGKHFC_KIMJCGJHJAC_OFFSET UNITYSDK_OFFSET(0x16C65210)
#define LMCDNDGKHFC_ONSTART_OFFSET UNITYSDK_OFFSET(0x16C65250)
#define LMCDNDGKHFC__CTOR_OFFSET UNITYSDK_OFFSET(0x16C65290)

inline static constexpr unsigned int LMCDNDGKHFC_TypeDefinitionIndex = 66389;

class LMCDNDGKHFC : public ::DJBPFFLIECG
{
public:
	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + LMCDNDGKHFC__CTOR_OFFSET))(this);
	}

	::System::Void KIMJCGJHJAC()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + LMCDNDGKHFC_KIMJCGJHJAC_OFFSET))(this);
	}

	::System::Void OnStart()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + LMCDNDGKHFC_ONSTART_OFFSET))(this);
	}

	::System::Void JADGCDDNCJH(::System::Int32 OFEKNMGJIID, ::System::Action* EDNJGMKPFHG)
	{
		return ((::System::Void(*)(::PVOID, ::System::Int32, ::System::Action*))((::PBYTE)hIl2Cpp + LMCDNDGKHFC_JADGCDDNCJH_OFFSET))(this, OFEKNMGJIID, EDNJGMKPFHG);
	}

	::System::Void JADGCDDNCJH_1(::System::Collections::Generic::List_1<::System::UInt32>* LHPNCNJAHGI, ::System::Action* EDNJGMKPFHG)
	{
		return ((::System::Void(*)(::PVOID, ::System::Collections::Generic::List_1<::System::UInt32>*, ::System::Action*))((::PBYTE)hIl2Cpp + LMCDNDGKHFC_JADGCDDNCJH_1_OFFSET))(this, LHPNCNJAHGI, EDNJGMKPFHG);
	}
};
