#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/JsonConfig.h"
class FCOEMCEDLNL;
namespace RPG::GameCore { class ConfigBakeLayoutInfo; }
namespace RPG::GameCore { class ConfigBakeLayoutInfoList; }

#define RPG_GAMECORE_CONFIGBAKELAYOUTINFOLIST_CTOR_OFFSET UNITYSDK_OFFSET(0x1D5D4A50)
#define RPG_GAMECORE_CONFIGBAKELAYOUTINFOLIST_OJNNBEJLDIJ_OFFSET UNITYSDK_OFFSET(0x1D5D4990)

namespace RPG::GameCore
{
	inline static constexpr unsigned int ConfigBakeLayoutInfoList_TypeDefinitionIndex = 16448;

	class ConfigBakeLayoutInfoList : public ::RPG::GameCore::JsonConfig
	{
	public:
		::Il2CppArray<::RPG::GameCore::ConfigBakeLayoutInfo*>* BakeInfoLayouts; // 0x10
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_GAMECORE_CONFIGBAKELAYOUTINFOLIST_CTOR_OFFSET))(this);
		}

		static ::System::Void OJNNBEJLDIJ(::FCOEMCEDLNL* a1, ::RPG::GameCore::ConfigBakeLayoutInfoList* a2)
		{
			return ((::System::Void(*)(::FCOEMCEDLNL*, ::RPG::GameCore::ConfigBakeLayoutInfoList*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_CONFIGBAKELAYOUTINFOLIST_OJNNBEJLDIJ_OFFSET))(a1, a2);
		}

	};
}
