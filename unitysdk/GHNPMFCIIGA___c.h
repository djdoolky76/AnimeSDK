#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"
namespace RPG::Client { class PlanetFesMiniGameBetUp; }
namespace System { class Object; }
namespace System { template <typename T> class Comparison_1; }

#define GHNPMFCIIGA___C_CCTOR_OFFSET UNITYSDK_OFFSET(0x15A2C9F0)
#define GHNPMFCIIGA___C_CTOR_OFFSET UNITYSDK_OFFSET(0x15A2CA20)
#define GHNPMFCIIGA___C__CREATEBETUPS_B__1_0_OFFSET UNITYSDK_OFFSET(0x15A2CA30)

inline static constexpr unsigned int GHNPMFCIIGA___c_TypeDefinitionIndex = 66612;

	class GHNPMFCIIGA___c : public ::System::Object
	{
	public:
		static ::System::Object** StaticGet___9()
		{
			return (::System::Object**)UnitySDK::FromName("", "<>c")->GetStaticField(0x5CAB0);
		}

		static ::System::Comparison_1<::RPG::Client::PlanetFesMiniGameBetUp*>** StaticGet___9__1_0()
		{
			return (::System::Comparison_1<::RPG::Client::PlanetFesMiniGameBetUp*>**)UnitySDK::FromName("", "<>c")->GetStaticField(0x5CAB8);
		}

		static ::System::Void _cctor()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + GHNPMFCIIGA___C_CCTOR_OFFSET))();
		}

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + GHNPMFCIIGA___C_CTOR_OFFSET))(this);
		}

		::System::Int32 _CreateBetUps_b__1_0(::RPG::Client::PlanetFesMiniGameBetUp* a1, ::RPG::Client::PlanetFesMiniGameBetUp* a2)
		{
			return ((::System::Int32(*)(::PVOID, ::RPG::Client::PlanetFesMiniGameBetUp*, ::RPG::Client::PlanetFesMiniGameBetUp*))((::PBYTE)hIl2Cpp + GHNPMFCIIGA___C__CREATEBETUPS_B__1_0_OFFSET))(this, a1, a2);
		}

	};
