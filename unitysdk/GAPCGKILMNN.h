#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/Client/TABehaviorBase.h"
#include "unitysdk/UnityEngine/Vector4.h"
class WaveFloatingProxy;

#define GAPCGKILMNN_CTOR_OFFSET UNITYSDK_OFFSET(0x15943E90)
#define GAPCGKILMNN_KPJGDHLENIP_OFFSET UNITYSDK_OFFSET(0x15943C40)
#define GAPCGKILMNN_NDKIMFFNEDA_OFFSET UNITYSDK_OFFSET(0x15943DA0)

inline static constexpr unsigned int GAPCGKILMNN_TypeDefinitionIndex = 47490;

	class GAPCGKILMNN : public ::RPG::Client::TABehaviorBase
	{
	public:
		::WaveFloatingProxy* DILGJEAEKGL; // 0x38
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + GAPCGKILMNN_CTOR_OFFSET))(this);
		}

		::System::Void KPJGDHLENIP()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + GAPCGKILMNN_KPJGDHLENIP_OFFSET))(this);
		}

		::UnityEngine::Vector4 NDKIMFFNEDA()
		{
			return ((::UnityEngine::Vector4(*)(::PVOID))((::PBYTE)hIl2Cpp + GAPCGKILMNN_NDKIMFFNEDA_OFFSET))(this);
		}

	};
