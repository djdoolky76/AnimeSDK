#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"
namespace RPG::GameCore { class GameEntity; }
namespace System { class String; }

#define FIFPADNLPLB_CTOR_OFFSET UNITYSDK_OFFSET(0x15799DC0)

inline static constexpr unsigned int FIFPADNLPLB_TypeDefinitionIndex = 47606;

	class FIFPADNLPLB : public ::System::Object
	{
	public:
		::RPG::GameCore::GameEntity* MCLLALGABAB; // 0x10
		::System::String* JKMABBEGEAH; // 0x18
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + FIFPADNLPLB_CTOR_OFFSET))(this);
		}

	};
