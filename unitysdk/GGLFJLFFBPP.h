#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/LittleGameType.h"
#include "unitysdk/System/Object.h"
class CFHHJFCIJLN;
class JPFJJLEPGBC;
namespace RPG::GameCore { class GameEntity; }
namespace RPG::GameCore { class LittleGameSandboxProfileRef; }

#define GGLFJLFFBPP_CTOR_OFFSET UNITYSDK_OFFSET(0x16949780)
#define GGLFJLFFBPP_KCJFPDGKCNN_OFFSET UNITYSDK_OFFSET(0x16949700)

inline static constexpr unsigned int GGLFJLFFBPP_TypeDefinitionIndex = 61907;

	class GGLFJLFFBPP : public ::System::Object
	{
	public:
		::RPG::GameCore::GameEntity* FJOOMFDMEMP; // 0x10
		::CFHHJFCIJLN* FLFBHNPIDCO; // 0x18
		::RPG::GameCore::GameEntity* OFHDAHHPNPJ; // 0x20
		::RPG::GameCore::LittleGameSandboxProfileRef* MPPPCCNJFMC; // 0x28
		::RPG::GameCore::LittleGameType DLFHABGGHFF; // 0x30
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + GGLFJLFFBPP_CTOR_OFFSET))(this);
		}

		::JPFJJLEPGBC* KCJFPDGKCNN()
		{
			return ((::JPFJJLEPGBC*(*)(::PVOID))((::PBYTE)hIl2Cpp + GGLFJLFFBPP_KCJFPDGKCNN_OFFSET))(this);
		}

	};
