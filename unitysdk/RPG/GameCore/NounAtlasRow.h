#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/Client/TextID.h"
#include "unitysdk/System/Object.h"
class FCOEMCEDLNL;
namespace RPG::GameCore { class NounAtlasRow; }

#define RPG_GAMECORE_NOUNATLASROW_CTOR_OFFSET UNITYSDK_OFFSET(0x1D8AE0D0)
#define RPG_GAMECORE_NOUNATLASROW_FROMBINARY_OFFSET UNITYSDK_OFFSET(0x1D8ADCC0)

namespace RPG::GameCore
{
	inline static constexpr unsigned int NounAtlasRow_TypeDefinitionIndex = 12694;

	class NounAtlasRow : public ::System::Object
	{
	public:
		::Il2CppArray<::System::UInt32>* RelatedTerms; // 0x10
		::RPG::Client::TextID NounTitle; // 0x18
		::RPG::Client::TextID NounDesc; // 0x28
		::System::UInt32 Unlock; // 0x38
		::System::Boolean IsIntroPage; // 0x3C
		::System::Byte _padding0[0x3];
		::System::Int32 SortID; // 0x40
		::System::UInt32 Type; // 0x44
		::System::UInt32 ID; // 0x48
		::System::Byte _padding1[0x4];
		::RPG::Client::TextID UnlockDesc; // 0x50
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
