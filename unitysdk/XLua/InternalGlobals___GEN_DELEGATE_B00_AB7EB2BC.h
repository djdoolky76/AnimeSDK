#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/MulticastDelegate.h"
class HEAIEBHLCMJ;
namespace RPG::GameCore { class RuanMadeCakeFeatureConfig; }
namespace System { class AsyncCallback; }
namespace System { class IAsyncResult; }
namespace System { class Object; }
namespace UnityEngine { class Material; }

#define XLUA_INTERNALGLOBALS___GEN_DELEGATE_B00_AB7EB2BC_BEGININVOKE_OFFSET UNITYSDK_OFFSET(0x14DB2E00)
#define XLUA_INTERNALGLOBALS___GEN_DELEGATE_B00_AB7EB2BC_CTOR_OFFSET UNITYSDK_OFFSET(0x14DB2CF0)
#define XLUA_INTERNALGLOBALS___GEN_DELEGATE_B00_AB7EB2BC_ENDINVOKE_OFFSET UNITYSDK_OFFSET(0x14DB2E40)
#define XLUA_INTERNALGLOBALS___GEN_DELEGATE_B00_AB7EB2BC_INVOKE_OFFSET UNITYSDK_OFFSET(0x14DB2DE0)

namespace XLua
{
	class InternalGlobals___GEN_DELEGATE_B00_AB7EB2BC : public ::System::MulticastDelegate
	{
	public:
		::System::Void _ctor(::System::Object* a1, ::System::IntPtr a2)
		{
			return ((::System::Void(*)(::PVOID, ::System::Object*, ::System::IntPtr))((::PBYTE)hIl2Cpp + XLUA_INTERNALGLOBALS___GEN_DELEGATE_B00_AB7EB2BC_CTOR_OFFSET))(this, a1, a2);
		}

		::System::Void Invoke(::RPG::GameCore::RuanMadeCakeFeatureConfig* a1, ::HEAIEBHLCMJ* a2, ::UnityEngine::Material* a3)
		{
			return ((::System::Void(*)(::PVOID, ::RPG::GameCore::RuanMadeCakeFeatureConfig*, ::HEAIEBHLCMJ*, ::UnityEngine::Material*))((::PBYTE)hIl2Cpp + XLUA_INTERNALGLOBALS___GEN_DELEGATE_B00_AB7EB2BC_INVOKE_OFFSET))(this, a1, a2, a3);
		}

		::System::IAsyncResult* BeginInvoke(::RPG::GameCore::RuanMadeCakeFeatureConfig* a1, ::HEAIEBHLCMJ* a2, ::UnityEngine::Material* a3, ::System::AsyncCallback* a4, ::System::Object* a5)
		{
			return ((::System::IAsyncResult*(*)(::PVOID, ::RPG::GameCore::RuanMadeCakeFeatureConfig*, ::HEAIEBHLCMJ*, ::UnityEngine::Material*, ::System::AsyncCallback*, ::System::Object*))((::PBYTE)hIl2Cpp + XLUA_INTERNALGLOBALS___GEN_DELEGATE_B00_AB7EB2BC_BEGININVOKE_OFFSET))(this, a1, a2, a3, a4, a5);
		}

		::System::Void EndInvoke(::UnityEngine::Material* a1, ::System::IAsyncResult* a2)
		{
			return ((::System::Void(*)(::PVOID, ::UnityEngine::Material*, ::System::IAsyncResult*))((::PBYTE)hIl2Cpp + XLUA_INTERNALGLOBALS___GEN_DELEGATE_B00_AB7EB2BC_ENDINVOKE_OFFSET))(this, a1, a2);
		}

	};
}
