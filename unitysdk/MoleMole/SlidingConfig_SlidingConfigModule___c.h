#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

namespace MoleMole { class SlidingConfig; }
namespace System { template <typename T> class Func_1; }

#define MOLEMOLE_SLIDINGCONFIG_SLIDINGCONFIGMODULE___C__CCTOR_OFFSET UNITYSDK_OFFSET(0x14BC5C50)
#define MOLEMOLE_SLIDINGCONFIG_SLIDINGCONFIGMODULE___C__CREATEOP_B__2_0_OFFSET UNITYSDK_OFFSET(0x14BC5CA0)
#define MOLEMOLE_SLIDINGCONFIG_SLIDINGCONFIGMODULE___C__CTOR_OFFSET UNITYSDK_OFFSET(0x14BC5C90)

namespace MoleMole
{
	inline static constexpr unsigned int SlidingConfig_SlidingConfigModule___c_TypeDefinitionIndex = 70698;

	class SlidingConfig_SlidingConfigModule___c : public ::System::Object
	{
	public:
		static ::System::Object** StaticGet___9()
		{
			return (::System::Object**)Il2CppClass::FromTypeDefinitionIndex(SlidingConfig_SlidingConfigModule___c_TypeDefinitionIndex)->GetStaticField(0x4E990);
		}
		static ::System::Func_1<::MoleMole::SlidingConfig*>** StaticGet___9__2_0()
		{
			return (::System::Func_1<::MoleMole::SlidingConfig*>**)Il2CppClass::FromTypeDefinitionIndex(SlidingConfig_SlidingConfigModule___c_TypeDefinitionIndex)->GetStaticField(0x4E998);
		}

		static ::System::Void _cctor()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + MOLEMOLE_SLIDINGCONFIG_SLIDINGCONFIGMODULE___C__CCTOR_OFFSET))();
		}

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_SLIDINGCONFIG_SLIDINGCONFIGMODULE___C__CTOR_OFFSET))(this);
		}

		::MoleMole::SlidingConfig* _CreateOp_b__2_0()
		{
			return ((::MoleMole::SlidingConfig*(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_SLIDINGCONFIG_SLIDINGCONFIGMODULE___C__CREATEOP_B__2_0_OFFSET))(this);
		}
	};
}
