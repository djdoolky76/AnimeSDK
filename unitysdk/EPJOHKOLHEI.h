#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/JLCNECHMMNG.h"
#include "unitysdk/UnityEngine/Vector3.h"
#include "unitysdk/UnityEngine/Quaternion.h"
class HPINHKGIDHJ;

#define EPJOHKOLHEI_BGMJAHBOLOE_OFFSET UNITYSDK_OFFSET(0x155D5CF0)
#define EPJOHKOLHEI_CDEPMOEEDEE_OFFSET UNITYSDK_OFFSET(0x155D5D50)
#define EPJOHKOLHEI_CTOR_OFFSET UNITYSDK_OFFSET(0x155D5ED0)
#define EPJOHKOLHEI_FKILJIAADJM_OFFSET UNITYSDK_OFFSET(0x155D5E20)
#define EPJOHKOLHEI_GMLBJJLBPMF_OFFSET UNITYSDK_OFFSET(0x155D5B60)
#define EPJOHKOLHEI_HDOFEPFEOEB_OFFSET UNITYSDK_OFFSET(0x155D5CA0)
#define EPJOHKOLHEI_JFHKHOMEKIM_OFFSET UNITYSDK_OFFSET(0x155D5DD0)
#define EPJOHKOLHEI_KPJGDHLENIP_1_OFFSET UNITYSDK_OFFSET(0x155D59A0)
#define EPJOHKOLHEI_KPJGDHLENIP_OFFSET UNITYSDK_OFFSET(0x155D58B0)
#define EPJOHKOLHEI_MGFLFCHMGPA_OFFSET UNITYSDK_OFFSET(0x155D5AF0)
#define EPJOHKOLHEI_MGJLINFADJK_OFFSET UNITYSDK_OFFSET(0x155D5E70)

inline static constexpr unsigned int EPJOHKOLHEI_TypeDefinitionIndex = 78797;

	class EPJOHKOLHEI : public ::JLCNECHMMNG
	{
	public:
		::HPINHKGIDHJ* BJLJAHMLKIO; // 0x20
		::System::Single GHABAAOGBNO; // 0x28
		::System::Int32 FFNBLDFFMCN; // 0x2C
		::UnityEngine::Vector3 NAMGGEJCDMP; // 0x30
		::System::Single HBDJCFFDGDD; // 0x3C
		::System::Single GOFIDNKAPDJ; // 0x40
		::UnityEngine::Vector3 PDJBFBPEHFE; // 0x44
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + EPJOHKOLHEI_CTOR_OFFSET))(this);
		}

		::System::Void KPJGDHLENIP(::HPINHKGIDHJ* a1, ::UnityEngine::Vector3 a2, ::UnityEngine::Vector3 a3, ::System::Single a4, ::System::Int32 a5)
		{
			return ((::System::Void(*)(::PVOID, ::HPINHKGIDHJ*, ::UnityEngine::Vector3, ::UnityEngine::Vector3, ::System::Single, ::System::Int32))((::PBYTE)hIl2Cpp + EPJOHKOLHEI_KPJGDHLENIP_OFFSET))(this, a1, a2, a3, a4, a5);
		}

		::System::Void KPJGDHLENIP_1(::HPINHKGIDHJ* a1, ::UnityEngine::Vector3 a2, ::UnityEngine::Vector3 a3, ::System::Single a4)
		{
			return ((::System::Void(*)(::PVOID, ::HPINHKGIDHJ*, ::UnityEngine::Vector3, ::UnityEngine::Vector3, ::System::Single))((::PBYTE)hIl2Cpp + EPJOHKOLHEI_KPJGDHLENIP_1_OFFSET))(this, a1, a2, a3, a4);
		}

		::System::Void MGFLFCHMGPA()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + EPJOHKOLHEI_MGFLFCHMGPA_OFFSET))(this);
		}

		::System::Boolean GMLBJJLBPMF(::System::Single a1, ::UnityEngine::Vector3 a2, ::UnityEngine::Quaternion a3)
		{
			return ((::System::Boolean(*)(::PVOID, ::System::Single, ::UnityEngine::Vector3, ::UnityEngine::Quaternion))((::PBYTE)hIl2Cpp + EPJOHKOLHEI_GMLBJJLBPMF_OFFSET))(this, a1, a2, a3);
		}

		::System::Single HDOFEPFEOEB()
		{
			return ((::System::Single(*)(::PVOID))((::PBYTE)hIl2Cpp + EPJOHKOLHEI_HDOFEPFEOEB_OFFSET))(this);
		}

		::UnityEngine::Vector3 BGMJAHBOLOE()
		{
			return ((::UnityEngine::Vector3(*)(::PVOID))((::PBYTE)hIl2Cpp + EPJOHKOLHEI_BGMJAHBOLOE_OFFSET))(this);
		}

		::UnityEngine::Vector3 CDEPMOEEDEE()
		{
			return ((::UnityEngine::Vector3(*)(::PVOID))((::PBYTE)hIl2Cpp + EPJOHKOLHEI_CDEPMOEEDEE_OFFSET))(this);
		}

		::System::Single JFHKHOMEKIM()
		{
			return ((::System::Single(*)(::PVOID))((::PBYTE)hIl2Cpp + EPJOHKOLHEI_JFHKHOMEKIM_OFFSET))(this);
		}

		::System::Single FKILJIAADJM()
		{
			return ((::System::Single(*)(::PVOID))((::PBYTE)hIl2Cpp + EPJOHKOLHEI_FKILJIAADJM_OFFSET))(this);
		}

		::System::Void MGJLINFADJK()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + EPJOHKOLHEI_MGJLINFADJK_OFFSET))(this);
		}

	};
