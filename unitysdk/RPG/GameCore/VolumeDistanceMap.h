#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/JsonConfig.h"
class FCOEMCEDLNL;
namespace RPG::GameCore { class VolumeDistanceMap; }

#define RPG_GAMECORE_VOLUMEDISTANCEMAP_CTOR_OFFSET UNITYSDK_OFFSET(0x1DC657A0)
#define RPG_GAMECORE_VOLUMEDISTANCEMAP_JFHKHOMEKIM_OFFSET UNITYSDK_OFFSET(0x1DC657B0)
#define RPG_GAMECORE_VOLUMEDISTANCEMAP_OJNNBEJLDIJ_OFFSET UNITYSDK_OFFSET(0x1DC65660)

namespace RPG::GameCore
{
	inline static constexpr unsigned int VolumeDistanceMap_TypeDefinitionIndex = 19158;

	class VolumeDistanceMap : public ::RPG::GameCore::JsonConfig
	{
	public:
		::System::UInt32 Size; // 0x10
		::System::Byte _padding0[0x4];
		::Il2CppArray<::System::Int32>* DistanceMapInternal; // 0x18
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_GAMECORE_VOLUMEDISTANCEMAP_CTOR_OFFSET))(this);
		}

		static ::System::Void OJNNBEJLDIJ(::FCOEMCEDLNL* a1, ::RPG::GameCore::VolumeDistanceMap* a2)
		{
			return ((::System::Void(*)(::FCOEMCEDLNL*, ::RPG::GameCore::VolumeDistanceMap*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_VOLUMEDISTANCEMAP_OJNNBEJLDIJ_OFFSET))(a1, a2);
		}

		::System::Single JFHKHOMEKIM(::System::Int32 a1, ::System::Int32 a2)
		{
			return ((::System::Single(*)(::PVOID, ::System::Int32, ::System::Int32))((::PBYTE)hIl2Cpp + RPG_GAMECORE_VOLUMEDISTANCEMAP_JFHKHOMEKIM_OFFSET))(this, a1, a2);
		}

	};
}
