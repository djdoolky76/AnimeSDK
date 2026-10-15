#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/JsonConfig.h"
class FCOEMCEDLNL;
namespace RPG::GameCore { class LodDetail; }
namespace RPG::GameCore { class TAMonoTickLodTemplate; }
namespace System { class String; }

#define RPG_GAMECORE_TAMONOTICKLODTEMPLATE_CTOR_OFFSET UNITYSDK_OFFSET(0x1DB53150)
#define RPG_GAMECORE_TAMONOTICKLODTEMPLATE_OJNNBEJLDIJ_OFFSET UNITYSDK_OFFSET(0x1DB52FF0)

namespace RPG::GameCore
{
	class TAMonoTickLodTemplate : public ::RPG::GameCore::JsonConfig
	{
	public:
		::System::String* Name; // 0x10
		::System::Single DistanceFactor; // 0x18
		::System::Byte _padding0[0x4];
		::Il2CppArray<::RPG::GameCore::LodDetail*>* LodDetailList; // 0x20
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_GAMECORE_TAMONOTICKLODTEMPLATE_CTOR_OFFSET))(this);
		}

		static ::System::Void OJNNBEJLDIJ(::FCOEMCEDLNL* a1, ::RPG::GameCore::TAMonoTickLodTemplate* a2)
		{
			return ((::System::Void(*)(::FCOEMCEDLNL*, ::RPG::GameCore::TAMonoTickLodTemplate*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_TAMONOTICKLODTEMPLATE_OJNNBEJLDIJ_OFFSET))(a1, a2);
		}

	};
}
