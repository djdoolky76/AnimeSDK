#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/Client/TextID.h"
#include "unitysdk/RPG/GameCore/ControlSkillType.h"
#include "unitysdk/System/Object.h"

#define FDLCPHKGHME_CTOR_OFFSET UNITYSDK_OFFSET(0x156D28A0)

inline static constexpr unsigned int FDLCPHKGHME_TypeDefinitionIndex = 72003;

	class FDLCPHKGHME : public ::System::Object
	{
	public:
		::RPG::GameCore::ControlSkillType GMLGNNPDCJG; // 0x10
		::System::Byte _padding0[0x4];
		::RPG::Client::TextID DKLKGHFLMDO; // 0x18
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + FDLCPHKGHME_CTOR_OFFSET))(this);
		}

	};
