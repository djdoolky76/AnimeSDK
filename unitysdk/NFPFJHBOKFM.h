#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/FiveDimSplineMovePoint.h"

#define NFPFJHBOKFM_CLEAR_OFFSET UNITYSDK_OFFSET(0x1D204990)
#define NFPFJHBOKFM_CTOR_OFFSET UNITYSDK_OFFSET(0x1D2049B0)

inline static constexpr unsigned int NFPFJHBOKFM_TypeDefinitionIndex = 24853;

	class NFPFJHBOKFM : public ::RPG::GameCore::FiveDimSplineMovePoint
	{
	public:
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + NFPFJHBOKFM_CTOR_OFFSET))(this);
		}

		::System::Void Clear()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + NFPFJHBOKFM_CLEAR_OFFSET))(this);
		}

	};
