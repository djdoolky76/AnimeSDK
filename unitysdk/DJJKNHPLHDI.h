#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/Entitas/Systems.h"
namespace System { class String; }

#define DJJKNHPLHDI_CTOR_1_OFFSET UNITYSDK_OFFSET(0x1DB169C0)
#define DJJKNHPLHDI_CTOR_OFFSET UNITYSDK_OFFSET(0x1DB2E770)

inline static constexpr unsigned int DJJKNHPLHDI_TypeDefinitionIndex = 42898;

	class DJJKNHPLHDI : public ::Entitas::Systems
	{
	public:
		::System::Void _ctor(::System::String* a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::String*))((::PBYTE)hIl2Cpp + DJJKNHPLHDI_CTOR_OFFSET))(this, a1);
		}

		::System::Void _ctor_1()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + DJJKNHPLHDI_CTOR_1_OFFSET))(this);
		}

	};
