#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/Client/TextID.h"
#include "unitysdk/System/Object.h"
class FCOEMCEDLNL;
namespace RPG::GameCore { class GridFightPetPalConfigRow; }
namespace System { class String; }

#define RPG_GAMECORE_GRIDFIGHTPETPALCONFIGROW_CTOR_OFFSET UNITYSDK_OFFSET(0x1E948EA0)
#define RPG_GAMECORE_GRIDFIGHTPETPALCONFIGROW_FROMBINARY_OFFSET UNITYSDK_OFFSET(0x1E948AB0)

namespace RPG::GameCore
{
	inline static constexpr unsigned int GridFightPetPalConfigRow_TypeDefinitionIndex = 13565;

	class GridFightPetPalConfigRow : public ::System::Object
	{
	public:
		::System::String* FigureUp; // 0x10
		::System::String* SmallIcon; // 0x18
		::System::String* Icon; // 0x20
		::System::String* FigureDown; // 0x28
		::System::String* HeadImage; // 0x30
		::Il2CppArray<::System::UInt32>* EffIDList; // 0x38
		::System::UInt32 Sort; // 0x40
		::System::UInt32 ID; // 0x44
		::RPG::Client::TextID Desc; // 0x48
		::RPG::Client::TextID Name; // 0x58
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_GAMECORE_GRIDFIGHTPETPALCONFIGROW_CTOR_OFFSET))(this);
		}

		static ::System::Void FromBinary(::FCOEMCEDLNL* a1, ::RPG::GameCore::GridFightPetPalConfigRow* a2)
		{
			return ((::System::Void(*)(::FCOEMCEDLNL*, ::RPG::GameCore::GridFightPetPalConfigRow*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_GRIDFIGHTPETPALCONFIGROW_FROMBINARY_OFFSET))(a1, a2);
		}

	};
}
