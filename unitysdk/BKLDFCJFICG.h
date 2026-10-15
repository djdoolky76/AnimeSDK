#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"
namespace RPG::GameCore { class FourRotateVoxelChestHintConfig; }

#define BKLDFCJFICG_CTOR_OFFSET UNITYSDK_OFFSET(0x1C88E290)

inline static constexpr unsigned int BKLDFCJFICG_TypeDefinitionIndex = 43242;

	class BKLDFCJFICG : public ::System::Object
	{
	public:
		::RPG::GameCore::FourRotateVoxelChestHintConfig* DOCBCODGIEH; // 0x10
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + BKLDFCJFICG_CTOR_OFFSET))(this);
		}

	};
