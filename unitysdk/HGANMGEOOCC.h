#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"
class LDMKDNCFGKL;
namespace RPG::GameCore { class GameEntity; }

#define HGANMGEOOCC_CTOR_OFFSET UNITYSDK_OFFSET(0x15C82920)

inline static constexpr unsigned int HGANMGEOOCC_TypeDefinitionIndex = 57622;

	class HGANMGEOOCC : public ::System::Object
	{
	public:
		::LDMKDNCFGKL* DMHBAGOCBJM; // 0x10
		::RPG::GameCore::GameEntity* MFIEDDGBIPH; // 0x18
		::RPG::GameCore::GameEntity* MPCIHMBILNI; // 0x20
		::System::UInt32 FMCGKCIIKCM; // 0x28
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + HGANMGEOOCC_CTOR_OFFSET))(this);
		}

	};
