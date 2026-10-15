#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/JLCNECHMMNG.h"
#include "unitysdk/UnityEngine/Vector3.h"
#include "unitysdk/UnityEngine/Quaternion.h"
class HPINHKGIDHJ;

#define EPJOHKOLHEI_BGMJAHBOLOE_OFFSET UNITYSDK_OFFSET(0x155CA2F0)
#define EPJOHKOLHEI_CDEPMOEEDEE_OFFSET UNITYSDK_OFFSET(0x155CA350)
#define EPJOHKOLHEI_CTOR_OFFSET UNITYSDK_OFFSET(0x155CA4D0)
#define EPJOHKOLHEI_FKILJIAADJM_OFFSET UNITYSDK_OFFSET(0x155CA420)
#define EPJOHKOLHEI_GMLBJJLBPMF_OFFSET UNITYSDK_OFFSET(0x155CA160)
#define EPJOHKOLHEI_HDOFEPFEOEB_OFFSET UNITYSDK_OFFSET(0x155CA2A0)
#define EPJOHKOLHEI_JFHKHOMEKIM_OFFSET UNITYSDK_OFFSET(0x155CA3D0)
#define EPJOHKOLHEI_KPJGDHLENIP_1_OFFSET UNITYSDK_OFFSET(0x155C9FA0)
#define EPJOHKOLHEI_KPJGDHLENIP_OFFSET UNITYSDK_OFFSET(0x155C9EB0)
#define EPJOHKOLHEI_MGFLFCHMGPA_OFFSET UNITYSDK_OFFSET(0x155CA0F0)
#define EPJOHKOLHEI_MGJLINFADJK_OFFSET UNITYSDK_OFFSET(0x155CA470)

inline static constexpr unsigned int EPJOHKOLHEI_TypeDefinitionIndex = 78796;

	class EPJOHKOLHEI : public ::JLCNECHMMNG
	{
	public:
		::HPINHKGIDHJ* BJLJAHMLKIO; // 0x20
		::System::Int32 FFNBLDFFMCN; // 0x28
		::UnityEngine::Vector3 NAMGGEJCDMP; // 0x2C
		::System::Single HBDJCFFDGDD; // 0x38
		::UnityEngine::Vector3 PDJBFBPEHFE; // 0x3C
		::System::Single GHABAAOGBNO; // 0x48
		::System::Single GOFIDNKAPDJ; // 0x4C
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
