#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/Client/LittleGame/PixAir/PixAirEquipInteractionType.h"
#include "unitysdk/RPG/GameCore/LittleGameAbilityAttributeType.h"
#include "unitysdk/System/Object.h"
#include "unitysdk/RPG/GameCore/FixPoint.h"
#include "unitysdk/System/Nullable_1.h"
class IOGNBKGNPFD;
namespace Entitas { class IEntity; }
namespace System { class String; }

#define EJFODPGBAGO_HGOCMAKIHBC_OFFSET UNITYSDK_OFFSET(0x154CD280)

inline static constexpr unsigned int EJFODPGBAGO_TypeDefinitionIndex = 77349;

	class EJFODPGBAGO : public ::System::Object
	{
	public:
		static ::System::Void HGOCMAKIHBC(::IOGNBKGNPFD* a1, ::Entitas::IEntity* a2, ::RPG::GameCore::LittleGameAbilityAttributeType a3, ::RPG::GameCore::FixPoint a4, ::System::String* a5, ::System::String* a6, ::System::Nullable_1<::RPG::Client::LittleGame::PixAir::PixAirEquipInteractionType> a7)
		{
			return ((::System::Void(*)(::IOGNBKGNPFD*, ::Entitas::IEntity*, ::RPG::GameCore::LittleGameAbilityAttributeType, ::RPG::GameCore::FixPoint, ::System::String*, ::System::String*, ::System::Nullable_1<::RPG::Client::LittleGame::PixAir::PixAirEquipInteractionType>))((::PBYTE)hIl2Cpp + EJFODPGBAGO_HGOCMAKIHBC_OFFSET))(a1, a2, a3, a4, a5, a6, a7);
		}

	};
