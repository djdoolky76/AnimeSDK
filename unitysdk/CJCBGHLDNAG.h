#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/Client/BehaviorBase.h"
#include "unitysdk/UnityEngine/Vector2.h"
#include "unitysdk/UnityEngine/Vector3.h"
namespace RPG::Client { class MonoEffectPluginIKAim; }
namespace RPG::Client { template <typename T1, typename T2> class AimEvaluator_2; }
namespace System { class Object; }
namespace System { class String; }
namespace UnityEngine { class MonoBehaviour; }

#define CJCBGHLDNAG_CTOR_OFFSET UNITYSDK_OFFSET(0xCF94140)
#define CJCBGHLDNAG_DISPOSE_OFFSET UNITYSDK_OFFSET(0xCF93060)
#define CJCBGHLDNAG_DLIMDDHNACG_OFFSET UNITYSDK_OFFSET(0xCF93350)
#define CJCBGHLDNAG_HCCKBPDFINA_OFFSET UNITYSDK_OFFSET(0xCF932F0)
#define CJCBGHLDNAG_HPNDIIPEFLJ_OFFSET UNITYSDK_OFFSET(0xCF93280)
#define CJCBGHLDNAG_ILADHPKHIOA_1_OFFSET UNITYSDK_OFFSET(0xCF93AE0)
#define CJCBGHLDNAG_ILADHPKHIOA_OFFSET UNITYSDK_OFFSET(0xCF93680)
#define CJCBGHLDNAG_KPJGDHLENIP_OFFSET UNITYSDK_OFFSET(0xCF92FF0)
#define CJCBGHLDNAG_LLPOPLFFLMP_OFFSET UNITYSDK_OFFSET(0xCF93E40)
#define CJCBGHLDNAG_OMCHFCDMIPL_OFFSET UNITYSDK_OFFSET(0xCF930D0)

inline static constexpr unsigned int CJCBGHLDNAG_TypeDefinitionIndex = 69879;

	class CJCBGHLDNAG : public ::RPG::Client::BehaviorBase
	{
	public:
		::Il2CppArray<::System::Object*>* FIELMOCJNEH; // 0x18
		::System::Single PJJLEJDPNHI; // 0x20
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CJCBGHLDNAG_CTOR_OFFSET))(this);
		}

		::System::Void KPJGDHLENIP(::UnityEngine::MonoBehaviour* a1)
		{
			return ((::System::Void(*)(::PVOID, ::UnityEngine::MonoBehaviour*))((::PBYTE)hIl2Cpp + CJCBGHLDNAG_KPJGDHLENIP_OFFSET))(this, a1);
		}

		::System::Void Dispose()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CJCBGHLDNAG_DISPOSE_OFFSET))(this);
		}

		::System::Void OMCHFCDMIPL()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CJCBGHLDNAG_OMCHFCDMIPL_OFFSET))(this);
		}

		::System::Void HCCKBPDFINA(::System::Single a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::Single))((::PBYTE)hIl2Cpp + CJCBGHLDNAG_HCCKBPDFINA_OFFSET))(this, a1);
		}

		::System::Void DLIMDDHNACG(::System::Single a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::Single))((::PBYTE)hIl2Cpp + CJCBGHLDNAG_DLIMDDHNACG_OFFSET))(this, a1);
		}

		::System::Void ILADHPKHIOA(::System::String* a1, ::UnityEngine::Vector3 a2, ::System::Single a3, ::UnityEngine::Vector2 a4)
		{
			return ((::System::Void(*)(::PVOID, ::System::String*, ::UnityEngine::Vector3, ::System::Single, ::UnityEngine::Vector2))((::PBYTE)hIl2Cpp + CJCBGHLDNAG_ILADHPKHIOA_OFFSET))(this, a1, a2, a3, a4);
		}

		::System::Void ILADHPKHIOA_1(::System::String* a1, ::RPG::Client::AimEvaluator_2<::UnityEngine::Vector3, ::System::Boolean>* a2, ::System::Single a3, ::UnityEngine::Vector2 a4)
		{
			return ((::System::Void(*)(::PVOID, ::System::String*, ::RPG::Client::AimEvaluator_2<::UnityEngine::Vector3, ::System::Boolean>*, ::System::Single, ::UnityEngine::Vector2))((::PBYTE)hIl2Cpp + CJCBGHLDNAG_ILADHPKHIOA_1_OFFSET))(this, a1, a2, a3, a4);
		}

		::System::Void LLPOPLFFLMP(::System::String* a1, ::System::Single a2)
		{
			return ((::System::Void(*)(::PVOID, ::System::String*, ::System::Single))((::PBYTE)hIl2Cpp + CJCBGHLDNAG_LLPOPLFFLMP_OFFSET))(this, a1, a2);
		}

		::RPG::Client::MonoEffectPluginIKAim* HPNDIIPEFLJ()
		{
			return ((::RPG::Client::MonoEffectPluginIKAim*(*)(::PVOID))((::PBYTE)hIl2Cpp + CJCBGHLDNAG_HPNDIIPEFLJ_OFFSET))(this);
		}

	};
