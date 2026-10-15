#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/JsonConfig.h"
class FCOEMCEDLNL;
namespace RPG::GameCore { class DynamicFloat; }
namespace RPG::GameCore { class DynamicVector3; }

#define RPG_GAMECORE_DYNAMICVECTOR3_CTOR_OFFSET UNITYSDK_OFFSET(0x1D62D010)
#define RPG_GAMECORE_DYNAMICVECTOR3_OJNNBEJLDIJ_OFFSET UNITYSDK_OFFSET(0x1D62CE40)

namespace RPG::GameCore
{
	class DynamicVector3 : public ::RPG::GameCore::JsonConfig
	{
	public:
		::RPG::GameCore::DynamicFloat* x; // 0x10
		::RPG::GameCore::DynamicFloat* y; // 0x18
		::RPG::GameCore::DynamicFloat* z; // 0x20
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_GAMECORE_DYNAMICVECTOR3_CTOR_OFFSET))(this);
		}

		static ::System::Void OJNNBEJLDIJ(::FCOEMCEDLNL* a1, ::RPG::GameCore::DynamicVector3* a2)
		{
			return ((::System::Void(*)(::FCOEMCEDLNL*, ::RPG::GameCore::DynamicVector3*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_DYNAMICVECTOR3_OJNNBEJLDIJ_OFFSET))(a1, a2);
		}

	};
}
