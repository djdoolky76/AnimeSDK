#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/MoleMole/EntityHandle.h"
#include "unitysdk/System/Object.h"
#include "unitysdk/UnityEngine/Vector3.h"

namespace System { class String; }

#define FNEKKILCHOJ_JHLMKAOFLFD__CTOR_OFFSET UNITYSDK_OFFSET(0x11D89D90)

inline static constexpr unsigned int FNEKKILCHOJ_JHLMKAOFLFD_TypeDefinitionIndex = 93112;

class FNEKKILCHOJ_JHLMKAOFLFD : public ::System::Object
{
public:
	::MoleMole::EntityHandle KECKGDFIALJ; // 0x10
	::System::String* IBEENKDNCEK; // 0x20
	::UnityEngine::Vector3 FPNKBIPMBCA; // 0x28
	::UnityEngine::Vector3 FCNPOKNKMOD; // 0x34

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + FNEKKILCHOJ_JHLMKAOFLFD__CTOR_OFFSET))(this);
	}
};
