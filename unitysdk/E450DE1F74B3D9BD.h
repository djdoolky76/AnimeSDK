#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/EFC4AEA2121EC272.h"

namespace ABC::UI { class MonoLocalizedTmp; }
namespace ABC::UI { class MonoUIAutoView; }
namespace System { class String; }

#define E450DE1F74B3D9BD_A54D936318FAF9E3_OFFSET UNITYSDK_OFFSET(0x1734340)
#define E450DE1F74B3D9BD_AFF6FCDB9A1621C3_OFFSET UNITYSDK_OFFSET(0x1734480)
#define E450DE1F74B3D9BD_F6A675B119E39F53_OFFSET UNITYSDK_OFFSET(0x1734430)
#define E450DE1F74B3D9BD__CTOR_OFFSET UNITYSDK_OFFSET(0x16665F0)

inline static constexpr unsigned int E450DE1F74B3D9BD_TypeDefinitionIndex = 707;

class E450DE1F74B3D9BD : public ::EFC4AEA2121EC272
{
public:
	::ABC::UI::MonoLocalizedTmp* BA0665F7914B9387; // 0x80

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + E450DE1F74B3D9BD__CTOR_OFFSET))(this);
	}

	::System::Void F6A675B119E39F53()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + E450DE1F74B3D9BD_F6A675B119E39F53_OFFSET))(this);
	}

	::System::Void AFF6FCDB9A1621C3(::System::String* E97E8D008427A296)
	{
		return ((::System::Void(*)(::PVOID, ::System::String*))((::PBYTE)hIl2Cpp + E450DE1F74B3D9BD_AFF6FCDB9A1621C3_OFFSET))(this, E97E8D008427A296);
	}

	::System::Void A54D936318FAF9E3(::ABC::UI::MonoUIAutoView* AE442F7D881522D8)
	{
		return ((::System::Void(*)(::PVOID, ::ABC::UI::MonoUIAutoView*))((::PBYTE)hIl2Cpp + E450DE1F74B3D9BD_A54D936318FAF9E3_OFFSET))(this, AE442F7D881522D8);
	}
};
