#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/TaskConfig.h"
#include "unitysdk/RPG/MVector3.h"
class FCOEMCEDLNL;
namespace RPG::GameCore { class HipplenGameCharacterAttachToMini; }
namespace System { class String; }

#define RPG_GAMECORE_HIPPLENGAMECHARACTERATTACHTOMINI_CTOR_OFFSET UNITYSDK_OFFSET(0x1D76B4E0)
#define RPG_GAMECORE_HIPPLENGAMECHARACTERATTACHTOMINI_MGMEGEDLMAK_OFFSET UNITYSDK_OFFSET(0x1D76B4F0)
#define RPG_GAMECORE_HIPPLENGAMECHARACTERATTACHTOMINI_OJNNBEJLDIJ_OFFSET UNITYSDK_OFFSET(0x1D76B4B0)

namespace RPG::GameCore
{
	inline static constexpr unsigned int HipplenGameCharacterAttachToMini_TypeDefinitionIndex = 21318;

	class HipplenGameCharacterAttachToMini : public ::RPG::GameCore::TaskConfig
	{
	public:
		::System::String* CharacterUniqueName; // 0x18
		::System::Boolean Deattach; // 0x20
		::System::Byte _padding0[0x7];
		::System::String* AnchorName; // 0x28
		::RPG::MVector3 Offset; // 0x30
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_GAMECORE_HIPPLENGAMECHARACTERATTACHTOMINI_CTOR_OFFSET))(this);
		}

		static ::System::Void OJNNBEJLDIJ(::FCOEMCEDLNL* a1, ::RPG::GameCore::HipplenGameCharacterAttachToMini* a2)
		{
			return ((::System::Void(*)(::FCOEMCEDLNL*, ::RPG::GameCore::HipplenGameCharacterAttachToMini*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_HIPPLENGAMECHARACTERATTACHTOMINI_OJNNBEJLDIJ_OFFSET))(a1, a2);
		}

		static ::System::Void MGMEGEDLMAK(::FCOEMCEDLNL* a1, ::RPG::GameCore::HipplenGameCharacterAttachToMini* a2)
		{
			return ((::System::Void(*)(::FCOEMCEDLNL*, ::RPG::GameCore::HipplenGameCharacterAttachToMini*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_HIPPLENGAMECHARACTERATTACHTOMINI_MGMEGEDLMAK_OFFSET))(a1, a2);
		}

	};
}
