#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/MulticastDelegate.h"

namespace System { class AsyncCallback; }
namespace System { class IAsyncResult; }
namespace System { class Object; }

#define MOLEMOLE_TYPETEXTCOMPONENT_MPDLPMIBGHK_BEGININVOKE_OFFSET UNITYSDK_OFFSET(0x17E7EF90)
#define MOLEMOLE_TYPETEXTCOMPONENT_MPDLPMIBGHK_ENDINVOKE_OFFSET UNITYSDK_OFFSET(0x17E7EFC0)
#define MOLEMOLE_TYPETEXTCOMPONENT_MPDLPMIBGHK_INVOKE_OFFSET UNITYSDK_OFFSET(0x17E7ED00)
#define MOLEMOLE_TYPETEXTCOMPONENT_MPDLPMIBGHK__CTOR_OFFSET UNITYSDK_OFFSET(0x17E7ECF0)

namespace MoleMole
{
	inline static constexpr unsigned int TypeTextComponent_MPDLPMIBGHK_TypeDefinitionIndex = 91393;

	class TypeTextComponent_MPDLPMIBGHK : public ::System::MulticastDelegate
	{
	public:
		::System::Void _ctor(::System::Object* FABAAKLFDHN, ::System::IntPtr LJEPPLANHIL)
		{
			return ((::System::Void(*)(::PVOID, ::System::Object*, ::System::IntPtr))((::PBYTE)hIl2Cpp + MOLEMOLE_TYPETEXTCOMPONENT_MPDLPMIBGHK__CTOR_OFFSET))(this, FABAAKLFDHN, LJEPPLANHIL);
		}

		::System::Void Invoke()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_TYPETEXTCOMPONENT_MPDLPMIBGHK_INVOKE_OFFSET))(this);
		}

		::System::IAsyncResult* BeginInvoke(::System::AsyncCallback* EJGDHCIBCJH, ::System::Object* FABAAKLFDHN)
		{
			return ((::System::IAsyncResult*(*)(::PVOID, ::System::AsyncCallback*, ::System::Object*))((::PBYTE)hIl2Cpp + MOLEMOLE_TYPETEXTCOMPONENT_MPDLPMIBGHK_BEGININVOKE_OFFSET))(this, EJGDHCIBCJH, FABAAKLFDHN);
		}

		::System::Void EndInvoke(::System::IAsyncResult* IGAAKDOIPNN)
		{
			return ((::System::Void(*)(::PVOID, ::System::IAsyncResult*))((::PBYTE)hIl2Cpp + MOLEMOLE_TYPETEXTCOMPONENT_MPDLPMIBGHK_ENDINVOKE_OFFSET))(this, IGAAKDOIPNN);
		}
	};
}
