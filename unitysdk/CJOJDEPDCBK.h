#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/Cinemachine/CinemachineBlendDefinition.h"
#include "unitysdk/Cinemachine/CinemachineVirtualCameraBase_BlendHint.h"
#include "unitysdk/RPG/Client/CameraResultData.h"
#include "unitysdk/System/Object.h"
class PNDIOOHCBLB;
namespace RPG::GameCore { class VCameraNoiseChange; }

#define CJOJDEPDCBK_CLEAR_OFFSET UNITYSDK_OFFSET(0xE08B160)
#define CJOJDEPDCBK_CTOR_OFFSET UNITYSDK_OFFSET(0xE08B1F0)

inline static constexpr unsigned int CJOJDEPDCBK_TypeDefinitionIndex = 71490;

	class CJOJDEPDCBK : public ::System::Object
	{
	public:
		::RPG::GameCore::VCameraNoiseChange* FNPOMHPFKAO; // 0x10
		::Cinemachine::CinemachineBlendDefinition MCOFPKAILOE; // 0x18
		::RPG::Client::CameraResultData LNGJLADJKKD; // 0x28
		::PNDIOOHCBLB* GKFANPLKAJP; // 0xC0
		::System::Boolean FKIFAEOAGLL; // 0xC8
		::System::Byte _padding0[0x3];
		::System::Single MHGCHGAMNJK; // 0xCC
		::Cinemachine::CinemachineVirtualCameraBase_BlendHint DBEIPBLOIPC; // 0xD0
		::System::Single IFEPJHGNCOI; // 0xD4
		::System::Single IEHPFADHJFD; // 0xD8
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CJOJDEPDCBK_CTOR_OFFSET))(this);
		}

		::System::Void Clear()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CJOJDEPDCBK_CLEAR_OFFSET))(this);
		}

	};
