#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

class EGKDMJGMIFC;
class PHBGAINMEEM;
namespace UnityEngine { class GameObject; }

#define KANECPEBLOO_MMNGGBNOOFO_MGIHMDFINBG_OFFSET UNITYSDK_OFFSET(0x152BA4F0)
#define KANECPEBLOO_MMNGGBNOOFO_NLELPPIJMFB_OFFSET UNITYSDK_OFFSET(0x152BA950)
#define KANECPEBLOO_MMNGGBNOOFO__CTOR_OFFSET UNITYSDK_OFFSET(0x152BA4E0)

inline static constexpr unsigned int KANECPEBLOO_MMNGGBNOOFO_TypeDefinitionIndex = 79570;

class KANECPEBLOO_MMNGGBNOOFO : public ::System::Object
{
public:
	::EGKDMJGMIFC* AMJADGKJAPK; // 0x10
	::UnityEngine::GameObject* EIJEBBIIOEE; // 0x18

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + KANECPEBLOO_MMNGGBNOOFO__CTOR_OFFSET))(this);
	}

	::System::Void MGIHMDFINBG(::PHBGAINMEEM* FJEEKLKBFHN)
	{
		return ((::System::Void(*)(::PVOID, ::PHBGAINMEEM*))((::PBYTE)hIl2Cpp + KANECPEBLOO_MMNGGBNOOFO_MGIHMDFINBG_OFFSET))(this, FJEEKLKBFHN);
	}

	::System::Void NLELPPIJMFB()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + KANECPEBLOO_MMNGGBNOOFO_NLELPPIJMFB_OFFSET))(this);
	}
};
