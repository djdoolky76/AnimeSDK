#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Nullable_1.h"
#include "unitysdk/System/ValueType.h"
#include "unitysdk/UnityEngine/Vector3.h"

namespace FluffyUnderware::Curvy { class CurvySpline; }
namespace MoleMole::Config { class ConfigZipLine_ConfigExitPointSelection_NavMesh; }

#define ACNKAHPDHHL_DGELLPBMAJJ_OFFSET UNITYSDK_OFFSET(0x6F1D00)
#define ACNKAHPDHHL_IEJDMKJPCLE_OFFSET UNITYSDK_OFFSET(0x6F1D90)

inline static constexpr unsigned int ACNKAHPDHHL_TypeDefinitionIndex = 46014;

struct alignas(8) ACNKAHPDHHL
{
	::MoleMole::Config::ConfigZipLine_ConfigExitPointSelection_NavMesh* AHECJBACEDB; // 0x10
	::FluffyUnderware::Curvy::CurvySpline* BBAHIHJAJEJ; // 0x18
	::System::Single GLJBLNHEDDH; // 0x20
	::System::Single BGBFCNOHKEE; // 0x24
	::UnityEngine::Vector3 ILGBBICLCAK; // 0x28
	::UnityEngine::Vector3 DIMNHDLCCKM; // 0x34
	::System::Single HPNNBBJIMOJ; // 0x40
	::System::Nullable_1<::System::Single> HMGIDLKELBO; // 0x44
	::System::Nullable_1<::System::Single> OFCHGLOFGDM; // 0x4C

	::System::Single DGELLPBMAJJ(::System::Single IMLLDOHDCNC)
	{
		return ((::System::Single(*)(::PVOID, ::System::Single))((::PBYTE)hIl2Cpp + ACNKAHPDHHL_DGELLPBMAJJ_OFFSET))(this, IMLLDOHDCNC);
	}

	::System::Single IEJDMKJPCLE(::System::Single IMLLDOHDCNC)
	{
		return ((::System::Single(*)(::PVOID, ::System::Single))((::PBYTE)hIl2Cpp + ACNKAHPDHHL_IEJDMKJPCLE_OFFSET))(this, IMLLDOHDCNC);
	}
};
