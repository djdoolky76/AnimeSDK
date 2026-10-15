#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/KDFFHMDFALG_PoseSwitchState.h"
#include "unitysdk/UnityEngine/Quaternion.h"
#include "unitysdk/UnityEngine/Vector3.h"
class ELHDFFLAFGN;

#define KDFFHMDFALG_HBHDEEAKFAI_CEIKNGGDEAO_OFFSET UNITYSDK_OFFSET(0x138C0)
#define KDFFHMDFALG_HBHDEEAKFAI_HOIOFOIGHCC_OFFSET UNITYSDK_OFFSET(0x13910)
#define KDFFHMDFALG_HBHDEEAKFAI_KHGIKBFDLFB_OFFSET UNITYSDK_OFFSET(0x13920)

inline static constexpr unsigned int KDFFHMDFALG_HBHDEEAKFAI_TypeDefinitionIndex = 60583;

	struct alignas(8) KDFFHMDFALG_HBHDEEAKFAI
	{
		::ELHDFFLAFGN* CGDDOHKNKAF; // 0x10
		::UnityEngine::Quaternion BMDHDNGHOFA; // 0x18
		::System::UInt32 AINMCIAHGMM; // 0x28
		::UnityEngine::Quaternion NMBCMMJMIPA; // 0x2C
		::UnityEngine::Vector3 LOFKEOFNMKA; // 0x3C
		::System::Single ELCEJCOGOFJ; // 0x48
		::System::Single EIBGEGPABFK; // 0x4C
		::System::Boolean OEOHHAMKMEC; // 0x50
		::System::Byte _padding0[0x3];
		::KDFFHMDFALG_PoseSwitchState LIHJCMNPNAG; // 0x54
		::System::UInt32 BLDAGLHGDMJ; // 0x58
		::System::UInt32 CCPJNBEJAKL; // 0x5C
		::System::Boolean CEIKNGGDEAO()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + KDFFHMDFALG_HBHDEEAKFAI_CEIKNGGDEAO_OFFSET))(this);
		}

		::System::Boolean HOIOFOIGHCC()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + KDFFHMDFALG_HBHDEEAKFAI_HOIOFOIGHCC_OFFSET))(this);
		}

		::System::Void KHGIKBFDLFB()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + KDFFHMDFALG_HBHDEEAKFAI_KHGIKBFDLFB_OFFSET))(this);
		}

	};
