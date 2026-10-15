#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/JsonConfig.h"
class FCOEMCEDLNL;
namespace RPG::GameCore { class WaypointMaterial; }
namespace System { class String; }
namespace System::Collections::Generic { template <typename T1, typename T2> class Dictionary_2; }

#define RPG_GAMECORE_WAYPOINTMATERIAL_CTOR_OFFSET UNITYSDK_OFFSET(0x1DCA6170)
#define RPG_GAMECORE_WAYPOINTMATERIAL_OJNNBEJLDIJ_OFFSET UNITYSDK_OFFSET(0x1DCA5FE0)

namespace RPG::GameCore
{
	inline static constexpr unsigned int WaypointMaterial_TypeDefinitionIndex = 18963;

	class WaypointMaterial : public ::RPG::GameCore::JsonConfig
	{
	public:
		::System::UInt32 ID; // 0x10
		::System::Byte _padding0[0x4];
		::System::Collections::Generic::Dictionary_2<::System::String*, ::System::Single>* FloatValues; // 0x18
		::System::Collections::Generic::Dictionary_2<::System::String*, ::System::String*>* ColorValues; // 0x20
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_GAMECORE_WAYPOINTMATERIAL_CTOR_OFFSET))(this);
		}

		static ::System::Void OJNNBEJLDIJ(::FCOEMCEDLNL* a1, ::RPG::GameCore::WaypointMaterial* a2)
		{
			return ((::System::Void(*)(::FCOEMCEDLNL*, ::RPG::GameCore::WaypointMaterial*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_WAYPOINTMATERIAL_OJNNBEJLDIJ_OFFSET))(a1, a2);
		}

	};
}
