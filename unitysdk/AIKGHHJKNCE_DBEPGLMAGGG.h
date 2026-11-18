#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"
#include "unitysdk/UnityEngine/Color.h"
#include "unitysdk/UnityEngine/Vector4.h"

class AEONPIHMGJK;
class MPKBDIJDMAP;

#define AIKGHHJKNCE_DBEPGLMAGGG_AFMFACBDLPF_OFFSET UNITYSDK_OFFSET(0x135EAB70)
#define AIKGHHJKNCE_DBEPGLMAGGG_ANKACEBKFEG_OFFSET UNITYSDK_OFFSET(0x135EABA0)
#define AIKGHHJKNCE_DBEPGLMAGGG_KFOFHLENNEO_OFFSET UNITYSDK_OFFSET(0x135EABD0)
#define AIKGHHJKNCE_DBEPGLMAGGG__CTOR_OFFSET UNITYSDK_OFFSET(0x135EAB60)

inline static constexpr unsigned int AIKGHHJKNCE_DBEPGLMAGGG_TypeDefinitionIndex = 58242;

class AIKGHHJKNCE_DBEPGLMAGGG : public ::System::Object
{
public:
	::AEONPIHMGJK* GEGEMHPBGIG; // 0x10

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + AIKGHHJKNCE_DBEPGLMAGGG__CTOR_OFFSET))(this);
	}

	::System::Void AFMFACBDLPF(::MPKBDIJDMAP* JNDDJMAHNAI, ::UnityEngine::Color CBLGCIFLMKL, ::System::Int32 HBJOLKHGGDD)
	{
		return ((::System::Void(*)(::PVOID, ::MPKBDIJDMAP*, ::UnityEngine::Color, ::System::Int32))((::PBYTE)hIl2Cpp + AIKGHHJKNCE_DBEPGLMAGGG_AFMFACBDLPF_OFFSET))(this, JNDDJMAHNAI, CBLGCIFLMKL, HBJOLKHGGDD);
	}

	::System::Void ANKACEBKFEG(::MPKBDIJDMAP* JNDDJMAHNAI, ::UnityEngine::Vector4 HDPGPBNINGA, ::System::Int32 HBJOLKHGGDD)
	{
		return ((::System::Void(*)(::PVOID, ::MPKBDIJDMAP*, ::UnityEngine::Vector4, ::System::Int32))((::PBYTE)hIl2Cpp + AIKGHHJKNCE_DBEPGLMAGGG_ANKACEBKFEG_OFFSET))(this, JNDDJMAHNAI, HDPGPBNINGA, HBJOLKHGGDD);
	}

	::System::Void KFOFHLENNEO()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + AIKGHHJKNCE_DBEPGLMAGGG_KFOFHLENNEO_OFFSET))(this);
	}
};
