#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/AvatarBaseType.h"
#include "unitysdk/System/Object.h"
namespace RPG::AvatarSystem { class AvatarPath; }
namespace System { template <typename T1, typename T2> class Converter_2; }

namespace RPG::Client
{
	inline static constexpr unsigned int RogueTournHexData___O_TypeDefinitionIndex = 69616;

	class RogueTournHexData___O : public ::System::Object
	{
	public:
		static ::System::Converter_2<::RPG::GameCore::AvatarBaseType, ::RPG::AvatarSystem::AvatarPath*>** StaticGet__0___GetPathData()
		{
			return (::System::Converter_2<::RPG::GameCore::AvatarBaseType, ::RPG::AvatarSystem::AvatarPath*>**)UnitySDK::FromName("RPG.Client", "<>O")->GetStaticField(0x71F10);
		}

	};
}
