#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

namespace UnityEngine { class Texture2D; }

#define A4B8972874BF6201_B201DD09DDF57516_OFFSET UNITYSDK_OFFSET(0x3822200)
#define A4B8972874BF6201_E83F6F358E73B362_OFFSET UNITYSDK_OFFSET(0x38220C0)
#define A4B8972874BF6201__CTOR_OFFSET UNITYSDK_OFFSET(0x1778980)

inline static constexpr unsigned int A4B8972874BF6201_TypeDefinitionIndex = 17889;

class A4B8972874BF6201 : public ::System::Object
{
public:
	::UnityEngine::Texture2D* BD8273AB04C4B760; // 0x10

	::System::Boolean B201DD09DDF57516()
	{
		return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + A4B8972874BF6201_B201DD09DDF57516_OFFSET))(this);
	}

	::System::Boolean E83F6F358E73B362(::A4B8972874BF6201* BEEE7A5A60941632)
	{
		return ((::System::Boolean(*)(::PVOID, ::A4B8972874BF6201*))((::PBYTE)hIl2Cpp + A4B8972874BF6201_E83F6F358E73B362_OFFSET))(this, BEEE7A5A60941632);
	}

	::System::Void _ctor(::UnityEngine::Texture2D* BD8273AB04C4B760)
	{
		return ((::System::Void(*)(::PVOID, ::UnityEngine::Texture2D*))((::PBYTE)hIl2Cpp + A4B8972874BF6201__CTOR_OFFSET))(this, BD8273AB04C4B760);
	}
};
