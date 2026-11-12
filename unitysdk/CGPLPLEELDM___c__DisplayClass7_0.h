#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"
class CGPLPLEELDM;
namespace Sofa { class BaseSofaUI3DWindow; }
namespace Sofa { class BaseSofaWindow; }

#define CGPLPLEELDM___C__DISPLAYCLASS7_0_CTOR_OFFSET UNITYSDK_OFFSET(0xD63CCF0)
#define CGPLPLEELDM___C__DISPLAYCLASS7_0___FETCHFORSOFA_B__0_OFFSET UNITYSDK_OFFSET(0xD63CD80)

inline static constexpr unsigned int CGPLPLEELDM___c__DisplayClass7_0_TypeDefinitionIndex = 75107;

	class CGPLPLEELDM___c__DisplayClass7_0 : public ::System::Object
	{
	public:
		::Sofa::BaseSofaWindow* window; // 0x10
		::CGPLPLEELDM* __4__this; // 0x18
		::Sofa::BaseSofaUI3DWindow* ui3d; // 0x20
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CGPLPLEELDM___C__DISPLAYCLASS7_0_CTOR_OFFSET))(this);
		}

		::System::Void __FetchForSofa_b__0()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CGPLPLEELDM___C__DISPLAYCLASS7_0___FETCHFORSOFA_B__0_OFFSET))(this);
		}

	};
