#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/MulticastDelegate.h"

namespace System { class AsyncCallback; }
namespace System { class IAsyncResult; }
namespace System { class Object; }
namespace UnityEngine { class Transform; }

#define MOLEMOLE_MONOGRIDSCROLLER_AMJMMKFPEKC_BEGININVOKE_OFFSET UNITYSDK_OFFSET(0x12B6CFF0)
#define MOLEMOLE_MONOGRIDSCROLLER_AMJMMKFPEKC_ENDINVOKE_OFFSET UNITYSDK_OFFSET(0x12B6D070)
#define MOLEMOLE_MONOGRIDSCROLLER_AMJMMKFPEKC_INVOKE_OFFSET UNITYSDK_OFFSET(0x12B67420)
#define MOLEMOLE_MONOGRIDSCROLLER_AMJMMKFPEKC__CTOR_OFFSET UNITYSDK_OFFSET(0x12B6CF60)

namespace MoleMole
{
	inline static constexpr unsigned int MonoGridScroller_AMJMMKFPEKC_TypeDefinitionIndex = 69052;

	class MonoGridScroller_AMJMMKFPEKC : public ::System::MulticastDelegate
	{
	public:
		::System::Void _ctor(::System::Object* FABAAKLFDHN, ::System::IntPtr LJEPPLANHIL)
		{
			return ((::System::Void(*)(::PVOID, ::System::Object*, ::System::IntPtr))((::PBYTE)hIl2Cpp + MOLEMOLE_MONOGRIDSCROLLER_AMJMMKFPEKC__CTOR_OFFSET))(this, FABAAKLFDHN, LJEPPLANHIL);
		}

		::System::Void Invoke(::UnityEngine::Transform* LNEEMAGIHLB, ::System::Int32 ABHBKFJKINO)
		{
			return ((::System::Void(*)(::PVOID, ::UnityEngine::Transform*, ::System::Int32))((::PBYTE)hIl2Cpp + MOLEMOLE_MONOGRIDSCROLLER_AMJMMKFPEKC_INVOKE_OFFSET))(this, LNEEMAGIHLB, ABHBKFJKINO);
		}

		::System::IAsyncResult* BeginInvoke(::UnityEngine::Transform* LNEEMAGIHLB, ::System::Int32 ABHBKFJKINO, ::System::AsyncCallback* EJGDHCIBCJH, ::System::Object* FABAAKLFDHN)
		{
			return ((::System::IAsyncResult*(*)(::PVOID, ::UnityEngine::Transform*, ::System::Int32, ::System::AsyncCallback*, ::System::Object*))((::PBYTE)hIl2Cpp + MOLEMOLE_MONOGRIDSCROLLER_AMJMMKFPEKC_BEGININVOKE_OFFSET))(this, LNEEMAGIHLB, ABHBKFJKINO, EJGDHCIBCJH, FABAAKLFDHN);
		}

		::System::Void EndInvoke(::System::IAsyncResult* IGAAKDOIPNN)
		{
			return ((::System::Void(*)(::PVOID, ::System::IAsyncResult*))((::PBYTE)hIl2Cpp + MOLEMOLE_MONOGRIDSCROLLER_AMJMMKFPEKC_ENDINVOKE_OFFSET))(this, IGAAKDOIPNN);
		}
	};
}
