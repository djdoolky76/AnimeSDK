#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/MulticastDelegate.h"
#include "unitysdk/RPG/GameCore/FixPoint.h"
class NMBMHCNGCFG;
namespace RPG::GameCore { class TurnBasedAbilityComponent; }
namespace System { class AsyncCallback; }
namespace System { class IAsyncResult; }
namespace System { class Object; }

#define XLUA_INTERNALGLOBALS___GEN_DELEGATE_B00_1514163C_BEGININVOKE_OFFSET UNITYSDK_OFFSET(0x14DAED20)
#define XLUA_INTERNALGLOBALS___GEN_DELEGATE_B00_1514163C_CTOR_OFFSET UNITYSDK_OFFSET(0x14DAEC10)
#define XLUA_INTERNALGLOBALS___GEN_DELEGATE_B00_1514163C_ENDINVOKE_OFFSET UNITYSDK_OFFSET(0x14DAED90)
#define XLUA_INTERNALGLOBALS___GEN_DELEGATE_B00_1514163C_INVOKE_OFFSET UNITYSDK_OFFSET(0x14DAED00)

namespace XLua
{
	class InternalGlobals___GEN_DELEGATE_B00_1514163C : public ::System::MulticastDelegate
	{
	public:
		::System::Void _ctor(::System::Object* a1, ::System::IntPtr a2)
		{
			return ((::System::Void(*)(::PVOID, ::System::Object*, ::System::IntPtr))((::PBYTE)hIl2Cpp + XLUA_INTERNALGLOBALS___GEN_DELEGATE_B00_1514163C_CTOR_OFFSET))(this, a1, a2);
		}

		::System::Void Invoke(::NMBMHCNGCFG* a1, ::RPG::GameCore::TurnBasedAbilityComponent* a2, ::RPG::GameCore::FixPoint a3)
		{
			return ((::System::Void(*)(::PVOID, ::NMBMHCNGCFG*, ::RPG::GameCore::TurnBasedAbilityComponent*, ::RPG::GameCore::FixPoint))((::PBYTE)hIl2Cpp + XLUA_INTERNALGLOBALS___GEN_DELEGATE_B00_1514163C_INVOKE_OFFSET))(this, a1, a2, a3);
		}

		::System::IAsyncResult* BeginInvoke(::NMBMHCNGCFG* a1, ::RPG::GameCore::TurnBasedAbilityComponent* a2, ::RPG::GameCore::FixPoint a3, ::System::AsyncCallback* a4, ::System::Object* a5)
		{
			return ((::System::IAsyncResult*(*)(::PVOID, ::NMBMHCNGCFG*, ::RPG::GameCore::TurnBasedAbilityComponent*, ::RPG::GameCore::FixPoint, ::System::AsyncCallback*, ::System::Object*))((::PBYTE)hIl2Cpp + XLUA_INTERNALGLOBALS___GEN_DELEGATE_B00_1514163C_BEGININVOKE_OFFSET))(this, a1, a2, a3, a4, a5);
		}

		::System::Void EndInvoke(::System::IAsyncResult* a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::IAsyncResult*))((::PBYTE)hIl2Cpp + XLUA_INTERNALGLOBALS___GEN_DELEGATE_B00_1514163C_ENDINVOKE_OFFSET))(this, a1);
		}

	};
}
