#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"
namespace System { class Action; }
namespace System { class Object; }

#define RPG_CLIENT_PET_PETMODULE___C_CCTOR_OFFSET UNITYSDK_OFFSET(0x1C1D8F90)
#define RPG_CLIENT_PET_PETMODULE___C_CTOR_OFFSET UNITYSDK_OFFSET(0x1C1D8FD0)
#define RPG_CLIENT_PET_PETMODULE___C___ONRECALLPETSCRSP_B__33_1_OFFSET UNITYSDK_OFFSET(0x1C1D8FF0)
#define RPG_CLIENT_PET_PETMODULE___C___ONSUMMONPETSCRSP_B__32_1_OFFSET UNITYSDK_OFFSET(0x1C1D8FE0)

namespace RPG::Client::Pet
{
	inline static constexpr unsigned int PetModule___c_TypeDefinitionIndex = 78017;

	class PetModule___c : public ::System::Object
	{
	public:
		static ::System::Action** StaticGet___9__32_1()
		{
			return (::System::Action**)UnitySDK::FromName("RPG.Client.Pet", "<>c")->GetStaticField(0x2A690);
		}

		static ::System::Object** StaticGet___9()
		{
			return (::System::Object**)UnitySDK::FromName("RPG.Client.Pet", "<>c")->GetStaticField(0x2A698);
		}

		static ::System::Action** StaticGet___9__33_1()
		{
			return (::System::Action**)UnitySDK::FromName("RPG.Client.Pet", "<>c")->GetStaticField(0x2A6A0);
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
