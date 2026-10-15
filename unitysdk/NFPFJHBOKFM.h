#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/FiveDimSplineMovePoint.h"

#define NFPFJHBOKFM_CLEAR_OFFSET UNITYSDK_OFFSET(0x1D1D6D30)
#define NFPFJHBOKFM_CTOR_OFFSET UNITYSDK_OFFSET(0x1D1D6D50)

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
