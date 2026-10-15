#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"
#include "unitysdk/RPG/GameCore/FixPoint.h"
namespace RPG::GameCore { class DynamicFloat; }
namespace RPG::GameCore { class PropertyAdsorptionConfig; }

#define MCIJBGCGKIJ_FKIHEOAFGLE_OFFSET UNITYSDK_OFFSET(0x1D13E140)
#define MCIJBGCGKIJ_NLDJECBDCOL_OFFSET UNITYSDK_OFFSET(0x1D13E1A0)

inline static constexpr unsigned int MCIJBGCGKIJ_TypeDefinitionIndex = 10837;

	class MCIJBGCGKIJ : public ::System::Object
	{
	public:
		static ::System::Boolean FKIHEOAFGLE(::RPG::GameCore::DynamicFloat* a1)
		{
			return ((::System::Boolean(*)(::RPG::GameCore::DynamicFloat*))((::PBYTE)hIl2Cpp + MCIJBGCGKIJ_FKIHEOAFGLE_OFFSET))(a1);
		}

		static ::System::Void NLDJECBDCOL(::RPG::GameCore::FixPoint a1, ::RPG::GameCore::PropertyAdsorptionConfig* a2)
		{
			return ((::System::Void(*)(::RPG::GameCore::FixPoint, ::RPG::GameCore::PropertyAdsorptionConfig*))((::PBYTE)hIl2Cpp + MCIJBGCGKIJ_NLDJECBDCOL_OFFSET))(a1, a2);
		}

	};
