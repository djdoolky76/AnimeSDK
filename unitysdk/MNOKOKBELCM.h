#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/DJBPFFLIECG.h"

namespace System { template <typename T> class Action_1; }
namespace System::Collections::Generic { template <typename T> class List_1; }

#define MNOKOKBELCM_KIMJCGJHJAC_OFFSET UNITYSDK_OFFSET(0x12744020)
#define MNOKOKBELCM_NCNCMEGHNLO_1_OFFSET UNITYSDK_OFFSET(0x127442A0)
#define MNOKOKBELCM_NCNCMEGHNLO_OFFSET UNITYSDK_OFFSET(0x127440B0)
#define MNOKOKBELCM_ONSTART_OFFSET UNITYSDK_OFFSET(0x12744060)
#define MNOKOKBELCM__CTOR_OFFSET UNITYSDK_OFFSET(0x127440A0)

inline static constexpr unsigned int MNOKOKBELCM_TypeDefinitionIndex = 84675;

class MNOKOKBELCM : public ::DJBPFFLIECG
{
public:
	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MNOKOKBELCM__CTOR_OFFSET))(this);
	}

	::System::Void KIMJCGJHJAC()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MNOKOKBELCM_KIMJCGJHJAC_OFFSET))(this);
	}

	::System::Void OnStart()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MNOKOKBELCM_ONSTART_OFFSET))(this);
	}

	::System::Void NCNCMEGHNLO(::System::Collections::Generic::List_1<::System::UInt32>* NBOKCKGBPPC, ::System::Action_1<::System::Boolean>* EJGDHCIBCJH)
	{
		return ((::System::Void(*)(::PVOID, ::System::Collections::Generic::List_1<::System::UInt32>*, ::System::Action_1<::System::Boolean>*))((::PBYTE)hIl2Cpp + MNOKOKBELCM_NCNCMEGHNLO_OFFSET))(this, NBOKCKGBPPC, EJGDHCIBCJH);
	}

	::System::Void NCNCMEGHNLO_1(::System::UInt32 OFBIMIABNEP, ::System::Action_1<::System::Boolean>* EJGDHCIBCJH)
	{
		return ((::System::Void(*)(::PVOID, ::System::UInt32, ::System::Action_1<::System::Boolean>*))((::PBYTE)hIl2Cpp + MNOKOKBELCM_NCNCMEGHNLO_1_OFFSET))(this, OFBIMIABNEP, EJGDHCIBCJH);
	}
};
