#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"
namespace RPG::GameCore { class GameEntity; }
namespace System { class String; }

#define FFIDOBGHEDH_CTOR_OFFSET UNITYSDK_OFFSET(0x1573F620)

inline static constexpr unsigned int FFIDOBGHEDH_TypeDefinitionIndex = 54924;

	class FFIDOBGHEDH : public ::System::Object
	{
	public:
		::System::String* OCPAACFIDMF; // 0x10
		::System::String* PEGNLFICABO; // 0x18
		::RPG::GameCore::GameEntity* GKDKCLMLOME; // 0x20
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + FFIDOBGHEDH_CTOR_OFFSET))(this);
		}

	};
