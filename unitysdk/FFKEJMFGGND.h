#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/FixPoint.h"
#include "unitysdk/System/Object.h"

#define FFKEJMFGGND_CTOR_OFFSET UNITYSDK_OFFSET(0x1CA3FE70)

inline static constexpr unsigned int FFKEJMFGGND_TypeDefinitionIndex = 42091;

	class FFKEJMFGGND : public ::System::Object
	{
	public:
		::RPG::GameCore::FixPoint FKNINPFKNAK; // 0x10
		::RPG::GameCore::FixPoint MMNELBFMJOF; // 0x18
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + FFKEJMFGGND_CTOR_OFFSET))(this);
		}

	};
