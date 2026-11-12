#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"
namespace RPG::Client { class GridFightTrait; }

#define OHDPLBDPKIJ_CTOR_OFFSET UNITYSDK_OFFSET(0xC71C1E0)

inline static constexpr unsigned int OHDPLBDPKIJ_TypeDefinitionIndex = 67239;

	class OHDPLBDPKIJ : public ::System::Object
	{
	public:
		::RPG::Client::GridFightTrait* ENFAMOIAMGL; // 0x10
		::System::Void _ctor(::RPG::Client::GridFightTrait* a1)
		{
			return ((::System::Void(*)(::PVOID, ::RPG::Client::GridFightTrait*))((::PBYTE)hIl2Cpp + OHDPLBDPKIJ_CTOR_OFFSET))(this, a1);
		}

	};
