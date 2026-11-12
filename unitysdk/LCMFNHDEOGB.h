#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"
class LCMFNHDEOGB;
namespace RPG::GameCore { class GameEntity; }
namespace RPG::GameCore { class TurnBasedModifierInstance; }
namespace System { class String; }

#define LCMFNHDEOGB_BPLPBPMEODA_OFFSET UNITYSDK_OFFSET(0xBEABAF0)
#define LCMFNHDEOGB_CBFBHLACLPC_OFFSET UNITYSDK_OFFSET(0xBEABB90)
#define LCMFNHDEOGB_CTOR_OFFSET UNITYSDK_OFFSET(0xBEABB80)
#define LCMFNHDEOGB_IAMCNOAAALI_OFFSET UNITYSDK_OFFSET(0xBEABCA0)

inline static constexpr unsigned int LCMFNHDEOGB_TypeDefinitionIndex = 74329;

	class LCMFNHDEOGB : public ::System::Object
	{
	public:
		::RPG::GameCore::TurnBasedModifierInstance* BODCMMACKEG; // 0x10
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + LCMFNHDEOGB_CTOR_OFFSET))(this);
		}

		static ::LCMFNHDEOGB* BPLPBPMEODA(::RPG::GameCore::TurnBasedModifierInstance* a1)
		{
			return ((::LCMFNHDEOGB*(*)(::RPG::GameCore::TurnBasedModifierInstance*))((::PBYTE)hIl2Cpp + LCMFNHDEOGB_BPLPBPMEODA_OFFSET))(a1);
		}

		::System::Boolean CBFBHLACLPC(::RPG::GameCore::GameEntity* a1)
		{
			return ((::System::Boolean(*)(::PVOID, ::RPG::GameCore::GameEntity*))((::PBYTE)hIl2Cpp + LCMFNHDEOGB_CBFBHLACLPC_OFFSET))(this, a1);
		}

		::System::String* IAMCNOAAALI()
		{
			return ((::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + LCMFNHDEOGB_IAMCNOAAALI_OFFSET))(this);
		}

	};
