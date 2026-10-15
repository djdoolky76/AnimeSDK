#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/Cinemachine/CinemachineBlendDefinition.h"
#include "unitysdk/Cinemachine/CinemachineVirtualCameraBase_BlendHint.h"
#include "unitysdk/RPG/Client/CameraResultData.h"
#include "unitysdk/System/Object.h"
class PNDIOOHCBLB;
namespace RPG::GameCore { class VCameraNoiseChange; }

#define CJOJDEPDCBK_CLEAR_OFFSET UNITYSDK_OFFSET(0xD751320)
#define CJOJDEPDCBK_CTOR_OFFSET UNITYSDK_OFFSET(0xD7513C0)

	class CJOJDEPDCBK : public ::System::Object
	{
	public:
		::RPG::Client::CameraResultData LNGJLADJKKD; // 0x10
		::PNDIOOHCBLB* GKFANPLKAJP; // 0xA8
		::RPG::GameCore::VCameraNoiseChange* FNPOMHPFKAO; // 0xB0
		::Cinemachine::CinemachineBlendDefinition MCOFPKAILOE; // 0xB8
		::System::Single IEHPFADHJFD; // 0xC8
		::Cinemachine::CinemachineVirtualCameraBase_BlendHint DBEIPBLOIPC; // 0xCC
		::System::Single IFEPJHGNCOI; // 0xD0
		::System::Single MHGCHGAMNJK; // 0xD4
		::System::Boolean FKIFAEOAGLL; // 0xD8
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CJOJDEPDCBK_CTOR_OFFSET))(this);
		}

		::System::Void Clear()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CJOJDEPDCBK_CLEAR_OFFSET))(this);
		}

	};
