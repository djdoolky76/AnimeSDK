#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"
#include "unitysdk/UnityEngine/Vector2.h"

class JNAHOHABAIC;
namespace UnityEngine { class RectTransform; }

#define ILABACMLENK_IJFCDJKNLHF_OFFSET UNITYSDK_OFFSET(0x14A28930)
#define ILABACMLENK_MFELMDEKNPK_OFFSET UNITYSDK_OFFSET(0x14A28B90)
#define ILABACMLENK_OIJHNAJOGIH_OFFSET UNITYSDK_OFFSET(0x14A28760)
#define ILABACMLENK__CTOR_OFFSET UNITYSDK_OFFSET(0x14A28750)

inline static constexpr unsigned int ILABACMLENK_TypeDefinitionIndex = 82458;

class ILABACMLENK : public ::System::Object
{
public:
	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + ILABACMLENK__CTOR_OFFSET))(this);
	}

	static ::System::Void OIJHNAJOGIH(::JNAHOHABAIC* EFPAEJFNPOD, ::System::Boolean LIEJIGMGGOL)
	{
		return ((::System::Void(*)(::JNAHOHABAIC*, ::System::Boolean))((::PBYTE)hIl2Cpp + ILABACMLENK_OIJHNAJOGIH_OFFSET))(EFPAEJFNPOD, LIEJIGMGGOL);
	}

	static ::System::Void IJFCDJKNLHF(::UnityEngine::RectTransform* EMDOIDLAFDB, ::Il2CppArray<::UnityEngine::Vector2>*& CKIEDGDCNPB)
	{
		return ((::System::Void(*)(::UnityEngine::RectTransform*, ::Il2CppArray<::UnityEngine::Vector2>*&))((::PBYTE)hIl2Cpp + ILABACMLENK_IJFCDJKNLHF_OFFSET))(EMDOIDLAFDB, CKIEDGDCNPB);
	}

	static ::System::Void MFELMDEKNPK(::JNAHOHABAIC* EFPAEJFNPOD, ::UnityEngine::Vector2& KEFMPOMFNIB)
	{
		return ((::System::Void(*)(::JNAHOHABAIC*, ::UnityEngine::Vector2&))((::PBYTE)hIl2Cpp + ILABACMLENK_MFELMDEKNPK_OFFSET))(EFPAEJFNPOD, KEFMPOMFNIB);
	}
};
