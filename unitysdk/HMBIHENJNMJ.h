#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"
namespace RPG::GameCore { class FourRotateVoxelEntityStateConfig; }

#define HMBIHENJNMJ_CTOR_OFFSET UNITYSDK_OFFSET(0x1CABEB60)

inline static constexpr unsigned int HMBIHENJNMJ_TypeDefinitionIndex = 43230;

	class HMBIHENJNMJ : public ::System::Object
	{
	public:
		::RPG::GameCore::FourRotateVoxelEntityStateConfig* DOCBCODGIEH; // 0x10
		::System::Boolean IIDHHGEICBB; // 0x18
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + HMBIHENJNMJ_CTOR_OFFSET))(this);
		}

	};
