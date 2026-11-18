#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

namespace MoleMole::Project::Config { class BabelFloorInfoTemplateExt; }

#define IMDLNCOMBIH_NLBOALNBODH_OFFSET UNITYSDK_OFFSET(0x19542DE0)
#define IMDLNCOMBIH__CTOR_OFFSET UNITYSDK_OFFSET(0x19542DD0)

inline static constexpr unsigned int IMDLNCOMBIH_TypeDefinitionIndex = 10414;

class IMDLNCOMBIH : public ::System::Object
{
public:
	::MoleMole::Project::Config::BabelFloorInfoTemplateExt* DEKJDEPKKLH; // 0x10
	::System::UInt32 MEHBBNIPLDF; // 0x18
	::System::Boolean ENMPDNBALBM; // 0x1C
	::System::Boolean LMNECLIHDPC; // 0x1D

	::System::Void _ctor(::System::UInt32 CCKGEOKCJMA)
	{
		return ((::System::Void(*)(::PVOID, ::System::UInt32))((::PBYTE)hIl2Cpp + IMDLNCOMBIH__CTOR_OFFSET))(this, CCKGEOKCJMA);
	}

	::System::Int32 NLBOALNBODH()
	{
		return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + IMDLNCOMBIH_NLBOALNBODH_OFFSET))(this);
	}
};
