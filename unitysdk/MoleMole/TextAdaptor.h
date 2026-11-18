#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/MoleMole/MonoUIAdaptor.h"

namespace MoleMole { class MonoUIText; }
namespace UnityEngine::UI { class Text; }

#define MOLEMOLE_TEXTADAPTOR_GET_ISCHANGED_OFFSET UNITYSDK_OFFSET(0x18120B90)
#define MOLEMOLE_TEXTADAPTOR_SET_ISCHANGED_OFFSET UNITYSDK_OFFSET(0x18120BB0)
#define MOLEMOLE_TEXTADAPTOR_UPDATEPARAMS_OFFSET UNITYSDK_OFFSET(0x18120C80)
#define MOLEMOLE_TEXTADAPTOR__CTOR_OFFSET UNITYSDK_OFFSET(0x18120C10)

namespace MoleMole
{
	inline static constexpr unsigned int TextAdaptor_TypeDefinitionIndex = 90551;

	class TextAdaptor : public ::MoleMole::MonoUIAdaptor
	{
	public:
		::MoleMole::MonoUIText* AdaptorText; // 0x10

		::System::Void _ctor(::UnityEngine::UI::Text* text)
		{
			return ((::System::Void(*)(::PVOID, ::UnityEngine::UI::Text*))((::PBYTE)hIl2Cpp + MOLEMOLE_TEXTADAPTOR__CTOR_OFFSET))(this, text);
		}

		::System::Boolean get_IsChanged()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_TEXTADAPTOR_GET_ISCHANGED_OFFSET))(this);
		}

		::System::Void set_IsChanged(::System::Boolean value)
		{
			return ((::System::Void(*)(::PVOID, ::System::Boolean))((::PBYTE)hIl2Cpp + MOLEMOLE_TEXTADAPTOR_SET_ISCHANGED_OFFSET))(this, value);
		}

		::System::Void UpdateParams(::UnityEngine::UI::Text* text)
		{
			return ((::System::Void(*)(::PVOID, ::UnityEngine::UI::Text*))((::PBYTE)hIl2Cpp + MOLEMOLE_TEXTADAPTOR_UPDATEPARAMS_OFFSET))(this, text);
		}
	};
}
