#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/Client/NotifyType.h"
#include "unitysdk/System/Attribute.h"

#define OKICIAPALHL_CTOR_OFFSET UNITYSDK_OFFSET(0xBEDBAF0)

inline static constexpr unsigned int OKICIAPALHL_TypeDefinitionIndex = 70239;

	class OKICIAPALHL : public ::System::Attribute
	{
	public:
		::RPG::Client::NotifyType ABIKECHFPAO; // 0x10
		::System::Void _ctor(::RPG::Client::NotifyType a1)
		{
			return ((::System::Void(*)(::PVOID, ::RPG::Client::NotifyType))((::PBYTE)hIl2Cpp + OKICIAPALHL_CTOR_OFFSET))(this, a1);
		}

	};
