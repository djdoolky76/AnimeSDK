#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"
#include "unitysdk/FAD7E526D2841BDA.h"

namespace ABC::UI { class MonoItemIcon; }
namespace ABC::UI { class MonoPrefabLoader; }
namespace UnityEngine { class GameObject; }

#define F62500AB19DCB4BF_EC3033C0485522FB_OFFSET UNITYSDK_OFFSET(0x1DDDAE0)
#define F62500AB19DCB4BF_FCC7443573DD0222_OFFSET UNITYSDK_OFFSET(0x1DDD980)
#define F62500AB19DCB4BF__CTOR_OFFSET UNITYSDK_OFFSET(0x1778980)

inline static constexpr unsigned int F62500AB19DCB4BF_TypeDefinitionIndex = 9377;

class F62500AB19DCB4BF : public ::System::Object
{
public:
	::ABC::UI::MonoPrefabLoader* AADB95FEBB148130; // 0x10
	::ABC::UI::MonoItemIcon* BEA79EB5CDE70E9C; // 0x18
	::UnityEngine::GameObject* F70694281841CFAC; // 0x20

	::System::Void FCC7443573DD0222()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + F62500AB19DCB4BF_FCC7443573DD0222_OFFSET))(this);
	}

	::System::Void _ctor(::ABC::UI::MonoPrefabLoader* FEA702D23259F95C)
	{
		return ((::System::Void(*)(::PVOID, ::ABC::UI::MonoPrefabLoader*))((::PBYTE)hIl2Cpp + F62500AB19DCB4BF__CTOR_OFFSET))(this, FEA702D23259F95C);
	}

	::System::Void EC3033C0485522FB(::FAD7E526D2841BDA EF41BD63C81C30E4, ::System::Boolean EE1B54E029300321)
	{
		return ((::System::Void(*)(::PVOID, ::FAD7E526D2841BDA, ::System::Boolean))((::PBYTE)hIl2Cpp + F62500AB19DCB4BF_EC3033C0485522FB_OFFSET))(this, EF41BD63C81C30E4, EE1B54E029300321);
	}
};
