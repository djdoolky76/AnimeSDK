#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"
#include "unitysdk/UnityEngine/Vector3.h"
class FiveDimRenderingPanel;

#define CMGNAKKNDIB_BBLMMNLCMGM_OFFSET UNITYSDK_OFFSET(0xDA32D90)
#define CMGNAKKNDIB_BHCADJLOGPN_OFFSET UNITYSDK_OFFSET(0xDA33140)
#define CMGNAKKNDIB_CLEAR_OFFSET UNITYSDK_OFFSET(0xDA32C60)
#define CMGNAKKNDIB_CTOR_OFFSET UNITYSDK_OFFSET(0xDA33790)
#define CMGNAKKNDIB_DHFBDMHFNIK_OFFSET UNITYSDK_OFFSET(0xDA32D30)
#define CMGNAKKNDIB_JNDJHMOJIHF_OFFSET UNITYSDK_OFFSET(0xDA33270)
#define CMGNAKKNDIB_KPJGDHLENIP_OFFSET UNITYSDK_OFFSET(0xDA32C00)
#define CMGNAKKNDIB_KPLKLDMAFBF_OFFSET UNITYSDK_OFFSET(0xDA334E0)
#define CMGNAKKNDIB_MLJBMDAKFHO_OFFSET UNITYSDK_OFFSET(0xDA331A0)
#define CMGNAKKNDIB_MOKNCFJICIC_OFFSET UNITYSDK_OFFSET(0xDA32CB0)
#define CMGNAKKNDIB_PAGKOAEOLKA_OFFSET UNITYSDK_OFFSET(0xDA32DE0)

	class CMGNAKKNDIB : public ::System::Object
	{
	public:
		::FiveDimRenderingPanel* OLMBFAMHDON; // 0x10
		::UnityEngine::Vector3 MKKBLHLFCDG; // 0x18
		::System::Boolean DGAOJAMHJNF; // 0x24
		::System::Boolean IMFHEKNMCON; // 0x25
		::System::Boolean IDBHEIBEGBA; // 0x26
		::System::Byte _padding0[0x1];
		::UnityEngine::Vector3 GLANMCFEDKN; // 0x28
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CMGNAKKNDIB_CTOR_OFFSET))(this);
		}

		::System::Void KPJGDHLENIP(::FiveDimRenderingPanel* a1)
		{
			return ((::System::Void(*)(::PVOID, ::FiveDimRenderingPanel*))((::PBYTE)hIl2Cpp + CMGNAKKNDIB_KPJGDHLENIP_OFFSET))(this, a1);
		}

		::System::Void Clear()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CMGNAKKNDIB_CLEAR_OFFSET))(this);
		}

		::System::Void MOKNCFJICIC()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CMGNAKKNDIB_MOKNCFJICIC_OFFSET))(this);
		}

		::System::Void DHFBDMHFNIK()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CMGNAKKNDIB_DHFBDMHFNIK_OFFSET))(this);
		}

		::System::Boolean BBLMMNLCMGM()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + CMGNAKKNDIB_BBLMMNLCMGM_OFFSET))(this);
		}

		::System::Void PAGKOAEOLKA()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CMGNAKKNDIB_PAGKOAEOLKA_OFFSET))(this);
		}

		::System::Void JNDJHMOJIHF(::UnityEngine::Vector3 a1, ::System::Boolean a2)
		{
			return ((::System::Void(*)(::PVOID, ::UnityEngine::Vector3, ::System::Boolean))((::PBYTE)hIl2Cpp + CMGNAKKNDIB_JNDJHMOJIHF_OFFSET))(this, a1, a2);
		}

		::System::Void KPLKLDMAFBF(::UnityEngine::Vector3 a1, ::System::Boolean a2)
		{
			return ((::System::Void(*)(::PVOID, ::UnityEngine::Vector3, ::System::Boolean))((::PBYTE)hIl2Cpp + CMGNAKKNDIB_KPLKLDMAFBF_OFFSET))(this, a1, a2);
		}

		::System::Boolean MLJBMDAKFHO(::UnityEngine::Vector3 a1, ::UnityEngine::Vector3 a2)
		{
			return ((::System::Boolean(*)(::PVOID, ::UnityEngine::Vector3, ::UnityEngine::Vector3))((::PBYTE)hIl2Cpp + CMGNAKKNDIB_MLJBMDAKFHO_OFFSET))(this, a1, a2);
		}

		::System::Boolean BHCADJLOGPN()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + CMGNAKKNDIB_BHCADJLOGPN_OFFSET))(this);
		}

	};
