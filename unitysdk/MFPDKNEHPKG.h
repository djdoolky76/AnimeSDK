#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"
namespace System { class Action; }

#define MFPDKNEHPKG_CTOR_OFFSET UNITYSDK_OFFSET(0xC1C4150)
#define MFPDKNEHPKG_EKBLGBCCLIC_OFFSET UNITYSDK_OFFSET(0xC1C4170)

inline static constexpr unsigned int MFPDKNEHPKG_TypeDefinitionIndex = 50349;

	class MFPDKNEHPKG : public ::System::Object
	{
	public:
		::System::Action* JKBNNHCAFMG; // 0x10
		::System::Single LLICGDGPMJL; // 0x18
		::System::Single PKNKDFADLLL; // 0x1C
		::System::Void _ctor(::System::Single a1, ::System::Action* a2)
		{
			return ((::System::Void(*)(::PVOID, ::System::Single, ::System::Action*))((::PBYTE)hIl2Cpp + MFPDKNEHPKG_CTOR_OFFSET))(this, a1, a2);
		}

		::System::Boolean EKBLGBCCLIC()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + MFPDKNEHPKG_EKBLGBCCLIC_OFFSET))(this);
		}

	};
