#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"
namespace RPG::Client { class MuseumStaffData; }
namespace System { class Object; }

#define RPG_CLIENT_MUSEUMMODULE___C__DISPLAYCLASS171_1_CTOR_OFFSET UNITYSDK_OFFSET(0xD8F8A60)
#define RPG_CLIENT_MUSEUMMODULE___C__DISPLAYCLASS171_1___REFRESHSTAFFAVAILABLE_B__1_OFFSET UNITYSDK_OFFSET(0xD8FABC0)

namespace RPG::Client
{
	inline static constexpr unsigned int MuseumModule___c__DisplayClass171_1_TypeDefinitionIndex = 66336;

	template <typename T>
	class MuseumModule___c__DisplayClass171_1 : public ::System::Object
	{
	public:
		::System::Object* CS___8__locals1; // 0x10
		::RPG::Client::MuseumStaffData* museumStaffData; // 0x18
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_MUSEUMMODULE___C__DISPLAYCLASS171_1_CTOR_OFFSET))(this);
		}

		::System::Void __RefreshStaffAvailable_b__1(::System::Boolean a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::Boolean))((::PBYTE)hIl2Cpp + RPG_CLIENT_MUSEUMMODULE___C__DISPLAYCLASS171_1___REFRESHSTAFFAVAILABLE_B__1_OFFSET))(this, a1);
		}

	};
}
