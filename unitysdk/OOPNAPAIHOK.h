#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/MulticastDelegate.h"

namespace MoleMole { class UIActivePropsWindowContext; }
namespace System { class AsyncCallback; }
namespace System { class IAsyncResult; }
namespace System { class Object; }

#define OOPNAPAIHOK_BEGININVOKE_OFFSET UNITYSDK_OFFSET(0x11B4BE80)
#define OOPNAPAIHOK_ENDINVOKE_OFFSET UNITYSDK_OFFSET(0x11B4BEB0)
#define OOPNAPAIHOK_INVOKE_OFFSET UNITYSDK_OFFSET(0x11B4B960)
#define OOPNAPAIHOK__CTOR_OFFSET UNITYSDK_OFFSET(0x11B4B950)

inline static constexpr unsigned int OOPNAPAIHOK_TypeDefinitionIndex = 60488;

class OOPNAPAIHOK : public ::System::MulticastDelegate
{
public:
	::System::Void _ctor(::System::Object* FABAAKLFDHN, ::System::IntPtr LJEPPLANHIL)
	{
		return ((::System::Void(*)(::PVOID, ::System::Object*, ::System::IntPtr))((::PBYTE)hIl2Cpp + OOPNAPAIHOK__CTOR_OFFSET))(this, FABAAKLFDHN, LJEPPLANHIL);
	}

	::MoleMole::UIActivePropsWindowContext* Invoke(::MoleMole::UIActivePropsWindowContext* AAOCANGHBDG)
	{
		return ((::MoleMole::UIActivePropsWindowContext*(*)(::PVOID, ::MoleMole::UIActivePropsWindowContext*))((::PBYTE)hIl2Cpp + OOPNAPAIHOK_INVOKE_OFFSET))(this, AAOCANGHBDG);
	}

	::System::IAsyncResult* BeginInvoke(::MoleMole::UIActivePropsWindowContext* AAOCANGHBDG, ::System::AsyncCallback* EJGDHCIBCJH, ::System::Object* FABAAKLFDHN)
	{
		return ((::System::IAsyncResult*(*)(::PVOID, ::MoleMole::UIActivePropsWindowContext*, ::System::AsyncCallback*, ::System::Object*))((::PBYTE)hIl2Cpp + OOPNAPAIHOK_BEGININVOKE_OFFSET))(this, AAOCANGHBDG, EJGDHCIBCJH, FABAAKLFDHN);
	}

	::MoleMole::UIActivePropsWindowContext* EndInvoke(::System::IAsyncResult* IGAAKDOIPNN)
	{
		return ((::MoleMole::UIActivePropsWindowContext*(*)(::PVOID, ::System::IAsyncResult*))((::PBYTE)hIl2Cpp + OOPNAPAIHOK_ENDINVOKE_OFFSET))(this, IGAAKDOIPNN);
	}
};
