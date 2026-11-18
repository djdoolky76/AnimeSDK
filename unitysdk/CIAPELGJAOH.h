#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/ECEOBOHAGOB.h"
#include "unitysdk/GJPMJCFPNMI.h"

namespace MoleMole::Project::Config { class ControlPointData; }
namespace MoleMole::Project::Config { class CurvePointData; }
namespace MoleMole::Project::Config { class CurvySplineData; }
namespace MoleMole::Project::Config { class DetectionPointData; }
namespace MoleMole::Project::Config { class LevelData; }
namespace MoleMole::Project::Config { class NoDetectionZoneData; }
namespace MoleMole::Project::Config { class TargetPointData; }
namespace System { class String; }
namespace System::Collections::Generic { template <typename T> class List_1; }

#define CIAPELGJAOH_APMEIHLMLOL_OFFSET UNITYSDK_OFFSET(0x1A542000)
#define CIAPELGJAOH_DDIGLMLCPCH_OFFSET UNITYSDK_OFFSET(0x1A53FB90)
#define CIAPELGJAOH_DKNOBMFLJHE_OFFSET UNITYSDK_OFFSET(0x1A541950)
#define CIAPELGJAOH_DOHANFCIALC_OFFSET UNITYSDK_OFFSET(0x1A541610)
#define CIAPELGJAOH_GINLFFLBOAD_OFFSET UNITYSDK_OFFSET(0x1A540B80)
#define CIAPELGJAOH_HIMLKMFOFDK_OFFSET UNITYSDK_OFFSET(0x1A53F9D0)
#define CIAPELGJAOH_HMFNIPONBDA_OFFSET UNITYSDK_OFFSET(0x1A544D00)
#define CIAPELGJAOH_IIBAHPKMKPP_OFFSET UNITYSDK_OFFSET(0x1A5426B0)
#define CIAPELGJAOH_KIPEEIFMGGK_OFFSET UNITYSDK_OFFSET(0x1A540150)
#define CIAPELGJAOH_KKNNPLPEOFO_OFFSET UNITYSDK_OFFSET(0x1A541530)
#define CIAPELGJAOH_LMKHNHADJJH_OFFSET UNITYSDK_OFFSET(0x1A542EB0)
#define CIAPELGJAOH_LPGBKKLKMJL_OFFSET UNITYSDK_OFFSET(0x1A541870)
#define CIAPELGJAOH_NEGOHFEFKIF_OFFSET UNITYSDK_OFFSET(0x1A541790)
#define CIAPELGJAOH_NKCNGLADFNA_OFFSET UNITYSDK_OFFSET(0x1A53FAB0)
#define CIAPELGJAOH_OHBKFFMOBCF_OFFSET UNITYSDK_OFFSET(0x1A5447B0)
#define CIAPELGJAOH__CTOR_OFFSET UNITYSDK_OFFSET(0x1A53F9C0)

inline static constexpr unsigned int CIAPELGJAOH_TypeDefinitionIndex = 17760;

