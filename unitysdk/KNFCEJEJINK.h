#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/Client/Prop/ChimeraDuelNodeImplState.h"
#include "unitysdk/System/Object.h"

#define KNFCEJEJINK_CTOR_OFFSET UNITYSDK_OFFSET(0xB5826C0)
#define KNFCEJEJINK_DISPOSE_OFFSET UNITYSDK_OFFSET(0xB5825A0)
#define KNFCEJEJINK_JLANKNHFKCN_OFFSET UNITYSDK_OFFSET(0xB5825E0)
#define KNFCEJEJINK_LCKCABJFHEA_OFFSET UNITYSDK_OFFSET(0xB582680)
#define KNFCEJEJINK_MGFLFCHMGPA_OFFSET UNITYSDK_OFFSET(0xB582640)

inline static constexpr unsigned int KNFCEJEJINK_TypeDefinitionIndex = 78251;

	class KNFCEJEJINK : public ::System::Object
	{
	public:
		::RPG::Client::Prop::ChimeraDuelNodeImplState DLNIGFGLPLJ; // 0x10
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + KNFCEJEJINK_CTOR_OFFSET))(this);
		}

		::System::Void Dispose()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + KNFCEJEJINK_DISPOSE_OFFSET))(this);
		}

		::System::Void JLANKNHFKCN(::System::Single a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::Single))((::PBYTE)hIl2Cpp + KNFCEJEJINK_JLANKNHFKCN_OFFSET))(this, a1);
		}

		::System::Void MGFLFCHMGPA()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + KNFCEJEJINK_MGFLFCHMGPA_OFFSET))(this);
		}

		::RPG::Client::Prop::ChimeraDuelNodeImplState LCKCABJFHEA()
		{
			return ((::RPG::Client::Prop::ChimeraDuelNodeImplState(*)(::PVOID))((::PBYTE)hIl2Cpp + KNFCEJEJINK_LCKCABJFHEA_OFFSET))(this);
		}

	};
