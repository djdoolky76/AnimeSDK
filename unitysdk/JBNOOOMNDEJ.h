#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"
class JBNOOOMNDEJ;
namespace RPG::Client { class GridFightTrait; }

#define JBNOOOMNDEJ_CTOR_OFFSET UNITYSDK_OFFSET(0xB8AF4F0)
#define JBNOOOMNDEJ_GDALGJLMAHG_OFFSET UNITYSDK_OFFSET(0xB8AF340)

inline static constexpr unsigned int JBNOOOMNDEJ_TypeDefinitionIndex = 67355;

	class JBNOOOMNDEJ : public ::System::Object
	{
	public:
		::RPG::Client::GridFightTrait* ENFAMOIAMGL; // 0x10
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + JBNOOOMNDEJ_CTOR_OFFSET))(this);
		}

		static ::JBNOOOMNDEJ* GDALGJLMAHG(::RPG::Client::GridFightTrait* a1)
		{
			return ((::JBNOOOMNDEJ*(*)(::RPG::Client::GridFightTrait*))((::PBYTE)hIl2Cpp + JBNOOOMNDEJ_GDALGJLMAHG_OFFSET))(a1);
		}

	};
