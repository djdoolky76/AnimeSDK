#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/EventType.h"
#include "unitysdk/System/Object.h"
namespace RPG::GameCore { class GameEntity; }

#define ALOFEBMHAEP_CTOR_OFFSET UNITYSDK_OFFSET(0x163E1320)
#define ALOFEBMHAEP_GETEVENTTYPE_OFFSET UNITYSDK_OFFSET(0x163E1380)
#define ALOFEBMHAEP_GETSOURCERUNTIMEID_OFFSET UNITYSDK_OFFSET(0x163E1330)

inline static constexpr unsigned int ALOFEBMHAEP_TypeDefinitionIndex = 57892;

	class ALOFEBMHAEP : public ::System::Object
	{
	public:
		::RPG::GameCore::GameEntity* KEHGBOEDKAB; // 0x10
		::System::Void _ctor(::RPG::GameCore::GameEntity* a1)
		{
			return ((::System::Void(*)(::PVOID, ::RPG::GameCore::GameEntity*))((::PBYTE)hIl2Cpp + ALOFEBMHAEP_CTOR_OFFSET))(this, a1);
		}

		::System::UInt32 GetSourceRuntimeID()
		{
			return ((::System::UInt32(*)(::PVOID))((::PBYTE)hIl2Cpp + ALOFEBMHAEP_GETSOURCERUNTIMEID_OFFSET))(this);
		}

		::RPG::GameCore::EventType GetEventType()
		{
			return ((::RPG::GameCore::EventType(*)(::PVOID))((::PBYTE)hIl2Cpp + ALOFEBMHAEP_GETEVENTTYPE_OFFSET))(this);
		}

	};
