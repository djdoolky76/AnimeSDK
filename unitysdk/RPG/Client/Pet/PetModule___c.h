#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"
namespace System { class Action; }
namespace System { class Object; }

#define RPG_CLIENT_PET_PETMODULE___C_CCTOR_OFFSET UNITYSDK_OFFSET(0xE5166E0)
#define RPG_CLIENT_PET_PETMODULE___C_CTOR_OFFSET UNITYSDK_OFFSET(0xE516720)
#define RPG_CLIENT_PET_PETMODULE___C___ONRECALLPETSCRSP_B__33_1_OFFSET UNITYSDK_OFFSET(0xE516740)
#define RPG_CLIENT_PET_PETMODULE___C___ONSUMMONPETSCRSP_B__32_1_OFFSET UNITYSDK_OFFSET(0xE516730)

namespace RPG::Client::Pet
{
	inline static constexpr unsigned int PetModule___c_TypeDefinitionIndex = 78018;

	class PetModule___c : public ::System::Object
	{
	public:
		static ::System::Action** StaticGet___9__33_1()
		{
			return (::System::Action**)UnitySDK::FromName("RPG.Client.Pet", "<>c")->GetStaticField(0x27DF0);
		}

		static ::System::Action** StaticGet___9__32_1()
		{
			return (::System::Action**)UnitySDK::FromName("RPG.Client.Pet", "<>c")->GetStaticField(0x27DF8);
		}

		static ::System::Object** StaticGet___9()
		{
			return (::System::Object**)UnitySDK::FromName("RPG.Client.Pet", "<>c")->GetStaticField(0x27E00);
		}

		static ::System::Void _cctor()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + RPG_CLIENT_PET_PETMODULE___C_CCTOR_OFFSET))();
		}

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_PET_PETMODULE___C_CTOR_OFFSET))(this);
		}

		::System::Void __OnSummonPetScRsp_b__32_1()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_PET_PETMODULE___C___ONSUMMONPETSCRSP_B__32_1_OFFSET))(this);
		}

		::System::Void __OnRecallPetScRsp_b__33_1()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_PET_PETMODULE___C___ONRECALLPETSCRSP_B__33_1_OFFSET))(this);
		}

	};
}
