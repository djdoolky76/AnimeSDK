#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/DEIGPPJDEEN.h"
#include "unitysdk/IAKKJCGJOGG.h"
#include "unitysdk/MoleMole/Level/RatingType.h"
#include "unitysdk/Foundation/AssetPath.h"

namespace System { class String; }

#define KFKCOHEPFEK_CNIKAMOAANF_OFFSET UNITYSDK_OFFSET(0x1994EE80)
#define KFKCOHEPFEK_DJEANKDFDEH_OFFSET UNITYSDK_OFFSET(0x1994EC20)
#define KFKCOHEPFEK_DJMLONPINEI_OFFSET UNITYSDK_OFFSET(0x1994E2C0)
#define KFKCOHEPFEK_DOPGAFCKMNF_OFFSET UNITYSDK_OFFSET(0x1994EF80)
#define KFKCOHEPFEK_FDHACAOALBE_OFFSET UNITYSDK_OFFSET(0x1994E300)
#define KFKCOHEPFEK_GBBJIMFIDLF_OFFSET UNITYSDK_OFFSET(0x1994EA00)
#define KFKCOHEPFEK_GOFMPLCOLDI_OFFSET UNITYSDK_OFFSET(0x1994F120)
#define KFKCOHEPFEK_HFONCBBLDEB_OFFSET UNITYSDK_OFFSET(0x1994EDD0)
#define KFKCOHEPFEK_IKKMANBIDBN_OFFSET UNITYSDK_OFFSET(0x1994E340)
#define KFKCOHEPFEK_LBPDNLOCFEE_OFFSET UNITYSDK_OFFSET(0x1994E7D0)
#define KFKCOHEPFEK_NAIJAEDJIHA_OFFSET UNITYSDK_OFFSET(0x1994F080)
#define KFKCOHEPFEK_ODAHCIGGALM_OFFSET UNITYSDK_OFFSET(0x1994E3A0)
#define KFKCOHEPFEK_ONSHUTDOWN_OFFSET UNITYSDK_OFFSET(0x1994E240)
#define KFKCOHEPFEK_ONSTART_OFFSET UNITYSDK_OFFSET(0x1994E1C0)
#define KFKCOHEPFEK_PJLBHHMIFHJ_OFFSET UNITYSDK_OFFSET(0x1994ECA0)
#define KFKCOHEPFEK__CTOR_OFFSET UNITYSDK_OFFSET(0x1994EDC0)

inline static constexpr unsigned int KFKCOHEPFEK_TypeDefinitionIndex = 43375;

class KFKCOHEPFEK : public ::IAKKJCGJOGG
{
public:
	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + KFKCOHEPFEK__CTOR_OFFSET))(this);
	}

	::System::Void OnStart()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + KFKCOHEPFEK_ONSTART_OFFSET))(this);
	}

	::System::Void OnShutDown()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + KFKCOHEPFEK_ONSHUTDOWN_OFFSET))(this);
	}

	::System::String* DJMLONPINEI()
	{
		return ((::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + KFKCOHEPFEK_DJMLONPINEI_OFFSET))(this);
	}

	::System::String* FDHACAOALBE()
	{
		return ((::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + KFKCOHEPFEK_FDHACAOALBE_OFFSET))(this);
	}

	::System::Int32 IKKMANBIDBN(::System::Int32 HHEGANCPILH, ::System::Int32 NACGJJKHEJE)
	{
		return ((::System::Int32(*)(::PVOID, ::System::Int32, ::System::Int32))((::PBYTE)hIl2Cpp + KFKCOHEPFEK_IKKMANBIDBN_OFFSET))(this, HHEGANCPILH, NACGJJKHEJE);
	}

	::DEIGPPJDEEN ODAHCIGGALM(::System::Int32 HHEGANCPILH, ::System::Int32 NACGJJKHEJE)
	{
		return ((::DEIGPPJDEEN(*)(::PVOID, ::System::Int32, ::System::Int32))((::PBYTE)hIl2Cpp + KFKCOHEPFEK_ODAHCIGGALM_OFFSET))(this, HHEGANCPILH, NACGJJKHEJE);
	}

	::System::Boolean LBPDNLOCFEE(::System::Int32 NACGJJKHEJE)
	{
		return ((::System::Boolean(*)(::PVOID, ::System::Int32))((::PBYTE)hIl2Cpp + KFKCOHEPFEK_LBPDNLOCFEE_OFFSET))(this, NACGJJKHEJE);
	}

	::System::Int32 GBBJIMFIDLF(::System::Int32 NACGJJKHEJE)
	{
		return ((::System::Int32(*)(::PVOID, ::System::Int32))((::PBYTE)hIl2Cpp + KFKCOHEPFEK_GBBJIMFIDLF_OFFSET))(this, NACGJJKHEJE);
	}

	::MoleMole::Level::RatingType DJEANKDFDEH(::System::Int32 NACGJJKHEJE)
	{
		return ((::MoleMole::Level::RatingType(*)(::PVOID, ::System::Int32))((::PBYTE)hIl2Cpp + KFKCOHEPFEK_DJEANKDFDEH_OFFSET))(this, NACGJJKHEJE);
	}

	::Foundation::AssetPath PJLBHHMIFHJ(::MoleMole::Level::RatingType NILNNELOMCG)
	{
		return ((::Foundation::AssetPath(*)(::PVOID, ::MoleMole::Level::RatingType))((::PBYTE)hIl2Cpp + KFKCOHEPFEK_PJLBHHMIFHJ_OFFSET))(this, NILNNELOMCG);
	}

	::DEIGPPJDEEN HFONCBBLDEB(::System::Int32 MIALFKCCCPI, ::System::Int32 KMGKAIDEIBA)
	{
		return ((::DEIGPPJDEEN(*)(::PVOID, ::System::Int32, ::System::Int32))((::PBYTE)hIl2Cpp + KFKCOHEPFEK_HFONCBBLDEB_OFFSET))(this, MIALFKCCCPI, KMGKAIDEIBA);
	}

	::System::Void CNIKAMOAANF()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + KFKCOHEPFEK_CNIKAMOAANF_OFFSET))(this);
	}

	::System::Void DOPGAFCKMNF()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + KFKCOHEPFEK_DOPGAFCKMNF_OFFSET))(this);
	}

	::System::Int32 NAIJAEDJIHA(::System::Int32 MIALFKCCCPI, ::System::Int32 KMGKAIDEIBA)
	{
		return ((::System::Int32(*)(::PVOID, ::System::Int32, ::System::Int32))((::PBYTE)hIl2Cpp + KFKCOHEPFEK_NAIJAEDJIHA_OFFSET))(this, MIALFKCCCPI, KMGKAIDEIBA);
	}

	::System::Boolean GOFMPLCOLDI(::System::Int32 NACGJJKHEJE)
	{
		return ((::System::Boolean(*)(::PVOID, ::System::Int32))((::PBYTE)hIl2Cpp + KFKCOHEPFEK_GOFMPLCOLDI_OFFSET))(this, NACGJJKHEJE);
	}
};
