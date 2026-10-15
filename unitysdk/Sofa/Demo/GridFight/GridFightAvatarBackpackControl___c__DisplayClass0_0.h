#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"
class ALAHCOICOLM;
class PPAGOKHODLP;

#define SOFA_DEMO_GRIDFIGHT_GRIDFIGHTAVATARBACKPACKCONTROL___C__DISPLAYCLASS0_0_CTOR_OFFSET UNITYSDK_OFFSET(0xE96BE10)
#define SOFA_DEMO_GRIDFIGHT_GRIDFIGHTAVATARBACKPACKCONTROL___C__DISPLAYCLASS0_0___BINDING_B__2_OFFSET UNITYSDK_OFFSET(0xE96E410)

namespace Sofa::Demo::GridFight
{
	inline static constexpr unsigned int GridFightAvatarBackpackControl___c__DisplayClass0_0_TypeDefinitionIndex = 49702;

	class GridFightAvatarBackpackControl___c__DisplayClass0_0 : public ::System::Object
	{
	public:
		::System::Int32 index; // 0x10
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + SOFA_DEMO_GRIDFIGHT_GRIDFIGHTAVATARBACKPACKCONTROL___C__DISPLAYCLASS0_0_CTOR_OFFSET))(this);
		}

		::ALAHCOICOLM* __Binding_b__2(::PPAGOKHODLP* a1)
		{
			return ((::ALAHCOICOLM*(*)(::PVOID, ::PPAGOKHODLP*))((::PBYTE)hIl2Cpp + SOFA_DEMO_GRIDFIGHT_GRIDFIGHTAVATARBACKPACKCONTROL___C__DISPLAYCLASS0_0___BINDING_B__2_OFFSET))(this, a1);
		}

	};
}
