#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"
namespace RPG::GameCore { class GameEntity; }
namespace System { class String; }

#define LBICKDLGIGE_CTOR_OFFSET UNITYSDK_OFFSET(0xB5F4F60)

inline static constexpr unsigned int LBICKDLGIGE_TypeDefinitionIndex = 47609;

	class LBICKDLGIGE : public ::System::Object
	{
	public:
		::RPG::GameCore::GameEntity* MCLLALGABAB; // 0x10
		::Il2CppArray<::System::String*>* NHENGENPLOG; // 0x18
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + LBICKDLGIGE_CTOR_OFFSET))(this);
		}

	};
