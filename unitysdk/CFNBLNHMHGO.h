#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/Client/GamePhaseType.h"
#include "unitysdk/System/Object.h"
namespace System { class Object; }

#define CFNBLNHMHGO_CTOR_OFFSET UNITYSDK_OFFSET(0xCC590D0)

inline static constexpr unsigned int CFNBLNHMHGO_TypeDefinitionIndex = 61124;

	class CFNBLNHMHGO : public ::System::Object
	{
	public:
		::System::Object* JJPLMHOABCM; // 0x10
		::RPG::Client::GamePhaseType ODPELJAIPHL; // 0x18
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CFNBLNHMHGO_CTOR_OFFSET))(this);
		}

	};
