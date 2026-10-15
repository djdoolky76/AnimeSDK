#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"
#include "unitysdk/BGONLLCBKCB.h"
class BININOGEHOL;
class KKDBNPKMLBG;
namespace RPG::GameCore { class FiveDimPressureSwitchConfig; }

#define IPJGAJLEBDH_AIPDBMLMMLI_OFFSET UNITYSDK_OFFSET(0x1CB8A8B0)
#define IPJGAJLEBDH_DFHGDEAOICO_OFFSET UNITYSDK_OFFSET(0x1CB8A790)
#define IPJGAJLEBDH_GILLLKFMDFP_OFFSET UNITYSDK_OFFSET(0x1CB8A480)
#define IPJGAJLEBDH_IHDLGOIKJNP_OFFSET UNITYSDK_OFFSET(0x1CB8A540)
#define IPJGAJLEBDH_NAGCIOAJHOA_OFFSET UNITYSDK_OFFSET(0x1CB8A670)

	class IPJGAJLEBDH : public ::System::Object
	{
	public:
		static ::KKDBNPKMLBG* GILLLKFMDFP(::BININOGEHOL* a1)
		{
			return ((::KKDBNPKMLBG*(*)(::BININOGEHOL*))((::PBYTE)hIl2Cpp + IPJGAJLEBDH_GILLLKFMDFP_OFFSET))(a1);
		}

		static ::System::Boolean IHDLGOIKJNP(::BININOGEHOL* a1)
		{
			return ((::System::Boolean(*)(::BININOGEHOL*))((::PBYTE)hIl2Cpp + IPJGAJLEBDH_IHDLGOIKJNP_OFFSET))(a1);
		}

		static ::System::Void NAGCIOAJHOA(::BININOGEHOL* a1, ::RPG::GameCore::FiveDimPressureSwitchConfig* a2, ::BGONLLCBKCB a3)
		{
			return ((::System::Void(*)(::BININOGEHOL*, ::RPG::GameCore::FiveDimPressureSwitchConfig*, ::BGONLLCBKCB))((::PBYTE)hIl2Cpp + IPJGAJLEBDH_NAGCIOAJHOA_OFFSET))(a1, a2, a3);
		}

		static ::System::Void DFHGDEAOICO(::BININOGEHOL* a1, ::RPG::GameCore::FiveDimPressureSwitchConfig* a2, ::BGONLLCBKCB a3)
		{
			return ((::System::Void(*)(::BININOGEHOL*, ::RPG::GameCore::FiveDimPressureSwitchConfig*, ::BGONLLCBKCB))((::PBYTE)hIl2Cpp + IPJGAJLEBDH_DFHGDEAOICO_OFFSET))(a1, a2, a3);
		}

		static ::System::Void AIPDBMLMMLI(::BININOGEHOL* a1)
		{
			return ((::System::Void(*)(::BININOGEHOL*))((::PBYTE)hIl2Cpp + IPJGAJLEBDH_AIPDBMLMMLI_OFFSET))(a1);
		}

	};
