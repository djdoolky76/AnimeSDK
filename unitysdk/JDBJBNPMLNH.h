#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"
namespace RPG::GameCore { class FourRotateVoxel2DPlatformConfig; }

#define JDBJBNPMLNH_CTOR_OFFSET UNITYSDK_OFFSET(0x1CB8FCA0)

inline static constexpr unsigned int JDBJBNPMLNH_TypeDefinitionIndex = 43186;

	class JDBJBNPMLNH : public ::System::Object
	{
	public:
		::RPG::GameCore::FourRotateVoxel2DPlatformConfig* NHACCLJGECA; // 0x10
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + JDBJBNPMLNH_CTOR_OFFSET))(this);
		}

	};
