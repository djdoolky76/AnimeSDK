#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/AttackTypeMask.h"
#include "unitysdk/System/MulticastDelegate.h"
namespace System { class AsyncCallback; }
namespace System { class IAsyncResult; }
namespace System { class Object; }

#define XLUA_INTERNALGLOBALS___GEN_DELEGATE_B00_962C0DEA_BEGININVOKE_OFFSET UNITYSDK_OFFSET(0x15C72A60)
#define XLUA_INTERNALGLOBALS___GEN_DELEGATE_B00_962C0DEA_CTOR_OFFSET UNITYSDK_OFFSET(0x15C729E0)
#define XLUA_INTERNALGLOBALS___GEN_DELEGATE_B00_962C0DEA_ENDINVOKE_OFFSET UNITYSDK_OFFSET(0x15C72AF0)
#define XLUA_INTERNALGLOBALS___GEN_DELEGATE_B00_962C0DEA_INVOKE_OFFSET UNITYSDK_OFFSET(0x15C72A50)

namespace XLua
{
	inline static constexpr unsigned int InternalGlobals___GEN_DELEGATE_B00_962C0DEA_TypeDefinitionIndex = 51232;

	class InternalGlobals___GEN_DELEGATE_B00_962C0DEA : public ::System::MulticastDelegate
	{
	public:
		::System::Void _ctor(::System::Object* a1, ::System::IntPtr a2)
		{
			return ((::System::Void(*)(::PVOID, ::System::Object*, ::System::IntPtr))((::PBYTE)hIl2Cpp + XLUA_INTERNALGLOBALS___GEN_DELEGATE_B00_962C0DEA_CTOR_OFFSET))(this, a1, a2);
		}

		::System::Boolean Invoke(::RPG::GameCore::AttackTypeMask a1, ::RPG::GameCore::AttackTypeMask a2)
		{
			return ((::System::Boolean(*)(::PVOID, ::RPG::GameCore::AttackTypeMask, ::RPG::GameCore::AttackTypeMask))((::PBYTE)hIl2Cpp + XLUA_INTERNALGLOBALS___GEN_DELEGATE_B00_962C0DEA_INVOKE_OFFSET))(this, a1, a2);
		}

		::System::IAsyncResult* BeginInvoke(::RPG::GameCore::AttackTypeMask a1, ::RPG::GameCore::AttackTypeMask a2, ::System::AsyncCallback* a3, ::System::Object* a4)
		{
			return ((::System::IAsyncResult*(*)(::PVOID, ::RPG::GameCore::AttackTypeMask, ::RPG::GameCore::AttackTypeMask, ::System::AsyncCallback*, ::System::Object*))((::PBYTE)hIl2Cpp + XLUA_INTERNALGLOBALS___GEN_DELEGATE_B00_962C0DEA_BEGININVOKE_OFFSET))(this, a1, a2, a3, a4);
		}

		::System::Boolean EndInvoke(::System::IAsyncResult* a1)
		{
			return ((::System::Boolean(*)(::PVOID, ::System::IAsyncResult*))((::PBYTE)hIl2Cpp + XLUA_INTERNALGLOBALS___GEN_DELEGATE_B00_962C0DEA_ENDINVOKE_OFFSET))(this, a1);
		}

	};
}
