#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/Client/TextID.h"
#include "unitysdk/System/Object.h"
class FCOEMCEDLNL;
namespace RPG::GameCore { class NounAtlasRow; }

#define RPG_GAMECORE_NOUNATLASROW_CTOR_OFFSET UNITYSDK_OFFSET(0x1EAF4730)
#define RPG_GAMECORE_NOUNATLASROW_FROMBINARY_OFFSET UNITYSDK_OFFSET(0x1EAF4320)

namespace RPG::GameCore
{
	inline static constexpr unsigned int NounAtlasRow_TypeDefinitionIndex = 12761;

	class NounAtlasRow : public ::System::Object
	{
	public:
		::Il2CppArray<::System::UInt32>* RelatedTerms; // 0x10
		::System::UInt32 Unlock; // 0x18
		::System::UInt32 Type; // 0x1C
		::System::UInt32 ID; // 0x20
		::System::Boolean IsIntroPage; // 0x24
		::System::Byte _padding0[0x3];
		::RPG::Client::TextID NounDesc; // 0x28
		::RPG::Client::TextID NounTitle; // 0x38
		::RPG::Client::TextID UnlockDesc; // 0x48
		::System::Int32 SortID; // 0x58
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_GAMECORE_NOUNATLASROW_CTOR_OFFSET))(this);
		}

		static ::System::Void FromBinary(::FCOEMCEDLNL* a1, ::RPG::GameCore::NounAtlasRow* a2)
		{
			return ((::System::Void(*)(::FCOEMCEDLNL*, ::RPG::GameCore::NounAtlasRow*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_NOUNATLASROW_FROMBINARY_OFFSET))(a1, a2);
		}

	};
}
