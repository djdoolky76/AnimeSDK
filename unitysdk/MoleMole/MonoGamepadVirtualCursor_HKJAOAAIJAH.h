#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/MulticastDelegate.h"
#include "unitysdk/UnityEngine/Vector2.h"

namespace System { class AsyncCallback; }
namespace System { class IAsyncResult; }
namespace System { class Object; }

#define MOLEMOLE_MONOGAMEPADVIRTUALCURSOR_HKJAOAAIJAH_BEGININVOKE_OFFSET UNITYSDK_OFFSET(0x14AFFB10)
#define MOLEMOLE_MONOGAMEPADVIRTUALCURSOR_HKJAOAAIJAH_ENDINVOKE_OFFSET UNITYSDK_OFFSET(0x14AFFC30)
#define MOLEMOLE_MONOGAMEPADVIRTUALCURSOR_HKJAOAAIJAH_INVOKE_OFFSET UNITYSDK_OFFSET(0x14AFF6A0)
#define MOLEMOLE_MONOGAMEPADVIRTUALCURSOR_HKJAOAAIJAH__CTOR_OFFSET UNITYSDK_OFFSET(0x14AFF690)

namespace MoleMole
{
	inline static constexpr unsigned int MonoGamepadVirtualCursor_HKJAOAAIJAH_TypeDefinitionIndex = 59848;

	class MonoGamepadVirtualCursor_HKJAOAAIJAH : public ::System::MulticastDelegate
	{
	public:
		::System::Void _ctor(::System::Object* FABAAKLFDHN, ::System::IntPtr LJEPPLANHIL)
		{
			return ((::System::Void(*)(::PVOID, ::System::Object*, ::System::IntPtr))((::PBYTE)hIl2Cpp + MOLEMOLE_MONOGAMEPADVIRTUALCURSOR_HKJAOAAIJAH__CTOR_OFFSET))(this, FABAAKLFDHN, LJEPPLANHIL);
		}

		::UnityEngine::Vector2 Invoke(::UnityEngine::Vector2 LFLJMBPFLDI, ::UnityEngine::Vector2 HBEKKMCBGBK, ::System::Single KILPCOMOCMD, ::System::Single BBCODANAFGI, ::System::Single KBHFBLJPFJH, ::System::Single DGMGMEICCGE, ::UnityEngine::Vector2 MBCOOAOIHGG)
		{
			return ((::UnityEngine::Vector2(*)(::PVOID, ::UnityEngine::Vector2, ::UnityEngine::Vector2, ::System::Single, ::System::Single, ::System::Single, ::System::Single, ::UnityEngine::Vector2))((::PBYTE)hIl2Cpp + MOLEMOLE_MONOGAMEPADVIRTUALCURSOR_HKJAOAAIJAH_INVOKE_OFFSET))(this, LFLJMBPFLDI, HBEKKMCBGBK, KILPCOMOCMD, BBCODANAFGI, KBHFBLJPFJH, DGMGMEICCGE, MBCOOAOIHGG);
		}

		::System::IAsyncResult* BeginInvoke(::UnityEngine::Vector2 LFLJMBPFLDI, ::UnityEngine::Vector2 HBEKKMCBGBK, ::System::Single KILPCOMOCMD, ::System::Single BBCODANAFGI, ::System::Single KBHFBLJPFJH, ::System::Single DGMGMEICCGE, ::UnityEngine::Vector2 MBCOOAOIHGG, ::System::AsyncCallback* EJGDHCIBCJH, ::System::Object* FABAAKLFDHN)
		{
			return ((::System::IAsyncResult*(*)(::PVOID, ::UnityEngine::Vector2, ::UnityEngine::Vector2, ::System::Single, ::System::Single, ::System::Single, ::System::Single, ::UnityEngine::Vector2, ::System::AsyncCallback*, ::System::Object*))((::PBYTE)hIl2Cpp + MOLEMOLE_MONOGAMEPADVIRTUALCURSOR_HKJAOAAIJAH_BEGININVOKE_OFFSET))(this, LFLJMBPFLDI, HBEKKMCBGBK, KILPCOMOCMD, BBCODANAFGI, KBHFBLJPFJH, DGMGMEICCGE, MBCOOAOIHGG, EJGDHCIBCJH, FABAAKLFDHN);
		}

		::UnityEngine::Vector2 EndInvoke(::System::IAsyncResult* IGAAKDOIPNN)
		{
			return ((::UnityEngine::Vector2(*)(::PVOID, ::System::IAsyncResult*))((::PBYTE)hIl2Cpp + MOLEMOLE_MONOGAMEPADVIRTUALCURSOR_HKJAOAAIJAH_ENDINVOKE_OFFSET))(this, IGAAKDOIPNN);
		}
	};
}
