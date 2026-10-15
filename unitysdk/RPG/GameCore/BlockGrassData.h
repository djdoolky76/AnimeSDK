#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/JsonConfig.h"
#include "unitysdk/RPG/MVector3.h"
class FCOEMCEDLNL;
namespace RPG::GameCore { class BlockGrassData; }
namespace RPG::GameCore { class GrassData; }

#define RPG_GAMECORE_BLOCKGRASSDATA_CTOR_OFFSET UNITYSDK_OFFSET(0x1D46E990)
#define RPG_GAMECORE_BLOCKGRASSDATA_OJNNBEJLDIJ_OFFSET UNITYSDK_OFFSET(0x1D46E780)

namespace RPG::GameCore
{
	class BlockGrassData : public ::RPG::GameCore::JsonConfig
	{
	public:
		::RPG::MVector3 BlockLocalPosition; // 0x10
		::System::Byte _padding0[0x4];
		::Il2CppArray<::RPG::GameCore::GrassData*>* AllPointGrassData; // 0x20
		::Il2CppArray<::RPG::GameCore::GrassData*>* AllDensityMapGrassData; // 0x28
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_GAMECORE_BLOCKGRASSDATA_CTOR_OFFSET))(this);
		}

		static ::System::Void OJNNBEJLDIJ(::FCOEMCEDLNL* a1, ::RPG::GameCore::BlockGrassData* a2)
		{
			return ((::System::Void(*)(::FCOEMCEDLNL*, ::RPG::GameCore::BlockGrassData*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_BLOCKGRASSDATA_OJNNBEJLDIJ_OFFSET))(a1, a2);
		}

	};
}
