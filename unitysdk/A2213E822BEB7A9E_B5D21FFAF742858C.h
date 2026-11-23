#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/A43E17088A8BDC3E/B1457059A0469A50.h"
#include "unitysdk/System/Object.h"

#define A2213E822BEB7A9E_B5D21FFAF742858C_E89FF5DE02684FB5_OFFSET UNITYSDK_OFFSET(0x3A80D00)
#define A2213E822BEB7A9E_B5D21FFAF742858C__CTOR_OFFSET UNITYSDK_OFFSET(0x1666CA0)

inline static constexpr unsigned int A2213E822BEB7A9E_B5D21FFAF742858C_TypeDefinitionIndex = 11924;

class A2213E822BEB7A9E_B5D21FFAF742858C : public ::System::Object
{
public:
	::A43E17088A8BDC3E::B1457059A0469A50 B3DB603B3C40575D; // 0x10
	::System::Byte _padding0[0x4];
	::Il2CppArray<::System::Single>* F220A2D27F7C6B6C; // 0x18

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + A2213E822BEB7A9E_B5D21FFAF742858C__CTOR_OFFSET))(this);
	}

	::System::Void E89FF5DE02684FB5()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + A2213E822BEB7A9E_B5D21FFAF742858C_E89FF5DE02684FB5_OFFSET))(this);
	}
};
