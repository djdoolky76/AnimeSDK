#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/EventType.h"
#include "unitysdk/System/Object.h"
namespace RPG::GameCore { class GameEntity; }

#define DLDCDOKNHHO_CTOR_OFFSET UNITYSDK_OFFSET(0xF892C50)
#define DLDCDOKNHHO_GETEVENTTYPE_OFFSET UNITYSDK_OFFSET(0xF892CB0)
#define DLDCDOKNHHO_GETSOURCERUNTIMEID_OFFSET UNITYSDK_OFFSET(0xF892C60)

inline static constexpr unsigned int DLDCDOKNHHO_TypeDefinitionIndex = 56660;

	class DLDCDOKNHHO : public ::System::Object
	{
	public:
		::RPG::GameCore::GameEntity* KEHGBOEDKAB; // 0x10
		::System::Void _ctor(::RPG::GameCore::GameEntity* a1)
		{
			return ((::System::Void(*)(::PVOID, ::RPG::GameCore::GameEntity*))((::PBYTE)hIl2Cpp + DLDCDOKNHHO_CTOR_OFFSET))(this, a1);
		}

		::System::UInt32 GetSourceRuntimeID()
		{
			return ((::System::UInt32(*)(::PVOID))((::PBYTE)hIl2Cpp + DLDCDOKNHHO_GETSOURCERUNTIMEID_OFFSET))(this);
		}

		::RPG::GameCore::EventType GetEventType()
		{
			return ((::RPG::GameCore::EventType(*)(::PVOID))((::PBYTE)hIl2Cpp + DLDCDOKNHHO_GETEVENTTYPE_OFFSET))(this);
		}

	};