class CIAPELGJAOH : public ::ECEOBOHAGOB
{
public:
	::System::Collections::Generic::List_1<::MoleMole::Project::Config::ControlPointData*>* DOEEGKOAKPE; // 0x20
	::System::Collections::Generic::List_1<::MoleMole::Project::Config::TargetPointData*>* DOJPLKJPOPA; // 0x28
	::MoleMole::Project::Config::CurvySplineData* FGLPCMHBNPC; // 0x30
	::System::Collections::Generic::List_1<::MoleMole::Project::Config::CurvePointData*>* EENDHHKNCIH; // 0x38
	::System::Collections::Generic::List_1<::MoleMole::Project::Config::NoDetectionZoneData*>* JELCHMOFLPF; // 0x40
	::System::String* BIIHOFJDFAD; // 0x48
	::MoleMole::Project::Config::CurvySplineData* NNGFFKANJED; // 0x50
	::System::Collections::Generic::List_1<::MoleMole::Project::Config::ControlPointData*>* BNEMNJPBEBI; // 0x58
	::MoleMole::Project::Config::DetectionPointData* EMGHDIKACNL; // 0x60
	::System::Int32 JPBGNJMPDBA; // 0x68
	::System::Int32 NADKMNAIMNB; // 0x6C
	::System::Byte ACIOBDEBDNK; // 0x70
	::System::Byte GCHCDJCFCEG; // 0x71
	::System::Byte _padding0[0x2];
	::System::Int32 ECALHDCCKCE; // 0x74
	::System::Int32 OCEEEFPHNDK; // 0x78
	::GJPMJCFPNMI MMOJFPECPFB; // 0x7C

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CIAPELGJAOH__CTOR_OFFSET))(this);
	}

	::System::Int32 HIMLKMFOFDK()
	{
		return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + CIAPELGJAOH_HIMLKMFOFDK_OFFSET))(this);
	}

	::System::Int32 NKCNGLADFNA()
	{
		return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + CIAPELGJAOH_NKCNGLADFNA_OFFSET))(this);
	}

	::System::Collections::Generic::List_1<::MoleMole::Project::Config::CurvePointData*>* DDIGLMLCPCH()
	{
		return ((::System::Collections::Generic::List_1<::MoleMole::Project::Config::CurvePointData*>*(*)(::PVOID))((::PBYTE)hIl2Cpp + CIAPELGJAOH_DDIGLMLCPCH_OFFSET))(this);
	}

	::MoleMole::Project::Config::DetectionPointData* KIPEEIFMGGK()
	{
		return ((::MoleMole::Project::Config::DetectionPointData*(*)(::PVOID))((::PBYTE)hIl2Cpp + CIAPELGJAOH_KIPEEIFMGGK_OFFSET))(this);
	}

	::MoleMole::Project::Config::LevelData* GINLFFLBOAD()
	{
		return ((::MoleMole::Project::Config::LevelData*(*)(::PVOID))((::PBYTE)hIl2Cpp + CIAPELGJAOH_GINLFFLBOAD_OFFSET))(this);
	}

	::System::Int32 KKNNPLPEOFO()
	{
		return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + CIAPELGJAOH_KKNNPLPEOFO_OFFSET))(this);
	}

	::System::Collections::Generic::List_1<::MoleMole::Project::Config::TargetPointData*>* IIBAHPKMKPP()
	{
		return ((::System::Collections::Generic::List_1<::MoleMole::Project::Config::TargetPointData*>*(*)(::PVOID))((::PBYTE)hIl2Cpp + CIAPELGJAOH_IIBAHPKMKPP_OFFSET))(this);
	}

	::MoleMole::Project::Config::CurvySplineData* OHBKFFMOBCF()
	{
		return ((::MoleMole::Project::Config::CurvySplineData*(*)(::PVOID))((::PBYTE)hIl2Cpp + CIAPELGJAOH_OHBKFFMOBCF_OFFSET))(this);
	}

	::GJPMJCFPNMI NEGOHFEFKIF()
	{
		return ((::GJPMJCFPNMI(*)(::PVOID))((::PBYTE)hIl2Cpp + CIAPELGJAOH_NEGOHFEFKIF_OFFSET))(this);
	}

	::System::String* DOHANFCIALC()
	{
		return ((::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + CIAPELGJAOH_DOHANFCIALC_OFFSET))(this);
	}

	::MoleMole::Project::Config::CurvySplineData* HMFNIPONBDA()
	{
		return ((::MoleMole::Project::Config::CurvySplineData*(*)(::PVOID))((::PBYTE)hIl2Cpp + CIAPELGJAOH_HMFNIPONBDA_OFFSET))(this);
	}

	::System::Collections::Generic::List_1<::MoleMole::Project::Config::NoDetectionZoneData*>* LMKHNHADJJH()
	{
		return ((::System::Collections::Generic::List_1<::MoleMole::Project::Config::NoDetectionZoneData*>*(*)(::PVOID))((::PBYTE)hIl2Cpp + CIAPELGJAOH_LMKHNHADJJH_OFFSET))(this);
	}

	::System::Int32 LPGBKKLKMJL()
	{
		return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + CIAPELGJAOH_LPGBKKLKMJL_OFFSET))(this);
	}

	::System::Collections::Generic::List_1<::MoleMole::Project::Config::ControlPointData*>* DKNOBMFLJHE()
	{
		return ((::System::Collections::Generic::List_1<::MoleMole::Project::Config::ControlPointData*>*(*)(::PVOID))((::PBYTE)hIl2Cpp + CIAPELGJAOH_DKNOBMFLJHE_OFFSET))(this);
	}

	::System::Collections::Generic::List_1<::MoleMole::Project::Config::ControlPointData*>* APMEIHLMLOL()
	{
		return ((::System::Collections::Generic::List_1<::MoleMole::Project::Config::ControlPointData*>*(*)(::PVOID))((::PBYTE)hIl2Cpp + CIAPELGJAOH_APMEIHLMLOL_OFFSET))(this);
	}
};
