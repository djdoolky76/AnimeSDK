#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/BoolEx.h"
#include "unitysdk/System/Object.h"

#define HKEAJMPFIIH_MNGGAOFNGIP_OFFSET UNITYSDK_OFFSET(0x15D40600)

	class HKEAJMPFIIH : public ::System::Object
	{
	public:
		static ::System::Boolean MNGGAOFNGIP(::RPG::GameCore::BoolEx a1, ::System::Boolean a2)
		{
			return ((::System::Boolean(*)(::RPG::GameCore::BoolEx, ::System::Boolean))((::PBYTE)hIl2Cpp + HKEAJMPFIIH_MNGGAOFNGIP_OFFSET))(a1, a2);
		}

	};
