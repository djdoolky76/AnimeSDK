#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/ChenLingFesProperty.h"
#include "unitysdk/RPG/GameCore/ChenLingFesPropertyOperation.h"
#include "unitysdk/RPG/GameCore/JsonConfig.h"
class FCOEMCEDLNL;
namespace RPG::GameCore { class ChenLingFesPropertyModifier; }
namespace RPG::GameCore { class ChenLingFesToastConfig; }
namespace System { class String; }

#define RPG_GAMECORE_CHENLINGFESPROPERTYMODIFIER_CTOR_OFFSET UNITYSDK_OFFSET(0x1D562780)
#define RPG_GAMECORE_CHENLINGFESPROPERTYMODIFIER_OJNNBEJLDIJ_OFFSET UNITYSDK_OFFSET(0x1D562580)

namespace RPG::GameCore
{
	inline static constexpr unsigned int ChenLingFesPropertyModifier_TypeDefinitionIndex = 18451;

	class ChenLingFesPropertyModifier : public ::RPG::GameCore::JsonConfig
	{
	public:
		::RPG::GameCore::ChenLingFesProperty Property; // 0x10
		::RPG::GameCore::ChenLingFesPropertyOperation Operation; // 0x14
		::System::String* Value; // 0x18
		::System::Single Multiplier; // 0x20
		::System::Byte _padding0[0x4];
		::RPG::GameCore::ChenLingFesToastConfig* ToastConfig; // 0x28
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_GAMECORE_CHENLINGFESPROPERTYMODIFIER_CTOR_OFFSET))(this);
		}

		static ::System::Void OJNNBEJLDIJ(::FCOEMCEDLNL* a1, ::RPG::GameCore::ChenLingFesPropertyModifier* a2)
		{
			return ((::System::Void(*)(::FCOEMCEDLNL*, ::RPG::GameCore::ChenLingFesPropertyModifier*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_CHENLINGFESPROPERTYMODIFIER_OJNNBEJLDIJ_OFFSET))(a1, a2);
		}

	};
}
