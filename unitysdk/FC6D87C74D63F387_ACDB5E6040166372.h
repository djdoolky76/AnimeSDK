#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"
#include "unitysdk/A2D6BC7DA6836343.h"

namespace UnityEngine { class RenderTexture; }

#define FC6D87C74D63F387_ACDB5E6040166372_B818A2A17E111B20_OFFSET UNITYSDK_OFFSET(0x1F3C870)
#define FC6D87C74D63F387_ACDB5E6040166372__CTOR_OFFSET UNITYSDK_OFFSET(0x1666CA0)

inline static constexpr unsigned int FC6D87C74D63F387_ACDB5E6040166372_TypeDefinitionIndex = 7632;

class FC6D87C74D63F387_ACDB5E6040166372 : public ::System::Object
{
public:
	::UnityEngine::RenderTexture* AE3FFAA0B08B0DD1; // 0x10

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + FC6D87C74D63F387_ACDB5E6040166372__CTOR_OFFSET))(this);
	}

	::A2D6BC7DA6836343 B818A2A17E111B20()
	{
		return ((::A2D6BC7DA6836343(*)(::PVOID))((::PBYTE)hIl2Cpp + FC6D87C74D63F387_ACDB5E6040166372_B818A2A17E111B20_OFFSET))(this);
	}
};
