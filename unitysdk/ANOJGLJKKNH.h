#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/EnviromentSystemV2Space/OutputType.h"
#include "unitysdk/KHAKCLAJLOB.h"
class CBEBICGIOAB;
class GGJFAFONDHN;
namespace UnityEngine::Rendering { class VolumeProfile; }

#define ANOJGLJKKNH_CTOR_OFFSET UNITYSDK_OFFSET(0x158A0F80)
#define ANOJGLJKKNH_GBNHJOEEHHP_OFFSET UNITYSDK_OFFSET(0x158A0C80)
#define ANOJGLJKKNH_HCCKBPDFINA_OFFSET UNITYSDK_OFFSET(0x158A0F00)
#define ANOJGLJKKNH_KPJGDHLENIP_OFFSET UNITYSDK_OFFSET(0x158A0B10)
#define ANOJGLJKKNH_NFIOBCCPPAC_OFFSET UNITYSDK_OFFSET(0x158A0C40)
#define ANOJGLJKKNH_PFMBEHKMHDK_OFFSET UNITYSDK_OFFSET(0x158A0E40)
#define ANOJGLJKKNH__INIT_B__1_0_OFFSET UNITYSDK_OFFSET(0x158A0FA0)
#define ANOJGLJKKNH__INIT_B__1_1_OFFSET UNITYSDK_OFFSET(0x158A0FD0)

inline static constexpr unsigned int ANOJGLJKKNH_TypeDefinitionIndex = 49335;

	class ANOJGLJKKNH : public ::KHAKCLAJLOB
	{
	public:
		::UnityEngine::Rendering::VolumeProfile* DCKEKDFJBHJ; // 0x70
		::System::Single OLDBNJPFNNP; // 0x78
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + ANOJGLJKKNH_CTOR_OFFSET))(this);
		}

		::System::Void KPJGDHLENIP()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + ANOJGLJKKNH_KPJGDHLENIP_OFFSET))(this);
		}

		::UnityEngine::Rendering::VolumeProfile* NFIOBCCPPAC()
		{
			return ((::UnityEngine::Rendering::VolumeProfile*(*)(::PVOID))((::PBYTE)hIl2Cpp + ANOJGLJKKNH_NFIOBCCPPAC_OFFSET))(this);
		}

		::System::Void GBNHJOEEHHP()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + ANOJGLJKKNH_GBNHJOEEHHP_OFFSET))(this);
		}

		::System::Void PFMBEHKMHDK(::EnviromentSystemV2Space::OutputType a1, ::CBEBICGIOAB* a2)
		{
			return ((::System::Void(*)(::PVOID, ::EnviromentSystemV2Space::OutputType, ::CBEBICGIOAB*))((::PBYTE)hIl2Cpp + ANOJGLJKKNH_PFMBEHKMHDK_OFFSET))(this, a1, a2);
		}

		::System::Void HCCKBPDFINA(::System::Single a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::Single))((::PBYTE)hIl2Cpp + ANOJGLJKKNH_HCCKBPDFINA_OFFSET))(this, a1);
		}

		::System::Void _Init_b__1_0(::GGJFAFONDHN* a1)
		{
			return ((::System::Void(*)(::PVOID, ::GGJFAFONDHN*))((::PBYTE)hIl2Cpp + ANOJGLJKKNH__INIT_B__1_0_OFFSET))(this, a1);
		}

		::System::Void _Init_b__1_1(::GGJFAFONDHN* a1)
		{
			return ((::System::Void(*)(::PVOID, ::GGJFAFONDHN*))((::PBYTE)hIl2Cpp + ANOJGLJKKNH__INIT_B__1_1_OFFSET))(this, a1);
		}

	};
