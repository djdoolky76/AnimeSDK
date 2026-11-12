#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/FixPoint.h"
#include "unitysdk/System/Object.h"
namespace System { class String; }

#define FHBHJAHCJHN_CTOR_OFFSET UNITYSDK_OFFSET(0x16692AD0)

inline static constexpr unsigned int FHBHJAHCJHN_TypeDefinitionIndex = 55375;

	class FHBHJAHCJHN : public ::System::Object
	{
	public:
		::System::String* CIDCEJCGOGB; // 0x10
		::RPG::GameCore::FixPoint FIDKNPMCIMM; // 0x18
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + FHBHJAHCJHN_CTOR_OFFSET))(this);
		}

	};
