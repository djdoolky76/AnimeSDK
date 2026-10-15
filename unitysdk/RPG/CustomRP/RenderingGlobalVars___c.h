#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"
namespace RPG::CustomRP { class IPlaneReflection; }
namespace System { class Object; }
namespace System { template <typename T1, typename T2> class Func_2; }

#define RPG_CUSTOMRP_RENDERINGGLOBALVARS___C_CCTOR_OFFSET UNITYSDK_OFFSET(0x1CC6F540)
#define RPG_CUSTOMRP_RENDERINGGLOBALVARS___C_CTOR_OFFSET UNITYSDK_OFFSET(0x1CC6F580)
#define RPG_CUSTOMRP_RENDERINGGLOBALVARS___C__GET_VALIDLOCALREFLECTION_B__111_0_OFFSET UNITYSDK_OFFSET(0x1CC6F590)

namespace RPG::CustomRP
{
	inline static constexpr unsigned int RenderingGlobalVars___c_TypeDefinitionIndex = 37645;

	class RenderingGlobalVars___c : public ::System::Object
	{
	public:
		static ::System::Object** StaticGet___9()
		{
			return (::System::Object**)UnitySDK::FromName("RPG.CustomRP", "<>c")->GetStaticField(0x34EC0);
		}

		static ::System::Func_2<::RPG::CustomRP::IPlaneReflection*, ::System::Boolean>** StaticGet___9__111_0()
		{
			return (::System::Func_2<::RPG::CustomRP::IPlaneReflection*, ::System::Boolean>**)UnitySDK::FromName("RPG.CustomRP", "<>c")->GetStaticField(0x34EC8);
		}

		static ::System::Void _cctor()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + RPG_CUSTOMRP_RENDERINGGLOBALVARS___C_CCTOR_OFFSET))();
		}

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CUSTOMRP_RENDERINGGLOBALVARS___C_CTOR_OFFSET))(this);
		}

		::System::Boolean _get_validLocalReflection_b__111_0(::RPG::CustomRP::IPlaneReflection* a1)
		{
			return ((::System::Boolean(*)(::PVOID, ::RPG::CustomRP::IPlaneReflection*))((::PBYTE)hIl2Cpp + RPG_CUSTOMRP_RENDERINGGLOBALVARS___C__GET_VALIDLOCALREFLECTION_B__111_0_OFFSET))(this, a1);
		}

	};
}
