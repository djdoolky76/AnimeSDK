#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/JsonConfig.h"
class FCOEMCEDLNL;
namespace RPG::GameCore { class DynamicFloat; }
namespace RPG::GameCore { class DynamicVector4; }

#define RPG_GAMECORE_DYNAMICVECTOR4_CTOR_OFFSET UNITYSDK_OFFSET(0x1D5FF800)
#define RPG_GAMECORE_DYNAMICVECTOR4_OJNNBEJLDIJ_OFFSET UNITYSDK_OFFSET(0x1D5FF5A0)

namespace RPG::GameCore
{
	inline static constexpr unsigned int DynamicVector4_TypeDefinitionIndex = 23847;

	class DynamicVector4 : public ::RPG::GameCore::JsonConfig
	{
	public:
		::RPG::GameCore::DynamicFloat* x; // 0x10
		::RPG::GameCore::DynamicFloat* y; // 0x18
		::RPG::GameCore::DynamicFloat* z; // 0x20
		::RPG::GameCore::DynamicFloat* w; // 0x28
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_GAMECORE_DYNAMICVECTOR4_CTOR_OFFSET))(this);
		}

		static ::System::Void OJNNBEJLDIJ(::FCOEMCEDLNL* a1, ::RPG::GameCore::DynamicVector4* a2)
		{
			return ((::System::Void(*)(::FCOEMCEDLNL*, ::RPG::GameCore::DynamicVector4*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_DYNAMICVECTOR4_OJNNBEJLDIJ_OFFSET))(a1, a2);
		}

	};
}
