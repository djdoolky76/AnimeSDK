#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/UnityEngine/UI/Shadow.h"

namespace BF500EC7044DC6A8 { class F7D6E5F587A36E43; }

#define UNITYENGINE_UI_OUTLINE_A725A1972CAF87FB_OFFSET UNITYSDK_OFFSET(0x43B7A70)
#define UNITYENGINE_UI_OUTLINE__CTOR_OFFSET UNITYSDK_OFFSET(0x43B81D0)

namespace UnityEngine::UI
{
	inline static constexpr unsigned int Outline_TypeDefinitionIndex = 18617;

	class Outline : public ::UnityEngine::UI::Shadow
	{
	public:
		::System::Void A725A1972CAF87FB(::BF500EC7044DC6A8::F7D6E5F587A36E43* A1D6C72250268CE6)
		{
			return ((::System::Void(*)(::PVOID, ::BF500EC7044DC6A8::F7D6E5F587A36E43*))((::PBYTE)hIl2Cpp + UNITYENGINE_UI_OUTLINE_A725A1972CAF87FB_OFFSET))(this, A1D6C72250268CE6);
		}

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_UI_OUTLINE__CTOR_OFFSET))(this);
		}
	};
}
