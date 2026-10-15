#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/Client/Prop/BoxmanCoord.h"
#include "unitysdk/System/Object.h"

#define EKOJBGEHGDL_CTOR_OFFSET UNITYSDK_OFFSET(0x1550C560)

inline static constexpr unsigned int EKOJBGEHGDL_TypeDefinitionIndex = 78847;

	class EKOJBGEHGDL : public ::System::Object
	{
	public:
		::RPG::Client::Prop::BoxmanCoord FOCNBOANONM; // 0x10
		::System::Boolean CBFJNLKKMDC; // 0x18
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + EKOJBGEHGDL_CTOR_OFFSET))(this);
		}

	};
