#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/Sirenix/OdinInspector/SerializedMonoBehaviour.h"

#define MOLEMOLE_UITESTLAUNCHERINEDITOR__CTOR_OFFSET UNITYSDK_OFFSET(0x19C9CE10)

namespace MoleMole
{
	inline static constexpr unsigned int UITestLauncherInEditor_TypeDefinitionIndex = 45316;

	class UITestLauncherInEditor : public ::Sirenix::OdinInspector::SerializedMonoBehaviour
	{
	public:
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UITESTLAUNCHERINEDITOR__CTOR_OFFSET))(this);
		}
	};
}
