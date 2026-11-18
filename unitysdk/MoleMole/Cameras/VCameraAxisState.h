#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/LCONDDIBFNC.h"
#include "unitysdk/System/ValueType.h"

namespace System { class String; }

#define MOLEMOLE_CAMERAS_VCAMERAAXISSTATE_APIGOJIPLOL_OFFSET UNITYSDK_OFFSET(0x6D5330)
#define MOLEMOLE_CAMERAS_VCAMERAAXISSTATE_GET_CURRENTSPEED_OFFSET UNITYSDK_OFFSET(0x6D52C0)
#define MOLEMOLE_CAMERAS_VCAMERAAXISSTATE_GGANBFAPGFB_OFFSET UNITYSDK_OFFSET(0x6D5350)
#define MOLEMOLE_CAMERAS_VCAMERAAXISSTATE_IKPJFEINGKN_OFFSET UNITYSDK_OFFSET(0x6D5340)
#define MOLEMOLE_CAMERAS_VCAMERAAXISSTATE_KLIPMGFMJEJ_OFFSET UNITYSDK_OFFSET(0x6D5440)
#define MOLEMOLE_CAMERAS_VCAMERAAXISSTATE_NPOLNFDBOOD_OFFSET UNITYSDK_OFFSET(0x6D5360)
#define MOLEMOLE_CAMERAS_VCAMERAAXISSTATE_OKJCHFGIKBH_OFFSET UNITYSDK_OFFSET(0x6D53B0)
#define MOLEMOLE_CAMERAS_VCAMERAAXISSTATE_OMPNEADPGOA_OFFSET UNITYSDK_OFFSET(0x6D5450)
#define MOLEMOLE_CAMERAS_VCAMERAAXISSTATE__CTOR_OFFSET UNITYSDK_OFFSET(0x6D52D0)

namespace MoleMole::Cameras
{
	inline static constexpr unsigned int VCameraAxisState_TypeDefinitionIndex = 65213;

	struct alignas(4) VCameraAxisState
	{
		::System::Single Value; // 0x10
		::System::Single m_MaxSpeed; // 0x14
		::System::Single m_AccelTime; // 0x18
		::System::Single m_DecelTime; // 0x1C
		::System::Boolean m_InvertInput; // 0x20
		::System::Byte _padding0[0x3];
		::System::Single m_MinValue; // 0x24
		::System::Single m_MaxValue; // 0x28
		::System::Boolean m_Wrap; // 0x2C
		::System::Byte _padding1[0x3];
		::System::Single mCurrentSpeed; // 0x30
		::LCONDDIBFNC _vCameraAxisType; // 0x34

		::System::Void _ctor(::System::Single FBCNNPLFAAG, ::System::Single GOKEGHENOGP, ::System::Boolean HCOKBKFECIC, ::System::Single ENONGEJAKOP, ::System::Single NKAJIJCGBDO, ::System::Single OLAIKCEEABF, ::System::String* HIAIKHDFCLN, ::System::Boolean LDOAABMMOOF, ::LCONDDIBFNC ANNLHEDMCGK)
		{
			return ((::System::Void(*)(::PVOID, ::System::Single, ::System::Single, ::System::Boolean, ::System::Single, ::System::Single, ::System::Single, ::System::String*, ::System::Boolean, ::LCONDDIBFNC))((::PBYTE)hIl2Cpp + MOLEMOLE_CAMERAS_VCAMERAAXISSTATE__CTOR_OFFSET))(this, FBCNNPLFAAG, GOKEGHENOGP, HCOKBKFECIC, ENONGEJAKOP, NKAJIJCGBDO, OLAIKCEEABF, HIAIKHDFCLN, LDOAABMMOOF, ANNLHEDMCGK);
		}

		::System::Single get_CurrentSpeed()
		{
			return ((::System::Single(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_CAMERAS_VCAMERAAXISSTATE_GET_CURRENTSPEED_OFFSET))(this);
		}

		::System::Single APIGOJIPLOL()
		{
			return ((::System::Single(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_CAMERAS_VCAMERAAXISSTATE_APIGOJIPLOL_OFFSET))(this);
		}

		::System::Single IKPJFEINGKN()
		{
			return ((::System::Single(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_CAMERAS_VCAMERAAXISSTATE_IKPJFEINGKN_OFFSET))(this);
		}

		::System::Boolean GGANBFAPGFB(::System::Single HLFFCMIFFIB, ::System::Single PMNLNNGEIFM)
		{
			return ((::System::Boolean(*)(::PVOID, ::System::Single, ::System::Single))((::PBYTE)hIl2Cpp + MOLEMOLE_CAMERAS_VCAMERAAXISSTATE_GGANBFAPGFB_OFFSET))(this, HLFFCMIFFIB, PMNLNNGEIFM);
		}

		::System::Void NPOLNFDBOOD()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_CAMERAS_VCAMERAAXISSTATE_NPOLNFDBOOD_OFFSET))(this);
		}

		::System::Boolean OKJCHFGIKBH(::System::Single PMNLNNGEIFM, ::System::Single BAGLLCBFGED)
		{
			return ((::System::Boolean(*)(::PVOID, ::System::Single, ::System::Single))((::PBYTE)hIl2Cpp + MOLEMOLE_CAMERAS_VCAMERAAXISSTATE_OKJCHFGIKBH_OFFSET))(this, PMNLNNGEIFM, BAGLLCBFGED);
		}

		::System::Single KLIPMGFMJEJ()
		{
			return ((::System::Single(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_CAMERAS_VCAMERAAXISSTATE_KLIPMGFMJEJ_OFFSET))(this);
		}

		::System::Single OMPNEADPGOA()
		{
			return ((::System::Single(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_CAMERAS_VCAMERAAXISSTATE_OMPNEADPGOA_OFFSET))(this);
		}
	};
}
