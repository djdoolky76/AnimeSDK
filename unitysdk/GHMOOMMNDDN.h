#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/FateRinHouguRarityType.h"
#include "unitysdk/System/Object.h"
class GHMOOMMNDDN;
namespace System { class Object; }
namespace System { class String; }

#define GHMOOMMNDDN_CCTOR_OFFSET UNITYSDK_OFFSET(0x15A2A660)
#define GHMOOMMNDDN_COMPARETO_OFFSET UNITYSDK_OFFSET(0x15A2A5A0)
#define GHMOOMMNDDN_CTOR_OFFSET UNITYSDK_OFFSET(0x15A2A430)
#define GHMOOMMNDDN_EQUALS_1_OFFSET UNITYSDK_OFFSET(0x15A2A500)
#define GHMOOMMNDDN_EQUALS_OFFSET UNITYSDK_OFFSET(0x15A2A470)
#define GHMOOMMNDDN_GETHASHCODE_OFFSET UNITYSDK_OFFSET(0x15A2A560)
#define GHMOOMMNDDN_GET_RARITY_OFFSET UNITYSDK_OFFSET(0x15A2A440)
#define GHMOOMMNDDN_GET_UISTATE_OFFSET UNITYSDK_OFFSET(0x15A2A450)
#define GHMOOMMNDDN_SET_UISTATE_OFFSET UNITYSDK_OFFSET(0x15A2A460)

inline static constexpr unsigned int GHMOOMMNDDN_TypeDefinitionIndex = 81084;

	class GHMOOMMNDDN : public ::System::Object
	{
	public:
		::System::String* _UIState_k__BackingField; // 0x10
		::RPG::GameCore::FateRinHouguRarityType _Rarity_k__BackingField; // 0x18
		static ::GHMOOMMNDDN** StaticGet_IFDKFOGNOAN()
		{
			return (::GHMOOMMNDDN**)UnitySDK::FromName("", "GHMOOMMNDDN")->GetStaticField(0x14A60);
		}

		::System::Void _ctor(::RPG::GameCore::FateRinHouguRarityType a1)
		{
			return ((::System::Void(*)(::PVOID, ::RPG::GameCore::FateRinHouguRarityType))((::PBYTE)hIl2Cpp + GHMOOMMNDDN_CTOR_OFFSET))(this, a1);
		}

		static ::System::Void _cctor()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + GHMOOMMNDDN_CCTOR_OFFSET))();
		}

		::RPG::GameCore::FateRinHouguRarityType get_Rarity()
		{
			return ((::RPG::GameCore::FateRinHouguRarityType(*)(::PVOID))((::PBYTE)hIl2Cpp + GHMOOMMNDDN_GET_RARITY_OFFSET))(this);
		}

		::System::String* get_UIState()
		{
			return ((::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + GHMOOMMNDDN_GET_UISTATE_OFFSET))(this);
		}

		::System::Void set_UIState(::System::String* a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::String*))((::PBYTE)hIl2Cpp + GHMOOMMNDDN_SET_UISTATE_OFFSET))(this, a1);
		}

		::System::Boolean Equals(::System::Object* a1)
		{
			return ((::System::Boolean(*)(::PVOID, ::System::Object*))((::PBYTE)hIl2Cpp + GHMOOMMNDDN_EQUALS_OFFSET))(this, a1);
		}

		::System::Int32 GetHashCode()
		{
			return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + GHMOOMMNDDN_GETHASHCODE_OFFSET))(this);
		}

		::System::Boolean Equals_1(::GHMOOMMNDDN* a1)
		{
			return ((::System::Boolean(*)(::PVOID, ::GHMOOMMNDDN*))((::PBYTE)hIl2Cpp + GHMOOMMNDDN_EQUALS_1_OFFSET))(this, a1);
		}

		::System::Int32 CompareTo(::GHMOOMMNDDN* a1)
		{
			return ((::System::Int32(*)(::PVOID, ::GHMOOMMNDDN*))((::PBYTE)hIl2Cpp + GHMOOMMNDDN_COMPARETO_OFFSET))(this, a1);
		}

	};
