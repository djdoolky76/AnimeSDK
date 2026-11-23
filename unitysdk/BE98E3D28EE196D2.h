#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/EFC4AEA2121EC272.h"

namespace ABC::UI { class MonoItemIcon; }
namespace ABC::UI { class MonoLocalizedTmp; }
namespace ABC::UI { class MonoUIAutoView; }
namespace UnityEngine { class RectTransform; }

#define BE98E3D28EE196D2_A54D936318FAF9E3_OFFSET UNITYSDK_OFFSET(0x1CE2CF0)
#define BE98E3D28EE196D2_EC3033C0485522FB_OFFSET UNITYSDK_OFFSET(0x1CE2F90)
#define BE98E3D28EE196D2_F6A675B119E39F53_OFFSET UNITYSDK_OFFSET(0x1CE2F40)
#define BE98E3D28EE196D2__CTOR_OFFSET UNITYSDK_OFFSET(0x16665F0)

inline static constexpr unsigned int BE98E3D28EE196D2_TypeDefinitionIndex = 9834;

class BE98E3D28EE196D2 : public ::EFC4AEA2121EC272
{
public:
	::ABC::UI::MonoUIAutoView* F09612D83CC7C2EE; // 0x80
	::ABC::UI::MonoLocalizedTmp* A287BD945F383D90; // 0x88
	::ABC::UI::MonoLocalizedTmp* F27CAD098CDA6CF0; // 0x90
	::ABC::UI::MonoLocalizedTmp* ED55DDA4ADCD3702; // 0x98
	::ABC::UI::MonoItemIcon* BEA79EB5CDE70E9C; // 0xA0
	::UnityEngine::RectTransform* BCB26428FCE0CF91; // 0xA8

	::System::Void F6A675B119E39F53()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + BE98E3D28EE196D2_F6A675B119E39F53_OFFSET))(this);
	}

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + BE98E3D28EE196D2__CTOR_OFFSET))(this);
	}

	::System::Void EC3033C0485522FB(::System::UInt32 E4B82C2D78A49512, ::System::Int32 A70E5C58B2C7A692, ::System::Boolean B8899B44AB42024A)
	{
		return ((::System::Void(*)(::PVOID, ::System::UInt32, ::System::Int32, ::System::Boolean))((::PBYTE)hIl2Cpp + BE98E3D28EE196D2_EC3033C0485522FB_OFFSET))(this, E4B82C2D78A49512, A70E5C58B2C7A692, B8899B44AB42024A);
	}

	::System::Void A54D936318FAF9E3(::ABC::UI::MonoUIAutoView* AE442F7D881522D8)
	{
		return ((::System::Void(*)(::PVOID, ::ABC::UI::MonoUIAutoView*))((::PBYTE)hIl2Cpp + BE98E3D28EE196D2_A54D936318FAF9E3_OFFSET))(this, AE442F7D881522D8);
	}
};
