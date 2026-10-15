#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/JsonConfig.h"
#include "unitysdk/RPG/MVector3.h"
class FCOEMCEDLNL;
namespace RPG::GameCore { class GrassData; }
namespace System { class String; }

#define RPG_GAMECORE_GRASSDATA_CTOR_OFFSET UNITYSDK_OFFSET(0x1D723210)
#define RPG_GAMECORE_GRASSDATA_OJNNBEJLDIJ_OFFSET UNITYSDK_OFFSET(0x1D722E20)

namespace RPG::GameCore
{
	class GrassData : public ::RPG::GameCore::JsonConfig
	{
	public:
		::RPG::MVector3 LocalPosition; // 0x10
		::RPG::MVector3 Size; // 0x1C
		::System::String* GrassAssetPath; // 0x28
		::System::Int16 GrassType; // 0x30
		::System::Byte _padding0[0x6];
		::Il2CppArray<::System::String*>* GrassPrefabAssetPath; // 0x38
		::System::Byte GraphicQualityMask; // 0x40
		::System::Byte _padding1[0x3];
		::System::Single VisionDistance; // 0x44
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_GAMECORE_GRASSDATA_CTOR_OFFSET))(this);
		}

		static ::System::Void OJNNBEJLDIJ(::FCOEMCEDLNL* a1, ::RPG::GameCore::GrassData* a2)
		{
			return ((::System::Void(*)(::FCOEMCEDLNL*, ::RPG::GameCore::GrassData*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_GRASSDATA_OJNNBEJLDIJ_OFFSET))(a1, a2);
		}

	};
}
