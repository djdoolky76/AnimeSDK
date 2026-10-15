#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"
namespace RPG::GameCore { class BattleFateHouguRuntime; }
namespace System { class Object; }
namespace System { template <typename T1, typename T2> class Func_2; }

#define JNOKHEAMOOA___C_CCTOR_OFFSET UNITYSDK_OFFSET(0xB28B3D0)
#define JNOKHEAMOOA___C_CTOR_OFFSET UNITYSDK_OFFSET(0xB28B410)
#define JNOKHEAMOOA___C__EVALUATE_B__0_0_OFFSET UNITYSDK_OFFSET(0xB28B420)

inline static constexpr unsigned int JNOKHEAMOOA___c_TypeDefinitionIndex = 64146;

	class JNOKHEAMOOA___c : public ::System::Object
	{
	public:
		static ::System::Object** StaticGet___9()
		{
			return (::System::Object**)UnitySDK::FromName("", "<>c")->GetStaticField(0x23E40);
		}

		static ::System::Func_2<::RPG::GameCore::BattleFateHouguRuntime*, ::System::Int64>** StaticGet___9__0_0()
		{
			return (::System::Func_2<::RPG::GameCore::BattleFateHouguRuntime*, ::System::Int64>**)UnitySDK::FromName("", "<>c")->GetStaticField(0x23E48);
		}

		static ::System::Void _cctor()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + JNOKHEAMOOA___C_CCTOR_OFFSET))();
		}

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + JNOKHEAMOOA___C_CTOR_OFFSET))(this);
		}

		::System::Int64 _Evaluate_b__0_0(::RPG::GameCore::BattleFateHouguRuntime* a1)
		{
			return ((::System::Int64(*)(::PVOID, ::RPG::GameCore::BattleFateHouguRuntime*))((::PBYTE)hIl2Cpp + JNOKHEAMOOA___C__EVALUATE_B__0_0_OFFSET))(this, a1);
		}

	};
