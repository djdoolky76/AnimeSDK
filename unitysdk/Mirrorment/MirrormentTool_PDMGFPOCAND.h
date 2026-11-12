#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/Mirrorment/MirrormentTool_OpModuleType.h"
#include "unitysdk/RPG/Client/Prop/OpticalIllusionAxis.h"
#include "unitysdk/System/Object.h"
#include "unitysdk/UnityEngine/Vector3.h"
namespace RPG::Client::Prop { class OpticalIllusionPuzzleItem; }
namespace System { class String; }
namespace System::Collections::Generic { template <typename T1, typename T2> class Dictionary_2; }
namespace UnityEngine { class GameObject; }

#define MIRRORMENT_MIRRORMENTTOOL_PDMGFPOCAND_CTOR_OFFSET UNITYSDK_OFFSET(0xC30D130)

namespace Mirrorment
{
	inline static constexpr unsigned int MirrormentTool_PDMGFPOCAND_TypeDefinitionIndex = 48798;

	class MirrormentTool_PDMGFPOCAND : public ::System::Object
	{
	public:
		::RPG::Client::Prop::OpticalIllusionPuzzleItem* DEMFJAMDLFP; // 0x10
		::System::String* KPEHHGEKNHA; // 0x18
		::System::String* JPGCAKBNNLP; // 0x20
		::UnityEngine::GameObject* DHIPFJBEJPI; // 0x28
		::System::Collections::Generic::Dictionary_2<::System::String*, ::UnityEngine::GameObject*>* EGGCADJJJOD; // 0x30
		::UnityEngine::Vector3 BKAJJAJNHJF; // 0x38
		::UnityEngine::Vector3 LAADLNFMBCP; // 0x44
		::RPG::Client::Prop::OpticalIllusionAxis FJMCLOIEMKG; // 0x50
		::UnityEngine::Vector3 BOGOAKBPFPH; // 0x54
		::System::Single LENCOMGPHJE; // 0x60
		::System::Single GCPECCHMLCJ; // 0x64
		::Mirrorment::MirrormentTool_OpModuleType GMPGDEINODK; // 0x68
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MIRRORMENT_MIRRORMENTTOOL_PDMGFPOCAND_CTOR_OFFSET))(this);
		}

	};
}
