#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/GNLGPDNGNPG.h"
#include "unitysdk/UnityEngine/MonoBehaviour.h"

namespace System { class String; }
namespace UnityEngine { class Material; }
namespace UnityEngine { class Texture2D; }
namespace UnityEngine::UI { class Image; }

#define MOLEMOLE_MONOUIIMAGEMATTEXTURECHANGE_APPLY_OFFSET UNITYSDK_OFFSET(0x12499A60)
#define MOLEMOLE_MONOUIIMAGEMATTEXTURECHANGE_GET_CHANGETAG_OFFSET UNITYSDK_OFFSET(0x12499A50)
#define MOLEMOLE_MONOUIIMAGEMATTEXTURECHANGE_GET_CHANGETYPE_OFFSET UNITYSDK_OFFSET(0x12499E80)
#define MOLEMOLE_MONOUIIMAGEMATTEXTURECHANGE_JKHLCPPJJON_OFFSET UNITYSDK_OFFSET(0x12499C10)
#define MOLEMOLE_MONOUIIMAGEMATTEXTURECHANGE_ONDISABLE_OFFSET UNITYSDK_OFFSET(0x12499F10)
#define MOLEMOLE_MONOUIIMAGEMATTEXTURECHANGE_ONENABLE_OFFSET UNITYSDK_OFFSET(0x12499E90)
#define MOLEMOLE_MONOUIIMAGEMATTEXTURECHANGE__CTOR_OFFSET UNITYSDK_OFFSET(0x12499F90)

namespace MoleMole
{
	inline static constexpr unsigned int MonoUIImageMatTextureChange_TypeDefinitionIndex = 55169;

	class MonoUIImageMatTextureChange : public ::UnityEngine::MonoBehaviour
	{
	public:
		::System::String* matTag; // 0x18
		::Il2CppArray<::UnityEngine::UI::Image*>* uImages; // 0x20
		::System::String* texName; // 0x28
		::UnityEngine::Texture2D* tex; // 0x30

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_MONOUIIMAGEMATTEXTURECHANGE__CTOR_OFFSET))(this);
		}

		::System::String* get_ChangeTag()
		{
			return ((::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_MONOUIIMAGEMATTEXTURECHANGE_GET_CHANGETAG_OFFSET))(this);
		}

		::System::Void Apply()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_MONOUIIMAGEMATTEXTURECHANGE_APPLY_OFFSET))(this);
		}

		::GNLGPDNGNPG get_ChangeType()
		{
			return ((::GNLGPDNGNPG(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_MONOUIIMAGEMATTEXTURECHANGE_GET_CHANGETYPE_OFFSET))(this);
		}

		::System::Void OnEnable()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_MONOUIIMAGEMATTEXTURECHANGE_ONENABLE_OFFSET))(this);
		}

		::System::Void OnDisable()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_MONOUIIMAGEMATTEXTURECHANGE_ONDISABLE_OFFSET))(this);
		}

		::System::Void JKHLCPPJJON(::UnityEngine::Material* AEIHFBNNLBP)
		{
			return ((::System::Void(*)(::PVOID, ::UnityEngine::Material*))((::PBYTE)hIl2Cpp + MOLEMOLE_MONOUIIMAGEMATTEXTURECHANGE_JKHLCPPJJON_OFFSET))(this, AEIHFBNNLBP);
		}
	};
}
