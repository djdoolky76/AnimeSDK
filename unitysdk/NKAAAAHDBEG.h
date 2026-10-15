#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"
class CruiseOrbitBGCurvePlugin;
namespace System { class String; }
namespace System::Collections::Generic { template <typename T> class List_1; }
namespace UnityEngine { class GameObject; }
namespace UnityEngine { class Transform; }

#define NKAAAAHDBEG_ABKBOGIGAEH_OFFSET UNITYSDK_OFFSET(0xBC26220)
#define NKAAAAHDBEG_BDPJDEHAEOP_OFFSET UNITYSDK_OFFSET(0xBC25DC0)
#define NKAAAAHDBEG_BJMNKLGEMPM_OFFSET UNITYSDK_OFFSET(0xBC26310)
#define NKAAAAHDBEG_CTOR_OFFSET UNITYSDK_OFFSET(0xBC263E0)
#define NKAAAAHDBEG_KPJGDHLENIP_OFFSET UNITYSDK_OFFSET(0xBC25C60)
#define NKAAAAHDBEG_PJGLPOGNACN_OFFSET UNITYSDK_OFFSET(0xBC26390)

inline static constexpr unsigned int NKAAAAHDBEG_TypeDefinitionIndex = 57644;

	class NKAAAAHDBEG : public ::System::Object
	{
	public:
		::UnityEngine::GameObject* OLAMDDNDGMC; // 0x10
		::System::Collections::Generic::List_1<::CruiseOrbitBGCurvePlugin*>* BEJLAIOOEFB; // 0x18
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + NKAAAAHDBEG_CTOR_OFFSET))(this);
		}

		::System::Void KPJGDHLENIP(::UnityEngine::Transform* a1)
		{
			return ((::System::Void(*)(::PVOID, ::UnityEngine::Transform*))((::PBYTE)hIl2Cpp + NKAAAAHDBEG_KPJGDHLENIP_OFFSET))(this, a1);
		}

		::CruiseOrbitBGCurvePlugin* BDPJDEHAEOP(::System::String* a1, ::System::String* a2)
		{
			return ((::CruiseOrbitBGCurvePlugin*(*)(::PVOID, ::System::String*, ::System::String*))((::PBYTE)hIl2Cpp + NKAAAAHDBEG_BDPJDEHAEOP_OFFSET))(this, a1, a2);
		}

		::System::Void ABKBOGIGAEH(::CruiseOrbitBGCurvePlugin* a1)
		{
			return ((::System::Void(*)(::PVOID, ::CruiseOrbitBGCurvePlugin*))((::PBYTE)hIl2Cpp + NKAAAAHDBEG_ABKBOGIGAEH_OFFSET))(this, a1);
		}

		::System::Void BJMNKLGEMPM()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + NKAAAAHDBEG_BJMNKLGEMPM_OFFSET))(this);
		}

		::UnityEngine::Transform* PJGLPOGNACN()
		{
			return ((::UnityEngine::Transform*(*)(::PVOID))((::PBYTE)hIl2Cpp + NKAAAAHDBEG_PJGLPOGNACN_OFFSET))(this);
		}

	};
