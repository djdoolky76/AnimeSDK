#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

namespace HoudiniEngineUnity { class HEU_Curve; }
namespace HoudiniEngineUnity { class HEU_HoudiniAsset; }
namespace System { template <typename T> class E891BA3236FD13E7; }

#define HOUDINIENGINEUNITY_HEU_HOUDINIASSET_F3E318DA812A4257_E0BF0E2CCA6D42F7_OFFSET UNITYSDK_OFFSET(0x387E6B0)
#define HOUDINIENGINEUNITY_HEU_HOUDINIASSET_F3E318DA812A4257__CTOR_OFFSET UNITYSDK_OFFSET(0x1666CA0)

namespace HoudiniEngineUnity
{
	inline static constexpr unsigned int HEU_HoudiniAsset_F3E318DA812A4257_TypeDefinitionIndex = 18028;

	class HEU_HoudiniAsset_F3E318DA812A4257 : public ::System::Object
	{
	public:
		::HoudiniEngineUnity::HEU_HoudiniAsset* ADED379B98282357; // 0x10
		::System::Int32 FC300ADBDFF24726; // 0x18
		::System::Byte _padding0[0x4];
		::System::E891BA3236FD13E7<::HoudiniEngineUnity::HEU_Curve*>* F422651CC4956382; // 0x20

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + HOUDINIENGINEUNITY_HEU_HOUDINIASSET_F3E318DA812A4257__CTOR_OFFSET))(this);
		}

		::System::Boolean E0BF0E2CCA6D42F7(::HoudiniEngineUnity::HEU_Curve* BF3792D775A7C92E)
		{
			return ((::System::Boolean(*)(::PVOID, ::HoudiniEngineUnity::HEU_Curve*))((::PBYTE)hIl2Cpp + HOUDINIENGINEUNITY_HEU_HOUDINIASSET_F3E318DA812A4257_E0BF0E2CCA6D42F7_OFFSET))(this, BF3792D775A7C92E);
		}
	};
}
