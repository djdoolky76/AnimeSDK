#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/EFC4AEA2121EC272.h"

class B122DFB4F77F08CF;
namespace ABC::UI { class MonoLocalizedTmp; }
namespace ABC::UI { class MonoUIAutoView; }
namespace UnityEngine { class GameObject; }

#define A2D0019AE0AEAA44_A54D936318FAF9E3_OFFSET UNITYSDK_OFFSET(0x19D9AC0)
#define A2D0019AE0AEAA44_EC3033C0485522FB_OFFSET UNITYSDK_OFFSET(0x19D9C40)
#define A2D0019AE0AEAA44__CTOR_OFFSET UNITYSDK_OFFSET(0x16665F0)

inline static constexpr unsigned int A2D0019AE0AEAA44_TypeDefinitionIndex = 1708;

class A2D0019AE0AEAA44 : public ::EFC4AEA2121EC272
{
public:
	::ABC::UI::MonoLocalizedTmp* F8B24C7DC7BBC160; // 0x80
	::ABC::UI::MonoLocalizedTmp* A9B92EE9752C9282; // 0x88
	::UnityEngine::GameObject* AFC362772B093525; // 0x90
	::UnityEngine::GameObject* ABA2709FCC24E8A4; // 0x98

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + A2D0019AE0AEAA44__CTOR_OFFSET))(this);
	}

	::System::Void A54D936318FAF9E3(::ABC::UI::MonoUIAutoView* F45A155F61126DA2)
	{
		return ((::System::Void(*)(::PVOID, ::ABC::UI::MonoUIAutoView*))((::PBYTE)hIl2Cpp + A2D0019AE0AEAA44_A54D936318FAF9E3_OFFSET))(this, F45A155F61126DA2);
	}

	::System::Void EC3033C0485522FB(::System::UInt32 FEEF3F783B7DBE7C, ::B122DFB4F77F08CF* B53CAB537A45E38B)
	{
		return ((::System::Void(*)(::PVOID, ::System::UInt32, ::B122DFB4F77F08CF*))((::PBYTE)hIl2Cpp + A2D0019AE0AEAA44_EC3033C0485522FB_OFFSET))(this, FEEF3F783B7DBE7C, B53CAB537A45E38B);
	}
};
