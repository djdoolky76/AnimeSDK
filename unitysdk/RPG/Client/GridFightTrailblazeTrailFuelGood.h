#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/Client/GridFightTrailblazeGood.h"
#include "unitysdk/RPG/Client/GridFightTrailblazeGoodDisplayType.h"
class AMNAMDLMADK;
namespace System { class Object; }

#define RPG_CLIENT_GRIDFIGHTTRAILBLAZETRAILFUELGOOD_CTOR_OFFSET UNITYSDK_OFFSET(0x1D3D8E30)
#define RPG_CLIENT_GRIDFIGHTTRAILBLAZETRAILFUELGOOD_GET_DISPLAYOBJ_OFFSET UNITYSDK_OFFSET(0x1D3D8EC0)
#define RPG_CLIENT_GRIDFIGHTTRAILBLAZETRAILFUELGOOD_GET_DISPLAYTYPE_OFFSET UNITYSDK_OFFSET(0x1D3D8E70)
#define RPG_CLIENT_GRIDFIGHTTRAILBLAZETRAILFUELGOOD_GET_FUELNUM_OFFSET UNITYSDK_OFFSET(0x1D3D8E60)

namespace RPG::Client
{
	inline static constexpr unsigned int GridFightTrailblazeTrailFuelGood_TypeDefinitionIndex = 67288;

	class GridFightTrailblazeTrailFuelGood : public ::RPG::Client::GridFightTrailblazeGood
	{
	public:
		::System::UInt32 _FuelNum_k__BackingField; // 0x50
		::System::Void _ctor(::AMNAMDLMADK* a1, ::System::Int32 a2)
		{
			return ((::System::Void(*)(::PVOID, ::AMNAMDLMADK*, ::System::Int32))((::PBYTE)hIl2Cpp + RPG_CLIENT_GRIDFIGHTTRAILBLAZETRAILFUELGOOD_CTOR_OFFSET))(this, a1, a2);
		}

		::System::UInt32 get_FuelNum()
		{
			return ((::System::UInt32(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_GRIDFIGHTTRAILBLAZETRAILFUELGOOD_GET_FUELNUM_OFFSET))(this);
		}

		::RPG::Client::GridFightTrailblazeGoodDisplayType get_DisplayType()
		{
			return ((::RPG::Client::GridFightTrailblazeGoodDisplayType(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_GRIDFIGHTTRAILBLAZETRAILFUELGOOD_GET_DISPLAYTYPE_OFFSET))(this);
		}

		::System::Object* get_DisplayObj()
		{
			return ((::System::Object*(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_GRIDFIGHTTRAILBLAZETRAILFUELGOOD_GET_DISPLAYOBJ_OFFSET))(this);
		}

	};
}
