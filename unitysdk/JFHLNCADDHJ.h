#pragma once
#include "unitysdk/unitysdk.h"
namespace RPG::GameCore { class TaskContext; }
namespace RPG::GameCore { class WaitLittleGameCustomEvent; }
namespace System { class String; }

#define JFHLNCADDHJ_CTOR_OFFSET UNITYSDK_OFFSET(0x1664D580)
#define JFHLNCADDHJ_ONTASKRESET_OFFSET UNITYSDK_OFFSET(0x1664D6F0)
#define JFHLNCADDHJ__PREPAREDATA_OFFSET UNITYSDK_OFFSET(0x1664D750)
#define JFHLNCADDHJ__REGISTEREVENTCALLBACK_OFFSET UNITYSDK_OFFSET(0x1664D9A0)
#define JFHLNCADDHJ__UNREGISTEREVENTCALLBACK_OFFSET UNITYSDK_OFFSET(0x1664DF50)

inline static constexpr unsigned int JFHLNCADDHJ_TypeDefinitionIndex = 52965;

	class JFHLNCADDHJ
	{
	public:
		::System::String* FGMKCOANOOK; // 0x68
		::System::UInt32 CKDAFIHGACE; // 0x70
		::System::Void _ctor(::RPG::GameCore::TaskContext* a1, ::RPG::GameCore::WaitLittleGameCustomEvent* a2)
		{
			return ((::System::Void(*)(::PVOID, ::RPG::GameCore::TaskContext*, ::RPG::GameCore::WaitLittleGameCustomEvent*))((::PBYTE)hIl2Cpp + JFHLNCADDHJ_CTOR_OFFSET))(this, a1, a2);
		}

		::System::Void OnTaskReset()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + JFHLNCADDHJ_ONTASKRESET_OFFSET))(this);
		}

		::System::Boolean _PrepareData()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + JFHLNCADDHJ__PREPAREDATA_OFFSET))(this);
		}

		::System::Void _RegisterEventCallback()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + JFHLNCADDHJ__REGISTEREVENTCALLBACK_OFFSET))(this);
		}

		::System::Void _UnregisterEventCallback()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + JFHLNCADDHJ__UNREGISTEREVENTCALLBACK_OFFSET))(this);
		}

	};
