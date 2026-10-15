#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/JsonConfig.h"
#include "unitysdk/RPG/MVector3.h"
class FCOEMCEDLNL;
namespace RPG::GameCore { class ManikinCharacterPositionsConfig; }
namespace System { class String; }
namespace System::Collections::Generic { template <typename T1, typename T2> class Dictionary_2; }

#define RPG_GAMECORE_MANIKINCHARACTERPOSITIONSCONFIG_CTOR_OFFSET UNITYSDK_OFFSET(0x1D800010)
#define RPG_GAMECORE_MANIKINCHARACTERPOSITIONSCONFIG_FROMBINARY_OFFSET UNITYSDK_OFFSET(0x1D7FFBE0)

namespace RPG::GameCore
{
	class ManikinCharacterPositionsConfig : public ::RPG::GameCore::JsonConfig
	{
	public:
		::System::Collections::Generic::Dictionary_2<::System::String*, ::RPG::MVector3>* Default; // 0x10
		::System::Collections::Generic::Dictionary_2<::System::String*, ::RPG::MVector3>* Male; // 0x18
		::System::Collections::Generic::Dictionary_2<::System::String*, ::RPG::MVector3>* Lad; // 0x20
		::System::Collections::Generic::Dictionary_2<::System::String*, ::RPG::MVector3>* Boy; // 0x28
		::System::Collections::Generic::Dictionary_2<::System::String*, ::RPG::MVector3>* Lady; // 0x30
		::System::Collections::Generic::Dictionary_2<::System::String*, ::RPG::MVector3>* Maid; // 0x38
		::System::Collections::Generic::Dictionary_2<::System::String*, ::RPG::MVector3>* Girl; // 0x40
		::System::Collections::Generic::Dictionary_2<::System::String*, ::RPG::MVector3>* Kid; // 0x48
		::System::Collections::Generic::Dictionary_2<::System::String*, ::RPG::MVector3>* Miss; // 0x50
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_GAMECORE_MANIKINCHARACTERPOSITIONSCONFIG_CTOR_OFFSET))(this);
		}

		static ::System::Void FromBinary(::FCOEMCEDLNL* a1, ::RPG::GameCore::ManikinCharacterPositionsConfig* a2)
		{
			return ((::System::Void(*)(::FCOEMCEDLNL*, ::RPG::GameCore::ManikinCharacterPositionsConfig*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_MANIKINCHARACTERPOSITIONSCONFIG_FROMBINARY_OFFSET))(a1, a2);
		}

	};
}
