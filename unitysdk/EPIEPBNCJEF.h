#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/IOONMNPCCNF.h"
#include "unitysdk/UnityEngine/Rendering/Universal/DownSampleLevel.h"
#include "unitysdk/UnityEngine/Rendering/Universal/SampleDistanceMode.h"
#include "unitysdk/UnityEngine/Vector2.h"

#define EPIEPBNCJEF__CTOR_OFFSET UNITYSDK_OFFSET(0x1237F190)

inline static constexpr unsigned int EPIEPBNCJEF_TypeDefinitionIndex = 46823;

class EPIEPBNCJEF : public ::IOONMNPCCNF
{
public:
	::System::Int32 GBOOGPLPKLD; // 0x18
	::UnityEngine::Vector2 KAABMADJKPM; // 0x1C
	::System::Single EHCAOIGBJHK; // 0x24
	::System::Single OGCBHMANCLN; // 0x28
	::UnityEngine::Rendering::Universal::SampleDistanceMode NCEMIODFILF; // 0x2C
	::System::Single PKHPPCCOKOM; // 0x30
	::System::Single KNANGOIJIDJ; // 0x34
	::System::Single HEGCHLIBFND; // 0x38
	::System::Single NCCDJLDKFGA; // 0x3C
	::UnityEngine::Vector2 GKKCDCPEMLL; // 0x40
	::System::Boolean BHKOPHFLONK; // 0x48
	::System::Boolean OJHBHCEKAKO; // 0x49
	::System::Boolean OHHLKEIMPNG; // 0x4A
	::System::Byte _padding0[0x1];
	::System::Single NOPOMDGHLED; // 0x4C
	::UnityEngine::Rendering::Universal::DownSampleLevel LOPEGINDIKN; // 0x50
	::System::Int32 KNMHPCLGLEO; // 0x54

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + EPIEPBNCJEF__CTOR_OFFSET))(this);
	}
};
