#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/CPNCJIABDNP.h"
#include "unitysdk/RPG/GameCore/ElationTimeState.h"
#include "unitysdk/RPG/GameCore/FixPoint.h"
#include "unitysdk/RPG/GameCore/ModifierBehaviorFlag.h"
#include "unitysdk/System/Object.h"
class ENGBNDIPDJL;
class PHKFMKDHNBO;
namespace RPG::GameCore { class GameEntity; }
namespace System { class String; }
namespace System::Collections::Generic { template <typename T> class List_1; }

#define NEPOAOEADBE_CLEAR_OFFSET UNITYSDK_OFFSET(0xC4517D0)
#define NEPOAOEADBE_CTOR_OFFSET UNITYSDK_OFFSET(0xC4518E0)

inline static constexpr unsigned int NEPOAOEADBE_TypeDefinitionIndex = 57261;

	class NEPOAOEADBE : public ::System::Object
	{
	public:
		::System::Collections::Generic::List_1<::CPNCJIABDNP>* NCAOCMNBJLE; // 0x10
		::System::Collections::Generic::List_1<::RPG::GameCore::GameEntity*>* MDFDDPNLEEA; // 0x18
		::System::String* MAGLCBLICBG; // 0x20
		::System::Collections::Generic::List_1<::PHKFMKDHNBO*>* MENGFAFNNIN; // 0x28
		::System::String* GEIGNKLEOBD; // 0x30
		::System::String* BCKBHPNAMKJ; // 0x38
		::ENGBNDIPDJL* PJCGFJBGCFJ; // 0x40
		::Il2CppArray<::RPG::GameCore::ModifierBehaviorFlag>* HACPIPNNFGJ; // 0x48
		::RPG::GameCore::GameEntity* MIAJNJNECOG; // 0x50
		::RPG::GameCore::ElationTimeState MEPFOEEGBEA; // 0x58
		::System::Byte _padding0[0x4];
		::RPG::GameCore::FixPoint CKLLHFKPACB; // 0x60
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + NEPOAOEADBE_CTOR_OFFSET))(this);
		}

		::System::Void Clear()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + NEPOAOEADBE_CLEAR_OFFSET))(this);
		}

	};
