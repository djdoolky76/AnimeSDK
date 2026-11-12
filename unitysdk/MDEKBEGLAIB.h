#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/LevelGraphType.h"
#include "unitysdk/System/Attribute.h"

#define MDEKBEGLAIB_CTOR_OFFSET UNITYSDK_OFFSET(0x1E343280)

inline static constexpr unsigned int MDEKBEGLAIB_TypeDefinitionIndex = 25340;

	class MDEKBEGLAIB : public ::System::Attribute
	{
	public:
		::Il2CppArray<::RPG::GameCore::LevelGraphType>* JMHACKMBPLF; // 0x10
		::System::Boolean GNDCCBNILML; // 0x18
		::System::Boolean BHMGBPJCFBK; // 0x19
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MDEKBEGLAIB_CTOR_OFFSET))(this);
		}

	};
