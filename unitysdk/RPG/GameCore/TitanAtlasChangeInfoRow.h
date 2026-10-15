#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"
class FCOEMCEDLNL;
namespace RPG::GameCore { class TitanAtlasChangeInfoRow; }

#define RPG_GAMECORE_TITANATLASCHANGEINFOROW_CTOR_OFFSET UNITYSDK_OFFSET(0x1DB5C7F0)
#define RPG_GAMECORE_TITANATLASCHANGEINFOROW_FROMBINARY_OFFSET UNITYSDK_OFFSET(0x1DB5C6E0)

namespace RPG::GameCore
{
	inline static constexpr unsigned int TitanAtlasChangeInfoRow_TypeDefinitionIndex = 15300;

	class TitanAtlasChangeInfoRow : public ::System::Object
	{
	public:
		::Il2CppArray<::System::UInt32>* ChangeTitanIDList; // 0x10
		::System::UInt32 TitanID; // 0x18
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_GAMECORE_TITANATLASCHANGEINFOROW_CTOR_OFFSET))(this);
		}

		static ::System::Void FromBinary(::FCOEMCEDLNL* a1, ::RPG::GameCore::TitanAtlasChangeInfoRow* a2)
		{
			return ((::System::Void(*)(::FCOEMCEDLNL*, ::RPG::GameCore::TitanAtlasChangeInfoRow*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_TITANATLASCHANGEINFOROW_FROMBINARY_OFFSET))(a1, a2);
		}

	};
}
