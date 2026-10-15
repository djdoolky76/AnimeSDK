#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/JsonConfig.h"
#include "unitysdk/RPG/MVector3.h"
class FCOEMCEDLNL;
namespace RPG::GameCore { class RenderTestItemJson; }
namespace System { class String; }

#define RPG_GAMECORE_RENDERTESTITEMJSON_CTOR_OFFSET UNITYSDK_OFFSET(0x1D987AC0)
#define RPG_GAMECORE_RENDERTESTITEMJSON_OJNNBEJLDIJ_OFFSET UNITYSDK_OFFSET(0x1D987900)

namespace RPG::GameCore
{
	inline static constexpr unsigned int RenderTestItemJson_TypeDefinitionIndex = 24398;

	class RenderTestItemJson : public ::RPG::GameCore::JsonConfig
	{
	public:
		::System::String* Path; // 0x10
		::RPG::MVector3 Position; // 0x18
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_GAMECORE_RENDERTESTITEMJSON_CTOR_OFFSET))(this);
		}

		static ::System::Void OJNNBEJLDIJ(::FCOEMCEDLNL* a1, ::RPG::GameCore::RenderTestItemJson* a2)
		{
			return ((::System::Void(*)(::FCOEMCEDLNL*, ::RPG::GameCore::RenderTestItemJson*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_RENDERTESTITEMJSON_OJNNBEJLDIJ_OFFSET))(a1, a2);
		}

	};
}
