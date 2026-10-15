#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"
namespace RPG::Client { class LuaSystem; }
namespace RPG::Client { class LuaUIController; }
namespace System { class Object; }

#define LAMGIGDFIPA_AKCIMDNCGDO_OFFSET UNITYSDK_OFFSET(0xB5E7B40)
#define LAMGIGDFIPA_JLGNNDPPHNC_OFFSET UNITYSDK_OFFSET(0xB5E75B0)

	class LAMGIGDFIPA : public ::System::Object
	{
	public:
		static ::System::Void JLGNNDPPHNC(::RPG::Client::LuaUIController* a1, ::System::Object* a2)
		{
			return ((::System::Void(*)(::RPG::Client::LuaUIController*, ::System::Object*))((::PBYTE)hIl2Cpp + LAMGIGDFIPA_JLGNNDPPHNC_OFFSET))(a1, a2);
		}

		static ::RPG::Client::LuaSystem* AKCIMDNCGDO()
		{
			return ((::RPG::Client::LuaSystem*(*)())((::PBYTE)hIl2Cpp + LAMGIGDFIPA_AKCIMDNCGDO_OFFSET))();
		}

	};
