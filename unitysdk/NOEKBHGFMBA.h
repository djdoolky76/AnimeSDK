#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/EJMCJECLENI.h"
namespace RPG::GameCore { class GameEntity; }

#define NOEKBHGFMBA_CTOR_OFFSET UNITYSDK_OFFSET(0xBCE3EB0)
#define NOEKBHGFMBA_GET_ICONID_OFFSET UNITYSDK_OFFSET(0xBCE3D80)

inline static constexpr unsigned int NOEKBHGFMBA_TypeDefinitionIndex = 60646;

	class NOEKBHGFMBA : public ::EJMCJECLENI
	{
	public:
		::System::Void _ctor(::RPG::GameCore::GameEntity* a1, ::System::Boolean a2)
		{
			return ((::System::Void(*)(::PVOID, ::RPG::GameCore::GameEntity*, ::System::Boolean))((::PBYTE)hIl2Cpp + NOEKBHGFMBA_CTOR_OFFSET))(this, a1, a2);
		}

		::System::UInt32 get_IconID()
		{
			return ((::System::UInt32(*)(::PVOID))((::PBYTE)hIl2Cpp + NOEKBHGFMBA_GET_ICONID_OFFSET))(this);
		}

	};
