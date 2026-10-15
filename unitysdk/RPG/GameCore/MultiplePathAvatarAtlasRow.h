#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"
class FCOEMCEDLNL;
namespace RPG::GameCore { class MultiplePathAvatarAtlasRow; }

#define RPG_GAMECORE_MULTIPLEPATHAVATARATLASROW_CTOR_OFFSET UNITYSDK_OFFSET(0x1D8BFDF0)
#define RPG_GAMECORE_MULTIPLEPATHAVATARATLASROW_FROMBINARY_OFFSET UNITYSDK_OFFSET(0x1D8BFC50)

namespace RPG::GameCore
{
	inline static constexpr unsigned int MultiplePathAvatarAtlasRow_TypeDefinitionIndex = 12685;

	class MultiplePathAvatarAtlasRow : public ::System::Object
	{
	public:
		::Il2CppArray<::System::UInt32>* VoiceIDList; // 0x10
		::Il2CppArray<::System::UInt32>* StoryIDList; // 0x18
		::System::UInt32 AvatarID; // 0x20
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_GAMECORE_MULTIPLEPATHAVATARATLASROW_CTOR_OFFSET))(this);
		}

		static ::System::Void FromBinary(::FCOEMCEDLNL* a1, ::RPG::GameCore::MultiplePathAvatarAtlasRow* a2)
		{
			return ((::System::Void(*)(::FCOEMCEDLNL*, ::RPG::GameCore::MultiplePathAvatarAtlasRow*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_MULTIPLEPATHAVATARATLASROW_FROMBINARY_OFFSET))(a1, a2);
		}

	};
}
