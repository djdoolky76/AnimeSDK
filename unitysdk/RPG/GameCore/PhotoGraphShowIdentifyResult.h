#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/Client/TextID.h"
#include "unitysdk/RPG/GameCore/PhotoGraphModeType.h"
#include "unitysdk/RPG/GameCore/TaskConfig.h"
class FCOEMCEDLNL;
namespace RPG::GameCore { class PhotoGraphShowIdentifyResult; }

#define RPG_GAMECORE_PHOTOGRAPHSHOWIDENTIFYRESULT_CTOR_OFFSET UNITYSDK_OFFSET(0x1D913480)
#define RPG_GAMECORE_PHOTOGRAPHSHOWIDENTIFYRESULT_MGMEGEDLMAK_OFFSET UNITYSDK_OFFSET(0x1D913490)
#define RPG_GAMECORE_PHOTOGRAPHSHOWIDENTIFYRESULT_OJNNBEJLDIJ_OFFSET UNITYSDK_OFFSET(0x1D913450)

namespace RPG::GameCore
{
	inline static constexpr unsigned int PhotoGraphShowIdentifyResult_TypeDefinitionIndex = 21662;

	class PhotoGraphShowIdentifyResult : public ::RPG::GameCore::TaskConfig
	{
	public:
		::System::Boolean IsIdentifySuccess; // 0x18
		::System::Boolean IsShowToast; // 0x19
		::System::Byte _padding0[0x6];
		::RPG::Client::TextID ToastText; // 0x20
		::System::Boolean IsShowAim; // 0x30
		::System::Byte _padding1[0x3];
		::RPG::GameCore::PhotoGraphModeType PhotoGraphMode; // 0x34
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_GAMECORE_PHOTOGRAPHSHOWIDENTIFYRESULT_CTOR_OFFSET))(this);
		}

		static ::System::Void OJNNBEJLDIJ(::FCOEMCEDLNL* a1, ::RPG::GameCore::PhotoGraphShowIdentifyResult* a2)
		{
			return ((::System::Void(*)(::FCOEMCEDLNL*, ::RPG::GameCore::PhotoGraphShowIdentifyResult*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_PHOTOGRAPHSHOWIDENTIFYRESULT_OJNNBEJLDIJ_OFFSET))(a1, a2);
		}

		static ::System::Void MGMEGEDLMAK(::FCOEMCEDLNL* a1, ::RPG::GameCore::PhotoGraphShowIdentifyResult* a2)
		{
			return ((::System::Void(*)(::FCOEMCEDLNL*, ::RPG::GameCore::PhotoGraphShowIdentifyResult*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_PHOTOGRAPHSHOWIDENTIFYRESULT_MGMEGEDLMAK_OFFSET))(a1, a2);
		}

	};
}
