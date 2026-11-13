#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/Client/TextID.h"
#include "unitysdk/System/Object.h"
class FCOEMCEDLNL;
namespace RPG::GameCore { class GridFightPetPalEffHandbookConfigRow; }

#define RPG_GAMECORE_GRIDFIGHTPETPALEFFHANDBOOKCONFIGROW_CTOR_OFFSET UNITYSDK_OFFSET(0x1EA56F00)
#define RPG_GAMECORE_GRIDFIGHTPETPALEFFHANDBOOKCONFIGROW_FROMBINARY_OFFSET UNITYSDK_OFFSET(0x1EA56C20)

namespace RPG::GameCore
{
	inline static constexpr unsigned int GridFightPetPalEffHandbookConfigRow_TypeDefinitionIndex = 13578;

	class GridFightPetPalEffHandbookConfigRow : public ::System::Object
	{
	public:
		::Il2CppArray<::System::UInt32>* PetPalEffList; // 0x10
		::System::UInt32 CategoryID; // 0x18
		::System::Byte _padding0[0x4];
		::RPG::Client::TextID GroupDesc; // 0x20
		::System::UInt32 PetPalID; // 0x30
		::System::UInt32 GroupID; // 0x34
		::RPG::Client::TextID CategoryDesc; // 0x38
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_GAMECORE_GRIDFIGHTPETPALEFFHANDBOOKCONFIGROW_CTOR_OFFSET))(this);
		}

		static ::System::Void FromBinary(::FCOEMCEDLNL* a1, ::RPG::GameCore::GridFightPetPalEffHandbookConfigRow* a2)
		{
			return ((::System::Void(*)(::FCOEMCEDLNL*, ::RPG::GameCore::GridFightPetPalEffHandbookConfigRow*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_GRIDFIGHTPETPALEFFHANDBOOKCONFIGROW_FROMBINARY_OFFSET))(a1, a2);
		}

	};
}
