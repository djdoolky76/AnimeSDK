#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/JsonConfig.h"
#include "unitysdk/RPG/MVector2.h"
class FCOEMCEDLNL;
namespace RPG::GameCore { class FiveDimFogOfWarConfig; }
namespace RPG::GameCore { class FiveDimMapFaceConfig; }
namespace RPG::GameCore { class FiveDimMapSurfaceConfig; }
namespace System { class String; }

#define RPG_GAMECORE_FIVEDIMMAPFACECONFIG_CTOR_OFFSET UNITYSDK_OFFSET(0x1D699EA0)
#define RPG_GAMECORE_FIVEDIMMAPFACECONFIG_OJNNBEJLDIJ_OFFSET UNITYSDK_OFFSET(0x1D699B40)

namespace RPG::GameCore
{
	inline static constexpr unsigned int FiveDimMapFaceConfig_TypeDefinitionIndex = 18523;

	class FiveDimMapFaceConfig : public ::RPG::GameCore::JsonConfig
	{
	public:
		::System::UInt32 FaceIndex; // 0x10
		::System::Byte _padding0[0x4];
		::System::String* Comment; // 0x18
		::System::Boolean IsShowEmptyMap; // 0x20
		::System::Byte _padding1[0x3];
		::RPG::MVector2 Size; // 0x24
		::System::Byte _padding2[0x4];
		::System::String* Path; // 0x30
		::System::String* ShowLevelVarName; // 0x38
		::Il2CppArray<::System::Int16>* ShowLevelVarValues; // 0x40
		::Il2CppArray<::RPG::GameCore::FiveDimMapSurfaceConfig*>* SurfaceList; // 0x48
		::RPG::GameCore::FiveDimFogOfWarConfig* FogOfWarConfig; // 0x50
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_GAMECORE_FIVEDIMMAPFACECONFIG_CTOR_OFFSET))(this);
		}

		static ::System::Void OJNNBEJLDIJ(::FCOEMCEDLNL* a1, ::RPG::GameCore::FiveDimMapFaceConfig* a2)
		{
			return ((::System::Void(*)(::FCOEMCEDLNL*, ::RPG::GameCore::FiveDimMapFaceConfig*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_FIVEDIMMAPFACECONFIG_OJNNBEJLDIJ_OFFSET))(a1, a2);
		}

	};
}
