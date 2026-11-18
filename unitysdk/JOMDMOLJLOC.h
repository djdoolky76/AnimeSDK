#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"
#include "unitysdk/Foundation/Variable_1.h"
#include "unitysdk/IJBOMPDBFHA.h"
#include "unitysdk/UnityEngine/Bounds.h"
#include "unitysdk/UnityEngine/Vector3.h"

class GEIHCPAOKKK;
namespace Nap::NapECS { class EcsEntity; }
namespace System { class String; }
namespace UnityEngine { class Collider; }
namespace UnityEngine { class Transform; }

#define JOMDMOLJLOC_DMDCDJLHKFO_OFFSET UNITYSDK_OFFSET(0x14FC5C80)
#define JOMDMOLJLOC_KIKDJLLAILO_OFFSET UNITYSDK_OFFSET(0x14FC55B0)
#define JOMDMOLJLOC_LHAAIHDADDA_OFFSET UNITYSDK_OFFSET(0x14FC57D0)
#define JOMDMOLJLOC_LPIKKDNBJNF_OFFSET UNITYSDK_OFFSET(0x14FC68B0)
#define JOMDMOLJLOC_OGNOJGGBKDJ_OFFSET UNITYSDK_OFFSET(0x14FC5400)
#define JOMDMOLJLOC_OMJKJPJNEEB_OFFSET UNITYSDK_OFFSET(0x14FC6250)
#define JOMDMOLJLOC_PELGIAKBDGD_OFFSET UNITYSDK_OFFSET(0x14FC5940)

inline static constexpr unsigned int JOMDMOLJLOC_TypeDefinitionIndex = 77099;

class JOMDMOLJLOC : public ::System::Object
{
public:
	static ::Foundation::Variable_1<::UnityEngine::Vector3> OGNOJGGBKDJ(::Nap::NapECS::EcsEntity* KECKGDFIALJ, ::GEIHCPAOKKK* OHPJHPEOFLD)
	{
		return ((::Foundation::Variable_1<::UnityEngine::Vector3>(*)(::Nap::NapECS::EcsEntity*, ::GEIHCPAOKKK*))((::PBYTE)hIl2Cpp + JOMDMOLJLOC_OGNOJGGBKDJ_OFFSET))(KECKGDFIALJ, OHPJHPEOFLD);
	}

	static ::Foundation::Variable_1<::UnityEngine::Vector3> KIKDJLLAILO(::Nap::NapECS::EcsEntity* KECKGDFIALJ, ::System::String* FPBNHPCLHMI)
	{
		return ((::Foundation::Variable_1<::UnityEngine::Vector3>(*)(::Nap::NapECS::EcsEntity*, ::System::String*))((::PBYTE)hIl2Cpp + JOMDMOLJLOC_KIKDJLLAILO_OFFSET))(KECKGDFIALJ, FPBNHPCLHMI);
	}

	static ::Foundation::Variable_1<::UnityEngine::Vector3> LHAAIHDADDA(::Nap::NapECS::EcsEntity* KECKGDFIALJ)
	{
		return ((::Foundation::Variable_1<::UnityEngine::Vector3>(*)(::Nap::NapECS::EcsEntity*))((::PBYTE)hIl2Cpp + JOMDMOLJLOC_LHAAIHDADDA_OFFSET))(KECKGDFIALJ);
	}

	static ::IJBOMPDBFHA DMDCDJLHKFO(::UnityEngine::Bounds FGJGBPJFJJI, ::UnityEngine::Transform* GKBJOPJKCLB)
	{
		return ((::IJBOMPDBFHA(*)(::UnityEngine::Bounds, ::UnityEngine::Transform*))((::PBYTE)hIl2Cpp + JOMDMOLJLOC_DMDCDJLHKFO_OFFSET))(FGJGBPJFJJI, GKBJOPJKCLB);
	}

	static ::IJBOMPDBFHA OMJKJPJNEEB(::UnityEngine::Collider* EHHHMFKHNAI)
	{
		return ((::IJBOMPDBFHA(*)(::UnityEngine::Collider*))((::PBYTE)hIl2Cpp + JOMDMOLJLOC_OMJKJPJNEEB_OFFSET))(EHHHMFKHNAI);
	}

	static ::Foundation::Variable_1<::UnityEngine::Vector3> PELGIAKBDGD(::Nap::NapECS::EcsEntity* KECKGDFIALJ, ::System::String* FPBNHPCLHMI)
	{
		return ((::Foundation::Variable_1<::UnityEngine::Vector3>(*)(::Nap::NapECS::EcsEntity*, ::System::String*))((::PBYTE)hIl2Cpp + JOMDMOLJLOC_PELGIAKBDGD_OFFSET))(KECKGDFIALJ, FPBNHPCLHMI);
	}

	static ::IJBOMPDBFHA LPIKKDNBJNF(::Nap::NapECS::EcsEntity* KECKGDFIALJ)
	{
		return ((::IJBOMPDBFHA(*)(::Nap::NapECS::EcsEntity*))((::PBYTE)hIl2Cpp + JOMDMOLJLOC_LPIKKDNBJNF_OFFSET))(KECKGDFIALJ);
	}
};
