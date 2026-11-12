#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/Client/UIProceduralShape.h"

#define RPG_CLIENT_PROCEDURALUIIMAGE_CTOR_OFFSET UNITYSDK_OFFSET(0xE6A75D0)

namespace RPG::Client
{
	inline static constexpr unsigned int ProceduralUIImage_TypeDefinitionIndex = 74786;

	class ProceduralUIImage : public ::RPG::Client::UIProceduralShape
	{
	public:
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_PROCEDURALUIIMAGE_CTOR_OFFSET))(this);
		}

	};
}
