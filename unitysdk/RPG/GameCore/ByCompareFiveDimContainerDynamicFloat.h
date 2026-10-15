#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/CompareType.h"
#include "unitysdk/RPG/GameCore/PredicateConfig.h"
class FCOEMCEDLNL;
namespace RPG::GameCore { class ByCompareFiveDimContainerDynamicFloat; }
namespace RPG::GameCore { class DynamicFloat; }
namespace SimpleJSON { class JSONNode; }
namespace System { class String; }

#define RPG_GAMECORE_BYCOMPAREFIVEDIMCONTAINERDYNAMICFLOAT_CTOR_OFFSET UNITYSDK_OFFSET(0x1D47E6F0)
#define RPG_GAMECORE_BYCOMPAREFIVEDIMCONTAINERDYNAMICFLOAT_EOJLPDGNHEK_OFFSET UNITYSDK_OFFSET(0x1D47E970)
#define RPG_GAMECORE_BYCOMPAREFIVEDIMCONTAINERDYNAMICFLOAT_LJACLBNEEEB_OFFSET UNITYSDK_OFFSET(0x1D47E930)
#define RPG_GAMECORE_BYCOMPAREFIVEDIMCONTAINERDYNAMICFLOAT_MGMEGEDLMAK_OFFSET UNITYSDK_OFFSET(0x1D47E700)
#define RPG_GAMECORE_BYCOMPAREFIVEDIMCONTAINERDYNAMICFLOAT_OJNNBEJLDIJ_OFFSET UNITYSDK_OFFSET(0x1D47E6B0)

namespace RPG::GameCore
{
	inline static constexpr unsigned int ByCompareFiveDimContainerDynamicFloat_TypeDefinitionIndex = 21439;

	class ByCompareFiveDimContainerDynamicFloat : public ::RPG::GameCore::PredicateConfig
	{
	public:
		::System::String* Name; // 0x20
		::RPG::GameCore::DynamicFloat* Value; // 0x28
		::RPG::GameCore::CompareType CompareType; // 0x30
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_GAMECORE_BYCOMPAREFIVEDIMCONTAINERDYNAMICFLOAT_CTOR_OFFSET))(this);
		}

		static ::System::Void OJNNBEJLDIJ(::FCOEMCEDLNL* a1, ::RPG::GameCore::ByCompareFiveDimContainerDynamicFloat* a2)
		{
			return ((::System::Void(*)(::FCOEMCEDLNL*, ::RPG::GameCore::ByCompareFiveDimContainerDynamicFloat*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_BYCOMPAREFIVEDIMCONTAINERDYNAMICFLOAT_OJNNBEJLDIJ_OFFSET))(a1, a2);
		}

		static ::System::Void MGMEGEDLMAK(::FCOEMCEDLNL* a1, ::RPG::GameCore::ByCompareFiveDimContainerDynamicFloat* a2)
		{
			return ((::System::Void(*)(::FCOEMCEDLNL*, ::RPG::GameCore::ByCompareFiveDimContainerDynamicFloat*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_BYCOMPAREFIVEDIMCONTAINERDYNAMICFLOAT_MGMEGEDLMAK_OFFSET))(a1, a2);
		}

		static ::System::Void LJACLBNEEEB(::SimpleJSON::JSONNode* a1, ::RPG::GameCore::ByCompareFiveDimContainerDynamicFloat* a2)
		{
			return ((::System::Void(*)(::SimpleJSON::JSONNode*, ::RPG::GameCore::ByCompareFiveDimContainerDynamicFloat*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_BYCOMPAREFIVEDIMCONTAINERDYNAMICFLOAT_LJACLBNEEEB_OFFSET))(a1, a2);
		}

		static ::System::Void EOJLPDGNHEK(::SimpleJSON::JSONNode* a1, ::RPG::GameCore::ByCompareFiveDimContainerDynamicFloat* a2)
		{
			return ((::System::Void(*)(::SimpleJSON::JSONNode*, ::RPG::GameCore::ByCompareFiveDimContainerDynamicFloat*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_BYCOMPAREFIVEDIMCONTAINERDYNAMICFLOAT_EOJLPDGNHEK_OFFSET))(a1, a2);
		}

	};
}
