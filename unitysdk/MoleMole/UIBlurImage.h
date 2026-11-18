#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/MoleMole/UIBlurBaseImage.h"

namespace System { class EventArgs; }

#define MOLEMOLE_UIBLURIMAGE_AWAKE_OFFSET UNITYSDK_OFFSET(0x1704F040)
#define MOLEMOLE_UIBLURIMAGE_GPGLNOBDBGJ_OFFSET UNITYSDK_OFFSET(0x1704FBA0)
#define MOLEMOLE_UIBLURIMAGE_HANDLEEVENTS_OFFSET UNITYSDK_OFFSET(0x1704F8E0)
#define MOLEMOLE_UIBLURIMAGE_ILHIIDBCNEC_OFFSET UNITYSDK_OFFSET(0x1704FB90)
#define MOLEMOLE_UIBLURIMAGE_KDOIBCBFBAG_OFFSET UNITYSDK_OFFSET(0x1704FC30)
#define MOLEMOLE_UIBLURIMAGE_ONDISABLE_OFFSET UNITYSDK_OFFSET(0x1704F350)
#define MOLEMOLE_UIBLURIMAGE_ONENABLE_OFFSET UNITYSDK_OFFSET(0x1704F0E0)
#define MOLEMOLE_UIBLURIMAGE_UPDATE_OFFSET UNITYSDK_OFFSET(0x1704F570)
#define MOLEMOLE_UIBLURIMAGE__CTOR_OFFSET UNITYSDK_OFFSET(0x1704FAF0)

namespace MoleMole
{
	inline static constexpr unsigned int UIBlurImage_TypeDefinitionIndex = 74364;

	class UIBlurImage : public ::MoleMole::UIBlurBaseImage
	{
	public:
		// static const ::System::String* matPath; // 0x0
		::System::Boolean JJNGBCECCFF; // 0x170
		::System::Boolean NDCOHMOJACF; // 0x171
		::System::Byte _padding0[0x2];
		::System::Single NHKNILFDKGG; // 0x174
		::System::Boolean disableOnConsole; // 0x178

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UIBLURIMAGE__CTOR_OFFSET))(this);
		}

		::System::Void Awake()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UIBLURIMAGE_AWAKE_OFFSET))(this);
		}

		::System::Void OnEnable()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UIBLURIMAGE_ONENABLE_OFFSET))(this);
		}

		::System::Void OnDisable()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UIBLURIMAGE_ONDISABLE_OFFSET))(this);
		}

		::System::Void Update()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UIBLURIMAGE_UPDATE_OFFSET))(this);
		}

		::System::Void HandleEvents(::System::EventArgs* OJPFHPALLHG)
		{
			return ((::System::Void(*)(::PVOID, ::System::EventArgs*))((::PBYTE)hIl2Cpp + MOLEMOLE_UIBLURIMAGE_HANDLEEVENTS_OFFSET))(this, OJPFHPALLHG);
		}

		::System::Void ILHIIDBCNEC()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UIBLURIMAGE_ILHIIDBCNEC_OFFSET))(this);
		}

		::System::Void GPGLNOBDBGJ()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UIBLURIMAGE_GPGLNOBDBGJ_OFFSET))(this);
		}

		::System::Void KDOIBCBFBAG()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UIBLURIMAGE_KDOIBCBFBAG_OFFSET))(this);
		}
	};
}
