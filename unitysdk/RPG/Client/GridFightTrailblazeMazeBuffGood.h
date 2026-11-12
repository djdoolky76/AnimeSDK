#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/Client/GridFightTrailblazeGood.h"
#include "unitysdk/RPG/Client/GridFightTrailblazeGoodDisplayType.h"
class AMNAMDLMADK;
namespace System { class Object; }

#define RPG_CLIENT_GRIDFIGHTTRAILBLAZEMAZEBUFFGOOD_CTOR_OFFSET UNITYSDK_OFFSET(0xDCBB8B0)
#define RPG_CLIENT_GRIDFIGHTTRAILBLAZEMAZEBUFFGOOD_GET_DISPLAYOBJ_OFFSET UNITYSDK_OFFSET(0xDCBB910)
#define RPG_CLIENT_GRIDFIGHTTRAILBLAZEMAZEBUFFGOOD_GET_DISPLAYTYPE_OFFSET UNITYSDK_OFFSET(0xDCBB8C0)

namespace RPG::Client
{
	inline static constexpr unsigned int GridFightTrailblazeMazeBuffGood_TypeDefinitionIndex = 67285;

	class GridFightTrailblazeMazeBuffGood : public ::RPG::Client::GridFightTrailblazeGood
	{
	public:
		::System::Void _ctor(::AMNAMDLMADK* a1, ::System::Int32 a2)
		{
			return ((::System::Void(*)(::PVOID, ::AMNAMDLMADK*, ::System::Int32))((::PBYTE)hIl2Cpp + RPG_CLIENT_GRIDFIGHTTRAILBLAZEMAZEBUFFGOOD_CTOR_OFFSET))(this, a1, a2);
		}

		::RPG::Client::GridFightTrailblazeGoodDisplayType get_DisplayType()
		{
			return ((::RPG::Client::GridFightTrailblazeGoodDisplayType(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_GRIDFIGHTTRAILBLAZEMAZEBUFFGOOD_GET_DISPLAYTYPE_OFFSET))(this);
		}

		::System::Object* get_DisplayObj()
		{
			return ((::System::Object*(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_GRIDFIGHTTRAILBLAZEMAZEBUFFGOOD_GET_DISPLAYOBJ_OFFSET))(this);
		}

	};
}
