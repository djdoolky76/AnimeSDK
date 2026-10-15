#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/GenderType.h"
#include "unitysdk/System/Object.h"
class CJLCPMDGIBO;
namespace System { class String; }

#define ANHHIKNDMMB_CTOR_OFFSET UNITYSDK_OFFSET(0x1558B9B0)
#define ANHHIKNDMMB_GET_PLAYERGENDER_OFFSET UNITYSDK_OFFSET(0x1558B970)
#define ANHHIKNDMMB_GET_PLAYERNAME_OFFSET UNITYSDK_OFFSET(0x1558B950)
#define ANHHIKNDMMB_GET_PLAYEROUTFIT_OFFSET UNITYSDK_OFFSET(0x1558B990)
#define ANHHIKNDMMB_SET_PLAYERGENDER_OFFSET UNITYSDK_OFFSET(0x1558B980)
#define ANHHIKNDMMB_SET_PLAYERNAME_OFFSET UNITYSDK_OFFSET(0x1558B960)
#define ANHHIKNDMMB_SET_PLAYEROUTFIT_OFFSET UNITYSDK_OFFSET(0x1558B9A0)

inline static constexpr unsigned int ANHHIKNDMMB_TypeDefinitionIndex = 62732;

	class ANHHIKNDMMB : public ::System::Object
	{
	public:
		::System::String* _PlayerName_k__BackingField; // 0x10
		::CJLCPMDGIBO* _PlayerOutfit_k__BackingField; // 0x18
		::RPG::GameCore::GenderType _PlayerGender_k__BackingField; // 0x20
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + ANHHIKNDMMB_CTOR_OFFSET))(this);
		}

		::System::String* get_PlayerName()
		{
			return ((::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + ANHHIKNDMMB_GET_PLAYERNAME_OFFSET))(this);
		}

		::System::Void set_PlayerName(::System::String* a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::String*))((::PBYTE)hIl2Cpp + ANHHIKNDMMB_SET_PLAYERNAME_OFFSET))(this, a1);
		}

		::RPG::GameCore::GenderType get_PlayerGender()
		{
			return ((::RPG::GameCore::GenderType(*)(::PVOID))((::PBYTE)hIl2Cpp + ANHHIKNDMMB_GET_PLAYERGENDER_OFFSET))(this);
		}

		::System::Void set_PlayerGender(::RPG::GameCore::GenderType a1)
		{
			return ((::System::Void(*)(::PVOID, ::RPG::GameCore::GenderType))((::PBYTE)hIl2Cpp + ANHHIKNDMMB_SET_PLAYERGENDER_OFFSET))(this, a1);
		}

		::CJLCPMDGIBO* get_PlayerOutfit()
		{
			return ((::CJLCPMDGIBO*(*)(::PVOID))((::PBYTE)hIl2Cpp + ANHHIKNDMMB_GET_PLAYEROUTFIT_OFFSET))(this);
		}

		::System::Void set_PlayerOutfit(::CJLCPMDGIBO* a1)
		{
			return ((::System::Void(*)(::PVOID, ::CJLCPMDGIBO*))((::PBYTE)hIl2Cpp + ANHHIKNDMMB_SET_PLAYEROUTFIT_OFFSET))(this, a1);
		}

	};
