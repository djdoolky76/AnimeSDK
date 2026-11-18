#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/NKKOMMBAOFE.h"
#include "unitysdk/System/ValueType.h"

#define IJFPMHMHIFC_GPKMPDHNCGL_OFFSET UNITYSDK_OFFSET(0x7E7D50)
#define IJFPMHMHIFC__CTOR_OFFSET UNITYSDK_OFFSET(0x7E7D40)

inline static constexpr unsigned int IJFPMHMHIFC_TypeDefinitionIndex = 42703;

struct alignas(4) IJFPMHMHIFC
{
	::System::Int32 GICNPABBPNE; // 0x10
	::System::Boolean GDAKFFPOBOD; // 0x14
	::System::Boolean JLPKDCJAAPI; // 0x15
	::NKKOMMBAOFE HJIEBLHAAFK; // 0x16
	::System::Boolean NFCNKCACBAG; // 0x17

	::System::Void _ctor(::System::Int32 DDFFBCDPKMC, ::System::Boolean MIPCFMAPGMD, ::System::Boolean ICDGBEEICBD, ::NKKOMMBAOFE LOMFEHBHNLF, ::System::Boolean NAOHMHPKMHF)
	{
		return ((::System::Void(*)(::PVOID, ::System::Int32, ::System::Boolean, ::System::Boolean, ::NKKOMMBAOFE, ::System::Boolean))((::PBYTE)hIl2Cpp + IJFPMHMHIFC__CTOR_OFFSET))(this, DDFFBCDPKMC, MIPCFMAPGMD, ICDGBEEICBD, LOMFEHBHNLF, NAOHMHPKMHF);
	}

	::System::Void GPKMPDHNCGL()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + IJFPMHMHIFC_GPKMPDHNCGL_OFFSET))(this);
	}
};
