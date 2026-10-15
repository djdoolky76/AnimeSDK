#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"
namespace RPG::GameCore { class FourRotateVoxelViewCtrlConfig; }

#define NMGKOKAOIBO_CTOR_OFFSET UNITYSDK_OFFSET(0x1C944B00)

inline static constexpr unsigned int NMGKOKAOIBO_TypeDefinitionIndex = 43243;

	class NMGKOKAOIBO : public ::System::Object
	{
	public:
		::RPG::GameCore::FourRotateVoxelViewCtrlConfig* DOCBCODGIEH; // 0x10
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + NMGKOKAOIBO_CTOR_OFFSET))(this);
		}

	};
