#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

class FF76D3899EF0AE7B;
namespace HoudiniEngineUnity { class HEU_PDGAssetLink; }
namespace HoudiniEngineUnity { class HEU_TOPNodeData; }
namespace System { template <typename T1, typename T2> class Action_2; }

#define HOUDINIENGINEUNITY_HEU_PDGASSETLINK_E6DCE99A6FC74DF3__CTOR_OFFSET UNITYSDK_OFFSET(0x1666CA0)

namespace HoudiniEngineUnity
{
	inline static constexpr unsigned int HEU_PDGAssetLink_E6DCE99A6FC74DF3_TypeDefinitionIndex = 17924;

	class HEU_PDGAssetLink_E6DCE99A6FC74DF3 : public ::System::Object
	{
	public:
		::HoudiniEngineUnity::HEU_PDGAssetLink* A544919C800E2923; // 0x10
		::System::Action_2<::HoudiniEngineUnity::HEU_TOPNodeData*, ::FF76D3899EF0AE7B*>* F065B31BA45B8BB8; // 0x18
		::HoudiniEngineUnity::HEU_TOPNodeData* A526A83EFCC9096C; // 0x20

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + HOUDINIENGINEUNITY_HEU_PDGASSETLINK_E6DCE99A6FC74DF3__CTOR_OFFSET))(this);
		}
	};
}
