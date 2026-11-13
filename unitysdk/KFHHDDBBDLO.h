#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/NihiluxElationUIType.h"
#include "unitysdk/System/Object.h"
namespace RPG::Client { class IAvatarSkinData; }
namespace RPG::GameCore { class EntityManager; }
namespace RPG::GameCore { class GameEntity; }

#define KFHHDDBBDLO_ELMGHOMJAIK_OFFSET UNITYSDK_OFFSET(0x176E2680)
#define KFHHDDBBDLO_GKNKDAJIABK_OFFSET UNITYSDK_OFFSET(0x176E2B20)
#define KFHHDDBBDLO_HJMLGMBDDKK_OFFSET UNITYSDK_OFFSET(0x176E2880)
#define KFHHDDBBDLO_JEHKLCLFKGB_OFFSET UNITYSDK_OFFSET(0x176E2970)
#define KFHHDDBBDLO_KHJNHDOJDDP_OFFSET UNITYSDK_OFFSET(0x176E25B0)
#define KFHHDDBBDLO_NOMKEGBMFDN_OFFSET UNITYSDK_OFFSET(0x176E2810)

inline static constexpr unsigned int KFHHDDBBDLO_TypeDefinitionIndex = 73453;

	class KFHHDDBBDLO : public ::System::Object
	{
	public:
		// static const ::System::Object EDBAJIDODGJ; // 0x0
		static ::RPG::GameCore::NihiluxElationUIType KHJNHDOJDDP(::RPG::GameCore::NihiluxElationUIType a1, ::RPG::GameCore::EntityManager* a2)
		{
			return ((::RPG::GameCore::NihiluxElationUIType(*)(::RPG::GameCore::NihiluxElationUIType, ::RPG::GameCore::EntityManager*))((::PBYTE)hIl2Cpp + KFHHDDBBDLO_KHJNHDOJDDP_OFFSET))(a1, a2);
		}

		static ::RPG::Client::IAvatarSkinData* HJMLGMBDDKK(::RPG::GameCore::EntityManager* a1)
		{
			return ((::RPG::Client::IAvatarSkinData*(*)(::RPG::GameCore::EntityManager*))((::PBYTE)hIl2Cpp + KFHHDDBBDLO_HJMLGMBDDKK_OFFSET))(a1);
		}

		static ::System::Boolean ELMGHOMJAIK(::RPG::GameCore::EntityManager* a1, ::System::UInt32 a2)
		{
			return ((::System::Boolean(*)(::RPG::GameCore::EntityManager*, ::System::UInt32))((::PBYTE)hIl2Cpp + KFHHDDBBDLO_ELMGHOMJAIK_OFFSET))(a1, a2);
		}

		static ::RPG::GameCore::GameEntity* JEHKLCLFKGB(::RPG::GameCore::EntityManager* a1)
		{
			return ((::RPG::GameCore::GameEntity*(*)(::RPG::GameCore::EntityManager*))((::PBYTE)hIl2Cpp + KFHHDDBBDLO_JEHKLCLFKGB_OFFSET))(a1);
		}

		static ::System::Boolean GKNKDAJIABK(::RPG::GameCore::GameEntity* a1)
		{
			return ((::System::Boolean(*)(::RPG::GameCore::GameEntity*))((::PBYTE)hIl2Cpp + KFHHDDBBDLO_GKNKDAJIABK_OFFSET))(a1);
		}

		static ::System::Boolean NOMKEGBMFDN(::System::UInt32 a1)
		{
			return ((::System::Boolean(*)(::System::UInt32))((::PBYTE)hIl2Cpp + KFHHDDBBDLO_NOMKEGBMFDN_OFFSET))(a1);
		}

	};
