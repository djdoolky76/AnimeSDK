#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"
class JPFJJLEPGBC;
class KPMAOLIGPAP;
class MCFDMCPGEBD;
namespace RPG::GameCore { class GameEntity; }
namespace RPG::GameCore { class LittleGameSandboxPlayerConfig; }

#define NPPNOGNDFMJ_LMABNIFENGO_CTOR_OFFSET UNITYSDK_OFFSET(0x1AB4EC00)

inline static constexpr unsigned int NPPNOGNDFMJ_LMABNIFENGO_TypeDefinitionIndex = 61865;

	class NPPNOGNDFMJ_LMABNIFENGO : public ::System::Object
	{
	public:
		::MCFDMCPGEBD* EBHBCCMBIOC; // 0x10
		::JPFJJLEPGBC* BKIFMPHBIAK; // 0x18
		::KPMAOLIGPAP* HPBFJAIKNNL; // 0x20
		::RPG::GameCore::GameEntity* PLPFIOHDBOH; // 0x28
		::RPG::GameCore::LittleGameSandboxPlayerConfig* EABKOHGCHFP; // 0x30
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + NPPNOGNDFMJ_LMABNIFENGO_CTOR_OFFSET))(this);
		}

	};
