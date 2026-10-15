#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/JsonConfig.h"
class FCOEMCEDLNL;
namespace RPG::GameCore { class FiveDimPortalTarget; }
namespace RPG::GameCore { class FourRotateVoxelPortalTarget; }

#define RPG_GAMECORE_FOURROTATEVOXELPORTALTARGET_CTOR_OFFSET UNITYSDK_OFFSET(0x1D6F1550)
#define RPG_GAMECORE_FOURROTATEVOXELPORTALTARGET_OJNNBEJLDIJ_OFFSET UNITYSDK_OFFSET(0x1D6F1400)

namespace RPG::GameCore
{
	inline static constexpr unsigned int FourRotateVoxelPortalTarget_TypeDefinitionIndex = 16753;

	class FourRotateVoxelPortalTarget : public ::RPG::GameCore::JsonConfig
	{
	public:
		::System::UInt32 TargetContainerID; // 0x10
		::System::Boolean Is5D; // 0x14
		::System::Byte _padding0[0x3];
		::RPG::GameCore::FiveDimPortalTarget* Target; // 0x18
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_GAMECORE_FOURROTATEVOXELPORTALTARGET_CTOR_OFFSET))(this);
		}

		static ::System::Void OJNNBEJLDIJ(::FCOEMCEDLNL* a1, ::RPG::GameCore::FourRotateVoxelPortalTarget* a2)
		{
			return ((::System::Void(*)(::FCOEMCEDLNL*, ::RPG::GameCore::FourRotateVoxelPortalTarget*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_FOURROTATEVOXELPORTALTARGET_OJNNBEJLDIJ_OFFSET))(a1, a2);
		}

	};
}
