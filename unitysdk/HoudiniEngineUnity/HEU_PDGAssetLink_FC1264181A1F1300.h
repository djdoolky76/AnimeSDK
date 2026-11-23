#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/MulticastDelegate.h"

namespace System { class Object; }

#define HOUDINIENGINEUNITY_HEU_PDGASSETLINK_FC1264181A1F1300_INVOKE_OFFSET UNITYSDK_OFFSET(0x1F36B50)
#define HOUDINIENGINEUNITY_HEU_PDGASSETLINK_FC1264181A1F1300__CTOR_OFFSET UNITYSDK_OFFSET(0x1F36B60)

namespace HoudiniEngineUnity
{
	inline static constexpr unsigned int HEU_PDGAssetLink_FC1264181A1F1300_TypeDefinitionIndex = 17923;

	class HEU_PDGAssetLink_FC1264181A1F1300 : public ::System::MulticastDelegate
	{
	public:
		::System::Void _ctor(::System::Object* A351543A0362EB15, ::System::IntPtr EA8FABEC6D125B33)
		{
			return ((::System::Void(*)(::PVOID, ::System::Object*, ::System::IntPtr))((::PBYTE)hIl2Cpp + HOUDINIENGINEUNITY_HEU_PDGASSETLINK_FC1264181A1F1300__CTOR_OFFSET))(this, A351543A0362EB15, EA8FABEC6D125B33);
		}

		::System::Void Invoke()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + HOUDINIENGINEUNITY_HEU_PDGASSETLINK_FC1264181A1F1300_INVOKE_OFFSET))(this);
		}
	};
}
