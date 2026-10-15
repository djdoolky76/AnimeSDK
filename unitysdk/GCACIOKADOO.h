#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"
namespace RPG::GameCore { class FourRotateVoxelGuideHintBillboardConfig; }

#define GCACIOKADOO_CTOR_OFFSET UNITYSDK_OFFSET(0x1CA7BBC0)

inline static constexpr unsigned int GCACIOKADOO_TypeDefinitionIndex = 43236;

	class GCACIOKADOO : public ::System::Object
	{
	public:
		::RPG::GameCore::FourRotateVoxelGuideHintBillboardConfig* DOCBCODGIEH; // 0x10
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + GCACIOKADOO_CTOR_OFFSET))(this);
		}

	};
