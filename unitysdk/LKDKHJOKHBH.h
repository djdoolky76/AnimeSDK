#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"
namespace RPG::Client { class PenaconyEndmostChronicleData; }

#define LKDKHJOKHBH_BPLPBPMEODA_OFFSET UNITYSDK_OFFSET(0xB72E310)
#define LKDKHJOKHBH_CTOR_OFFSET UNITYSDK_OFFSET(0xB72E5C0)

	class LKDKHJOKHBH : public ::System::Object
	{
	public:
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + LKDKHJOKHBH_CTOR_OFFSET))(this);
		}

		static ::RPG::Client::PenaconyEndmostChronicleData* BPLPBPMEODA()
		{
			return ((::RPG::Client::PenaconyEndmostChronicleData*(*)())((::PBYTE)hIl2Cpp + LKDKHJOKHBH_BPLPBPMEODA_OFFSET))();
		}

	};
