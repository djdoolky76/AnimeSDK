#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"
namespace RPG::GameCore { class FourRotateVoxelAnimalAttachBillboardConfig; }

#define EKJELNMHMON_CTOR_OFFSET UNITYSDK_OFFSET(0x1CA32F00)

inline static constexpr unsigned int EKJELNMHMON_TypeDefinitionIndex = 43234;

	class EKJELNMHMON : public ::System::Object
	{
	public:
		::RPG::GameCore::FourRotateVoxelAnimalAttachBillboardConfig* DOCBCODGIEH; // 0x10
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + EKJELNMHMON_CTOR_OFFSET))(this);
		}

	};
