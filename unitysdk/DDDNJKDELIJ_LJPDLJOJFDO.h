#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/MulticastDelegate.h"

namespace MoleMole { class UIControllerContextBase; }
namespace MoleMole { class UIWindowController; }
namespace System { class AsyncCallback; }
namespace System { class IAsyncResult; }
namespace System { class Object; }

#define DDDNJKDELIJ_LJPDLJOJFDO_BEGININVOKE_OFFSET UNITYSDK_OFFSET(0x13E3E690)
#define DDDNJKDELIJ_LJPDLJOJFDO_ENDINVOKE_OFFSET UNITYSDK_OFFSET(0x13E3E6D0)
#define DDDNJKDELIJ_LJPDLJOJFDO_INVOKE_OFFSET UNITYSDK_OFFSET(0x13E3E370)
#define DDDNJKDELIJ_LJPDLJOJFDO__CTOR_OFFSET UNITYSDK_OFFSET(0x13E3E360)

inline static constexpr unsigned int DDDNJKDELIJ_LJPDLJOJFDO_TypeDefinitionIndex = 92596;

class DDDNJKDELIJ_LJPDLJOJFDO : public ::System::MulticastDelegate
{
public:
	::System::Void _ctor(::System::Object* FABAAKLFDHN, ::System::IntPtr LJEPPLANHIL)
	{
		return ((::System::Void(*)(::PVOID, ::System::Object*, ::System::IntPtr))((::PBYTE)hIl2Cpp + DDDNJKDELIJ_LJPDLJOJFDO__CTOR_OFFSET))(this, FABAAKLFDHN, LJEPPLANHIL);
	}

	::System::Void Invoke(::MoleMole::UIWindowController*& MINAMEKOPMC, ::MoleMole::UIControllerContextBase* AAOCANGHBDG)
	{
		return ((::System::Void(*)(::PVOID, ::MoleMole::UIWindowController*&, ::MoleMole::UIControllerContextBase*))((::PBYTE)hIl2Cpp + DDDNJKDELIJ_LJPDLJOJFDO_INVOKE_OFFSET))(this, MINAMEKOPMC, AAOCANGHBDG);
	}

	::System::IAsyncResult* BeginInvoke(::MoleMole::UIWindowController*& MINAMEKOPMC, ::MoleMole::UIControllerContextBase* AAOCANGHBDG, ::System::AsyncCallback* EJGDHCIBCJH, ::System::Object* FABAAKLFDHN)
	{
		return ((::System::IAsyncResult*(*)(::PVOID, ::MoleMole::UIWindowController*&, ::MoleMole::UIControllerContextBase*, ::System::AsyncCallback*, ::System::Object*))((::PBYTE)hIl2Cpp + DDDNJKDELIJ_LJPDLJOJFDO_BEGININVOKE_OFFSET))(this, MINAMEKOPMC, AAOCANGHBDG, EJGDHCIBCJH, FABAAKLFDHN);
	}

	::System::Void EndInvoke(::MoleMole::UIWindowController*& MINAMEKOPMC, ::System::IAsyncResult* IGAAKDOIPNN)
	{
		return ((::System::Void(*)(::PVOID, ::MoleMole::UIWindowController*&, ::System::IAsyncResult*))((::PBYTE)hIl2Cpp + DDDNJKDELIJ_LJPDLJOJFDO_ENDINVOKE_OFFSET))(this, MINAMEKOPMC, IGAAKDOIPNN);
	}
};
