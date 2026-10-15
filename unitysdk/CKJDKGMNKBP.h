#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/FateRinCaseBoardTeamType.h"
#include "unitysdk/System/Object.h"
class HCAJLDIJJOH;
class PKHEJCHNMGI;

#define CKJDKGMNKBP_CTOR_OFFSET UNITYSDK_OFFSET(0xD75EF00)
#define CKJDKGMNKBP_OLPAEPFGFIE_OFFSET UNITYSDK_OFFSET(0xD75EDC0)
#define CKJDKGMNKBP_PIMCHDILMMJ_OFFSET UNITYSDK_OFFSET(0xD75EE50)

	class CKJDKGMNKBP : public ::System::Object
	{
	public:
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CKJDKGMNKBP_CTOR_OFFSET))(this);
		}

		::HCAJLDIJJOH* OLPAEPFGFIE(::RPG::GameCore::FateRinCaseBoardTeamType a1)
		{
			return ((::HCAJLDIJJOH*(*)(::PVOID, ::RPG::GameCore::FateRinCaseBoardTeamType))((::PBYTE)hIl2Cpp + CKJDKGMNKBP_OLPAEPFGFIE_OFFSET))(this, a1);
		}

		static ::HCAJLDIJJOH* PIMCHDILMMJ(::PKHEJCHNMGI* a1)
		{
			return ((::HCAJLDIJJOH*(*)(::PKHEJCHNMGI*))((::PBYTE)hIl2Cpp + CKJDKGMNKBP_PIMCHDILMMJ_OFFSET))(a1);
		}

	};
