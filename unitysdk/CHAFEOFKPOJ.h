#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"
namespace RPG::GameCore { class FourRotateVoxel2DPlatformConfig; }

#define CHAFEOFKPOJ_CTOR_OFFSET UNITYSDK_OFFSET(0x1C8E46F0)

inline static constexpr unsigned int CHAFEOFKPOJ_TypeDefinitionIndex = 43232;

	class CHAFEOFKPOJ : public ::System::Object
	{
	public:
		::RPG::GameCore::FourRotateVoxel2DPlatformConfig* NHACCLJGECA; // 0x10
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CHAFEOFKPOJ_CTOR_OFFSET))(this);
		}

	};
