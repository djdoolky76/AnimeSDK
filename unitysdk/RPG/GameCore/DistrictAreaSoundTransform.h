#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/JsonConfig.h"
#include "unitysdk/RPG/MVector3.h"
class FCOEMCEDLNL;
namespace RPG::GameCore { class DistrictAreaSoundTransform; }

#define RPG_GAMECORE_DISTRICTAREASOUNDTRANSFORM_CTOR_OFFSET UNITYSDK_OFFSET(0x1D5EAC00)
#define RPG_GAMECORE_DISTRICTAREASOUNDTRANSFORM_OJNNBEJLDIJ_OFFSET UNITYSDK_OFFSET(0x1D5EA920)

namespace RPG::GameCore
{
	inline static constexpr unsigned int DistrictAreaSoundTransform_TypeDefinitionIndex = 17263;

	class DistrictAreaSoundTransform : public ::RPG::GameCore::JsonConfig
	{
	public:
		::RPG::MVector3 Position; // 0x10
		::RPG::MVector3 Forward; // 0x1C
		::RPG::MVector3 Up; // 0x28
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_GAMECORE_DISTRICTAREASOUNDTRANSFORM_CTOR_OFFSET))(this);
		}

		static ::System::Void OJNNBEJLDIJ(::FCOEMCEDLNL* a1, ::RPG::GameCore::DistrictAreaSoundTransform* a2)
		{
			return ((::System::Void(*)(::FCOEMCEDLNL*, ::RPG::GameCore::DistrictAreaSoundTransform*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_DISTRICTAREASOUNDTRANSFORM_OJNNBEJLDIJ_OFFSET))(a1, a2);
		}

	};
}
