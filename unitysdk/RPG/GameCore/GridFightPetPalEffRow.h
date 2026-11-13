#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/Client/TextID.h"
#include "unitysdk/RPG/GameCore/FixPoint.h"
#include "unitysdk/System/Object.h"
class FCOEMCEDLNL;
namespace RPG::GameCore { class GridFightPetPalEffRow; }
namespace System { class String; }

#define RPG_GAMECORE_GRIDFIGHTPETPALEFFROW_CTOR_OFFSET UNITYSDK_OFFSET(0x1EA57340)
#define RPG_GAMECORE_GRIDFIGHTPETPALEFFROW_FROMBINARY_OFFSET UNITYSDK_OFFSET(0x1EA56F10)

namespace RPG::GameCore
{
	inline static constexpr unsigned int GridFightPetPalEffRow_TypeDefinitionIndex = 13567;

	class GridFightPetPalEffRow : public ::System::Object
	{
	public:
		::System::String* JsonPath; // 0x10
		::Il2CppArray<::RPG::GameCore::FixPoint>* EffectParamList; // 0x18
		::RPG::Client::TextID AddDesc; // 0x20
		::RPG::Client::TextID SimpleDesc; // 0x30
		::RPG::Client::TextID Desc; // 0x40
		::RPG::Client::TextID SwitchDesc; // 0x50
		::System::Boolean IsOCEffective; // 0x60
		::System::Byte _padding0[0x3];
		::System::UInt32 ID; // 0x64
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_GAMECORE_GRIDFIGHTPETPALEFFROW_CTOR_OFFSET))(this);
		}

		static ::System::Void FromBinary(::FCOEMCEDLNL* a1, ::RPG::GameCore::GridFightPetPalEffRow* a2)
		{
			return ((::System::Void(*)(::FCOEMCEDLNL*, ::RPG::GameCore::GridFightPetPalEffRow*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_GRIDFIGHTPETPALEFFROW_FROMBINARY_OFFSET))(a1, a2);
		}

	};
}
