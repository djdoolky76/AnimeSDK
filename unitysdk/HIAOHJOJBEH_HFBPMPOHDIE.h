#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

namespace MoleMole { class SceneSoundObjDataItem; }
namespace UnityEngine { class GameObject; }

#define HIAOHJOJBEH_HFBPMPOHDIE_ABGGEOJEJBB_OFFSET UNITYSDK_OFFSET(0x14A15540)
#define HIAOHJOJBEH_HFBPMPOHDIE__CTOR_OFFSET UNITYSDK_OFFSET(0x14A15530)

inline static constexpr unsigned int HIAOHJOJBEH_HFBPMPOHDIE_TypeDefinitionIndex = 72957;

class HIAOHJOJBEH_HFBPMPOHDIE : public ::System::Object
{
public:
	::UnityEngine::GameObject* IAPKABMDJNF; // 0x10

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + HIAOHJOJBEH_HFBPMPOHDIE__CTOR_OFFSET))(this);
	}

	::System::Boolean ABGGEOJEJBB(::MoleMole::SceneSoundObjDataItem* HBJOLKHGGDD)
	{
		return ((::System::Boolean(*)(::PVOID, ::MoleMole::SceneSoundObjDataItem*))((::PBYTE)hIl2Cpp + HIAOHJOJBEH_HFBPMPOHDIE_ABGGEOJEJBB_OFFSET))(this, HBJOLKHGGDD);
	}
};
