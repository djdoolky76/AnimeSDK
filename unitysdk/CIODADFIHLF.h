#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"
#include "unitysdk/Foundation/ViewObject/ViewObjectHandle.h"

namespace MoleMole::Battle { class Entity; }

#define CIODADFIHLF_GJNOFJHLHNH_OFFSET UNITYSDK_OFFSET(0x147A2280)

inline static constexpr unsigned int CIODADFIHLF_TypeDefinitionIndex = 60247;

class CIODADFIHLF : public ::System::Object
{
public:
	static ::Foundation::ViewObject::ViewObjectHandle GJNOFJHLHNH(::MoleMole::Battle::Entity* KECKGDFIALJ)
	{
		return ((::Foundation::ViewObject::ViewObjectHandle(*)(::MoleMole::Battle::Entity*))((::PBYTE)hIl2Cpp + CIODADFIHLF_GJNOFJHLHNH_OFFSET))(KECKGDFIALJ);
	}
};
