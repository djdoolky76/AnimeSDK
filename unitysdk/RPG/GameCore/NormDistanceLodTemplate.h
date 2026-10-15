#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/JsonConfig.h"
#include "unitysdk/RPG/GameCore/StreamingLayerType.h"
class FCOEMCEDLNL;
namespace RPG::GameCore { class LodDetail; }
namespace RPG::GameCore { class NormDistanceLodTemplate; }
namespace System { class String; }

#define RPG_GAMECORE_NORMDISTANCELODTEMPLATE_CTOR_OFFSET UNITYSDK_OFFSET(0x1D8ABDE0)
#define RPG_GAMECORE_NORMDISTANCELODTEMPLATE_OJNNBEJLDIJ_OFFSET UNITYSDK_OFFSET(0x1D8ABA90)

namespace RPG::GameCore
{
	inline static constexpr unsigned int NormDistanceLodTemplate_TypeDefinitionIndex = 19207;

	class NormDistanceLodTemplate : public ::RPG::GameCore::JsonConfig
	{
	public:
		::System::String* Name; // 0x10
		::System::Single NormDistance; // 0x18
		::RPG::GameCore::StreamingLayerType LayerType; // 0x1C
		::Il2CppArray<::RPG::GameCore::LodDetail*>* LodDetailList; // 0x20
		::System::Boolean IsPersistent; // 0x28
		::System::Boolean DitherSwitch; // 0x29
		::System::Boolean UseAABBDist; // 0x2A
		::System::Boolean IsAutoGen; // 0x2B
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_GAMECORE_NORMDISTANCELODTEMPLATE_CTOR_OFFSET))(this);
		}

		static ::System::Void OJNNBEJLDIJ(::FCOEMCEDLNL* a1, ::RPG::GameCore::NormDistanceLodTemplate* a2)
		{
			return ((::System::Void(*)(::FCOEMCEDLNL*, ::RPG::GameCore::NormDistanceLodTemplate*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_NORMDISTANCELODTEMPLATE_OJNNBEJLDIJ_OFFSET))(a1, a2);
		}

	};
}
