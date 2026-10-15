#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/TurnState.h"
#include "unitysdk/System/MulticastDelegate.h"
class OJAOEIMKKKE;
namespace System { class AsyncCallback; }
namespace System { class IAsyncResult; }
namespace System { class Object; }
namespace System::Collections::Generic { template <typename T> class List_1; }

#define XLUA_INTERNALGLOBALS___GEN_DELEGATE_B00_DD7BD00F_BEGININVOKE_OFFSET UNITYSDK_OFFSET(0x14DB4B50)
#define XLUA_INTERNALGLOBALS___GEN_DELEGATE_B00_DD7BD00F_CTOR_OFFSET UNITYSDK_OFFSET(0x14DB4A50)
#define XLUA_INTERNALGLOBALS___GEN_DELEGATE_B00_DD7BD00F_ENDINVOKE_OFFSET UNITYSDK_OFFSET(0x14DB4BB0)
#define XLUA_INTERNALGLOBALS___GEN_DELEGATE_B00_DD7BD00F_INVOKE_OFFSET UNITYSDK_OFFSET(0x14DB4B40)

namespace XLua
{
	class InternalGlobals___GEN_DELEGATE_B00_DD7BD00F : public ::System::MulticastDelegate
	{
	public:
		::System::Void _ctor(::System::Object* a1, ::System::IntPtr a2)
		{
			return ((::System::Void(*)(::PVOID, ::System::Object*, ::System::IntPtr))((::PBYTE)hIl2Cpp + XLUA_INTERNALGLOBALS___GEN_DELEGATE_B00_DD7BD00F_CTOR_OFFSET))(this, a1, a2);
		}

		::System::Void Invoke(::System::Collections::Generic::List_1<::OJAOEIMKKKE*>* a1, ::RPG::GameCore::TurnState a2)
		{
			return ((::System::Void(*)(::PVOID, ::System::Collections::Generic::List_1<::OJAOEIMKKKE*>*, ::RPG::GameCore::TurnState))((::PBYTE)hIl2Cpp + XLUA_INTERNALGLOBALS___GEN_DELEGATE_B00_DD7BD00F_INVOKE_OFFSET))(this, a1, a2);
		}

		::System::IAsyncResult* BeginInvoke(::System::Collections::Generic::List_1<::OJAOEIMKKKE*>* a1, ::RPG::GameCore::TurnState a2, ::System::AsyncCallback* a3, ::System::Object* a4)
		{
			return ((::System::IAsyncResult*(*)(::PVOID, ::System::Collections::Generic::List_1<::OJAOEIMKKKE*>*, ::RPG::GameCore::TurnState, ::System::AsyncCallback*, ::System::Object*))((::PBYTE)hIl2Cpp + XLUA_INTERNALGLOBALS___GEN_DELEGATE_B00_DD7BD00F_BEGININVOKE_OFFSET))(this, a1, a2, a3, a4);
		}

		::System::Void EndInvoke(::System::IAsyncResult* a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::IAsyncResult*))((::PBYTE)hIl2Cpp + XLUA_INTERNALGLOBALS___GEN_DELEGATE_B00_DD7BD00F_ENDINVOKE_OFFSET))(this, a1);
		}

	};
}
