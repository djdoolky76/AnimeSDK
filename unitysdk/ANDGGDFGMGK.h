#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"
namespace RPG::GameCore { class FourRotateVoxelEntranceConfig; }
namespace RPG::GameCore { class FourRotateVoxelPortalConfig; }

#define ANDGGDFGMGK_CTOR_OFFSET UNITYSDK_OFFSET(0x1C89E430)

inline static constexpr unsigned int ANDGGDFGMGK_TypeDefinitionIndex = 43228;

	class ANDGGDFGMGK : public ::System::Object
	{
	public:
		::RPG::GameCore::FourRotateVoxelPortalConfig* DOCBCODGIEH; // 0x10
		::RPG::GameCore::FourRotateVoxelEntranceConfig* GCJHABKBDME; // 0x18
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + ANDGGDFGMGK_CTOR_OFFSET))(this);
		}

	};
