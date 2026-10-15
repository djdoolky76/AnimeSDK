#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"
class JGDOHOFOFOF;
namespace System { class Object; }

#define RPG_CLIENT_PET_PETMODULE___C__DISPLAYCLASS23_2_CTOR_OFFSET UNITYSDK_OFFSET(0xDABDAE0)
#define RPG_CLIENT_PET_PETMODULE___C__DISPLAYCLASS23_2___ONGETPETDATASCRSP_B__3_OFFSET UNITYSDK_OFFSET(0xDAC0C30)

namespace RPG::Client::Pet
{
	template <typename T1, typename T2>
	class PetModule___c__DisplayClass23_2 : public ::System::Object
	{
	public:
		::JGDOHOFOFOF* protoBlindBoxPet; // 0x10
		::System::Object* CS___8__locals2; // 0x18
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_PET_PETMODULE___C__DISPLAYCLASS23_2_CTOR_OFFSET))(this);
		}

		::System::Void __OnGetPetDataScRsp_b__3()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_PET_PETMODULE___C__DISPLAYCLASS23_2___ONGETPETDATASCRSP_B__3_OFFSET))(this);
		}

	};
}
