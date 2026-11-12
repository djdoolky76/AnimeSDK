#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"
class FCOEMCEDLNL;
namespace RPG::GameCore { class AvatarSkinSpecialActionRow; }
namespace System { class String; }

#define RPG_GAMECORE_AVATARSKINSPECIALACTIONROW_CTOR_OFFSET UNITYSDK_OFFSET(0x1E6510F0)
#define RPG_GAMECORE_AVATARSKINSPECIALACTIONROW_FROMBINARY_OFFSET UNITYSDK_OFFSET(0x1E650F30)

namespace RPG::GameCore
{
	inline static constexpr unsigned int AvatarSkinSpecialActionRow_TypeDefinitionIndex = 12783;

	class AvatarSkinSpecialActionRow : public ::System::Object
	{
	public:
		::System::String* SpecialActionPrefabPath; // 0x10
		::System::String* SkinSpecialActionPrefabPath; // 0x18
		::System::UInt32 ID; // 0x20
		::System::UInt32 SkinID; // 0x24
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_GAMECORE_AVATARSKINSPECIALACTIONROW_CTOR_OFFSET))(this);
		}

		static ::System::Void FromBinary(::FCOEMCEDLNL* a1, ::RPG::GameCore::AvatarSkinSpecialActionRow* a2)
		{
			return ((::System::Void(*)(::FCOEMCEDLNL*, ::RPG::GameCore::AvatarSkinSpecialActionRow*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_AVATARSKINSPECIALACTIONROW_FROMBINARY_OFFSET))(a1, a2);
		}

	};
}
