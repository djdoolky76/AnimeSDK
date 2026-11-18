#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/MoleMole/UIControllerContextBase.h"

namespace System { class String; }

#define MOLEMOLE_WORLD3DUICONTEXT__CTOR_OFFSET UNITYSDK_OFFSET(0x12C1DDF0)

namespace MoleMole
{
	inline static constexpr unsigned int World3DUIContext_TypeDefinitionIndex = 71836;

	class World3DUIContext : public ::MoleMole::UIControllerContextBase
	{
	public:
		::System::String* AttachPointName; // 0x28
		::System::String* CustomPropertyName; // 0x30
		::System::UInt32 EntityID; // 0x38

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_WORLD3DUICONTEXT__CTOR_OFFSET))(this);
		}
	};
}
