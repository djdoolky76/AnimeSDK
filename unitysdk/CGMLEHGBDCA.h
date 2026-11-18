#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/IOONMNPCCNF.h"
#include "unitysdk/UnityEngine/NAPRenderPipeline0/SampleCountLevel.h"
#include "unitysdk/UnityEngine/Color.h"

#define CGMLEHGBDCA__CTOR_OFFSET UNITYSDK_OFFSET(0x1532FAA0)

inline static constexpr unsigned int CGMLEHGBDCA_TypeDefinitionIndex = 41337;

class CGMLEHGBDCA : public ::IOONMNPCCNF
{
public:
	::UnityEngine::Color EOMMMFPAMNI; // 0x18
	::System::Single EFEODALHHOI; // 0x28
	::System::Int32 JOAPNIGBLBK; // 0x2C
	::System::Single FHGKOOCFJPO; // 0x30
	::System::Single NCCDJLDKFGA; // 0x34
	::System::Int32 EONHMGJNLNL; // 0x38
	::UnityEngine::NAPRenderPipeline0::SampleCountLevel BOKIMFHDLKO; // 0x3C
	::System::Single JBFOAKELCNK; // 0x40
	::System::Boolean GHCKIIMMBGA; // 0x44
	::System::Boolean LOPEGINDIKN; // 0x45
	::System::Boolean IAJNHOKOJPO; // 0x46
	::System::Byte _padding0[0x1];
	::System::Single EIILCCOFHNM; // 0x48
	::System::Single PBADBMCNJGB; // 0x4C

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CGMLEHGBDCA__CTOR_OFFSET))(this);
	}
};
