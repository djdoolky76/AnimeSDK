#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"
namespace RPG::Client { class MapEntityDef; }

#define FIKJKAMAPGJ___C__DISPLAYCLASS5_0_CTOR_OFFSET UNITYSDK_OFFSET(0x157A0AD0)
#define FIKJKAMAPGJ___C__DISPLAYCLASS5_0__REMOVESERVERENTITYDEF_B__0_OFFSET UNITYSDK_OFFSET(0x157A12E0)

inline static constexpr unsigned int FIKJKAMAPGJ___c__DisplayClass5_0_TypeDefinitionIndex = 62131;

	class FIKJKAMAPGJ___c__DisplayClass5_0 : public ::System::Object
	{
	public:
		::RPG::Client::MapEntityDef* entityDef; // 0x10
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + FIKJKAMAPGJ___C__DISPLAYCLASS5_0_CTOR_OFFSET))(this);
		}

		::System::Boolean _RemoveServerEntityDef_b__0(::RPG::Client::MapEntityDef* a1)
		{
			return ((::System::Boolean(*)(::PVOID, ::RPG::Client::MapEntityDef*))((::PBYTE)hIl2Cpp + FIKJKAMAPGJ___C__DISPLAYCLASS5_0__REMOVESERVERENTITYDEF_B__0_OFFSET))(this, a1);
		}

	};
