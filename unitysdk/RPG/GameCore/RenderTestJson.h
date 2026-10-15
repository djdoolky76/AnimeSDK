#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/JsonConfig.h"
#include "unitysdk/RPG/MVector3.h"
class FCOEMCEDLNL;
namespace RPG::GameCore { class RenderTestItemJson; }
namespace RPG::GameCore { class RenderTestJson; }
namespace System { class String; }

#define RPG_GAMECORE_RENDERTESTJSON_CTOR_OFFSET UNITYSDK_OFFSET(0x1D987DD0)
#define RPG_GAMECORE_RENDERTESTJSON_OJNNBEJLDIJ_OFFSET UNITYSDK_OFFSET(0x1D987AD0)

namespace RPG::GameCore
{
	inline static constexpr unsigned int RenderTestJson_TypeDefinitionIndex = 24399;

	class RenderTestJson : public ::RPG::GameCore::JsonConfig
	{
	public:
		::System::String* Name; // 0x10
		::RPG::GameCore::RenderTestItemJson* Stage; // 0x18
		::RPG::MVector3 CameraPosition; // 0x20
		::RPG::MVector3 CameraForward; // 0x2C
		::Il2CppArray<::RPG::GameCore::RenderTestItemJson*>* Character; // 0x38
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_GAMECORE_RENDERTESTJSON_CTOR_OFFSET))(this);
		}

		static ::System::Void OJNNBEJLDIJ(::FCOEMCEDLNL* a1, ::RPG::GameCore::RenderTestJson* a2)
		{
			return ((::System::Void(*)(::FCOEMCEDLNL*, ::RPG::GameCore::RenderTestJson*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_RENDERTESTJSON_OJNNBEJLDIJ_OFFSET))(a1, a2);
		}

	};
}
