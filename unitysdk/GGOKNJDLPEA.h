#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/Client/UIController.h"
#include "unitysdk/RPG/GameCore/TeamType.h"
class BCIEMOCBCCC;

#define GGOKNJDLPEA_ACAIKBOEFFA_OFFSET UNITYSDK_OFFSET(0x15A119B0)
#define GGOKNJDLPEA_CTOR_OFFSET UNITYSDK_OFFSET(0x15A11900)
#define GGOKNJDLPEA_GEEADEIKKIH_OFFSET UNITYSDK_OFFSET(0x15A126A0)
#define GGOKNJDLPEA_OICGPNAMNAI_OFFSET UNITYSDK_OFFSET(0x15A11B50)
#define GGOKNJDLPEA__CUSTOMBINDVIEW_OFFSET UNITYSDK_OFFSET(0x15A11A00)
#define GGOKNJDLPEA__ONEXITFINALSTEP_OFFSET UNITYSDK_OFFSET(0x15A12800)
#define GGOKNJDLPEA__ONTICK_OFFSET UNITYSDK_OFFSET(0x15A11F20)
#define GGOKNJDLPEA__SETUPVIEW_OFFSET UNITYSDK_OFFSET(0x15A11BE0)

inline static constexpr unsigned int GGOKNJDLPEA_TypeDefinitionIndex = 72363;

	class GGOKNJDLPEA : public ::RPG::Client::UIController
	{
	public:
		::System::Single EGPDMFEDJEI; // 0x190
		::System::Int32 FFIGJKHKODC; // 0x194
		::System::Boolean DNBIKOHBBBI; // 0x198
		::System::Byte _padding0[0x3];
		::System::Single AANLLNPJMPE; // 0x19C
		// static const ::System::Object KMOOHJLOMBD; // 0x0
		// static const ::System::Object FGDGKFPBMDE; // 0x0
		::System::Void _ctor(::RPG::GameCore::TeamType a1)
		{
			return ((::System::Void(*)(::PVOID, ::RPG::GameCore::TeamType))((::PBYTE)hIl2Cpp + GGOKNJDLPEA_CTOR_OFFSET))(this, a1);
		}

		::System::Void ACAIKBOEFFA()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + GGOKNJDLPEA_ACAIKBOEFFA_OFFSET))(this);
		}

		::System::Void _CustomBindView()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + GGOKNJDLPEA__CUSTOMBINDVIEW_OFFSET))(this);
		}

		::System::Void _SetupView()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + GGOKNJDLPEA__SETUPVIEW_OFFSET))(this);
		}

		::System::Void _OnTick(::System::Single a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::Single))((::PBYTE)hIl2Cpp + GGOKNJDLPEA__ONTICK_OFFSET))(this, a1);
		}

		::System::Void _OnExitFinalStep()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + GGOKNJDLPEA__ONEXITFINALSTEP_OFFSET))(this);
		}

		::System::Void GEEADEIKKIH()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + GGOKNJDLPEA_GEEADEIKKIH_OFFSET))(this);
		}

		::BCIEMOCBCCC* OICGPNAMNAI()
		{
			return ((::BCIEMOCBCCC*(*)(::PVOID))((::PBYTE)hIl2Cpp + GGOKNJDLPEA_OICGPNAMNAI_OFFSET))(this);
		}

	};
