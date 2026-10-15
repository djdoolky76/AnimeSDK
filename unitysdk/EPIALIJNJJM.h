#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"
class PEBBBNOOCFO;
namespace RPG::Client { class MapNpcDef; }

#define EPIALIJNJJM_CTOR_OFFSET UNITYSDK_OFFSET(0x155C9690)
#define EPIALIJNJJM_KEOKEELBKHI_OFFSET UNITYSDK_OFFSET(0x155C96A0)

inline static constexpr unsigned int EPIALIJNJJM_TypeDefinitionIndex = 60632;

	class EPIALIJNJJM : public ::System::Object
	{
	public:
		::RPG::Client::MapNpcDef* CMBIMHDPELH; // 0x10
		::PEBBBNOOCFO* LKCGAFENIJG; // 0x18
		::System::Void _ctor(::RPG::Client::MapNpcDef* a1, ::PEBBBNOOCFO* a2)
		{
			return ((::System::Void(*)(::PVOID, ::RPG::Client::MapNpcDef*, ::PEBBBNOOCFO*))((::PBYTE)hIl2Cpp + EPIALIJNJJM_CTOR_OFFSET))(this, a1, a2);
		}

		::System::Boolean KEOKEELBKHI()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + EPIALIJNJJM_KEOKEELBKHI_OFFSET))(this);
		}

	};
