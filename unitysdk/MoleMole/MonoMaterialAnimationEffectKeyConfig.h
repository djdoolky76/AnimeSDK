#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/UnityEngine/MonoBehaviour.h"

class GEIHCPAOKKK;
class GIGFDLPMNND;
namespace System { class String; }
namespace System::Collections::Generic { template <typename T> class List_1; }

#define MOLEMOLE_MONOMATERIALANIMATIONEFFECTKEYCONFIG_EXITEFFECT_OFFSET UNITYSDK_OFFSET(0x15AC3EA0)
#define MOLEMOLE_MONOMATERIALANIMATIONEFFECTKEYCONFIG_INIT_OFFSET UNITYSDK_OFFSET(0x15AC3AC0)
#define MOLEMOLE_MONOMATERIALANIMATIONEFFECTKEYCONFIG_STARTEFFECT_OFFSET UNITYSDK_OFFSET(0x15AC3B50)
#define MOLEMOLE_MONOMATERIALANIMATIONEFFECTKEYCONFIG_STOPEFFECT_OFFSET UNITYSDK_OFFSET(0x15AC3D30)
#define MOLEMOLE_MONOMATERIALANIMATIONEFFECTKEYCONFIG__CTOR_OFFSET UNITYSDK_OFFSET(0x15AC4010)

namespace MoleMole
{
	inline static constexpr unsigned int MonoMaterialAnimationEffectKeyConfig_TypeDefinitionIndex = 49311;

	class MonoMaterialAnimationEffectKeyConfig : public ::UnityEngine::MonoBehaviour
	{
	public:
		::System::Collections::Generic::List_1<::System::String*>* effectKeys; // 0x18

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_MONOMATERIALANIMATIONEFFECTKEYCONFIG__CTOR_OFFSET))(this);
		}

		::System::Void Init()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_MONOMATERIALANIMATIONEFFECTKEYCONFIG_INIT_OFFSET))(this);
		}

		::System::Void StartEffect(::GEIHCPAOKKK* OHPJHPEOFLD, ::GIGFDLPMNND* NLNNFINONOI)
		{
			return ((::System::Void(*)(::PVOID, ::GEIHCPAOKKK*, ::GIGFDLPMNND*))((::PBYTE)hIl2Cpp + MOLEMOLE_MONOMATERIALANIMATIONEFFECTKEYCONFIG_STARTEFFECT_OFFSET))(this, OHPJHPEOFLD, NLNNFINONOI);
		}

		::System::Void StopEffect(::GIGFDLPMNND* NLNNFINONOI)
		{
			return ((::System::Void(*)(::PVOID, ::GIGFDLPMNND*))((::PBYTE)hIl2Cpp + MOLEMOLE_MONOMATERIALANIMATIONEFFECTKEYCONFIG_STOPEFFECT_OFFSET))(this, NLNNFINONOI);
		}

		::System::Void ExitEffect(::GIGFDLPMNND* NLNNFINONOI)
		{
			return ((::System::Void(*)(::PVOID, ::GIGFDLPMNND*))((::PBYTE)hIl2Cpp + MOLEMOLE_MONOMATERIALANIMATIONEFFECTKEYCONFIG_EXITEFFECT_OFFSET))(this, NLNNFINONOI);
		}
	};
}
