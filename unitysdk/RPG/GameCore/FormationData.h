#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/FormationDataServantMode.h"
#include "unitysdk/RPG/GameCore/JsonConfig.h"
#include "unitysdk/RPG/MVector3.h"
class FCOEMCEDLNL;
namespace RPG::GameCore { class FormationData; }
namespace RPG::GameCore { class LocationData; }
namespace System { class String; }

#define RPG_GAMECORE_FORMATIONDATA_CTOR_OFFSET UNITYSDK_OFFSET(0x1D6EA980)
#define RPG_GAMECORE_FORMATIONDATA_OJNNBEJLDIJ_OFFSET UNITYSDK_OFFSET(0x1D6EA610)

namespace RPG::GameCore
{
	class FormationData : public ::RPG::GameCore::JsonConfig
	{
	public:
		::System::String* Name; // 0x10
		::System::Boolean AdjustByTargetWidth; // 0x18
		::System::Boolean IsIncludeTempLeave; // 0x19
		::System::Boolean IgnoreCharacterRootOffset; // 0x1A
		::System::Byte _padding0[0x1];
		::RPG::MVector3 RootOffset; // 0x1C
		::RPG::GameCore::FormationDataServantMode ServantMode; // 0x28
		::System::Byte _padding1[0x4];
		::Il2CppArray<::RPG::GameCore::LocationData*>* LocationList; // 0x30
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_GAMECORE_FORMATIONDATA_CTOR_OFFSET))(this);
		}

		static ::System::Void OJNNBEJLDIJ(::FCOEMCEDLNL* a1, ::RPG::GameCore::FormationData* a2)
		{
			return ((::System::Void(*)(::FCOEMCEDLNL*, ::RPG::GameCore::FormationData*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_FORMATIONDATA_OJNNBEJLDIJ_OFFSET))(a1, a2);
		}

	};
}
