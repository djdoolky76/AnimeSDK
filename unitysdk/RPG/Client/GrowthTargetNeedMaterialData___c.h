#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"
namespace RPG::GameCore { class ItemConfig; }
namespace System { class Object; }
namespace System { template <typename T1, typename T2> class Func_2; }

#define RPG_CLIENT_GROWTHTARGETNEEDMATERIALDATA___C_CCTOR_OFFSET UNITYSDK_OFFSET(0xD2E3570)
#define RPG_CLIENT_GROWTHTARGETNEEDMATERIALDATA___C_CTOR_OFFSET UNITYSDK_OFFSET(0xD2E35B0)
#define RPG_CLIENT_GROWTHTARGETNEEDMATERIALDATA___C___ENSURECOMPOSEMATERIALMAP_B__8_0_OFFSET UNITYSDK_OFFSET(0xD2E35C0)

namespace RPG::Client
{
	inline static constexpr unsigned int GrowthTargetNeedMaterialData___c_TypeDefinitionIndex = 65607;

	class GrowthTargetNeedMaterialData___c : public ::System::Object
	{
	public:
		static ::System::Object** StaticGet___9()
		{
			return (::System::Object**)UnitySDK::FromName("RPG.Client", "<>c")->GetStaticField(0xE600);
		}

		static ::System::Func_2<::RPG::GameCore::ItemConfig*, ::System::UInt32>** StaticGet___9__8_0()
		{
			return (::System::Func_2<::RPG::GameCore::ItemConfig*, ::System::UInt32>**)UnitySDK::FromName("RPG.Client", "<>c")->GetStaticField(0xE608);
		}

		static ::System::Void _cctor()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + RPG_CLIENT_GROWTHTARGETNEEDMATERIALDATA___C_CCTOR_OFFSET))();
		}

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_GROWTHTARGETNEEDMATERIALDATA___C_CTOR_OFFSET))(this);
		}

		::System::UInt32 __EnsureComposeMaterialMap_b__8_0(::RPG::GameCore::ItemConfig* a1)
		{
			return ((::System::UInt32(*)(::PVOID, ::RPG::GameCore::ItemConfig*))((::PBYTE)hIl2Cpp + RPG_CLIENT_GROWTHTARGETNEEDMATERIALDATA___C___ENSURECOMPOSEMATERIALMAP_B__8_0_OFFSET))(this, a1);
		}

	};
}
