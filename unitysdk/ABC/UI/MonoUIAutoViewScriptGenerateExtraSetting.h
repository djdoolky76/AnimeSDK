#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/ABC/UI/MonoUIAutoView_B0E5A869B3C6290B.h"
#include "unitysdk/System/Object.h"

namespace System { class String; }

#define ABC_UI_MONOUIAUTOVIEWSCRIPTGENERATEEXTRASETTING__CTOR_OFFSET UNITYSDK_OFFSET(0x2095000)

namespace ABC::UI
{
	inline static constexpr unsigned int MonoUIAutoViewScriptGenerateExtraSetting_TypeDefinitionIndex = 8503;

	class MonoUIAutoViewScriptGenerateExtraSetting : public ::System::Object
	{
	public:
		::System::String* GenerateMarco; // 0x10
		::ABC::UI::MonoUIAutoView_B0E5A869B3C6290B SpecifyType; // 0x18
		::System::Boolean SkipGenerateScript; // 0x1C

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + ABC_UI_MONOUIAUTOVIEWSCRIPTGENERATEEXTRASETTING__CTOR_OFFSET))(this);
		}
	};
}
