#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/MulticastDelegate.h"
class MBBEBLGELAP;
namespace System { class AsyncCallback; }
namespace System { class IAsyncResult; }
namespace System { class Object; }
namespace System { class String; }

#define XLUA_INTERNALGLOBALS___GEN_DELEGATE_B00_D3EA5A78_BEGININVOKE_OFFSET UNITYSDK_OFFSET(0x14DB43A0)
#define XLUA_INTERNALGLOBALS___GEN_DELEGATE_B00_D3EA5A78_CTOR_OFFSET UNITYSDK_OFFSET(0x14DB42A0)
#define XLUA_INTERNALGLOBALS___GEN_DELEGATE_B00_D3EA5A78_ENDINVOKE_OFFSET UNITYSDK_OFFSET(0x14DB43E0)
#define XLUA_INTERNALGLOBALS___GEN_DELEGATE_B00_D3EA5A78_INVOKE_OFFSET UNITYSDK_OFFSET(0x14DB4390)

namespace XLua
{
	inline static constexpr unsigned int InternalGlobals___GEN_DELEGATE_B00_D3EA5A78_TypeDefinitionIndex = 50187;

	class InternalGlobals___GEN_DELEGATE_B00_D3EA5A78 : public ::System::MulticastDelegate
	{
	public:
		::System::Void _ctor(::System::Object* a1, ::System::IntPtr a2)
		{
			return ((::System::Void(*)(::PVOID, ::System::Object*, ::System::IntPtr))((::PBYTE)hIl2Cpp + XLUA_INTERNALGLOBALS___GEN_DELEGATE_B00_D3EA5A78_CTOR_OFFSET))(this, a1, a2);
		}

		::System::Boolean Invoke(::MBBEBLGELAP* a1, ::System::String* a2)
		{
			return ((::System::Boolean(*)(::PVOID, ::MBBEBLGELAP*, ::System::String*))((::PBYTE)hIl2Cpp + XLUA_INTERNALGLOBALS___GEN_DELEGATE_B00_D3EA5A78_INVOKE_OFFSET))(this, a1, a2);
		}

		::System::IAsyncResult* BeginInvoke(::MBBEBLGELAP* a1, ::System::String* a2, ::System::AsyncCallback* a3, ::System::Object* a4)
		{
			return ((::System::IAsyncResult*(*)(::PVOID, ::MBBEBLGELAP*, ::System::String*, ::System::AsyncCallback*, ::System::Object*))((::PBYTE)hIl2Cpp + XLUA_INTERNALGLOBALS___GEN_DELEGATE_B00_D3EA5A78_BEGININVOKE_OFFSET))(this, a1, a2, a3, a4);
		}

		::System::Boolean EndInvoke(::System::String* a1, ::System::IAsyncResult* a2)
		{
			return ((::System::Boolean(*)(::PVOID, ::System::String*, ::System::IAsyncResult*))((::PBYTE)hIl2Cpp + XLUA_INTERNALGLOBALS___GEN_DELEGATE_B00_D3EA5A78_ENDINVOKE_OFFSET))(this, a1, a2);
		}

	};
}
