#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/Client/GridFightTrailblazeGood.h"
#include "unitysdk/RPG/Client/GridFightTrailblazeGoodDisplayType.h"
class AMNAMDLMADK;
namespace System { class Object; }

#define RPG_CLIENT_GRIDFIGHTTRAILBLAZEPROPERTYGOOD_CTOR_OFFSET UNITYSDK_OFFSET(0x1D3D8A60)
#define RPG_CLIENT_GRIDFIGHTTRAILBLAZEPROPERTYGOOD_GET_DISPLAYOBJ_OFFSET UNITYSDK_OFFSET(0x1D3D8AC0)
#define RPG_CLIENT_GRIDFIGHTTRAILBLAZEPROPERTYGOOD_GET_DISPLAYTYPE_OFFSET UNITYSDK_OFFSET(0x1D3D8A70)

namespace RPG::Client
{
	inline static constexpr unsigned int GridFightTrailblazePropertyGood_TypeDefinitionIndex = 67286;

	class GridFightTrailblazePropertyGood : public ::RPG::Client::GridFightTrailblazeGood
	{
	public:
		::System::Void _ctor(::AMNAMDLMADK* a1, ::System::Int32 a2)
		{
			return ((::System::Void(*)(::PVOID, ::AMNAMDLMADK*, ::System::Int32))((::PBYTE)hIl2Cpp + RPG_CLIENT_GRIDFIGHTTRAILBLAZEPROPERTYGOOD_CTOR_OFFSET))(this, a1, a2);
		}

		::RPG::Client::GridFightTrailblazeGoodDisplayType get_DisplayType()
		{
			return ((::RPG::Client::GridFightTrailblazeGoodDisplayType(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_GRIDFIGHTTRAILBLAZEPROPERTYGOOD_GET_DISPLAYTYPE_OFFSET))(this);
		}

		::System::Object* get_DisplayObj()
		{
			return ((::System::Object*(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_GRIDFIGHTTRAILBLAZEPROPERTYGOOD_GET_DISPLAYOBJ_OFFSET))(this);
		}

	};
}
