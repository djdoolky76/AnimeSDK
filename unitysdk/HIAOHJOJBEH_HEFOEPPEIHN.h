#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

namespace MoleMole { class SceneSoundObjDataItem; }
namespace UnityEngine { class GameObject; }

#define HIAOHJOJBEH_HEFOEPPEIHN_MKNAKJNIDAL_OFFSET UNITYSDK_OFFSET(0x17B00A70)
#define HIAOHJOJBEH_HEFOEPPEIHN__CTOR_OFFSET UNITYSDK_OFFSET(0x17B00A60)

inline static constexpr unsigned int HIAOHJOJBEH_HEFOEPPEIHN_TypeDefinitionIndex = 72955;

class HIAOHJOJBEH_HEFOEPPEIHN : public ::System::Object
{
public:
	::UnityEngine::GameObject* IAPKABMDJNF; // 0x10

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + HIAOHJOJBEH_HEFOEPPEIHN__CTOR_OFFSET))(this);
	}

	::System::Boolean MKNAKJNIDAL(::MoleMole::SceneSoundObjDataItem* HBJOLKHGGDD)
	{
		return ((::System::Boolean(*)(::PVOID, ::MoleMole::SceneSoundObjDataItem*))((::PBYTE)hIl2Cpp + HIAOHJOJBEH_HEFOEPPEIHN_MKNAKJNIDAL_OFFSET))(this, HBJOLKHGGDD);
	}
};
