#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"
class PMIAJMPNJOO;
namespace RPG::GameCore { class GridFightAssistantMessageConfigRow; }

#define ADHEDCNFFKN_BPLPBPMEODA_OFFSET UNITYSDK_OFFSET(0xB1393D0)
#define ADHEDCNFFKN_CTOR_OFFSET UNITYSDK_OFFSET(0xB1394A0)

	class ADHEDCNFFKN : public ::System::Object
	{
	public:
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + ADHEDCNFFKN_CTOR_OFFSET))(this);
		}

		static ::PMIAJMPNJOO* BPLPBPMEODA(::RPG::GameCore::GridFightAssistantMessageConfigRow* a1)
		{
			return ((::PMIAJMPNJOO*(*)(::RPG::GameCore::GridFightAssistantMessageConfigRow*))((::PBYTE)hIl2Cpp + ADHEDCNFFKN_BPLPBPMEODA_OFFSET))(a1);
		}

	};
