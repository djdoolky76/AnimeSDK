#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/UnityEngine/UI/BaseMeshEffect.h"

namespace BF500EC7044DC6A8 { class F7D6E5F587A36E43; }

#define UNITYENGINE_UI_POSITIONASUV1_A725A1972CAF87FB_OFFSET UNITYSDK_OFFSET(0x43D2DB0)
#define UNITYENGINE_UI_POSITIONASUV1__CTOR_OFFSET UNITYSDK_OFFSET(0x1708400)

namespace UnityEngine::UI
{
	inline static constexpr unsigned int PositionAsUV1_TypeDefinitionIndex = 18677;

	class PositionAsUV1 : public ::UnityEngine::UI::BaseMeshEffect
	{
	public:
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_UI_POSITIONASUV1__CTOR_OFFSET))(this);
		}

		::System::Void A725A1972CAF87FB(::BF500EC7044DC6A8::F7D6E5F587A36E43* A1D6C72250268CE6)
		{
			return ((::System::Void(*)(::PVOID, ::BF500EC7044DC6A8::F7D6E5F587A36E43*))((::PBYTE)hIl2Cpp + UNITYENGINE_UI_POSITIONASUV1_A725A1972CAF87FB_OFFSET))(this, A1D6C72250268CE6);
		}
	};
}
