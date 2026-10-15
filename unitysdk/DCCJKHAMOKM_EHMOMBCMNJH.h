#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/MulticastDelegate.h"
class AJBKGPOEBFG;
class EGDGOMKKEJI;
namespace RPG::GameCore { class DiceCombatTaskConfig; }
namespace System { class AsyncCallback; }
namespace System { class IAsyncResult; }
namespace System { class Object; }

#define DCCJKHAMOKM_EHMOMBCMNJH_BEGININVOKE_OFFSET UNITYSDK_OFFSET(0x1C5B6CB0)
#define DCCJKHAMOKM_EHMOMBCMNJH_CTOR_OFFSET UNITYSDK_OFFSET(0x1C5B6BC0)
#define DCCJKHAMOKM_EHMOMBCMNJH_ENDINVOKE_OFFSET UNITYSDK_OFFSET(0x1C5B6CF0)
#define DCCJKHAMOKM_EHMOMBCMNJH_INVOKE_OFFSET UNITYSDK_OFFSET(0x1C5B3970)

inline static constexpr unsigned int DCCJKHAMOKM_EHMOMBCMNJH_TypeDefinitionIndex = 36394;

	class DCCJKHAMOKM_EHMOMBCMNJH : public ::System::MulticastDelegate
	{
	public:
		::System::Void _ctor(::System::Object* a1, ::System::IntPtr a2)
		{
			return ((::System::Void(*)(::PVOID, ::System::Object*, ::System::IntPtr))((::PBYTE)hIl2Cpp + DCCJKHAMOKM_EHMOMBCMNJH_CTOR_OFFSET))(this, a1, a2);
		}

		::AJBKGPOEBFG* Invoke(::RPG::GameCore::DiceCombatTaskConfig* a1, ::EGDGOMKKEJI* a2)
		{
			return ((::AJBKGPOEBFG*(*)(::PVOID, ::RPG::GameCore::DiceCombatTaskConfig*, ::EGDGOMKKEJI*))((::PBYTE)hIl2Cpp + DCCJKHAMOKM_EHMOMBCMNJH_INVOKE_OFFSET))(this, a1, a2);
		}

		::System::IAsyncResult* BeginInvoke(::RPG::GameCore::DiceCombatTaskConfig* a1, ::EGDGOMKKEJI* a2, ::System::AsyncCallback* a3, ::System::Object* a4)
		{
			return ((::System::IAsyncResult*(*)(::PVOID, ::RPG::GameCore::DiceCombatTaskConfig*, ::EGDGOMKKEJI*, ::System::AsyncCallback*, ::System::Object*))((::PBYTE)hIl2Cpp + DCCJKHAMOKM_EHMOMBCMNJH_BEGININVOKE_OFFSET))(this, a1, a2, a3, a4);
		}

		::AJBKGPOEBFG* EndInvoke(::System::IAsyncResult* a1)
		{
			return ((::AJBKGPOEBFG*(*)(::PVOID, ::System::IAsyncResult*))((::PBYTE)hIl2Cpp + DCCJKHAMOKM_EHMOMBCMNJH_ENDINVOKE_OFFSET))(this, a1);
		}

	};
