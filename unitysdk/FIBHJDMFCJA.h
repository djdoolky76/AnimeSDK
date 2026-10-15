#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"
namespace RPG::Client { class ActivityData; }

#define FIBHJDMFCJA_CTOR_OFFSET UNITYSDK_OFFSET(0x1578F710)
#define FIBHJDMFCJA_KKKIONIDKFA_OFFSET UNITYSDK_OFFSET(0x1578F690)

inline static constexpr unsigned int FIBHJDMFCJA_TypeDefinitionIndex = 61721;

	class FIBHJDMFCJA : public ::System::Object
	{
	public:
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + FIBHJDMFCJA_CTOR_OFFSET))(this);
		}

		::System::Boolean KKKIONIDKFA(::RPG::Client::ActivityData* a1, ::System::UInt32 a2)
		{
			return ((::System::Boolean(*)(::PVOID, ::RPG::Client::ActivityData*, ::System::UInt32))((::PBYTE)hIl2Cpp + FIBHJDMFCJA_KKKIONIDKFA_OFFSET))(this, a1, a2);
		}

	};
