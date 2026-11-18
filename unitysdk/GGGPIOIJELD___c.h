#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

namespace PipelineCamera { class ICameraDataBlender; }
namespace System { template <typename T> class Action_1; }

#define GGGPIOIJELD___C_LBGEKFPCBLG_OFFSET UNITYSDK_OFFSET(0x179E94C0)
#define GGGPIOIJELD___C__CCTOR_OFFSET UNITYSDK_OFFSET(0x179E9470)
#define GGGPIOIJELD___C__CTOR_OFFSET UNITYSDK_OFFSET(0x179E94B0)

inline static constexpr unsigned int GGGPIOIJELD___c_TypeDefinitionIndex = 92658;

class GGGPIOIJELD___c : public ::System::Object
{
public:
	static ::System::Action_1<::PipelineCamera::ICameraDataBlender*>** StaticGet___9__16_3()
	{
		return (::System::Action_1<::PipelineCamera::ICameraDataBlender*>**)Il2CppClass::FromTypeDefinitionIndex(GGGPIOIJELD___c_TypeDefinitionIndex)->GetStaticField(0x3DD20);
	}
	static ::System::Object** StaticGet___9()
	{
		return (::System::Object**)Il2CppClass::FromTypeDefinitionIndex(GGGPIOIJELD___c_TypeDefinitionIndex)->GetStaticField(0x3DD28);
	}

	static ::System::Void _cctor()
	{
		return ((::System::Void(*)())((::PBYTE)hIl2Cpp + GGGPIOIJELD___C__CCTOR_OFFSET))();
	}

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + GGGPIOIJELD___C__CTOR_OFFSET))(this);
	}

	::System::Void LBGEKFPCBLG(::PipelineCamera::ICameraDataBlender* PIIPCLCCOIG)
	{
		return ((::System::Void(*)(::PVOID, ::PipelineCamera::ICameraDataBlender*))((::PBYTE)hIl2Cpp + GGGPIOIJELD___C_LBGEKFPCBLG_OFFSET))(this, PIIPCLCCOIG);
	}
};
