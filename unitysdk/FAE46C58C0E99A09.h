#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/B88870E9FB4B8C1A/BC1368EC0789F68B.h"
#include "unitysdk/System/Object.h"

namespace ABC::CustomRenderPipeline { class Tonemapping; }

#define FAE46C58C0E99A09_FD792C24FE49920B_OFFSET UNITYSDK_OFFSET(0x2796270)
#define FAE46C58C0E99A09__CTOR_OFFSET UNITYSDK_OFFSET(0x2796390)

inline static constexpr unsigned int FAE46C58C0E99A09_TypeDefinitionIndex = 16561;

class FAE46C58C0E99A09 : public ::System::Object
{
public:
	::B88870E9FB4B8C1A::BC1368EC0789F68B A84D57260767D5BD; // 0x10
	::System::Single A736A0868B90C9DE; // 0x14
	::System::Single BD28B22BA9C78A97; // 0x18
	::System::Single F57E6DA91346200D; // 0x1C
	::System::Single EF6EDAED02A5DA0B; // 0x20
	::System::Single B1D38DFD7409FF69; // 0x24
	::System::Single E6365B2961492C49; // 0x28

	::System::Void FD792C24FE49920B(::ABC::CustomRenderPipeline::Tonemapping* A567F659199E4401)
	{
		return ((::System::Void(*)(::PVOID, ::ABC::CustomRenderPipeline::Tonemapping*))((::PBYTE)hIl2Cpp + FAE46C58C0E99A09_FD792C24FE49920B_OFFSET))(this, A567F659199E4401);
	}

	::System::Void _ctor(::ABC::CustomRenderPipeline::Tonemapping* A567F659199E4401)
	{
		return ((::System::Void(*)(::PVOID, ::ABC::CustomRenderPipeline::Tonemapping*))((::PBYTE)hIl2Cpp + FAE46C58C0E99A09__CTOR_OFFSET))(this, A567F659199E4401);
	}
};
