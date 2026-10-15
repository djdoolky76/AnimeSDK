#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/JsonConfig.h"
class FCOEMCEDLNL;
namespace RPG::GameCore { class TimeRewindOverlayMaterials; }
namespace System { class String; }

#define RPG_GAMECORE_TIMEREWINDOVERLAYMATERIALS_CTOR_OFFSET UNITYSDK_OFFSET(0x1DB5B080)
#define RPG_GAMECORE_TIMEREWINDOVERLAYMATERIALS_OJNNBEJLDIJ_OFFSET UNITYSDK_OFFSET(0x1DB5AF30)

namespace RPG::GameCore
{
	inline static constexpr unsigned int TimeRewindOverlayMaterials_TypeDefinitionIndex = 17567;

	class TimeRewindOverlayMaterials : public ::RPG::GameCore::JsonConfig
	{
	public:
		::System::String* RendererPath; // 0x10
		::Il2CppArray<::System::String*>* MaterialNames; // 0x18
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_GAMECORE_TIMEREWINDOVERLAYMATERIALS_CTOR_OFFSET))(this);
		}

		static ::System::Void OJNNBEJLDIJ(::FCOEMCEDLNL* a1, ::RPG::GameCore::TimeRewindOverlayMaterials* a2)
		{
			return ((::System::Void(*)(::FCOEMCEDLNL*, ::RPG::GameCore::TimeRewindOverlayMaterials*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_TIMEREWINDOVERLAYMATERIALS_OJNNBEJLDIJ_OFFSET))(a1, a2);
		}

	};
}
