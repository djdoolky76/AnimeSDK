#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/ChenLingFesTargetType.h"
#include "unitysdk/RPG/GameCore/LittleGameEntityType.h"
#include "unitysdk/RPG/GameCore/TaskConfig.h"
class FCOEMCEDLNL;
class NAELLAJBMAC;
namespace RPG::GameCore { class ChenLingFesTargetConfig; }
namespace System { class String; }

#define NAELLAJBMAC_CTOR_OFFSET UNITYSDK_OFFSET(0x1D1E5F90)
#define NAELLAJBMAC_MGMEGEDLMAK_OFFSET UNITYSDK_OFFSET(0x1D1E5FA0)
#define NAELLAJBMAC_OJNNBEJLDIJ_OFFSET UNITYSDK_OFFSET(0x1D1E5F60)

inline static constexpr unsigned int NAELLAJBMAC_TypeDefinitionIndex = 21498;

	class NAELLAJBMAC : public ::RPG::GameCore::TaskConfig
	{
	public:
		::System::String* KFEHPOFIOOA; // 0x18
		::RPG::GameCore::ChenLingFesTargetConfig* GMJKHCGCNKA; // 0x20
		::System::String* HHMLELABBFN; // 0x28
		::System::UInt32 NJNFNFCJHFJ; // 0x30
		::RPG::GameCore::LittleGameEntityType EAMICGDAKCN; // 0x34
		::System::UInt32 CMNOEFFFNPE; // 0x38
		::RPG::GameCore::ChenLingFesTargetType HILNFHCPEAD; // 0x3C
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + NAELLAJBMAC_CTOR_OFFSET))(this);
		}

		static ::System::Void OJNNBEJLDIJ(::FCOEMCEDLNL* a1, ::NAELLAJBMAC* a2)
		{
			return ((::System::Void(*)(::FCOEMCEDLNL*, ::NAELLAJBMAC*))((::PBYTE)hIl2Cpp + NAELLAJBMAC_OJNNBEJLDIJ_OFFSET))(a1, a2);
		}

		static ::System::Void MGMEGEDLMAK(::FCOEMCEDLNL* a1, ::NAELLAJBMAC* a2)
		{
			return ((::System::Void(*)(::FCOEMCEDLNL*, ::NAELLAJBMAC*))((::PBYTE)hIl2Cpp + NAELLAJBMAC_MGMEGEDLMAK_OFFSET))(a1, a2);
		}

	};
