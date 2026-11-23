#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/MulticastDelegate.h"

namespace HoudiniEngineUnity { class HEU_AssetSync; }
namespace System { class Object; }

#define HOUDINIENGINEUNITY_HEU_ASSETSYNC_E5E07F62BD8DAB0E_INVOKE_OFFSET UNITYSDK_OFFSET(0x1CF4AC0)
#define HOUDINIENGINEUNITY_HEU_ASSETSYNC_E5E07F62BD8DAB0E__CTOR_OFFSET UNITYSDK_OFFSET(0x2991280)

namespace HoudiniEngineUnity
{
	inline static constexpr unsigned int HEU_AssetSync_E5E07F62BD8DAB0E_TypeDefinitionIndex = 17903;

	class HEU_AssetSync_E5E07F62BD8DAB0E : public ::System::MulticastDelegate
	{
	public:
		::System::Void _ctor(::System::Object* A351543A0362EB15, ::System::IntPtr EA8FABEC6D125B33)
		{
			return ((::System::Void(*)(::PVOID, ::System::Object*, ::System::IntPtr))((::PBYTE)hIl2Cpp + HOUDINIENGINEUNITY_HEU_ASSETSYNC_E5E07F62BD8DAB0E__CTOR_OFFSET))(this, A351543A0362EB15, EA8FABEC6D125B33);
		}

		::System::Void Invoke(::HoudiniEngineUnity::HEU_AssetSync* ABC13F59D4C2FEDA)
		{
			return ((::System::Void(*)(::PVOID, ::HoudiniEngineUnity::HEU_AssetSync*))((::PBYTE)hIl2Cpp + HOUDINIENGINEUNITY_HEU_ASSETSYNC_E5E07F62BD8DAB0E_INVOKE_OFFSET))(this, ABC13F59D4C2FEDA);
		}
	};
}
