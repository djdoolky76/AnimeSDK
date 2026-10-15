#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/FMPCODLIOLG.h"
#include "unitysdk/RPG/GameCore/CharacterHUDType.h"
class GIPFFGFJCBF_PBICBEEGHJO;
class LEEEHNMHAAP;
namespace RPG::GameCore { class GameEntity; }
namespace System { class String; }

#define EHGIBDJKDFH_CTOR_OFFSET UNITYSDK_OFFSET(0x154A5E80)
#define EHGIBDJKDFH_IAMCNOAAALI_1_OFFSET UNITYSDK_OFFSET(0x154A5E10)
#define EHGIBDJKDFH_IAMCNOAAALI_OFFSET UNITYSDK_OFFSET(0x154A5D50)
#define EHGIBDJKDFH_IHJANGBNILI_OFFSET UNITYSDK_OFFSET(0x154A5C30)

	class EHGIBDJKDFH : public ::FMPCODLIOLG
	{
	public:
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + EHGIBDJKDFH_CTOR_OFFSET))(this);
		}

		::LEEEHNMHAAP* IHJANGBNILI(::GIPFFGFJCBF_PBICBEEGHJO* a1)
		{
			return ((::LEEEHNMHAAP*(*)(::PVOID, ::GIPFFGFJCBF_PBICBEEGHJO*))((::PBYTE)hIl2Cpp + EHGIBDJKDFH_IHJANGBNILI_OFFSET))(this, a1);
		}

		static ::System::String* IAMCNOAAALI(::RPG::GameCore::GameEntity* a1)
		{
			return ((::System::String*(*)(::RPG::GameCore::GameEntity*))((::PBYTE)hIl2Cpp + EHGIBDJKDFH_IAMCNOAAALI_OFFSET))(a1);
		}

		static ::System::String* IAMCNOAAALI_1(::RPG::GameCore::CharacterHUDType a1)
		{
			return ((::System::String*(*)(::RPG::GameCore::CharacterHUDType))((::PBYTE)hIl2Cpp + EHGIBDJKDFH_IAMCNOAAALI_1_OFFSET))(a1);
		}

	};
