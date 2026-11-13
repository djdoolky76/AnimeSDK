#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/AttackType.h"
#include "unitysdk/RPG/GameCore/AttackTypeMask.h"
#include "unitysdk/System/MulticastDelegate.h"
namespace System { class AsyncCallback; }
namespace System { class IAsyncResult; }
namespace System { class Object; }

#define XLUA_INTERNALGLOBALS___GEN_DELEGATE_B00_6097C853_BEGININVOKE_OFFSET UNITYSDK_OFFSET(0x13568E20)
#define XLUA_INTERNALGLOBALS___GEN_DELEGATE_B00_6097C853_CTOR_OFFSET UNITYSDK_OFFSET(0x13568DA0)
#define XLUA_INTERNALGLOBALS___GEN_DELEGATE_B00_6097C853_ENDINVOKE_OFFSET UNITYSDK_OFFSET(0x13568EB0)
#define XLUA_INTERNALGLOBALS___GEN_DELEGATE_B00_6097C853_INVOKE_OFFSET UNITYSDK_OFFSET(0x13568E10)

namespace XLua
{
	inline static constexpr unsigned int InternalGlobals___GEN_DELEGATE_B00_6097C853_TypeDefinitionIndex = 51231;

	class InternalGlobals___GEN_DELEGATE_B00_6097C853 : public ::System::MulticastDelegate
	{
	public:
		::System::Void _ctor(::System::Object* a1, ::System::IntPtr a2)
		{
			return ((::System::Void(*)(::PVOID, ::System::Object*, ::System::IntPtr))((::PBYTE)hIl2Cpp + XLUA_INTERNALGLOBALS___GEN_DELEGATE_B00_6097C853_CTOR_OFFSET))(this, a1, a2);
		}

		::System::Boolean Invoke(::RPG::GameCore::AttackTypeMask a1, ::RPG::GameCore::AttackType a2)
		{
			return ((::System::Boolean(*)(::PVOID, ::RPG::GameCore::AttackTypeMask, ::RPG::GameCore::AttackType))((::PBYTE)hIl2Cpp + XLUA_INTERNALGLOBALS___GEN_DELEGATE_B00_6097C853_INVOKE_OFFSET))(this, a1, a2);
		}

		::System::IAsyncResult* BeginInvoke(::RPG::GameCore::AttackTypeMask a1, ::RPG::GameCore::AttackType a2, ::System::AsyncCallback* a3, ::System::Object* a4)
		{
			return ((::System::IAsyncResult*(*)(::PVOID, ::RPG::GameCore::AttackTypeMask, ::RPG::GameCore::AttackType, ::System::AsyncCallback*, ::System::Object*))((::PBYTE)hIl2Cpp + XLUA_INTERNALGLOBALS___GEN_DELEGATE_B00_6097C853_BEGININVOKE_OFFSET))(this, a1, a2, a3, a4);
		}

		::System::Boolean EndInvoke(::System::IAsyncResult* a1)
		{
			return ((::System::Boolean(*)(::PVOID, ::System::IAsyncResult*))((::PBYTE)hIl2Cpp + XLUA_INTERNALGLOBALS___GEN_DELEGATE_B00_6097C853_ENDINVOKE_OFFSET))(this, a1);
		}

	};
}
