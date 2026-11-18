#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/MoleMole/UIAdaptData_NPJEAJJMFAP.h"
#include "unitysdk/MoleMole/UIAdaptData_PMCEHMHHIPI.h"
#include "unitysdk/System/Object.h"

#define MOLEMOLE_UIADAPTDATA_AOBDJKJKEJL_OFFSET UNITYSDK_OFFSET(0x19915810)
#define MOLEMOLE_UIADAPTDATA__CTOR_OFFSET UNITYSDK_OFFSET(0x19915800)

namespace MoleMole
{
	inline static constexpr unsigned int UIAdaptData_TypeDefinitionIndex = 53902;

	class UIAdaptData : public ::System::Object
	{
	public:
		::MoleMole::UIAdaptData_NPJEAJJMFAP ipadAdjustMode; // 0x10
		::System::Boolean ipadAdjustNeedUniqueBlackEdge; // 0x14
		::System::Byte _padding0[0x3];
		::MoleMole::UIAdaptData_PMCEHMHHIPI iphoneXAdjustMode; // 0x18

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UIADAPTDATA__CTOR_OFFSET))(this);
		}

		::System::Boolean AOBDJKJKEJL()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UIADAPTDATA_AOBDJKJKEJL_OFFSET))(this);
		}
	};
}
