#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/JsonConfig.h"
class FCOEMCEDLNL;
namespace RPG::GameCore { class PVSGameObjectFilter; }
namespace System { class String; }

#define RPG_GAMECORE_PVSGAMEOBJECTFILTER_CTOR_OFFSET UNITYSDK_OFFSET(0x1D8EAFE0)
#define RPG_GAMECORE_PVSGAMEOBJECTFILTER_OJNNBEJLDIJ_OFFSET UNITYSDK_OFFSET(0x1D8EAE20)

namespace RPG::GameCore
{
	class PVSGameObjectFilter : public ::RPG::GameCore::JsonConfig
	{
	public:
		::Il2CppArray<::System::String*>* NameContainStr; // 0x10
		::Il2CppArray<::System::String*>* ShaderNameContainStr; // 0x18
		::Il2CppArray<::System::String*>* ComponentInChildrenContainStr; // 0x20
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_GAMECORE_PVSGAMEOBJECTFILTER_CTOR_OFFSET))(this);
		}

		static ::System::Void OJNNBEJLDIJ(::FCOEMCEDLNL* a1, ::RPG::GameCore::PVSGameObjectFilter* a2)
		{
			return ((::System::Void(*)(::FCOEMCEDLNL*, ::RPG::GameCore::PVSGameObjectFilter*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_PVSGAMEOBJECTFILTER_OJNNBEJLDIJ_OFFSET))(a1, a2);
		}

	};
}
