#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

namespace Spine { class TrackEntry; }
namespace System { class Action; }

#define ANHOLIOLKHH_DFFBIHNHANO_OFGAJKPGBON_OFFSET UNITYSDK_OFFSET(0x14C22030)
#define ANHOLIOLKHH_DFFBIHNHANO__CTOR_OFFSET UNITYSDK_OFFSET(0x14C22020)

inline static constexpr unsigned int ANHOLIOLKHH_DFFBIHNHANO_TypeDefinitionIndex = 80882;

class ANHOLIOLKHH_DFFBIHNHANO : public ::System::Object
{
public:
	::System::Action* BKNOAKELEBI; // 0x10

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + ANHOLIOLKHH_DFFBIHNHANO__CTOR_OFFSET))(this);
	}

	::System::Void OFGAJKPGBON(::Spine::TrackEntry* PIIPCLCCOIG)
	{
		return ((::System::Void(*)(::PVOID, ::Spine::TrackEntry*))((::PBYTE)hIl2Cpp + ANHOLIOLKHH_DFFBIHNHANO_OFGAJKPGBON_OFFSET))(this, PIIPCLCCOIG);
	}
};
