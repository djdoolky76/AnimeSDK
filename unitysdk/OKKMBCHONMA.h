#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"
namespace RPG::GameCore { class GameEntity; }
namespace RPG::GameCore { class GameWorld; }
namespace System { class String; }

#define OKKMBCHONMA_CTOR_OFFSET UNITYSDK_OFFSET(0xBEE9490)
#define OKKMBCHONMA_DAGCNLBDMIA_OFFSET UNITYSDK_OFFSET(0xBEE9590)
#define OKKMBCHONMA_DISPOSE_OFFSET UNITYSDK_OFFSET(0xBEE9750)

inline static constexpr unsigned int OKKMBCHONMA_TypeDefinitionIndex = 60247;

	class OKKMBCHONMA : public ::System::Object
	{
	public:
		::RPG::GameCore::GameEntity* OALILMALLAI; // 0x10
		::RPG::GameCore::GameWorld* JEOADHBDKMO; // 0x18
		::System::Void _ctor(::RPG::GameCore::GameWorld* a1)
		{
			return ((::System::Void(*)(::PVOID, ::RPG::GameCore::GameWorld*))((::PBYTE)hIl2Cpp + OKKMBCHONMA_CTOR_OFFSET))(this, a1);
		}

		::System::Void DAGCNLBDMIA(::System::String* a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::String*))((::PBYTE)hIl2Cpp + OKKMBCHONMA_DAGCNLBDMIA_OFFSET))(this, a1);
		}

		::System::Void Dispose()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + OKKMBCHONMA_DISPOSE_OFFSET))(this);
		}

	};
