#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/JsonConfig.h"
#include "unitysdk/RPG/MVector3.h"
class FCOEMCEDLNL;
namespace RPG::GameCore { class ManikinPetPositionsConfig; }
namespace System { class String; }
namespace System::Collections::Generic { template <typename T1, typename T2> class Dictionary_2; }

#define RPG_GAMECORE_MANIKINPETPOSITIONSCONFIG_CTOR_OFFSET UNITYSDK_OFFSET(0x1D7FB400)
#define RPG_GAMECORE_MANIKINPETPOSITIONSCONFIG_FROMBINARY_OFFSET UNITYSDK_OFFSET(0x1D7FB1C0)

namespace RPG::GameCore
{
	inline static constexpr unsigned int ManikinPetPositionsConfig_TypeDefinitionIndex = 17479;

	class ManikinPetPositionsConfig : public ::RPG::GameCore::JsonConfig
	{
	public:
		::System::Collections::Generic::Dictionary_2<::System::String*, ::RPG::MVector3>* Common; // 0x10
		::System::Collections::Generic::Dictionary_2<::System::String*, ::RPG::MVector3>* SmallQuadruped; // 0x18
		::System::Collections::Generic::Dictionary_2<::System::String*, ::RPG::MVector3>* SmallBiped; // 0x20
		::System::Collections::Generic::Dictionary_2<::System::String*, ::RPG::MVector3>* Floating; // 0x28
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_GAMECORE_MANIKINPETPOSITIONSCONFIG_CTOR_OFFSET))(this);
		}

		static ::System::Void FromBinary(::FCOEMCEDLNL* a1, ::RPG::GameCore::ManikinPetPositionsConfig* a2)
		{
			return ((::System::Void(*)(::FCOEMCEDLNL*, ::RPG::GameCore::ManikinPetPositionsConfig*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_MANIKINPETPOSITIONSCONFIG_FROMBINARY_OFFSET))(a1, a2);
		}

	};
}
