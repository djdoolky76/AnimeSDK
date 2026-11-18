#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/UnityEngine/MonoBehaviour.h"

namespace System { class Object; }
namespace System { class String; }
namespace System::Collections::Generic { template <typename T1, typename T2> class Dictionary_2; }
namespace System::Collections::Generic { template <typename T> class List_1; }
namespace UnityEngine { class GameObject; }
namespace UnityEngine { class Transform; }

#define MOLEMOLE_MONOEFFECTSHAPE_GETRELATIVEPATH_OFFSET UNITYSDK_OFFSET(0x10432C20)
#define MOLEMOLE_MONOEFFECTSHAPE_IDAMDICFBIH_OFFSET UNITYSDK_OFFSET(0x10433230)
#define MOLEMOLE_MONOEFFECTSHAPE_ONDESTROY_OFFSET UNITYSDK_OFFSET(0x104333F0)
#define MOLEMOLE_MONOEFFECTSHAPE__CTOR_OFFSET UNITYSDK_OFFSET(0x104334F0)

namespace MoleMole
{
	inline static constexpr unsigned int MonoEffectShape_TypeDefinitionIndex = 42418;

	class MonoEffectShape : public ::UnityEngine::MonoBehaviour
	{
	public:
		::System::Collections::Generic::List_1<::System::Object*>* Configs; // 0x18
		::System::Collections::Generic::Dictionary_2<::System::Int32, ::System::String*>* childEffRelativePaths; // 0x20

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_MONOEFFECTSHAPE__CTOR_OFFSET))(this);
		}

		::System::String* GetRelativePath(::UnityEngine::GameObject* LMHNJIBCLJF, ::System::String* BKFDOCMFLFP)
		{
			return ((::System::String*(*)(::PVOID, ::UnityEngine::GameObject*, ::System::String*))((::PBYTE)hIl2Cpp + MOLEMOLE_MONOEFFECTSHAPE_GETRELATIVEPATH_OFFSET))(this, LMHNJIBCLJF, BKFDOCMFLFP);
		}

		::System::Void OnDestroy()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_MONOEFFECTSHAPE_ONDESTROY_OFFSET))(this);
		}

		::System::Boolean IDAMDICFBIH(::UnityEngine::Transform* LMHNJIBCLJF, ::UnityEngine::Transform* JNLBPMKIFNK)
		{
			return ((::System::Boolean(*)(::PVOID, ::UnityEngine::Transform*, ::UnityEngine::Transform*))((::PBYTE)hIl2Cpp + MOLEMOLE_MONOEFFECTSHAPE_IDAMDICFBIH_OFFSET))(this, LMHNJIBCLJF, JNLBPMKIFNK);
		}
	};
}
