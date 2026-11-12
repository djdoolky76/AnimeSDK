#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"
namespace System::Collections::Generic { template <typename T> class List_1; }

#define RPG_CLIENT_GRIDFIGHTSPOTLIGHTINFECTIONCHANGEDDATA_CTOR_OFFSET UNITYSDK_OFFSET(0xDC82020)

namespace RPG::Client
{
	inline static constexpr unsigned int GridFightSpotLightInfectionChangedData_TypeDefinitionIndex = 66983;

	class GridFightSpotLightInfectionChangedData : public ::System::Object
	{
	public:
		::System::Collections::Generic::List_1<::System::UInt32>* NewInfectedUIDs; // 0x10
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_GRIDFIGHTSPOTLIGHTINFECTIONCHANGEDDATA_CTOR_OFFSET))(this);
		}

	};
}
