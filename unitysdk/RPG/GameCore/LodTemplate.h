#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/JsonConfig.h"
class FCOEMCEDLNL;
namespace RPG::GameCore { class LodDetail; }
namespace RPG::GameCore { class LodTemplate; }
namespace System { class String; }

#define RPG_GAMECORE_LODTEMPLATE_CTOR_OFFSET UNITYSDK_OFFSET(0x1D7F33E0)
#define RPG_GAMECORE_LODTEMPLATE_MGMEGEDLMAK_OFFSET UNITYSDK_OFFSET(0x1D7F33F0)
#define RPG_GAMECORE_LODTEMPLATE_OJNNBEJLDIJ_OFFSET UNITYSDK_OFFSET(0x1D7F3190)

namespace RPG::GameCore
{
	inline static constexpr unsigned int LodTemplate_TypeDefinitionIndex = 19198;

	class LodTemplate : public ::RPG::GameCore::JsonConfig
	{
	public:
		::System::String* Name; // 0x10
		::System::Int32 Index; // 0x18
		::System::Single Distance; // 0x1C
		::Il2CppArray<::RPG::GameCore::LodDetail*>* LodDetailList; // 0x20
		::System::String* Layer; // 0x28
		::System::Boolean DitherSwitch; // 0x30
		::System::Boolean UseAABBDist; // 0x31
		::System::Boolean IsAutoGen; // 0x32
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_GAMECORE_LODTEMPLATE_CTOR_OFFSET))(this);
		}

		static ::System::Void OJNNBEJLDIJ(::FCOEMCEDLNL* a1, ::RPG::GameCore::LodTemplate* a2)
		{
			return ((::System::Void(*)(::FCOEMCEDLNL*, ::RPG::GameCore::LodTemplate*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_LODTEMPLATE_OJNNBEJLDIJ_OFFSET))(a1, a2);
		}

		static ::System::Void MGMEGEDLMAK(::FCOEMCEDLNL* a1, ::RPG::GameCore::LodTemplate* a2)
		{
			return ((::System::Void(*)(::FCOEMCEDLNL*, ::RPG::GameCore::LodTemplate*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_LODTEMPLATE_MGMEGEDLMAK_OFFSET))(a1, a2);
		}

	};
}
