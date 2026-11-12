#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"
namespace RPG::Client::FateRin::HouguMap { class FateRinHouguMapFight; }
namespace RPG::Client::FateRin::HouguMap { class HouguMapFightViewModel; }
namespace System { class Object; }
namespace System { template <typename T1, typename T2> class Func_2; }

#define RPG_CLIENT_FATERIN_HOUGUMAP_FATERINHOUGUMAPVIEWMODEL___C_CCTOR_OFFSET UNITYSDK_OFFSET(0xD92B670)
#define RPG_CLIENT_FATERIN_HOUGUMAP_FATERINHOUGUMAPVIEWMODEL___C_CTOR_OFFSET UNITYSDK_OFFSET(0xD92B6B0)
#define RPG_CLIENT_FATERIN_HOUGUMAP_FATERINHOUGUMAPVIEWMODEL___C__GET_ISALLNORMALFIGHTSFINISHED_B__12_0_OFFSET UNITYSDK_OFFSET(0xD92B800)
#define RPG_CLIENT_FATERIN_HOUGUMAP_FATERINHOUGUMAPVIEWMODEL___C___BUILDFIGHTVIEWMODELS_B__3_0_OFFSET UNITYSDK_OFFSET(0xD92B6C0)
#define RPG_CLIENT_FATERIN_HOUGUMAP_FATERINHOUGUMAPVIEWMODEL___C___BUILDFIGHTVIEWMODELS_B__3_2_OFFSET UNITYSDK_OFFSET(0xD92B6F0)
#define RPG_CLIENT_FATERIN_HOUGUMAP_FATERINHOUGUMAPVIEWMODEL___C___BUILDFIGHTVIEWMODELS_B__3_3_OFFSET UNITYSDK_OFFSET(0xD92B7A0)

namespace RPG::Client::FateRin::HouguMap
{
	inline static constexpr unsigned int FateRinHouguMapViewModel___c_TypeDefinitionIndex = 83546;

	class FateRinHouguMapViewModel___c : public ::System::Object
	{
	public:
		static ::System::Func_2<::RPG::Client::FateRin::HouguMap::HouguMapFightViewModel*, ::System::Boolean>** StaticGet___9__12_0()
		{
			return (::System::Func_2<::RPG::Client::FateRin::HouguMap::HouguMapFightViewModel*, ::System::Boolean>**)UnitySDK::FromName("RPG.Client.FateRin.HouguMap", "<>c")->GetStaticField(0x5F680);
		}

		static ::System::Object** StaticGet___9()
		{
			return (::System::Object**)UnitySDK::FromName("RPG.Client.FateRin.HouguMap", "<>c")->GetStaticField(0x5F688);
		}

		static ::System::Func_2<::RPG::Client::FateRin::HouguMap::FateRinHouguMapFight*, ::System::Boolean>** StaticGet___9__3_0()
		{
			return (::System::Func_2<::RPG::Client::FateRin::HouguMap::FateRinHouguMapFight*, ::System::Boolean>**)UnitySDK::FromName("RPG.Client.FateRin.HouguMap", "<>c")->GetStaticField(0x5F690);
		}

		static ::System::Func_2<::RPG::Client::FateRin::HouguMap::HouguMapFightViewModel*, ::System::Boolean>** StaticGet___9__3_2()
		{
			return (::System::Func_2<::RPG::Client::FateRin::HouguMap::HouguMapFightViewModel*, ::System::Boolean>**)UnitySDK::FromName("RPG.Client.FateRin.HouguMap", "<>c")->GetStaticField(0x5F698);
		}

		static ::System::Func_2<::RPG::Client::FateRin::HouguMap::HouguMapFightViewModel*, ::System::Boolean>** StaticGet___9__3_3()
		{
			return (::System::Func_2<::RPG::Client::FateRin::HouguMap::HouguMapFightViewModel*, ::System::Boolean>**)UnitySDK::FromName("RPG.Client.FateRin.HouguMap", "<>c")->GetStaticField(0x5F6A0);
		}

		static ::System::Void _cctor()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + RPG_CLIENT_FATERIN_HOUGUMAP_FATERINHOUGUMAPVIEWMODEL___C_CCTOR_OFFSET))();
		}

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_FATERIN_HOUGUMAP_FATERINHOUGUMAPVIEWMODEL___C_CTOR_OFFSET))(this);
		}

		::System::Boolean __BuildFightViewModels_b__3_0(::RPG::Client::FateRin::HouguMap::FateRinHouguMapFight* a1)
		{
			return ((::System::Boolean(*)(::PVOID, ::RPG::Client::FateRin::HouguMap::FateRinHouguMapFight*))((::PBYTE)hIl2Cpp + RPG_CLIENT_FATERIN_HOUGUMAP_FATERINHOUGUMAPVIEWMODEL___C___BUILDFIGHTVIEWMODELS_B__3_0_OFFSET))(this, a1);
		}

		::System::Boolean __BuildFightViewModels_b__3_2(::RPG::Client::FateRin::HouguMap::HouguMapFightViewModel* a1)
		{
			return ((::System::Boolean(*)(::PVOID, ::RPG::Client::FateRin::HouguMap::HouguMapFightViewModel*))((::PBYTE)hIl2Cpp + RPG_CLIENT_FATERIN_HOUGUMAP_FATERINHOUGUMAPVIEWMODEL___C___BUILDFIGHTVIEWMODELS_B__3_2_OFFSET))(this, a1);
		}

		::System::Boolean __BuildFightViewModels_b__3_3(::RPG::Client::FateRin::HouguMap::HouguMapFightViewModel* a1)
		{
			return ((::System::Boolean(*)(::PVOID, ::RPG::Client::FateRin::HouguMap::HouguMapFightViewModel*))((::PBYTE)hIl2Cpp + RPG_CLIENT_FATERIN_HOUGUMAP_FATERINHOUGUMAPVIEWMODEL___C___BUILDFIGHTVIEWMODELS_B__3_3_OFFSET))(this, a1);
		}

		::System::Boolean _get_IsAllNormalFightsFinished_b__12_0(::RPG::Client::FateRin::HouguMap::HouguMapFightViewModel* a1)
		{
			return ((::System::Boolean(*)(::PVOID, ::RPG::Client::FateRin::HouguMap::HouguMapFightViewModel*))((::PBYTE)hIl2Cpp + RPG_CLIENT_FATERIN_HOUGUMAP_FATERINHOUGUMAPVIEWMODEL___C__GET_ISALLNORMALFIGHTSFINISHED_B__12_0_OFFSET))(this, a1);
		}

	};
}
