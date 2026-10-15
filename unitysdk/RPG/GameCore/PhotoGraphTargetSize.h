#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/JsonConfig.h"
class FCOEMCEDLNL;
namespace RPG::GameCore { class PhotoGraphTargetSize; }
namespace SimpleJSON { class JSONNode; }

#define RPG_GAMECORE_PHOTOGRAPHTARGETSIZE_CTOR_OFFSET UNITYSDK_OFFSET(0x1D9138E0)
#define RPG_GAMECORE_PHOTOGRAPHTARGETSIZE_LJACLBNEEEB_OFFSET UNITYSDK_OFFSET(0x1D9138F0)
#define RPG_GAMECORE_PHOTOGRAPHTARGETSIZE_OJNNBEJLDIJ_OFFSET UNITYSDK_OFFSET(0x1D9137B0)

namespace RPG::GameCore
{
	inline static constexpr unsigned int PhotoGraphTargetSize_TypeDefinitionIndex = 21650;

	class PhotoGraphTargetSize : public ::RPG::GameCore::JsonConfig
	{
	public:
		::System::Single Width; // 0x10
		::System::Single Height; // 0x14
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_GAMECORE_PHOTOGRAPHTARGETSIZE_CTOR_OFFSET))(this);
		}

		static ::System::Void OJNNBEJLDIJ(::FCOEMCEDLNL* a1, ::RPG::GameCore::PhotoGraphTargetSize* a2)
		{
			return ((::System::Void(*)(::FCOEMCEDLNL*, ::RPG::GameCore::PhotoGraphTargetSize*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_PHOTOGRAPHTARGETSIZE_OJNNBEJLDIJ_OFFSET))(a1, a2);
		}

		static ::System::Void LJACLBNEEEB(::SimpleJSON::JSONNode* a1, ::RPG::GameCore::PhotoGraphTargetSize* a2)
		{
			return ((::System::Void(*)(::SimpleJSON::JSONNode*, ::RPG::GameCore::PhotoGraphTargetSize*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_PHOTOGRAPHTARGETSIZE_LJACLBNEEEB_OFFSET))(a1, a2);
		}

	};
}
