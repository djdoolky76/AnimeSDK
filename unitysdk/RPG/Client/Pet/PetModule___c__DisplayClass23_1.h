#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"
namespace System { class Object; }

#define RPG_CLIENT_PET_PETMODULE___C__DISPLAYCLASS23_1_CTOR_OFFSET UNITYSDK_OFFSET(0xDABDAD0)
#define RPG_CLIENT_PET_PETMODULE___C__DISPLAYCLASS23_1___ONGETPETDATASCRSP_B__2_OFFSET UNITYSDK_OFFSET(0xDAC0C00)

namespace RPG::Client::Pet
{
	inline static constexpr unsigned int PetModule___c__DisplayClass23_1_TypeDefinitionIndex = 75694;

	template <typename T>
	class PetModule___c__DisplayClass23_1 : public ::System::Object
	{
	public:
		::System::Object* CS___8__locals1; // 0x10
		::System::UInt32 id; // 0x18
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_PET_PETMODULE___C__DISPLAYCLASS23_1_CTOR_OFFSET))(this);
		}

		::System::Void __OnGetPetDataScRsp_b__2()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_PET_PETMODULE___C__DISPLAYCLASS23_1___ONGETPETDATASCRSP_B__2_OFFSET))(this);
		}

	};
}
