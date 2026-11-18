#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

class ILFCBBADGKM;

#define MOLEMOLE_UIBANGBOOMICROWEBROLECOLLECTPAGECONTROLLER___C__DISPLAYCLASS23_1__BUILDROLEROWWIDGETSFROMPARENT_B__1_OFFSET UNITYSDK_OFFSET(0x1A34D6A0)
#define MOLEMOLE_UIBANGBOOMICROWEBROLECOLLECTPAGECONTROLLER___C__DISPLAYCLASS23_1__CTOR_OFFSET UNITYSDK_OFFSET(0x1A34D690)

namespace MoleMole
{
	inline static constexpr unsigned int UIBangbooMicroWebRoleCollectPageController___c__DisplayClass23_1_TypeDefinitionIndex = 85721;

	template <typename T>
	class UIBangbooMicroWebRoleCollectPageController___c__DisplayClass23_1 : public ::System::Object
	{
	public:
		::ILFCBBADGKM* data; // 0x10

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UIBANGBOOMICROWEBROLECOLLECTPAGECONTROLLER___C__DISPLAYCLASS23_1__CTOR_OFFSET))(this);
		}

		::System::Boolean _BuildRoleRowWidgetsFromParent_b__1(::ILFCBBADGKM* itemData)
		{
			return ((::System::Boolean(*)(::PVOID, ::ILFCBBADGKM*))((::PBYTE)hIl2Cpp + MOLEMOLE_UIBANGBOOMICROWEBROLECOLLECTPAGECONTROLLER___C__DISPLAYCLASS23_1__BUILDROLEROWWIDGETSFROMPARENT_B__1_OFFSET))(this, itemData);
		}
	};
}
