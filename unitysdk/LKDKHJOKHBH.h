#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"
namespace RPG::Client { class PenaconyEndmostChronicleData; }

#define LKDKHJOKHBH_BPLPBPMEODA_OFFSET UNITYSDK_OFFSET(0xB726FA0)
#define LKDKHJOKHBH_CTOR_OFFSET UNITYSDK_OFFSET(0xB727250)

inline static constexpr unsigned int LKDKHJOKHBH_TypeDefinitionIndex = 66102;

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
