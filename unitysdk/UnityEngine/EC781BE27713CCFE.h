#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"
#include "unitysdk/UnityEngine/E6573557A0C33D55.h"

namespace System { class String; }

#define UNITYENGINE_EC781BE27713CCFE_AD4C7DB7F01DC42D_OFFSET UNITYSDK_OFFSET(0x413C740)
#define UNITYENGINE_EC781BE27713CCFE_E63D991FE21A2524_OFFSET UNITYSDK_OFFSET(0x413C6F0)
#define UNITYENGINE_EC781BE27713CCFE__CTOR_OFFSET UNITYSDK_OFFSET(0x1666CA0)

namespace UnityEngine
{
	inline static constexpr unsigned int EC781BE27713CCFE_TypeDefinitionIndex = 17275;

	class EC781BE27713CCFE : public ::System::Object
	{
	public:
		static ::UnityEngine::E6573557A0C33D55 AD4C7DB7F01DC42D(::System::String* F79B4D487F303AB2)
		{
			return ((::UnityEngine::E6573557A0C33D55(*)(::System::String*))((::PBYTE)hIl2Cpp + UNITYENGINE_EC781BE27713CCFE_AD4C7DB7F01DC42D_OFFSET))(F79B4D487F303AB2);
		}

		static ::System::Void E63D991FE21A2524(::System::String* F79B4D487F303AB2, ::UnityEngine::E6573557A0C33D55& FEC8DC0392823C8D)
		{
			return ((::System::Void(*)(::System::String*, ::UnityEngine::E6573557A0C33D55&))((::PBYTE)hIl2Cpp + UNITYENGINE_EC781BE27713CCFE_E63D991FE21A2524_OFFSET))(F79B4D487F303AB2, FEC8DC0392823C8D);
		}

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_EC781BE27713CCFE__CTOR_OFFSET))(this);
		}
	};
}
