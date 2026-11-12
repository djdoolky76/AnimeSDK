#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/AttackType.h"
#include "unitysdk/RPG/GameCore/AttackTypeMask.h"
#include "unitysdk/System/MulticastDelegate.h"
namespace System { class AsyncCallback; }
namespace System { class IAsyncResult; }
namespace System { class Object; }

#define XLUA_INTERNALGLOBALS___GEN_DELEGATE_B00_0107EF48_BEGININVOKE_OFFSET UNITYSDK_OFFSET(0x15C6DF80)
#define XLUA_INTERNALGLOBALS___GEN_DELEGATE_B00_0107EF48_CTOR_OFFSET UNITYSDK_OFFSET(0x15C6DF00)
#define XLUA_INTERNALGLOBALS___GEN_DELEGATE_B00_0107EF48_ENDINVOKE_OFFSET UNITYSDK_OFFSET(0x15C6DFB0)
#define XLUA_INTERNALGLOBALS___GEN_DELEGATE_B00_0107EF48_INVOKE_OFFSET UNITYSDK_OFFSET(0x15C6DF70)

namespace XLua
{
	inline static constexpr unsigned int InternalGlobals___GEN_DELEGATE_B00_0107EF48_TypeDefinitionIndex = 51233;

	class InternalGlobals___GEN_DELEGATE_B00_0107EF48 : public ::System::MulticastDelegate
	{
	public:
		::System::Void _ctor(::System::Object* a1, ::System::IntPtr a2)
		{
			return ((::System::Void(*)(::PVOID, ::System::Object*, ::System::IntPtr))((::PBYTE)hIl2Cpp + XLUA_INTERNALGLOBALS___GEN_DELEGATE_B00_0107EF48_CTOR_OFFSET))(this, a1, a2);
		}

		::RPG::GameCore::AttackTypeMask Invoke(::Il2CppArray<::RPG::GameCore::AttackType>* a1)
		{
			return ((::RPG::GameCore::AttackTypeMask(*)(::PVOID, ::Il2CppArray<::RPG::GameCore::AttackType>*))((::PBYTE)hIl2Cpp + XLUA_INTERNALGLOBALS___GEN_DELEGATE_B00_0107EF48_INVOKE_OFFSET))(this, a1);
		}

		::System::IAsyncResult* BeginInvoke(::Il2CppArray<::RPG::GameCore::AttackType>* a1, ::System::AsyncCallback* a2, ::System::Object* a3)
		{
			return ((::System::IAsyncResult*(*)(::PVOID, ::Il2CppArray<::RPG::GameCore::AttackType>*, ::System::AsyncCallback*, ::System::Object*))((::PBYTE)hIl2Cpp + XLUA_INTERNALGLOBALS___GEN_DELEGATE_B00_0107EF48_BEGININVOKE_OFFSET))(this, a1, a2, a3);
		}

		::RPG::GameCore::AttackTypeMask EndInvoke(::System::IAsyncResult* a1)
		{
			return ((::RPG::GameCore::AttackTypeMask(*)(::PVOID, ::System::IAsyncResult*))((::PBYTE)hIl2Cpp + XLUA_INTERNALGLOBALS___GEN_DELEGATE_B00_0107EF48_ENDINVOKE_OFFSET))(this, a1);
		}

	};
}
